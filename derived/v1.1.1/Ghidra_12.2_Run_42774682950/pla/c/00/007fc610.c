/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc610; name: FUN_007fc610
 */


void FUN_007fc610(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(int *)(param_2 + 0x198) != 0) {
    FUN_007ee578(param_1,param_2 + 0x198);
    return;
  }
  if (*(int *)(param_2 + 0x1a8) != 0) {
    FUN_007ee578(param_1,param_2 + 0x1a8);
    return;
  }
  if (*(int *)(param_2 + 0x1c4) == 4) {
    local_28[0] = 0x8c6e;
  }
  else {
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


