/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b31140; name: FUN_00b31140
 */


void FUN_00b31140(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_40 [32];
  
  pcVar2 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  (*pcVar2)(auStack_40);
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_00b311f4();
  FUN_00b311a0(param_1,uVar1,auStack_40);
  return;
}


