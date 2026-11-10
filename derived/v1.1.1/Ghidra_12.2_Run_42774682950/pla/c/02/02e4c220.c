/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c220; name: FUN_02e4c220
 */


void FUN_02e4c220(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 0x36) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_02e4c274(*(long *)(param_1 + 0x28) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x88;
    } while (uVar2 < *(ushort *)(param_1 + 0x36));
  }
  return;
}


