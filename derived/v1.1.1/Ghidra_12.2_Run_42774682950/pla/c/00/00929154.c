/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00929154; name: FUN_00929154
 */


undefined8 FUN_00929154(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  long alStack_128 [30];
  uint local_38;
  undefined8 local_28;
  
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 != '\x1f') {
    local_28 = 0x502000101;
    FUN_009346d8(auStack_130,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_28);
    if (local_38 != 0) {
      lVar3 = (ulong)local_38 << 3;
      plVar2 = alStack_128;
      do {
        if (*(char *)(*(long *)(*plVar2 + 0x70) + 0x7d) == cVar1) {
          return 1;
        }
        lVar3 = lVar3 + -8;
        plVar2 = plVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return 0;
}


