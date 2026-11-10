/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325e2a4; name: FUN_0325e2a4
 */


void FUN_0325e2a4(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  iVar2 = (int)(*(long **)(param_1 + 0x10))[2];
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar2 = iVar2 >> 5;
    lVar8 = **(long **)(param_1 + 0x10);
    lVar7 = 0;
    do {
      uVar6 = *(uint *)(lVar8 + (long)((iVar2 + 1) * iVar3) * 4 + lVar7 * 4);
      uVar9 = uVar6 & 0xfffffffe;
      if (lVar7 != 0) {
        uVar9 = uVar6;
      }
      if (uVar9 != 0) {
        do {
          while( true ) {
            uVar6 = (uVar9 & -uVar9) - 1;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            uVar9 = uVar9 & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
            lVar10 = *(long *)(*(long *)(param_1 + 0x20) +
                              (ulong)((int)lVar7 * 0x20 + 0xffff + uVar6 & 0xffff) * 8);
            if (*(int *)(lVar10 + 0x24) != -1) break;
            *(undefined1 *)*param_2 = 1;
            if (uVar9 == 0) goto LAB_0325e2e4;
          }
          *(undefined1 *)param_2[1] = 1;
          iVar4 = *(int *)param_2[2];
          iVar5 = *(int *)(lVar10 + 0x24);
          if (iVar5 <= iVar4) {
            iVar4 = iVar5;
          }
          *(int *)param_2[2] = iVar4;
        } while (uVar9 != 0);
      }
LAB_0325e2e4:
      bVar1 = lVar7 < iVar2;
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  return;
}


