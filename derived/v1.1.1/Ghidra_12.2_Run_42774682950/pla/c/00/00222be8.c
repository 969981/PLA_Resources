/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00222be8; name: FUN_00222be8
 */


undefined8 FUN_00222be8(long param_1,ushort param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(byte *)(param_1 + (ulong)param_2 + 0x1888);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x1c00) +
                   (ulong)*(byte *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x18a8) + uVar2)) !=
          '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}


