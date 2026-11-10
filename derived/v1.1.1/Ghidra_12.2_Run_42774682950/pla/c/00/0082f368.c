/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f368; name: FUN_0082f368
 */


long FUN_0082f368(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((((*(char *)(param_1 + 4) == '\0') || (*(char *)(param_1 + 5) != '\0')) &&
      (lVar2 = *(long *)(param_1 + 0x10), *(char *)(lVar2 + 3) != '\0')) &&
     (lVar1 = *(long *)(lVar2 + 0x10), *(uint *)(lVar1 + 0x10) < (uint)*(byte *)(lVar2 + 2))) {
    lVar3 = (long)*(int *)(lVar1 + 0x14);
    if (*(long *)(lVar1 + 8) == lVar1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      lVar4 = *(long *)(lVar1 + 8) - lVar3;
      do {
        if (((uint)uVar5 & 0xff) < (uint)*(byte *)(*(long *)(lVar4 + 0x10) + 0x91)) {
          FUN_007e8fa0(lVar1,lVar4 + lVar3,*(long *)(lVar2 + 8) + (param_2 & 0xff) * 0x20 + lVar3);
          goto LAB_0082f440;
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        uVar5 = (ulong)((uint)uVar5 + 1);
      } while (lVar4 != lVar1 - lVar3);
    }
    FUN_007e8fa0(lVar1,lVar1,*(long *)(lVar2 + 8) + (param_2 & 0xff) * 0x20 + lVar3);
    if ((~(uint)uVar5 & 0xff) != 0) {
LAB_0082f440:
      return (uVar5 & 0xff) << 8;
    }
  }
  return 0xfdfd;
}


