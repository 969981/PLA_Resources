/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a925c8; name: FUN_02a925c8
 */


void FUN_02a925c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x218);
  if (((uint)(uVar2 >> 0x20) <
       (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100)) >> 2)) &&
     (iVar1 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar2 >> 0x20) * 4), -1 < iVar1)) {
    *(ulong *)(*(long *)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar1 * 0x20) + 0xd0) = uVar2;
  }
  return;
}


