/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffcf8; name: FUN_012ffcf8
 */


undefined8 FUN_012ffcf8(long param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  
  param_1 = param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38;
  puVar3 = *(undefined2 **)(param_1 + 0x1658);
  puVar1 = *(undefined2 **)(param_1 + 0x1650);
  do {
    if (puVar1 == puVar3) {
      return 0;
    }
    uVar2 = FUN_012f0eb8(*puVar1);
    puVar1 = puVar1 + 0x18;
  } while ((uVar2 & 1) == 0);
  return 1;
}


