/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f4c0; name: FUN_0014f4c0
 */


ulong FUN_0014f4c0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == -1) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    return 0;
  }
  uVar1 = (param_2 + DAT_0438e1a0) - 1U & -DAT_0438e1a0;
  *(ulong *)(param_1 + 0x368) = uVar1;
  return uVar1;
}


