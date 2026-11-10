/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03010e00; name: FUN_03010e00
 */


byte FUN_03010e00(long param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = FUN_032ca140(0x3727c5ac,param_1 + 0x40);
  bVar2 = FUN_032ca140(0x3727c5ac,param_1 + 0x80);
  fVar3 = (float)FUN_032c8ef0(0.0 - *(float *)(param_1 + 0xc4));
  fVar4 = (float)FUN_032c8ef0(0.0 - *(float *)(param_1 + 200));
  return bVar1 & bVar2 & 1.1920929e-07 < fVar3 & 1.1920929e-07 < fVar4;
}


