/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c88f0; name: FUN_004c88f0
 */


ushort * FUN_004c88f0(long param_1,long param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x17a8);
  uVar1 = *puVar2;
  if (*(ulong *)(param_2 + 0x40) == (ulong)uVar1) {
    return puVar2 + 4;
  }
  if (((*(ulong *)(param_2 + 0x40) == (ulong)uVar1 + 1) && (puVar2[0x14] != uVar1)) &&
     (*(int *)(param_2 + 4) - 0x15U < 2)) {
    *param_3 = 1;
    return puVar2 + 0xc;
  }
  return (ushort *)0x0;
}


