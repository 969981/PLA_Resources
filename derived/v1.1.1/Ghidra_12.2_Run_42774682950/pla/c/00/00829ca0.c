/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00829ca0; name: FUN_00829ca0
 */


void FUN_00829ca0(undefined8 param_1,long param_2,ushort param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0xffff) {
    param_3 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50);
  }
  else if ((param_3 < 2) || (*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) < param_3)) {
    local_30[0] = 0x10407;
    goto LAB_00829d10;
  }
  *(ushort *)(param_2 + 8) = param_3;
  local_30[0] = 0;
LAB_00829d10:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


