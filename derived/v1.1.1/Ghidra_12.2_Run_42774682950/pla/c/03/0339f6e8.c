/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339f6e8; name: FUN_0339f6e8
 */


void FUN_0339f6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x40);
  iVar1 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_0337b0fc(PTR_PTR_0434a080,iVar1);
    iVar4 = *(int *)(param_1 + 0x48);
    *(long *)(param_1 + 0x40) = lVar3;
  }
  puVar2 = (undefined8 *)(lVar3 + (long)iVar4 * 0x28);
  *(int *)(param_1 + 0x48) = iVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_03379058(puVar2,param_2,param_3,0);
  return;
}


