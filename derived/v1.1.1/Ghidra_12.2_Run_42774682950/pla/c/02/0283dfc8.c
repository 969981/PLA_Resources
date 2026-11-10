/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283dfc8; name: FUN_0283dfc8
 */


ulong FUN_0283dfc8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 - uVar2 < (param_2 - uVar2) + *(long *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = uVar2 << 3;
  if (4 < uVar2 >> 0x3d) {
    uVar1 = 0xffffffffffffffff;
  }
  if (uVar2 >> 0x3d == 0) {
    uVar1 = (uVar2 << 3) / 5;
  }
  uVar2 = *(long *)(param_1 + 0x28) + param_2;
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  return uVar2;
}


