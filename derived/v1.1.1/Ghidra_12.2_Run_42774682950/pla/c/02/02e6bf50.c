/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6bf50; name: FUN_02e6bf50
 */


ulong FUN_02e6bf50(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x78);
  }
  else {
    uVar2 = **(long **)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = **(ulong **)(param_1 + 0x20) <= uVar2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar2;
}


