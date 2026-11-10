/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5d40; name: FUN_004f5d40
 */


long * FUN_004f5d40(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  do {
    plVar1 = plVar2;
    plVar2 = (long *)plVar1[2];
    if (plVar2 == (long *)0x0) goto LAB_004f5d68;
  } while (*plVar1 != *param_2);
  plVar2 = plVar1;
LAB_004f5d68:
  if (*plVar1 != *param_2) {
    plVar1 = plVar2;
  }
  return plVar1;
}


