/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9d194; name: FUN_02a9d194
 */


void FUN_02a9d194(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    *(undefined8 *)(param_1 + 0x338) = *param_2;
    *(undefined8 *)(param_1 + 0x340) = param_2[1];
    *(undefined8 *)(param_1 + 0x348) = param_2[2];
    plVar2 = (long *)param_2[3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_1 + 0x350);
    *(long **)(param_1 + 0x350) = plVar2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02a9d1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}


