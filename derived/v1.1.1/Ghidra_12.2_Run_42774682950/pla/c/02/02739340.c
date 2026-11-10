/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02739340; name: FUN_02739340
 */


void FUN_02739340(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_40 [16];
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_02bcde30();
  FUN_02bcde70(0);
  FUN_02bcde80(auStack_40,*param_1,1);
  if (*(long **)(param_3 + 8) == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_3 + 8) + 0x18))();
  }
  plVar3 = (long *)param_1[1];
  param_1[1] = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_02bcde70(uVar1 & 1);
  FUN_02bcdf00(auStack_40);
  return;
}


