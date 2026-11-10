/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242da4; name: FUN_00242da4
 */


float FUN_00242da4(long param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if ((bVar1 & 3) == 2) {
    fVar2 = -*(float *)(param_1 + 0x50);
  }
  else {
    fVar2 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar2 = *(float *)(param_1 + 0x50) * -0.5;
    }
  }
  bVar1 = bVar1 >> 2 & 3;
  if ((bVar1 == 2) || (bVar1 != 0)) {
    return fVar2;
  }
  return fVar2;
}


