/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7af4; name: FUN_032b7af4
 */


void FUN_032b7af4(undefined8 *param_1)

{
  MutexType *pMVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_04348298;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  FUN_032c2320(param_1 + 8);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  pMVar1 = (MutexType *)FUN_032cf5b0(0x20);
  nn::os::InitializeMutex(pMVar1,true,0);
  param_1[0xe] = pMVar1;
  return;
}


