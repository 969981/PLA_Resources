/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085dd5c; name: FUN_0085dd5c
 */


void FUN_0085dd5c(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  param_2[0xc] = param_3;
  FUN_007e5bd8(param_3);
  FUN_007e5c2c(param_2[0xc]);
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[8] = (long)"NatTraversalJob::StartNatTraversal";
  param_2[6] = (long)PTR_FUN_04378148;
  param_2[7] = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


