/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022b3aec; name: FUN_022b3aec
 */


void FUN_022b3aec(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar1 = FUN_022b3b6c(param_1,1,&local_28);
  pcVar2 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(lVar1 + (param_2[1] >> 1)));
  }
  (*pcVar2)();
  FUN_0014ff10(param_1,0);
  return;
}


