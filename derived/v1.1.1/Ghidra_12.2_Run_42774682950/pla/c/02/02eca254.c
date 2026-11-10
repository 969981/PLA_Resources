/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca254; name: FUN_02eca254
 */


long * FUN_02eca254(long param_1)

{
  ulong uVar1;
  long *plVar2;
  int local_18;
  int local_14;
  
  if (param_1 == 0) {
    plVar2 = DAT_0440a7e0;
    if (DAT_0440a7e0 != (long *)0x0) {
      do {
        uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
        if ((uVar1 & 1) != 0) {
          return plVar2;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != (long *)0x0);
      return (long *)0x0;
    }
  }
  else {
    local_18 = (int)param_1;
    local_14 = (int)((ulong)param_1 >> 0x20);
    if ((local_18 == 0) || (local_14 == 0)) {
      FUN_02ec9f10(&local_18,&local_14);
      param_1 = CONCAT44(local_14,local_18);
    }
    plVar2 = DAT_0440a7e0;
    if (DAT_0440a7e0 != (long *)0x0) {
      do {
        if (plVar2[2] == param_1) {
          return plVar2;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != (long *)0x0);
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


