/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821a58; name: FUN_00821a58
 */


undefined8 FUN_00821a58(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return 1;
    }
    if (bVar1 < 0xfe == (char)bVar1 < -0x3e) {
      return 0;
    }
    if ((~(bVar1 >> 1) & 0x60) == 0) {
      uVar2 = 0;
      do {
        if (-1 < (char)param_1[uVar2 + 1]) {
          return 0;
        }
        if (0xbf < param_1[uVar2 + 1]) {
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (byte)(&DAT_03a73bc0)[bVar1 >> 1]);
    }
    param_1 = param_1 + (ulong)(byte)(&DAT_03a73bc0)[bVar1 >> 1] + 1;
    bVar1 = *param_1;
  } while( true );
}


