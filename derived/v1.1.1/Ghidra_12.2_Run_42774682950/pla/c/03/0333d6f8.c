/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d6f8; name: FUN_0333d6f8
 */


void FUN_0333d6f8(MutexType *param_1)

{
  nn::os::InitializeMutex(param_1,true,0);
  nn::os::InitializeMutex(param_1 + 0x20,true,0);
  FUN_0332b928(param_1 + 0x40,0,1,0);
  param_1[0x70] = (MutexType)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


