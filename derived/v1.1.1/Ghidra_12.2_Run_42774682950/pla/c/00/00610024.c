/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00610024; name: FUN_00610024
 */


void FUN_00610024(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  
  param_1[1] = 0;
  *param_1 = 0;
  memcpy(param_1 + 2,param_2,0x168);
  memmove(param_1 + 0x2f,param_2,0x158);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x5a),false,0);
  FUN_006172f4(param_1 + 0x5e,param_1 + 0x11);
  FUN_006172f4(param_1 + 0x77,param_1 + 0x1b);
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  FUN_00784460(param_1 + 0x92,param_1[0x32]);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xbb),false,0);
  param_1[0xc3] = 0;
  param_1[0xbf] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  uVar1 = FUN_00612290();
  param_1[0xc4] = uVar1;
  param_1[0xc5] = 0;
  param_1[0xc2] = param_1 + 0xc3;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc6),false,0);
  switch(*(undefined4 *)(param_1 + 0x2d)) {
  case 0:
    uVar1 = param_1[0x69];
    break;
  case 1:
    uVar1 = param_1[0x82];
    break;
  case 2:
    uVar1 = param_1[0x2e];
    break;
  case 3:
    param_1[0xbf] = param_1 + 0x92;
    FUN_00611bf8();
    return;
  default:
    local_28[0] = 0x80541;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_28,"");
  }
  param_1[0xbf] = uVar1;
  FUN_00611bf8();
  return;
}


