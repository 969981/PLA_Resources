/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024dd0; name: thunk_FUN_03024e88
 */


void thunk_FUN_03024e88(float param_1,long param_2)

{
  uint uVar1;
  float *pfVar2;
  
  if (*(char *)(param_2 + 4) != '\0') {
    uVar1 = 0;
    pfVar2 = (float *)(param_2 + 0x4c);
    do {
      uVar1 = uVar1 + 1;
      *pfVar2 = *pfVar2 * param_1;
      pfVar2 = pfVar2 + 8;
    } while (uVar1 < *(byte *)(param_2 + 4));
  }
  return;
}


