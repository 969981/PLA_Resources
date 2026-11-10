/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291304c; name: FUN_0291304c
 */


void FUN_0291304c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  param_2[1] = *(undefined8 *)(param_1 + 0x108);
  *param_2 = *(undefined8 *)(param_1 + 0x100);
  param_3[1] = *(undefined8 *)(param_1 + 0x118);
  *param_3 = *(undefined8 *)(param_1 + 0x110);
  param_4[1] = *(undefined8 *)(param_1 + 0x128);
  *param_4 = *(undefined8 *)(param_1 + 0x120);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


