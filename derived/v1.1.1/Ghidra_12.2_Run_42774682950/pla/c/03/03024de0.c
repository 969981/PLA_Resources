/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024de0; name: thunk_FUN_03024eb8
 */


void thunk_FUN_03024eb8(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  
  uVar1 = (uint)*(byte *)(param_2 + 4);
  if (*(byte *)(param_2 + 4) != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(param_2 + 0x5c);
    do {
      if (0.0 < *pfVar3) {
        *pfVar3 = *pfVar3 * param_1;
        uVar1 = (uint)*(byte *)(param_2 + 4);
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}


