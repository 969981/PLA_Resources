/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f792a8; name: FUN_00f792a8
 */


void FUN_00f792a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (((long *)*param_1 != (long *)0x0) &&
     (plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x38))(), plVar1 != (long *)0x0)) {
    do {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
      if (plVar2 != (long *)0x0) {
        param_1 = (long *)(**(code **)(*plVar2 + 0x78))();
        goto LAB_00f79304;
      }
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  param_1 = (long *)*param_1;
LAB_00f79304:
                    /* WARNING: Could not recover jumptable at 0x00f79314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}


