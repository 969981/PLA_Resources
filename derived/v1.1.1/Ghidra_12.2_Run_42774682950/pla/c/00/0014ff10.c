/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014ff10; name: FUN_0014ff10
 */


void FUN_0014ff10(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)param_2 * 0x10 + 0x10;
    return;
  }
  uVar1 = **(long **)(param_1 + 0x20) + (long)param_2 * 0x10 + 0x10;
  uVar2 = *(ulong *)(param_1 + 0x10);
  while (uVar2 < uVar1) {
    *(ulong *)(param_1 + 0x10) = uVar2 + 0x10;
    *(undefined4 *)(uVar2 + 8) = 0;
    uVar2 = *(ulong *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}


