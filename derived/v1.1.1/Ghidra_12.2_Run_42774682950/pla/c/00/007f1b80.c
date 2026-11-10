/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1b80; name: FUN_007f1b80
 */


void FUN_007f1b80(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == 0) || ((param_3 & 3) != 0)) || (param_4 >> 3 < 0x37f)) {
    local_30[0] = 0x10407;
  }
  else if (*(long *)(param_2 + 0x70) == 0) {
    *(ulong *)(param_2 + 0x70) = param_3;
    *(uint *)(param_2 + 0x78) = param_4;
    local_30[0] = 0;
  }
  else {
    local_30[0] = 0x10402;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


