/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805a4c; name: FUN_00805a4c
 */


void FUN_00805a4c(undefined8 param_1,long *param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  param_2[7] = 0;
  param_2[6] = (long)PTR_FUN_043777f0;
  param_2[8] = (long)"NetResendMessageJob::ResendMessage";
  (**(code **)(*param_2 + 0x10))(param_2,1);
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


