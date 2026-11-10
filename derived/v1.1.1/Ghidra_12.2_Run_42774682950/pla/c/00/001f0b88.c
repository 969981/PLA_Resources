/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0b88; name: FUN_001f0b88
 */


void FUN_001f0b88(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 0xef8);
  if (plVar2 != (long *)0x0) {
    if (plVar2[1] == param_2) {
      plVar3 = (long *)0x0;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
        if (plVar2 == (long *)0x0) goto LAB_001f0be8;
      } while (plVar2[1] != param_2);
    }
    plVar1 = (long *)(param_1 + 0xef8);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3;
    }
    *plVar1 = *plVar2;
    FUN_002044d4();
  }
LAB_001f0be8:
  *(undefined8 *)(param_2 + 0xee8) = 0;
  *(ulong *)(param_2 + 0xf40) = *(ulong *)(param_2 + 0xf40) & 0xffefffffffffffff;
  return;
}


