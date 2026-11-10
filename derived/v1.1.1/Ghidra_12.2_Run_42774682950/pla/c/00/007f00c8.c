/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f00c8; name: FUN_007f00c8
 */


uint FUN_007f00c8(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  int local_20 [4];
  
  if (*param_1 == 0) {
    return 0;
  }
  local_20[0] = 0xa466;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  if (*param_1 == local_20[0]) {
    uVar1 = nn::err::ErrorResultVariant::operator_cast_to_Result
                      ((ErrorResultVariant *)(param_1 + 1));
    return uVar1;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_30);
  FUN_007ee738(local_20,param_1,local_30);
  uVar2 = nn::err::ErrorResultVariant::operator_cast_to_ErrorCode((ErrorResultVariant *)local_30);
  return (uint)(uVar2 >> 0x17) & 0xfffffe00 |
         (int)uVar2 + (int)((uVar2 & 0xffffffff) / 1000) * -1000;
}


