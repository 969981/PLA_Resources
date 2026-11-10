/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008581e8; name: FUN_008581e8
 */


void FUN_008581e8(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((*(uint *)(param_2 + 0xb0) | 2) == 3) {
    FUN_007ee578(param_1,param_2 + 0xb8);
    return;
  }
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


