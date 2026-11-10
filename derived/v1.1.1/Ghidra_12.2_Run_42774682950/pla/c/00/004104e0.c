/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004104e0; name: FUN_004104e0
 */


undefined8 FUN_004104e0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  
  iVar5 = FUN_0040c130(param_2);
  if (iVar5 == 0) {
    iVar5 = (int)param_2[1] + -1;
    lVar10 = *param_2;
    uVar11 = (ulong)iVar5;
    uVar2 = *(uint *)(lVar10 + (long)iVar5 * 4);
    iVar4 = (int)param_2[1] - (uint)(uVar2 == 1);
    if (param_2 != param_1) {
      lVar6 = FUN_0040c660(param_1,iVar4);
      if (lVar6 == 0) {
        return 0;
      }
      *(int *)(param_1 + 2) = (int)param_2[2];
      uVar2 = *(uint *)(lVar10 + uVar11 * 4);
    }
    lVar6 = *param_1;
    if (uVar2 >> 1 != 0) {
      *(uint *)(lVar6 + uVar11 * 4) = uVar2 >> 1;
    }
    if (0 < iVar5) {
      if ((uVar11 & 1) != 0) {
        uVar11 = uVar11 - 1;
        uVar3 = *(uint *)(lVar10 + uVar11 * 4);
        *(int *)(lVar6 + uVar11 * 4) = (int)(CONCAT44(uVar2,uVar3) >> 1);
        uVar2 = uVar3;
      }
      if (iVar5 != 1) {
        lVar8 = uVar11 * 4 + -4;
        puVar7 = (undefined4 *)(lVar6 + lVar8);
        puVar9 = (undefined4 *)(lVar10 + lVar8);
        do {
          uVar1 = *puVar9;
          *puVar7 = (int)(CONCAT44(uVar2,uVar1) >> 1);
          uVar2 = puVar9[-1];
          uVar11 = uVar11 - 2;
          puVar7[-1] = (int)(CONCAT44(uVar1,uVar2) >> 1);
          puVar7 = puVar7 + -2;
          puVar9 = puVar9 + -2;
        } while (0 < (long)uVar11);
      }
    }
    *(int *)(param_1 + 1) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  else {
    FUN_0040c6b0(param_1,0);
  }
  return 1;
}


