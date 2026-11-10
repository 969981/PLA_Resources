/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00550a10; name: FUN_00550a10
 */


undefined8 FUN_00550a10(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 < 0x80) {
    *param_1 = (byte)uVar2;
    return 1;
  }
  if (uVar2 < 0x800) {
    *param_1 = (byte)(uVar2 >> 6) | 0xc0;
    param_1[1] = (byte)uVar2 & 0x3f | 0x80;
    return 2;
  }
  uVar1 = 0xfffd;
  if (uVar2 >> 0x10 < 0x11) {
    uVar1 = uVar2;
  }
  if (uVar1 >> 0x10 == 0) {
    *param_1 = (byte)((ulong)(long)(int)uVar1 >> 0xc) | 0xe0;
    param_1[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
    param_1[2] = (byte)uVar1 & 0x3f | 0x80;
    return 3;
  }
  *param_1 = (byte)((ulong)(long)(int)uVar1 >> 0x12) | 0xf0;
  param_1[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
  param_1[3] = (byte)uVar1 & 0x3f | 0x80;
  param_1[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
  return 4;
}


