/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6120c; name: FUN_02e6120c
 */


undefined8 FUN_02e6120c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = FUN_02e61160(param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(uVar3 - uVar2 * uVar1) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(uint *)(plVar4 + 1) == uVar3) {
        return 1;
      }
    }
  }
  return 0;
}


