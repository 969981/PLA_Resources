/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00472d90; name: FUN_00472d90
 */


undefined8 FUN_00472d90(byte *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  size_t __n;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1 & 7;
  __n = 0xe - uVar2;
  if (param_3 < __n) {
    return 0xffffffff;
  }
  if ((uint)uVar2 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulong)param_4 >> 0x38);
    param_1[10] = (byte)((ulong)param_4 >> 0x28);
    param_1[9] = (byte)((ulong)param_4 >> 0x30);
    param_1[0xb] = (byte)((ulong)param_4 >> 0x20);
  }
  uVar1 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_1 = *param_1 & 0xbf;
  memcpy(param_1 + 1,param_2,__n);
  return 0;
}


