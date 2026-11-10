/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00934f10; name: FUN_00934f10
 */


undefined8 FUN_00934f10(undefined8 param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_130 [8];
  long alStack_128 [30];
  uint local_38;
  undefined8 local_28;
  
  local_28 = 0x502000101;
  FUN_009346d8(auStack_130,param_1,&local_28);
  if (local_38 != 0) {
    lVar2 = (ulong)local_38 << 3;
    plVar1 = alStack_128;
    do {
      if (*(char *)(*(long *)(*plVar1 + 0x70) + 0x7d) == param_2) {
        return 1;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return 0;
}


