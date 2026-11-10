/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397f54; name: FUN_03397f54
 */


undefined8 FUN_03397f54(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  uVar2 = FUN_0327e60c();
  iVar5 = (int)uVar2;
  if ((int)param_1[1] == iVar5) {
    lVar3 = *param_1;
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar3 = FUN_0327e728(PTR_PTR_0434a080,iVar1);
      iVar5 = (int)param_1[1];
      *param_1 = lVar3;
    }
    puVar4 = (undefined8 *)(lVar3 + (long)iVar5 * 0xc);
    *puVar4 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *param_3;
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar2;
}


