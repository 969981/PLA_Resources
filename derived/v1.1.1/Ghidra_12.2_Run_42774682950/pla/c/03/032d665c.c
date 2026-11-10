/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d665c; name: FUN_032d665c
 */


void FUN_032d665c(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_0434a948;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xfffffff1;
  *(undefined2 *)((long)param_1 + 0x24) = 0x8000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  FUN_032d6844((undefined4 *)((long)param_1 + 0x1c));
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


