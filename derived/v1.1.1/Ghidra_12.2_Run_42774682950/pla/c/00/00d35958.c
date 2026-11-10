/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d35958; name: FUN_00d35958
 */


ulong FUN_00d35958(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 - uVar3 < (lVar2 - uVar3) + 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = uVar3 << 3;
  if (4 < uVar3 >> 0x3d) {
    uVar1 = 0xffffffffffffffff;
  }
  if (uVar3 >> 0x3d == 0) {
    uVar1 = (uVar3 << 3) / 5;
  }
  if (uVar1 <= uVar4) {
    uVar4 = uVar1;
  }
  if (uVar4 < lVar2 + 1U) {
    uVar4 = lVar2 + 1;
  }
  return uVar4;
}


