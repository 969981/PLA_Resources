/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022cec8; name: FUN_0022cec8
 */


void FUN_0022cec8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00232674();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00232674(plVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


