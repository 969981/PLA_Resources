/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7f40; name: FUN_003d7f40
 */


undefined8 FUN_003d7f40(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auStack_18 [8];
  
  uVar3 = FUN_002f12e0(param_1,3,auStack_18);
  if ((uVar3 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x2d);
    while( true ) {
      if (bVar2 == 0xff) {
        return 0;
      }
      lVar1 = param_1 + (ulong)bVar2 * 8;
      uVar3 = FUN_003d7f40(*(undefined8 *)(lVar1 + 0x38));
      if ((uVar3 & 1) != 0) break;
      bVar2 = *(byte *)(lVar1 + 0x40);
    }
  }
  return 1;
}


