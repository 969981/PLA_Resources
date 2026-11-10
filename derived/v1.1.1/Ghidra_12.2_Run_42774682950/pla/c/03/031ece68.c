/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ece68; name: FUN_031ece68
 */


void FUN_031ece68(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar3 = (int)param_1[1];
  lVar4 = *param_1;
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
    iVar5 = iVar3;
  }
  else {
    lVar4 = FUN_031f0b4c(PTR_PTR_0434a080,iVar3 + 1,lVar4,iVar3);
    iVar5 = (int)param_1[1];
    *param_1 = lVar4;
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + (long)iVar5 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(int *)(param_1 + 1) = iVar3 + 1;
  FUN_031f0ad8(param_1,iVar3);
  return;
}


