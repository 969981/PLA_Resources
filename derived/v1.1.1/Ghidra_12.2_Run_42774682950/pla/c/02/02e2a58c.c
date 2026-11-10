/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2a58c; name: FUN_02e2a58c
 */


void FUN_02e2a58c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),&LAB_02e2a1cc,0x90);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  DAT_044096c0 = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x28));
  return;
}


