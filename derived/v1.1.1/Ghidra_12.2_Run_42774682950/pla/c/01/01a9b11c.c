/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9b11c; name: FUN_01a9b11c
 */


void FUN_01a9b11c(long param_1,byte param_2)

{
  byte local_14 [4];
  
  if (*(code **)(param_1 + 0xae0) != (code *)0x0) {
    local_14[0] = param_2 & 1;
    (**(code **)(param_1 + 0xae0))(param_1 + 0xb00,local_14);
  }
  return;
}


