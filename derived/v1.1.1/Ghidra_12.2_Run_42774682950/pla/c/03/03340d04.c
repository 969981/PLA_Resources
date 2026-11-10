/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03340d04; name: FUN_03340d04
 */


void FUN_03340d04(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  
  if ((long *)(*param_1 & 0xfffffffffffffffc) != (long *)0x0) {
    plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
    puVar4 = param_1;
    do {
      while( true ) {
        puVar1 = (ulong *)(plVar2 + 1);
        plVar3 = (long *)(*puVar1 & 0xfffffffffffffffc);
        if (plVar2[2] == param_2) break;
joined_r0x03340d84:
        plVar2 = plVar3;
        puVar4 = puVar1;
        if (plVar3 == (long *)0x0) {
          return;
        }
      }
      if ((*param_1 & 3) == 0) {
        *puVar4 = *puVar4 & 3 | (ulong)plVar3;
        (**(code **)(*plVar2 + 8))();
        puVar1 = puVar4;
        goto joined_r0x03340d84;
      }
      *puVar1 = (ulong)plVar3 | 1;
      plVar2 = plVar3;
      puVar4 = puVar1;
    } while (plVar3 != (long *)0x0);
  }
  return;
}


