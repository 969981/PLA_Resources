/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2e54; name: FUN_007f2e54
 */


void FUN_007f2e54(undefined8 param_1,long param_2,int *param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_30[0] = 0x10407;
  }
  else if ((*(long *)(param_2 + 0x28) == 0) && (*(int *)(param_2 + 0x20) == 0)) {
    local_30[0] = 0;
  }
  else {
    local_30[0] = 0x10408;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


