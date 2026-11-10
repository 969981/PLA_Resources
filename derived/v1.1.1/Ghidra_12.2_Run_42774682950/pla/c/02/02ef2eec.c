/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2eec; name: FUN_02ef2eec
 */


void FUN_02ef2eec(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8)
        ; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3[1] == param_2) {
        FUN_02ef2f28(param_1,plVar3[2]);
        return;
      }
    }
  }
  return;
}


