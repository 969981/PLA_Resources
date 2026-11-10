/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032de50c; name: FUN_032de50c
 */


undefined8 FUN_032de50c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint local_54;
  
  uVar5 = FUN_032de85c();
  puVar4 = PTR_PTR_0434a080;
  iVar8 = (int)uVar5;
  if ((int)param_1[1] == iVar8) {
    lVar7 = *param_1;
    iVar1 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar7 = FUN_032de968(PTR_PTR_0434a080,iVar1);
      iVar8 = (int)param_1[1];
      *param_1 = lVar7;
    }
    puVar10 = (undefined8 *)(lVar7 + (long)iVar8 * 0x18);
    *puVar10 = *param_2;
    puVar9 = puVar10 + 1;
    *puVar9 = 0;
    puVar11 = (uint *)(puVar10 + 2);
    puVar11[0] = 0;
    puVar11[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    param_3 = (undefined8 *)*param_3;
    if ((int)uVar3 < 1) {
      *puVar9 = 0;
      *puVar11 = 0;
      *(uint *)((long)puVar10 + 0x14) = 0x80000000;
    }
    else {
      local_54 = uVar3;
      puVar6 = (undefined8 *)FUN_032cf190(puVar4,0x10,&local_54);
      *puVar9 = puVar6;
      *puVar11 = uVar3;
      *(uint *)((long)puVar10 + 0x14) = local_54;
      if (uVar3 != 1) {
        iVar8 = (uVar3 & 1) - uVar3;
        puVar10 = puVar6;
        puVar9 = param_3;
        do {
          uVar2 = puVar9[1];
          puVar6 = puVar10 + 4;
          *puVar10 = *puVar9;
          puVar10[1] = uVar2;
          param_3 = puVar9 + 4;
          uVar2 = puVar9[3];
          iVar8 = iVar8 + 2;
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar2;
          puVar10 = puVar6;
          puVar9 = param_3;
        } while (iVar8 != 0);
      }
      if ((uVar3 & 1) != 0) {
        uVar2 = param_3[1];
        *puVar6 = *param_3;
        puVar6[1] = uVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar5;
}


