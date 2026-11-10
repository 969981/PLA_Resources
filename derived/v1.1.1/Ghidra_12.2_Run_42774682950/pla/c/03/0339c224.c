/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339c224; name: FUN_0339c224
 */


void FUN_0339c224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x28);
  iVar2 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_0339d8e4(PTR_PTR_0434a080,iVar2);
    iVar4 = *(int *)(param_1 + 0x30);
    *(long *)(param_1 + 0x28) = lVar3;
  }
  puVar1 = (undefined8 *)(lVar3 + (long)iVar4 * 0x10);
  *(int *)(param_1 + 0x30) = iVar2;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_032c7c38(puVar1,param_2);
  FUN_032c7c38(puVar1 + 1,param_3);
  return;
}


