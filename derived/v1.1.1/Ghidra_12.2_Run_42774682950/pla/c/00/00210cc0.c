/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210cc0; name: FUN_00210cc0
 */


undefined8 FUN_00210cc0(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if ((uVar1 & 0x8080) == 0x80) {
    if ((uVar1 & 0xb) != 1) {
      return 0xffffffff;
    }
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  else {
    if ((~uVar1 & 0xe) != 0 || (uVar1 & 0x11) == 0) {
      return 0xffffffff;
    }
    if (((short)uVar1 < 0) && ((uVar1 & 0x81) != 0x81)) {
      return 0xffffffff;
    }
    if (((uVar1 & 0x2800) == 0x2000) && ((uVar1 & 0x1200) != 0x1200)) {
      return 0xffffffff;
    }
  }
  if (*(char *)(param_2 + 0xc) == '\x05') {
    *(ushort *)(param_1 + 0xe2) = uVar1 & 0x780;
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  return 0;
}


