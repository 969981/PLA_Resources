/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1b20; name: FUN_004c1b20
 */


ulong FUN_004c1b20(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar3 == 0)) {
    return 0xffffffffffffffff;
  }
  uVar1 = *(uint *)(lVar3 + 0x40);
  uVar2 = (ulong)uVar1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 2 & 1) == 0) {
    if (uVar1 == 0x505 && (*(uint *)(lVar3 + 0x1c) & 0x1c8) != 0) {
      return 0x909;
    }
  }
  else if (uVar1 == 0x909) {
    uVar2 = 0x404;
  }
  return uVar2;
}


