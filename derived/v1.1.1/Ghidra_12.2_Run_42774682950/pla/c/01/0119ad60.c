/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119ad60; name: FUN_0119ad60
 */


void FUN_0119ad60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x78);
  if (*plVar6 == 0) {
    lVar5 = 0;
  }
  else {
    plVar6 = (long *)(param_1 + 0xa8);
    if (*plVar6 != 0) {
      return;
    }
    lVar5 = 1;
  }
  plVar4 = (long *)*param_2;
  plVar2 = (long *)(param_1 + lVar5 * 0x30 + 0x60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = (long *)*plVar2;
  *plVar2 = (long)plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar3 = param_1 + lVar5 * 0x30;
  *(undefined8 *)(lVar3 + 0x68) = param_2[1];
  *(undefined8 *)(lVar3 + 0x70) = param_2[2];
  *plVar6 = param_2[3];
  plVar6 = (long *)param_2[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar2 = *(long **)(lVar3 + 0x80);
  *(long **)(lVar3 + 0x80) = plVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined4 *)(param_1 + lVar5 * 0x30 + 0x88) = *(undefined4 *)(param_2 + 5);
  return;
}


