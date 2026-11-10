/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078495c; name: FUN_0078495c
 */


void FUN_0078495c(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = param_1 + 3;
  *param_1 = param_2;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 3;
  nn::os::InitializeEvent(param_1 + 5,0,0);
  FUN_00783168(param_1 + 10);
  param_1[0x12] = param_1 + 5;
  *(undefined4 *)(param_1 + 0x13) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x14),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x18),true,0);
  FUN_00785ca0(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


