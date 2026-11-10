/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032df43c; name: FUN_032df43c
 */


undefined8 FUN_032df43c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int local_54;
  
  uVar4 = FUN_032df710();
  puVar3 = PTR_PTR_0434a080;
  iVar7 = (int)uVar4;
  if ((int)param_1[1] == iVar7) {
    lVar6 = *param_1;
    iVar1 = iVar7 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar7) {
      lVar6 = FUN_032df818(PTR_PTR_0434a080,iVar1);
      iVar7 = (int)param_1[1];
      *param_1 = lVar6;
    }
    puVar8 = (undefined8 *)(lVar6 + (long)iVar7 * 0x18);
    *puVar8 = *param_2;
    puVar10 = puVar8 + 1;
    *puVar10 = 0;
    piVar9 = (int *)(puVar8 + 2);
    piVar9[0] = 0;
    piVar9[1] = -0x80000000;
    iVar7 = *(int *)(param_3 + 1);
    param_3 = (undefined8 *)*param_3;
    if (iVar7 < 1) {
      *puVar10 = 0;
      *piVar9 = 0;
      *(int *)((long)puVar8 + 0x14) = -0x80000000;
    }
    else {
      local_54 = iVar7;
      puVar5 = (undefined8 *)FUN_032cf190(puVar3,0x10,&local_54);
      *puVar10 = puVar5;
      *piVar9 = iVar7;
      *(int *)((long)puVar8 + 0x14) = local_54;
      do {
        uVar2 = param_3[1];
        *puVar5 = *param_3;
        puVar5[1] = uVar2;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 2;
        param_3 = param_3 + 2;
      } while (iVar7 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar4;
}


