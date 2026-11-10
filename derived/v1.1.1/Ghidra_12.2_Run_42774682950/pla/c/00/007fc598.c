/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc598; name: FUN_007fc598
 */


void FUN_007fc598(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (void *)0x0) || (param_4 < 0x10)) {
    local_30[0] = 0x10407;
  }
  else {
    memcpy(param_3,(void *)(param_2 + 0x220),0x10);
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


