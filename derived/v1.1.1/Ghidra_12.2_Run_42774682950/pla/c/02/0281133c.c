/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281133c; name: FUN_0281133c
 */


void FUN_0281133c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined1 *)(param_1 + 0x211) = 1;
  *(undefined8 *)(param_1 + 0x218) = *param_2;
  *(undefined8 *)(param_1 + 0x220) = param_2[1];
  *(undefined8 *)(param_1 + 0x228) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x230);
  *(long **)(param_1 + 0x230) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x248) = param_3[1];
  *(undefined8 *)(param_1 + 0x240) = *param_3;
  if (**(char **)(param_1 + 0x158) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028113cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x60))(*(long **)(param_1 + 0xe8),param_1 + 0x150);
  return;
}


