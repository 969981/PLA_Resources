/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080d138; name: FUN_0080d138
 */


void FUN_0080d138(long param_1,long *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x218));
  memcpy(param_2 + 0xab,(void *)(param_1 + 0x12e0),(ulong)*(byte *)(param_1 + 0x1320));
  *(undefined1 *)(param_2 + 0xb3) = *(undefined1 *)(param_1 + 0x1320);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


