/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183c424; name: FUN_0183c424
 */


void FUN_0183c424(long param_1,uint param_2)

{
  long *plVar1;
  
  FUN_015916d0(param_1,param_2 & 1,0x40,0);
  plVar1 = *(long **)(param_1 + 0x2c0);
  if (plVar1 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) & 0xfffffffb;
      FUN_01839500();
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) & 0xfffffffb;
        FUN_01839500();
      }
    }
    else {
      *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) | 4;
      FUN_01839500();
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) | 4;
        FUN_01839500();
      }
    }
  }
  return;
}


