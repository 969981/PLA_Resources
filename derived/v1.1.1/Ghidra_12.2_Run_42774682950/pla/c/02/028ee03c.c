/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ee03c; name: FUN_028ee03c
 */


bool FUN_028ee03c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((long *)*param_1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x38))();
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      do {
        lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
        if (lVar2 != 0) break;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1);
        lVar2 = 0;
      } while (plVar1 != (long *)0x0);
    }
  }
  return lVar2 != 0;
}


