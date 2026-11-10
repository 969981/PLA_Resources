/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bfc0; name: FUN_01a4bfc0
 */


void FUN_01a4bfc0(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x130))();
  if (((param_2 & 1) != 0) && (lVar2 = FUN_01a4b9b4(param_1), lVar2 != 0)) {
    FUN_02a93a48();
    uVar4 = *(ulong *)(lVar2 + 0x218);
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar3 < (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100))
                       >> 2)) &&
       (iVar1 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar4 >> 0x20) * 4), -1 < iVar1)) {
      __dest = *(void **)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar1 * 0x20);
      if (((uVar4 & 0xff) == 0) || (*(char *)((long)__dest + 0xd0) == '\0')) {
        if (*(char *)((long)__dest + 0xd0) != '\0' || (uVar4 & 0xff) != 0) {
          return;
        }
      }
      else if (*(uint *)((long)__dest + 0xd4) != uVar3) {
        return;
      }
      memcpy(__dest,(void *)(lVar2 + 0x220),0xd0);
      return;
    }
  }
  return;
}


