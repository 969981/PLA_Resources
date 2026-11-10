/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b7ec8; name: FUN_013b7ec8
 */


undefined8 * FUN_013b7ec8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  
  uVar1 = FUN_02bcde30();
  FUN_02bcde70(0);
  FUN_02bcde80(auStack_40,*param_1,1);
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = uVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_02bcde70(uVar1 & 1);
  FUN_02bcdf00(auStack_40);
  return param_1;
}


