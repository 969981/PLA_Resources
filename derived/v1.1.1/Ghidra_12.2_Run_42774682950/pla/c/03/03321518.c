/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03321518; name: FUN_03321518
 */


void FUN_03321518(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      plVar1 = *(long **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}


