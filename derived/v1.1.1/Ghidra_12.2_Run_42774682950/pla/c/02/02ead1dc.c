/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ead1dc; name: FUN_02ead1dc
 */


void FUN_02ead1dc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_042a9218;
  FUN_02f07850();
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
    if (plVar1[3] == 0) goto LAB_02ead214;
    param_1[3] = plVar1[3];
    while( true ) {
      (**(code **)(*plVar1 + 0x18))();
      plVar1 = (long *)param_1[3];
      if (plVar1 == (long *)0x0) break;
      if (plVar1[3] == 0) {
LAB_02ead214:
        param_1[3] = 0;
      }
      else {
        param_1[3] = plVar1[3];
      }
    }
  }
  param_1[3] = 0;
  FUN_02eb2770(param_1);
  return;
}


