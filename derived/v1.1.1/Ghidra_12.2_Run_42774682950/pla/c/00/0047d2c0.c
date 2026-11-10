/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047d2c0; name: FUN_0047d2c0
 */


void FUN_0047d2c0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = (&DAT_03a0d224)[param_1[1]];
  *param_1 = (&DAT_03a0d224)[*param_1];
  bVar2 = (&DAT_03a0d224)[param_1[2]];
  bVar3 = (&DAT_03a0d224)[param_1[3]];
  param_1[1] = bVar1;
  bVar1 = (&DAT_03a0d224)[param_1[4]];
  param_1[3] = bVar3;
  param_1[2] = bVar2;
  param_1[4] = bVar1;
  bVar1 = (&DAT_03a0d224)[param_1[6]];
  param_1[5] = (&DAT_03a0d224)[param_1[5]];
  param_1[6] = bVar1;
  param_1[7] = (&DAT_03a0d224)[param_1[7]];
  return;
}


