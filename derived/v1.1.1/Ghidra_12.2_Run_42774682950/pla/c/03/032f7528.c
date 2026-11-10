/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f7528; name: FUN_032f7528
 */


undefined8 FUN_032f7528(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  lVar2 = FUN_032e0b10();
  if (lVar2 == 0) {
    uVar3 = 0x80040200;
  }
  else {
    uVar1 = DAT_0444ac08 & 0xfffffffffffffffc;
    if (uVar1 != 0) {
      FUN_032c3f5c(auStack_30,&DAT_03996322);
      FUN_032f4218(DAT_0444ab10,uVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}


