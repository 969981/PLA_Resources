/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092a2f8; name: FUN_0092a2f8
 */


void FUN_0092a2f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 auStack_128 [28];
  uint local_48;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  local_38 = 0x502000101;
  FUN_009346d8(auStack_140,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_38);
  if (((local_48 != 0) && (FUN_0092a3c0(param_1,local_138,0xed), local_48 != 1)) &&
     (FUN_0092a3c0(param_1,local_130,0xed), local_48 != 2)) {
    lVar2 = (ulong)local_48 * 8 + -0x10;
    puVar1 = auStack_128;
    do {
      FUN_0092a3c0(param_1,*puVar1,0xed);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}


