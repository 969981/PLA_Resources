/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024f31f0; name: FUN_024f31f0
 */


void FUN_024f31f0(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  float fVar2;
  
  pcVar1 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  fVar2 = (float)(*pcVar1)();
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar2,param_1);
  return;
}


