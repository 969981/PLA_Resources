/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e48184; name: FUN_02e48184
 */


undefined * FUN_02e48184(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)
           (*(long *)(param_1 + 8) +
            (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8 + 6);
  if (uVar1 < *(ushort *)(param_1 + 0x34)) {
    return (undefined *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x10);
  }
  return &DAT_042a5dc8;
}


