/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007840dc; name: FUN_007840dc
 */


void FUN_007840dc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04376cc8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),false,0);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


