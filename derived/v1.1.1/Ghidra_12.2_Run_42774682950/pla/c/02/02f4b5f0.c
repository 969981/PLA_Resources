/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4b5f0; name: FUN_02f4b5f0
 */


undefined8 * FUN_02f4b5f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  
  if (DAT_0442c080 == 0) {
    if (DAT_0442c084 == 0) {
      lVar3 = (*DAT_0442d148)(0,DAT_0442c078,4);
      if (lVar3 == 0) goto LAB_02f4b610;
      DAT_0442c084 = 1;
      DAT_0442c078 = lVar3;
    }
    else {
      DAT_0442c080 = 0;
    }
    uVar2 = DAT_0442c080 + 1;
    puVar1 = (undefined4 *)(DAT_0442c078 + (ulong)DAT_0442c080 * 4);
    DAT_0442c080 = uVar2;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
    }
  }
LAB_02f4b610:
  DAT_0442c098 = 0;
  DAT_0442c0a0 = 0;
  DAT_0442c0a8 = DAT_0442c0a8 & 0xc0 | 0x27;
  if (DAT_0442c090 == 0) {
    if (DAT_0442c094 == 0) {
      lVar3 = (*DAT_0442d148)(0,DAT_0442c088,4);
      if (lVar3 == 0) goto LAB_02f4b63c;
      DAT_0442c094 = 1;
      DAT_0442c088 = lVar3;
    }
    else {
      DAT_0442c090 = 0;
    }
    uVar2 = DAT_0442c090 + 1;
    puVar1 = (undefined4 *)(DAT_0442c088 + (ulong)DAT_0442c090 * 4);
    DAT_0442c090 = uVar2;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
    }
  }
LAB_02f4b63c:
  DAT_0442c0ac = 0;
  DAT_0442c0b4 = 0;
  DAT_0442c0bc = 0;
  DAT_0442c0c8 = 0;
  DAT_0442c0d0 = 0;
  DAT_0442c0c0 = DAT_0442c0c0 & 7;
  return &DAT_0442c078;
}


