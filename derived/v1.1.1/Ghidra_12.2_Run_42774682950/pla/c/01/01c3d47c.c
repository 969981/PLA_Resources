/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3d47c; name: FUN_01c3d47c
 */


void FUN_01c3d47c(char *param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      plVar2 = *(long **)(param_2 + 0x20);
      *(long **)(param_1 + 0x20) = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
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
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_1 + 0x20);
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c3d4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}


