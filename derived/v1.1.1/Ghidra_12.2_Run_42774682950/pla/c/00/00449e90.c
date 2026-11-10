/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00449e90; name: FUN_00449e90
 */


undefined4 FUN_00449e90(byte *param_1,int param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (uint)param_3;
  bVar1 = (byte)param_3;
  if (param_1 == (byte *)0x0) {
    param_2 = 6;
  }
  else if (param_2 < 1) {
    return 0xffffffff;
  }
  if (param_3 < 0x80) {
    if (param_1 == (byte *)0x0) {
      return 1;
    }
    *param_1 = bVar1;
    return 1;
  }
  if (param_3 < 0x800) {
    uVar4 = 2;
    if (param_2 < 2) {
      uVar4 = 0xffffffff;
    }
    else if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(uVar3 >> 6) & 0x1f | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return 2;
    }
  }
  else if (param_3 >> 0x10 == 0) {
    uVar4 = 3;
    if (param_2 < 3) {
      uVar4 = 0xffffffff;
    }
    else if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(uVar3 >> 0xc) & 0xf | 0xe0;
      param_1[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
  }
  else if (param_3 >> 0x15 == 0) {
    uVar4 = 4;
    if (param_2 < 4) {
      uVar4 = 0xffffffff;
    }
    else if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(uVar3 >> 0x12) & 7 | 0xf0;
      param_1[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      param_1[2] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      return 4;
    }
  }
  else {
    bVar2 = (byte)(param_3 >> 0x18);
    if (param_3 >> 0x1a == 0) {
      uVar4 = 5;
      if (param_2 < 5) {
        uVar4 = 0xffffffff;
      }
      else if (param_1 != (byte *)0x0) {
        *param_1 = bVar2 & 3 | 0xf8;
        param_1[1] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
        param_1[2] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
        param_1[4] = bVar1 & 0x3f | 0x80;
        param_1[3] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        return 5;
      }
    }
    else {
      uVar4 = 6;
      if (param_2 < 6) {
        uVar4 = 0xffffffff;
      }
      else if (param_1 != (byte *)0x0) {
        *param_1 = bVar2 >> 6 & 1 | 0xfc;
        param_1[1] = bVar2 & 0x3f | 0x80;
        param_1[2] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
        param_1[3] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
        param_1[5] = bVar1 & 0x3f | 0x80;
        param_1[4] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        uVar4 = 6;
      }
    }
  }
  return uVar4;
}


