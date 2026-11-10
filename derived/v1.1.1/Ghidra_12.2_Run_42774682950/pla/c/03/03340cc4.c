/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03340cc4; name: FUN_03340cc4
 */


uint FUN_03340cc4(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*param_1 & 0xfffffffffffffffc) == 0) {
    return 0;
  }
  uVar2 = *(ulong *)((*param_1 & 0xfffffffffffffffc) + 8);
  uVar1 = (uint)((uVar2 & 3) == 0);
  while ((uVar2 & 0xfffffffffffffffc) != 0) {
    uVar2 = *(ulong *)((uVar2 & 0xfffffffffffffffc) + 8);
    if ((uVar2 & 3) == 0) {
      uVar1 = uVar1 + 1;
    }
  }
  return uVar1;
}


