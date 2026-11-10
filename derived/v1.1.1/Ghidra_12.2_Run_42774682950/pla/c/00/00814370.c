/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00814370; name: FUN_00814370
 */


void FUN_00814370(undefined8 param_1,long param_2,long param_3,int param_4,long param_5,int param_6)

{
  undefined4 local_f0 [4];
  undefined4 local_e0 [44];
  undefined4 local_28 [2];
  
  if ((((param_6 == 0x10) && (param_3 != 0)) && (param_4 == 0x10)) && (param_5 != 0)) {
    if (*(int *)(param_2 + 0x234) != 0) {
      FUN_007e79dc(local_e0,param_2 + 0x238,0x10,1);
      FUN_007e7d98(local_e0,param_5,0x10,param_3,0x10);
      local_f0[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)local_28);
      FUN_007ee578(param_1,local_f0);
      FUN_007e79d4(local_e0);
      return;
    }
    local_e0[0] = 0x10408;
  }
  else {
    local_e0[0] = 0x10407;
  }
  local_f0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_e0 | 4),(Result *)local_f0);
  FUN_007ee578(param_1,local_e0);
  return;
}


