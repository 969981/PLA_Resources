/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f018c; name: FUN_007f018c
 */


ulong FUN_007f018c(long param_1)

{
  ulong uVar1;
  
  uVar1 = nn::err::ErrorResultVariant::operator_cast_to_ErrorCode
                    ((ErrorResultVariant *)(param_1 + 4));
  return uVar1 >> 0x20;
}


