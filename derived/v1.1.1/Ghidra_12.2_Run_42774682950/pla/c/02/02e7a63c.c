/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a63c; name: FUN_02e7a63c
 */


undefined8 FUN_02e7a63c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if ((param_3 & 1) == 0) {
      do {
        uVar1 = FUN_02e7b71c(param_2,plVar2);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      do {
        if ((plVar2[3] == *(long *)(param_2 + 0x18)) &&
           (uVar1 = FUN_02e7b71c(param_2,plVar2), (uVar1 & 1) != 0)) {
          return 1;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  return 0;
}


