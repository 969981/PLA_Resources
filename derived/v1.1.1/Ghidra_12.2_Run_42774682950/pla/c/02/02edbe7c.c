/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edbe7c; name: FUN_02edbe7c
 */


undefined8 FUN_02edbe7c(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_1 + 0x20) + 1;
  *(ushort *)(param_1 + 0x20) = uVar1;
  if (*(ushort *)(param_1 + 0x22) <= uVar1) {
    if ((*(uint *)(param_1 + 0x28) >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    }
    *(undefined2 *)(param_1 + 0x20) = 0;
    return 1;
  }
  if ((*(uint *)(param_1 + 0x28) >> 1 & 1) == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
  return 0;
}


