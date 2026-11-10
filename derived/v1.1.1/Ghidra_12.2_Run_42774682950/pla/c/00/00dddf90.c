/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dddf90; name: FUN_00dddf90
 */


void FUN_00dddf90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  undefined8 local_18;
  
  local_18 = 0;
  FUN_00dddfec(auStack_38,param_1,&local_18,param_2,param_3);
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_00dde138();
  FUN_00dde0e4(param_1,uVar1,auStack_38);
  return;
}


