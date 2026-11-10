/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e68de0; name: FUN_02e68de0
 */


void FUN_02e68de0(undefined8 *param_1,undefined8 param_2)

{
  FUN_02e71690();
  *param_1 = &PTR_FUN_042a63c8;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x51),true,0);
  FUN_02e6d134(param_1 + 0x55);
  param_1[0xc2] = param_2;
  *(undefined8 *)((long)param_1 + 0x624) = 0xffffffff;
  return;
}


