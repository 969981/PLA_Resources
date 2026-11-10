/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941ffc; name: FUN_00941ffc
 */


void FUN_00941ffc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [30];
  uint local_40;
  undefined8 local_38;
  
  local_38 = 0x102000000;
  FUN_009346d8(auStack_138,*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),&local_38);
  if (local_40 != 0) {
    lVar2 = (ulong)local_40 << 3;
    puVar1 = auStack_130;
    do {
      FUN_00942070(param_1,*puVar1);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}


