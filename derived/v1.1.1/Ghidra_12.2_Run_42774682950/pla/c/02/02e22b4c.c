/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e22b4c; name: FUN_02e22b4c
 */


void FUN_02e22b4c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
LAB_02e22b6c:
    if (plVar1 != (long *)0x0) {
      *(undefined1 *)(plVar1 + 0xf) = 1;
    }
  }
  else {
    do {
      if (plVar1[1] == param_2) goto LAB_02e22b6c;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}


