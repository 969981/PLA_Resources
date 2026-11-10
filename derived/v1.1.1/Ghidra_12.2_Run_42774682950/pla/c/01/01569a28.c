/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01569a28; name: FUN_01569a28
 */


long * FUN_01569a28(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)*param_1;
  *param_1 = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar4 = (long *)param_2[2];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)param_1[2];
  param_1[2] = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)param_1[3];
  param_1[3] = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar4 = (long *)param_2[7];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar3 = param_2[0xb];
  lVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar1;
  param_1[0xb] = lVar3;
  plVar4 = (long *)param_2[0xc];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)param_1[0xc];
  param_1[0xc] = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  return param_1;
}


