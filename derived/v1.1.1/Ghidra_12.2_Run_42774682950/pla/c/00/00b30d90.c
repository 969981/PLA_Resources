/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b30d90; name: FUN_00b30d90
 */


void FUN_00b30d90(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  uVar1 = (*pcVar2)();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


