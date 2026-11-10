/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba2d6c; name: FUN_02ba2d6c
 */


void FUN_02ba2d6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint local_24;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if ((*(char *)(param_1 + 0xf0) != '\0') && (*(char *)(param_1 + 0x110) != '\0')) {
    lVar1 = **(long **)(lVar2 + 0x60a0);
    lVar4 = *(long *)(param_1 + 0x118);
    if (*(ulong *)(param_1 + 0xf8) < (ulong)((*(long **)(lVar2 + 0x60a0))[1] - lVar1 >> 5)) {
      uVar3 = *(undefined8 *)(lVar1 + *(ulong *)(param_1 + 0xf8) * 0x20);
    }
    else {
      uVar3 = 0;
    }
    (*DAT_043f0fb8)(uVar3,lVar4,*(byte *)(lVar4 + 0x40) ^ 1,*(undefined1 *)(lVar4 + 0x41));
    lVar2 = *(long *)(param_1 + 0x58);
  }
  FUN_02b7e6c0(lVar2,(char *)(param_1 + 0xf0),param_1 + 0xe8);
  uVar5 = (uint)*(byte *)(param_1 + 0xe8);
  if ((*(byte *)(param_1 + 0xe8) != 0) &&
     (uVar5 = (uint)*(byte *)(param_1 + 0x100), *(byte *)(param_1 + 0x100) != 0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x6030) +
                     (ulong)*(uint *)(param_1 + 0xec) * 0x20);
    (*DAT_043f0298)(lVar2,*(undefined8 *)(param_1 + 0x108),&local_24);
    *(uint *)(lVar2 + 400) = local_24;
    uVar5 = local_24;
  }
  *(uint *)(param_1 + 0x130) = uVar5;
  FUN_02ba457c(*(undefined8 *)(param_1 + 0xb8));
  *(long *)(param_1 + 0x158) =
       *(long *)(*(long *)(param_1 + 0xb8) + 0x30) - *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
  return;
}


