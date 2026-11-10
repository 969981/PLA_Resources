/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef37b4; name: FUN_02ef37b4
 */


bool FUN_02ef37b4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3;
      if (plVar3[1] == param_2) {
        plVar4 = (long *)0x1;
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) break;
        } while (plVar4[1] != param_2);
      }
    }
  }
  return plVar4 != (long *)0x0;
}


