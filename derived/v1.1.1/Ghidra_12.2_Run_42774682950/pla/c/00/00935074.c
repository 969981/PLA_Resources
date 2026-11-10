/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935074; name: FUN_00935074
 */


undefined8 FUN_00935074(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  undefined8 auStack_128 [30];
  uint local_38;
  undefined8 local_28;
  
  local_28 = 0x102000101;
  FUN_009346d8(auStack_130,param_1,&local_28);
  if (local_38 != 0) {
    lVar3 = (ulong)local_38 << 3;
    puVar2 = auStack_128;
    do {
      uVar1 = FUN_00932220(*puVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  return 0;
}


