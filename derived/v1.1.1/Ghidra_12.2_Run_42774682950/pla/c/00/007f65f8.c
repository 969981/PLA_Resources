/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f65f8; name: FUN_007f65f8
 */


void FUN_007f65f8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
  nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
  (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
            (*(long **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x118));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
  uVar2 = FUN_00802560(*(undefined8 *)(param_1 + 0x120));
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_00802714(*(undefined8 *)(param_1 + 0x120));
    bVar1 = ~bVar1 & 1;
  }
  *(byte *)(param_1 + 0x24c) = bVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  return;
}


