/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855c1c; name: FUN_00855c1c
 */


void FUN_00855c1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_007f07cc(param_1 + 0x88);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  return;
}


