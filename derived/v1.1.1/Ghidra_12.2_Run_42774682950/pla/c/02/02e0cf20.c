/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0cf20; name: FUN_02e0cf20
 */


void FUN_02e0cf20(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x128) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_02e1dd48(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                   *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),
                   *(long *)(param_1 + 0x140) + lVar1,*(undefined4 *)(param_1 + 0x130));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xa8;
    } while (uVar2 < *(uint *)(param_1 + 0x128));
  }
  return;
}


