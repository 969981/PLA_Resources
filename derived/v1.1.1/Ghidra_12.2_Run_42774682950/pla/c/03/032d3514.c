/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d3514; name: FUN_032d3514
 */


void FUN_032d3514(undefined8 *param_1,undefined8 param_2)

{
  FUN_032cf01c();
  *param_1 = &PTR_LAB_0434a590;
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


