/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00810118; name: FUN_00810118
 */


void FUN_00810118(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong local_60;
  undefined4 local_58;
  undefined4 local_50 [8];
  
  FUN_007f0fc8(local_50,param_4);
  local_58 = 0;
  local_60 = 0x10;
  FUN_007e45fc(local_50,&local_60);
  FUN_007e34a4(local_50);
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = param_3;
  FUN_007e5bd8(param_3);
  FUN_007e5c2c(param_2[0xb]);
  FUN_007f0f88(param_2 + 0xc,param_4);
  param_2[6] = (long)PTR_FUN_043779a8;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEjectClientBackgroundJob::EjectClient";
  local_50[0] = 0;
  local_60 = local_60 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  FUN_007ee578(param_1,local_50);
  return;
}


