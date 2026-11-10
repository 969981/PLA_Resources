/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e80ec; name: FUN_007e80ec
 */


void FUN_007e80ec(undefined8 param_1,uint *param_2,uint param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *param_2 = param_3 & 0xfffffffc;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


