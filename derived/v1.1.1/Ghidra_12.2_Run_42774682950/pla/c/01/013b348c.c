/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b348c; name: FUN_013b348c
 */


void FUN_013b348c(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_02bcde30();
  FUN_02bcde70(0);
  FUN_02bcde80(auStack_30,*param_1,1);
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_02bcde70(uVar1 & 1);
  FUN_02bcdf00(auStack_30);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  return;
}


