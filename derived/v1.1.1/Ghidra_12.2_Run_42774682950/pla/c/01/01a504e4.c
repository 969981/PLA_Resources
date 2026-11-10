/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a504e4; name: FUN_01a504e4
 */


void FUN_01a504e4(float param_1,long param_2)

{
  float *pfVar1;
  float local_4;
  
  local_4 = param_1;
  *(undefined4 *)(param_2 + 0x348) = *(undefined4 *)(param_2 + 0x330);
  if (param_1 < *(float *)(param_2 + 0x338)) {
    pfVar1 = (float *)(param_2 + 0x338);
  }
  else {
    pfVar1 = (float *)(param_2 + 0x33c);
    if (param_1 <= *(float *)(param_2 + 0x33c)) {
      pfVar1 = &local_4;
    }
  }
  *(float *)(param_2 + 0x34c) = *pfVar1;
  *(undefined4 *)(param_2 + 0x340) = 0;
  return;
}


