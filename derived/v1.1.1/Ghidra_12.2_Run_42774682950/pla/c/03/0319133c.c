/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319133c; name: FUN_0319133c
 */


void FUN_0319133c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (param_2 <= param_1) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x1a8));
  nn::os::LockMutex(*(MutexType **)(uVar1 + 0x1a8));
  return;
}


