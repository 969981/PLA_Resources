/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b108; name: FUN_0085b108
 */


void FUN_0085b108(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((*(int *)(param_2 + 0x13d8) == 2) && (*(int *)(param_2 + 0x13a8) - 2U < 3)) {
    FUN_007ee578(param_1,param_2 + 0x13ac);
    return;
  }
  local_28[0] = 0x10408;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


