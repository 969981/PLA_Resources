/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a939d0; name: FUN_02a939d0
 */


void FUN_02a939d0(long param_1)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x218);
  uVar2 = (uint)(uVar3 >> 0x20);
  if (((uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100)) >> 2) <=
       uVar2) ||
     (iVar1 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar3 >> 0x20) * 4), iVar1 < 0)) {
    return;
  }
  __dest = *(void **)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar1 * 0x20);
  if (((uVar3 & 0xff) == 0) || (*(char *)((long)__dest + 0xd0) == '\0')) {
    if (*(char *)((long)__dest + 0xd0) != '\0' || (uVar3 & 0xff) != 0) {
      return;
    }
  }
  else if (*(uint *)((long)__dest + 0xd4) != uVar2) {
    return;
  }
  memcpy(__dest,(void *)(param_1 + 0x220),0xd0);
  return;
}


