/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a0828; name: FUN_033a0828
 */


undefined8 FUN_033a0828(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  int local_64;
  
  uVar4 = FUN_033a0970();
  puVar3 = PTR_PTR_0434a080;
  iVar8 = (int)uVar4;
  if ((int)param_1[1] == iVar8) {
    lVar6 = *param_1;
    iVar1 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar6 = FUN_033a0a7c(PTR_PTR_0434a080,iVar1);
      iVar8 = (int)param_1[1];
      *param_1 = lVar6;
    }
    puVar9 = (undefined8 *)(lVar6 + (long)iVar8 * 0x18);
    *puVar9 = *param_2;
    puVar11 = puVar9 + 1;
    *puVar11 = 0;
    piVar10 = (int *)(puVar9 + 2);
    piVar10[0] = 0;
    piVar10[1] = -0x80000000;
    iVar8 = *(int *)(param_3 + 1);
    param_3 = (undefined8 *)*param_3;
    if (iVar8 < 1) {
      *puVar11 = 0;
      *piVar10 = 0;
      *(int *)((long)puVar9 + 0x14) = -0x80000000;
    }
    else {
      local_64 = iVar8;
      puVar5 = (undefined8 *)FUN_032cf190(puVar3,0x18,&local_64);
      *puVar11 = puVar5;
      *piVar10 = iVar8;
      *(int *)((long)puVar9 + 0x14) = local_64;
      do {
        uVar2 = param_3[1];
        *puVar5 = *param_3;
        puVar5[1] = uVar2;
        uVar7 = param_3[2];
        puVar5[2] = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_032e0c28(uVar7 & 0xfffffffffffffffe);
        }
        iVar8 = iVar8 + -1;
        puVar5 = puVar5 + 3;
        param_3 = param_3 + 3;
      } while (iVar8 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar4;
}


