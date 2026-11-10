/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004276d0; name: FUN_004276d0
 */


ulong FUN_004276d0(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x28) < *(ulong *)(param_1 + 0x30)) {
    return 0;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
  }
  return uVar1;
}


