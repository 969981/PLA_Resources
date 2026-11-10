/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8b44; name: FUN_007e8b44
 */


void FUN_007e8b44(long param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0x54,local_28);
  return;
}


