/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff004; name: FUN_007ff004
 */


void FUN_007ff004(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_3 + 0x26);
    *(ushort *)(param_2 + 0x36) =
         *(ushort *)(param_3 + 0x27) >> 8 | *(ushort *)(param_3 + 0x27) << 8;
    if (0x28 < param_4) {
      local_30[0] = 0;
      goto LAB_007ff054;
    }
  }
  local_30[0] = 0x10407;
LAB_007ff054:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


