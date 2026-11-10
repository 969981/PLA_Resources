/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c10a8c; name: FUN_01c10a8c
 */


void FUN_01c10a8c(char *param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      plVar1 = *(long **)(param_2 + 0x20);
      *(long **)(param_1 + 0x20) = plVar1;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    }
    *param_1 = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    plVar1 = *(long **)(param_2 + 0x20);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    plVar2 = *(long **)(param_1 + 0x20);
    *(long **)(param_1 + 0x20) = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  return;
}


