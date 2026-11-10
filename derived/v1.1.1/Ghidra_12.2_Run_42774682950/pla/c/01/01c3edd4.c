/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3edd4; name: FUN_01c3edd4
 */


void FUN_01c3edd4(char *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    plVar2 = (long *)param_2[3];
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    *param_1 = '\x01';
  }
  else {
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    plVar2 = (long *)param_2[3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_1 + 0x20);
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c3ee28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}


