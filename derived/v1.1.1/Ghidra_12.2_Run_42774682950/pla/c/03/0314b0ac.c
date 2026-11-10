/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314b0ac; name: FUN_0314b0ac
 */


float FUN_0314b0ac(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_2 + 0x20);
  fVar1 = (float)FUN_032c8ef0(param_1);
  return fVar2 * -0.5 * fVar3 * fVar4 * fVar1 * (float)param_1;
}


