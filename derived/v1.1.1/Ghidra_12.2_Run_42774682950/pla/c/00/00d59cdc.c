/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59cdc; name: FUN_00d59cdc
 */


undefined8 FUN_00d59cdc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(byte *)(param_1 + 0x160f) != 0) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x160e);
    lVar3 = param_1 + (long)*(int *)(param_1 + 0x1608) * 0x60;
    uVar1 = 0;
    uVar4 = uVar2;
    do {
      if ((int)uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (1 < *(uint *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x638) + 0xa8) +
                                     (ulong)((uint)*(ushort *)(param_1 + 0x160c) +
                                             *(int *)(lVar3 + 0x640) * uVar1 + (int)uVar4) * 0x10) +
                           8)) {
            return 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
        uVar4 = uVar2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != *(byte *)(param_1 + 0x160f));
  }
  return 0;
}


