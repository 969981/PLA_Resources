/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8435c; name: FUN_01a8435c
 */


float FUN_01a8435c(float param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  
  lVar1 = *(long *)(param_2 + 0x5c0);
  if (*(char *)(param_2 + 0x910) == '\0') {
    pfVar2 = (float *)(lVar1 + (ulong)*(uint *)(lVar1 + 0x68) * 4 + 0xb0);
  }
  else {
    pfVar2 = (float *)(lVar1 + 0xc0);
  }
  return *pfVar2 * param_1;
}


