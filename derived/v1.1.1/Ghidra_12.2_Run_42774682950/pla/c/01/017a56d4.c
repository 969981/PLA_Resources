/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017a56d4; name: FUN_017a56d4
 */


void FUN_017a56d4(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  (*pcVar1)();
  FUN_0014ff10(param_1,0);
  return;
}


