/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092b5b8; name: FUN_0092b5b8
 */


void FUN_0092b5b8(long param_1,byte param_2,byte param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,byte param_8)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  *(byte *)(param_1 + 0xb0) = param_2;
  *(byte *)(param_1 + 0xb1) = param_3;
  *(undefined4 *)(param_1 + 0xb4) = param_4;
  *(undefined4 *)(param_1 + 0xb8) = param_5;
  *(undefined4 *)(param_1 + 0xbc) = param_6;
  *(undefined1 *)(param_1 + 0xc0) = param_7;
  *(byte *)(param_1 + 0xc1) = param_8 & 1;
  *(undefined2 *)(param_1 + 0xcc) = 1;
  if (param_3 != param_2) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0xd0);
  uVar1 = *(uint *)(*(long *)(*(long *)(lVar3 + 0x68) + 0x98) + 0x110);
  if (param_3 < 6) {
    lVar4 = 0;
  }
  else if (param_3 < 0xc) {
    lVar4 = 2;
  }
  else if (param_3 < 0x12) {
    lVar4 = 1;
  }
  else if (param_3 < 0x18) {
    lVar4 = 3;
  }
  else {
    lVar4 = (ulong)(param_3 < 0x1e) << 2;
  }
  if ((uVar1 < 3) && ((&PTR_DAT_041b80e8)[(int)uVar1][lVar4] == '\0')) {
    FUN_00923c30();
    uVar2 = FUN_0092877c();
  }
  else {
    uVar2 = FUN_00934430(lVar3);
  }
  *(undefined1 *)(param_1 + 0xb1) = uVar2;
  return;
}


