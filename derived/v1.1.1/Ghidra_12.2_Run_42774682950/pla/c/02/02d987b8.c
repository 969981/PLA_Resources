/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d987b8; name: FUN_02d987b8
 */


void FUN_02d987b8(undefined8 param_1,undefined8 param_2,ushort param_3,ushort param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 < 9) && (param_4 < 9)) {
    FUN_02d9898c(param_1);
    return;
  }
  local_30[0] = 0x10407;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


