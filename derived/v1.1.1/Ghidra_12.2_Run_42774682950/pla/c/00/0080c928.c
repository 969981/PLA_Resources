/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080c928; name: FUN_0080c928
 */


void FUN_0080c928(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((((*(ushort *)(param_3 + 0x10) < 9) && (*(byte *)(param_3 + 0x80) - 0x10 < 0x31)) &&
      (*(ushort *)(param_3 + 0x202) < 0x31)) &&
     ((((1L << ((ulong)*(ushort *)(param_3 + 0x202) & 0x3f) & 0x1111000000843U) != 0 &&
       (uVar1 = FUN_007f1f64(param_3), uVar1 < 0x125)) && (*(long *)(param_3 + 0x38) != 0)))) {
    local_30[0] = 0;
  }
  else {
    local_30[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


