/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0226a8e0; name: FUN_0226a8e0
 */


void FUN_0226a8e0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_50 [32];
  
  uVar2 = FUN_00150ba0(param_1,2,0);
  pcVar3 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(auStack_50,plVar1,uVar2);
  FUN_0014ff10(param_1,0);
  uVar2 = FUN_0226a9b4();
  FUN_0226a960(param_1,uVar2,auStack_50);
  return;
}


