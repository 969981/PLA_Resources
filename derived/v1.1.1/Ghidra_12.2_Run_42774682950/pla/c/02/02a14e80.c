/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14e80; name: FUN_02a14e80
 */


void FUN_02a14e80(long param_1,byte param_2,byte param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1c8) + (ulong)param_2 * 0x10 +
                     (ulong)param_3 * 8 + 0x98);
  if ((param_2 == 0 && param_3 < 2) && (uVar2 = *puVar1, uVar2 < 0xff)) {
    *puVar1 = uVar2 + 1;
  }
  return;
}


