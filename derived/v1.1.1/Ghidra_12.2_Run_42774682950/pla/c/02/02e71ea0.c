/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71ea0; name: FUN_02e71ea0
 */


undefined8 FUN_02e71ea0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_1 / uVar1;
    }
    for (plVar3 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)param_1 - uVar2 * uVar1) * 8); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3[1] == param_1) {
        if (*(uint *)(plVar3[2] + 0x40) < 3) {
          return 0;
        }
        return *(undefined8 *)(*(long *)(plVar3[2] + 0x38) + 0x10);
      }
    }
  }
  return 0;
}


