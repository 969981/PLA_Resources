/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb4e84; name: FUN_02eb4e84
 */


long FUN_02eb4e84(void)

{
  long lVar1;
  
  lVar1 = FUN_02eb5500();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x20) = 0xff;
    *(undefined1 *)(lVar1 + 0x28) = 0xff;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    FUN_02ec70e4(lVar1 + 0x68);
  }
  return lVar1;
}


