/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cf40c; name: FUN_010cf40c
 */


void FUN_010cf40c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_041f04f0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x14));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    FUN_010cf5c4(param_1 + 0xd);
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    FUN_010cfcc8(param_1 + 9);
  }
  FUN_010cf82c(param_1 + 1);
  return;
}


