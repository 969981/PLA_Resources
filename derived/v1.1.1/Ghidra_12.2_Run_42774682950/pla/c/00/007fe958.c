/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe958; name: FUN_007fe958
 */


void FUN_007fe958(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == 0) ||
     (uVar1 = (*(uint *)(param_3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 4) & 0xff00ff) << 8,
     *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10, param_4 < 8)) {
    local_30[0] = 0x10407;
  }
  else {
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


