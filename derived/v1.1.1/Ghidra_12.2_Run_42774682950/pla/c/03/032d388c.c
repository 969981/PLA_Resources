/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d388c; name: FUN_032d388c
 */


long FUN_032d388c(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  
  *param_2 = *param_2 + 0x7f & 0xffffffffffffff80;
  nn::os::LockMutex((MutexType *)(param_1 + 0x440));
  iVar12 = *(int *)(param_1 + 0x38);
  lVar9 = (long)iVar12;
  if (*(int *)(param_1 + 0x20) + 1 < (int)((*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 2 - iVar12)) {
    uVar5 = *param_2;
    if (iVar12 < 1) {
LAB_032d397c:
      lVar9 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(param_1 + 0x10) - lVar9) < uVar5) goto LAB_032d398c;
      *(ulong *)(param_1 + 0x18) = lVar9 + uVar5;
      *param_2 = uVar5;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x30);
      iVar8 = -1;
      uVar11 = 0x7ffffff;
      puVar13 = (ulong *)(lVar6 + lVar9 * 0x10 + -8);
      do {
        iVar12 = iVar12 + -1;
        uVar14 = *puVar13;
        lVar9 = lVar9 + -1;
        uVar2 = uVar14;
        iVar4 = iVar12;
        if (uVar11 <= uVar14) {
          uVar2 = uVar11;
          iVar4 = iVar8;
        }
        if (uVar5 <= uVar14) {
          uVar11 = uVar2;
          iVar8 = iVar4;
        }
        puVar13 = puVar13 + -2;
      } while (0 < lVar9);
      if (iVar8 < 0) goto LAB_032d397c;
      plVar1 = (long *)(lVar6 + (long)iVar8 * 0x10);
      lVar9 = *plVar1;
      lVar10 = (long)iVar8;
      if ((uVar11 == uVar5) && ((uVar5 < 0x401 || (uVar5 * 2 <= uVar5 * 3)))) {
        *param_2 = *(ulong *)(lVar6 + lVar10 * 0x10 + 8);
        iVar12 = *(int *)(param_1 + 0x38) + -1;
        *(int *)(param_1 + 0x38) = iVar12;
        uVar3 = iVar12 - iVar8;
        if ((uVar3 != 0) && (0 < (int)uVar3)) {
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 0x10);
          lVar6 = *(long *)(param_1 + 0x30) + lVar10 * 0x10;
          *puVar7 = puVar7[2];
          *(undefined8 *)(lVar6 + 8) = puVar7[3];
          if (1 < (int)uVar3) {
            puVar7 = (undefined8 *)(lVar6 + 0x20);
            lVar6 = 0x10;
            do {
              lVar6 = (lVar6 << 0x20) + 0x800000000 >> 0x20;
              puVar7[-2] = *puVar7;
              puVar7 = puVar7 + 1;
            } while (lVar6 < (long)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4
                                   ));
          }
        }
      }
      else {
        lVar6 = lVar6 + lVar10 * 0x10;
        *(ulong *)(lVar6 + 8) = *(long *)(lVar6 + 8) - uVar5;
        *plVar1 = lVar9 + uVar5;
      }
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8);
    if (*(ulong *)(param_1 + 0x28) < uVar5) {
      *(ulong *)(param_1 + 0x28) = uVar5;
    }
  }
  else {
LAB_032d398c:
    lVar9 = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x440));
  return lVar9;
}


