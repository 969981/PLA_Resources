/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853a9c; name: FUN_00853a9c
 */


void FUN_00853a9c(undefined8 param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  local_28[0] = 0x10408;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


