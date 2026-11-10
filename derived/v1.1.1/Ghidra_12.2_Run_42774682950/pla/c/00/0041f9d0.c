/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041f9d0; name: FUN_0041f9d0
 */


int FUN_0041f9d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar3 = *(int *)(param_2 + 1);
  iVar1 = iVar2;
  if (iVar3 <= iVar2) {
    iVar1 = iVar3;
  }
  iVar4 = memcmp((void *)*param_1,(void *)*param_2,(long)iVar1);
  iVar1 = iVar2 - iVar3;
  if (iVar4 != 0) {
    iVar1 = iVar4;
  }
  return iVar1;
}


