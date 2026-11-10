/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ec5f4; name: FUN_017ec5f4
 */


void FUN_017ec5f4(undefined8 *param_1)

{
  undefined4 local_18 [2];
  
  FUN_017ec67c();
  *param_1 = &PTR_LAB_04225b88;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = &PTR_LAB_04225bb8;
  param_1[0xd] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  FUN_017ecf04(param_1 + 0xe);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x12),false,0);
  FUN_017ec7b0(param_1 + 0x16);
  FUN_017ec894(DAT_043d11b0,param_1[1]);
  local_18[0] = 7;
  FUN_017ec920(param_1,local_18);
  return;
}


