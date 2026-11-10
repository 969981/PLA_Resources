/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e418; name: FUN_0329e418
 */


ulong FUN_0329e418(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  uVar11 = (ulong)*(uint *)(param_1 + 0x28);
  if ((int)*(uint *)(param_1 + 0x28) < 1) {
    uVar11 = 0;
  }
  else {
    uVar13 = 0;
    do {
      iVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar13 * 8) + 0x70))();
      if (iVar3 < iVar4) {
        iVar3 = *(int *)(param_1 + 0x28);
        lVar6 = *(long *)(param_1 + 0x20);
        uVar2 = (uint)uVar13;
        if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= iVar3) {
          lVar6 = FUN_0329e9d0(PTR_PTR_0434a080,iVar3 + 1,lVar6,iVar3);
          *(long *)(param_1 + 0x20) = lVar6;
        }
        puVar1 = (undefined8 *)(lVar6 + (uVar13 & 0xffffffff) * 8);
        if (0 < (int)(iVar3 - uVar2)) {
          puVar8 = puVar1 + (int)(~uVar2 + iVar3);
          puVar7 = puVar8 + 1;
          if (iVar3 - 1U != uVar2) {
            iVar4 = ((iVar3 + uVar2 & 1) - iVar3) + uVar2;
            do {
              puVar8 = puVar7;
              *puVar8 = puVar8[-1];
              puVar7 = puVar8 + -2;
              iVar4 = iVar4 + 2;
              puVar8[-1] = *puVar7;
              *puVar7 = 0;
            } while (iVar4 != 0);
            puVar8 = puVar8 + -3;
          }
          if ((iVar3 - uVar2 & 1) != 0) {
            *puVar7 = *puVar8;
            *puVar8 = 0;
          }
        }
        *puVar1 = 0;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        return uVar13 & 0xffffffff;
      }
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
  uVar10 = (uint)uVar11;
  uVar2 = uVar10 + 1;
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= uVar10) {
    uVar5 = FUN_0329e9d0(PTR_PTR_0434a080,uVar2,*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  lVar6 = (long)iVar3;
  if ((int)uVar10 < iVar3) {
    if ((int)uVar2 < iVar3) {
      *(uint *)(param_1 + 0x28) = uVar2;
      lVar9 = (ulong)uVar2 * 8 + lVar6 * -8;
      plVar12 = (long *)(lVar6 * 8 + *(long *)(param_1 + 0x20) + -8);
      lVar6 = *plVar12;
      while( true ) {
        if (lVar6 != 0) {
          FUN_032d647c();
        }
        lVar9 = lVar9 + 8;
        plVar12 = plVar12 + -1;
        if (lVar9 == 0) break;
        lVar6 = *plVar12;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar2;
    memset((void *)(*(long *)(param_1 + 0x20) + lVar6 * 8),0,(ulong)(uVar10 - iVar3) * 8 + 8);
  }
  return uVar11;
}


