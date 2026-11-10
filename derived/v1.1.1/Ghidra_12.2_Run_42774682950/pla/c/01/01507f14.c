/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01507f14; name: FUN_01507f14
 */


undefined8 FUN_01507f14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x630) + 0xb0) != 0) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x640);
    do {
      uVar1 = FUN_02c61820(*(undefined8 *)(param_1 + 0x5b8),*puVar3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar2 < *(uint *)(*(long *)(param_1 + 0x630) + 0xb0));
  }
  return 1;
}


