/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c6d30; name: FUN_027c6d30
 */


void FUN_027c6d30(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_02bcde30();
  FUN_02bcde70(0);
  FUN_02bcde80(auStack_30,*param_1,1);
  puVar2 = operator_new(0x10);
  *puVar2 = &PTR_LAB_0426c628;
  plVar3 = (long *)param_1[1];
  param_1[1] = puVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_02bcde70(uVar1 & 1);
  FUN_02bcdf00(auStack_30);
  return;
}


