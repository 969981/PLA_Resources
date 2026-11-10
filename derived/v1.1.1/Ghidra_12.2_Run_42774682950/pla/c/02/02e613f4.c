/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e613f4; name: FUN_02e613f4
 */


void FUN_02e613f4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(uint *)(plVar4 + 1) == param_2) {
        *(int *)((long)plVar4 + 0xc) = *(int *)((long)plVar4 + 0xc) + 1;
        return;
      }
    }
  }
  puVar3 = (undefined4 *)FUN_02e62848(param_1 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  *puVar3 = 1;
  return;
}


