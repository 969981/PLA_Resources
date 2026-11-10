/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080d774; name: FUN_0080d774
 */


void FUN_0080d774(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == 0) ||
      (0x30 < *(ushort *)(param_3 + 0x20) ||
       (1L << ((ulong)*(ushort *)(param_3 + 0x20) & 0x3f) & 0x1111000000843U) == 0)) ||
     (*(long *)(param_3 + 0x18) == 0)) {
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


