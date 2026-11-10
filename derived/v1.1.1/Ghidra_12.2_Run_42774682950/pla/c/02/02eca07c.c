/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca07c; name: FUN_02eca07c
 */


long * FUN_02eca07c(void)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = DAT_0440a7e0;
  while ((plVar2 != (long *)0x0 && (uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2), (uVar1 & 1) == 0)
         )) {
    plVar2 = (long *)plVar2[1];
  }
  return plVar2;
}


