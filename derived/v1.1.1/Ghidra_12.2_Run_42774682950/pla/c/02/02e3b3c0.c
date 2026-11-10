/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3b3c0; name: FUN_02e3b3c0
 */


undefined8 FUN_02e3b3c0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  lVar4 = *(long *)(param_1 + 8);
  if (uVar2 != 0 && lVar4 != 0) {
    if (*(void **)(lVar4 + 0x10) != (void *)0x0) {
      memset(*(void **)(lVar4 + 0x10),0,(ulong)(uint)(*(int *)(lVar4 + 8) << 2));
    }
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (uVar2 != 1) {
      lVar4 = *(long *)(param_1 + 8);
      if (*(void **)(lVar4 + 0x48) != (void *)0x0) {
        memset(*(void **)(lVar4 + 0x48),0,(ulong)(uint)(*(int *)(lVar4 + 0x40) << 2));
      }
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if (uVar2 != 2) {
        lVar4 = *(long *)(param_1 + 8);
        if (*(void **)(lVar4 + 0x80) != (void *)0x0) {
          memset(*(void **)(lVar4 + 0x80),0,(ulong)(uint)(*(int *)(lVar4 + 0x78) << 2));
        }
        *(undefined4 *)(lVar4 + 0x88) = 0;
        if (uVar2 != 3) {
          lVar4 = 0;
          lVar3 = (ulong)uVar2 - 3;
          do {
            lVar1 = *(long *)(param_1 + 8) + lVar4;
            if (*(void **)(lVar1 + 0xb8) != (void *)0x0) {
              memset(*(void **)(lVar1 + 0xb8),0,(ulong)(uint)(*(int *)(lVar1 + 0xb0) << 2));
            }
            lVar4 = lVar4 + 0x38;
            lVar3 = lVar3 + -1;
            *(undefined4 *)(lVar1 + 0xc0) = 0;
          } while (lVar3 != 0);
        }
      }
    }
  }
  return 1;
}


