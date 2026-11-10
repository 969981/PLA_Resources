/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018303cc; name: FUN_018303cc
 */


bool FUN_018303cc(undefined8 param_1,long param_2)

{
  bool bVar1;
  char local_60 [20];
  float local_4c;
  
  FUN_0182efb8(local_60);
  if (local_60[0] == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = 0.0 < local_4c - *(float *)(param_2 + 4);
  }
  return bVar1;
}


