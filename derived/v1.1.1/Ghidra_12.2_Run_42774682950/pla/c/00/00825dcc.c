/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825dcc; name: FUN_00825dcc
 */


void FUN_00825dcc(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    local_30[0] = 0x10407;
  }
  else {
    FUN_0083fc48(param_3,param_2 + 0x98);
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


