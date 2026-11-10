/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3debc; name: FUN_02f3debc
 */


undefined8 FUN_02f3debc(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    do {
      if (((int)plVar1[2] == param_2) &&
         (*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68) <=
          (long)(plVar1[3] + (ulong)*(uint *)(plVar1 + 4)))) {
        return 0;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return 1;
}


