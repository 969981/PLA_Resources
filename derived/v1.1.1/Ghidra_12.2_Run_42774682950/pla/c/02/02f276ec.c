/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f276ec; name: FUN_02f276ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f276ec(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  
  if ((param_3 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x128);
    uVar1 = param_2 & 1;
    *(short *)(param_1 + 0x128) = (short)uVar1;
    uVar3 = (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | (byte)((uVar1 ^ uVar3) << 1);
    if ((uVar1 != uVar3) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
    }
  }
  if ((param_3 >> 1 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x1a8);
    uVar1 = param_2 >> 1 & 1;
    *(short *)(param_1 + 0x1a8) = (short)uVar1;
    uVar3 = (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | (byte)((uVar1 ^ uVar3) << 1);
    if ((uVar1 != uVar3) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x228);
    uVar1 = param_2 >> 2 & 1;
    *(short *)(param_1 + 0x228) = (short)uVar1;
    uVar3 = (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | (byte)((uVar1 ^ uVar3) << 1);
    if ((uVar1 != uVar3) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x2a8);
    uVar1 = param_2 >> 3 & 1;
    *(short *)(param_1 + 0x2a8) = (short)uVar1;
    uVar3 = (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | (byte)((uVar1 ^ uVar3) << 1);
    if ((uVar1 != uVar3) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
    }
  }
  if ((param_3 >> 4 & 1) != 0) {
    sVar2 = *(short *)(param_1 + 0x338);
    uVar1 = param_2 >> 4 & 1;
    *(short *)(param_1 + 0x338) = (short)uVar1;
    uVar3 = (uint)(sVar2 != 0);
    *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | (byte)((uVar1 ^ uVar3) << 1);
    if ((uVar1 != uVar3) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
      return;
    }
  }
  return;
}


