/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d98b68; name: FUN_02d98b68
 */


void FUN_02d98b68(undefined8 param_1,long param_2,ushort param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 < 9) && (1 < param_3)) {
    if (*(long *)(param_2 + 8) != 0) {
      *(ushort *)(*(long *)(param_2 + 8) + 0x10) = param_3;
    }
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


