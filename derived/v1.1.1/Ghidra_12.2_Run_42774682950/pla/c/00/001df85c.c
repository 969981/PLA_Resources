/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df85c; name: FUN_001df85c
 */


void FUN_001df85c(long param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if ((*(long *)(param_1 + 0x530) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x530) + 0x68), iVar1 != 0)) {
    local_38 = 0x6500004e21;
    uStack_30 = 4;
    local_28 = iVar1;
    iVar1 = nnsocketResolverSetOption(&local_38);
    while ((iVar1 == -1 && (iVar1 = nnsocketGetLastErrno(), iVar1 == 0xb))) {
      nnosSleepThread(10000000);
      iVar1 = nnsocketResolverSetOption(&local_38);
    }
  }
  FUN_001df8e8(param_1 + 0x510);
  return;
}


