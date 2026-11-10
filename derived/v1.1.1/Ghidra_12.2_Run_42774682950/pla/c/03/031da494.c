/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031da494; name: FUN_031da494
 */


undefined8 FUN_031da494(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_54;
  
  uVar5 = FUN_031dd408();
  puVar4 = PTR_PTR_0434a080;
  iVar8 = (int)uVar5;
  if ((int)param_1[1] == iVar8) {
    lVar7 = *param_1;
    iVar2 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar7 = FUN_031dd4f4(PTR_PTR_0434a080,iVar2);
      iVar8 = (int)param_1[1];
      *param_1 = lVar7;
    }
    puVar10 = (undefined4 *)(lVar7 + (long)iVar8 * 0x18);
    *puVar10 = *param_2;
    puVar12 = (undefined8 *)(puVar10 + 2);
    *puVar12 = 0;
    puVar11 = puVar10 + 4;
    puVar11[0] = 0;
    puVar11[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    puVar9 = (undefined4 *)*param_3;
    if ((int)uVar3 < 1) {
      *puVar12 = 0;
      *puVar11 = 0;
      puVar10[5] = 0x80000000;
    }
    else {
      local_54 = uVar3;
      puVar6 = (undefined4 *)FUN_032cf190(puVar4,8,&local_54);
      *puVar12 = puVar6;
      *puVar11 = uVar3;
      puVar10[5] = local_54;
      if (uVar3 != 1) {
        iVar8 = (uVar3 & 1) - uVar3;
        puVar10 = puVar6;
        do {
          *puVar10 = *puVar9;
          puVar10[1] = puVar9[1];
          puVar10[2] = puVar9[2];
          puVar1 = puVar9 + 3;
          puVar6 = puVar10 + 4;
          puVar9 = puVar9 + 4;
          iVar8 = iVar8 + 2;
          puVar10[3] = *puVar1;
          puVar10 = puVar6;
        } while (iVar8 != 0);
      }
      if ((uVar3 & 1) != 0) {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar5;
}


