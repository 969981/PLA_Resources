/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a214d0; name: FUN_02a214d0
 */


undefined8 FUN_02a214d0(long param_1,byte param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte local_58 [4];
  undefined4 local_54;
  uint uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x70) + 0x20);
  if (lVar2 == 0) {
    uVar4 = 0;
    if (param_2 != 0) {
      return 0;
    }
  }
  else {
    uVar4 = *(uint *)(lVar2 + 0xc);
    if (uVar4 != param_2) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x1060) + 0x10) + 8) + (ulong)param_2 * 8
                   + 0x120);
  if (*(short *)(lVar3 + 0x74) != 0) {
    *(byte *)(lVar3 + 900) = *(byte *)(lVar3 + 900) | 0x80;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xfe0) + 0x20);
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xfe0) + 0x10) + 8) + (ulong)param_2 * 8 +
                   0x120);
  cVar1 = *(char *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + (ulong)param_2 * 8 + 0x120) +
                   0x38f) + '\x01';
  *(char *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar2 + 0x7d) * 8 + 0x120) + 0x38f) = cVar1;
  FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x33,*(undefined1 *)(lVar2 + 0x7d),3,cVar1);
  local_58[1] = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_54 = 0x8200ac;
  local_58[0] = param_2;
  uStack_50 = uVar4;
  FUN_029e54ac(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xde0),auStack_28,local_58);
  return 1;
}


