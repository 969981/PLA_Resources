/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210d70; name: FUN_00210d70
 */


undefined8 FUN_00210d70(long param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    sVar2 = *(short *)(param_1 + 0xe0);
    uVar3 = (int)sVar2 - 100;
    if (uVar3 < 100) {
      *(ushort *)(param_1 + 0xe2) = uVar1 & 0x780 | 0x4000;
      *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
      uVar4 = 0;
      *(undefined2 *)(param_1 + 0xe0) = 0xffff;
    }
    else {
      *(ushort *)(param_1 + 0xe2) = uVar1 & 0xbfff;
      if (((((uVar1 >> 8 & 1) == 0) && (99 < uVar3)) && (sVar2 != 0x130)) && (sVar2 != 0xcc)) {
        if ((uVar1 & 0x480) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
        }
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return uVar4;
}


