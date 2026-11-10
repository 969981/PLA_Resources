/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397514; name: FUN_03397514
 */


void FUN_03397514(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x30);
  iVar2 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_03397598(PTR_PTR_0434a080,iVar2);
    iVar4 = *(int *)(param_1 + 0x38);
    *(long *)(param_1 + 0x30) = lVar3;
  }
  puVar1 = (undefined4 *)(lVar3 + (long)iVar4 * 0x10);
  *(int *)(param_1 + 0x38) = iVar2;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(puVar1 + 2) = param_4;
  return;
}


