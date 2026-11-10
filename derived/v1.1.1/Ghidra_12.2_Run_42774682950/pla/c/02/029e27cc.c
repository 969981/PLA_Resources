/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e27cc; name: FUN_029e27cc
 */


void FUN_029e27cc(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined1 auStack_68 [8];
  uint5 local_60;
  undefined3 uStack_5b;
  uint local_58;
  undefined2 local_54;
  byte *local_50;
  byte local_48;
  undefined1 local_47;
  
  *param_2 = 0;
  pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar3 = param_3[1];
  if (((((*pcVar5 == '\0') || (pcVar5[2] != bVar3)) && ((pcVar5[3] == '\0' || (pcVar5[5] != bVar3)))
       ) && (((pcVar5[6] == '\0' || (pcVar5[8] != bVar3)) &&
             ((pcVar5[9] == '\0' || (pcVar5[0xb] != bVar3)))))) &&
     ((pcVar5[0xc] == '\0' || (pcVar5[0xe] != bVar3)))) {
    if (pcVar5[0xf] == '\0') {
      return;
    }
    if (pcVar5[0x11] != bVar3) {
      return;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  lVar6 = *(long *)(lVar4 + (ulong)bVar3 * 8 + 0x120);
  if ((ulong)*param_3 == 0x1f) {
    lVar4 = 0;
    sVar2 = *(short *)(lVar6 + 0x74);
  }
  else {
    lVar4 = *(long *)(lVar4 + (ulong)*param_3 * 8 + 0x120);
    sVar2 = *(short *)(lVar6 + 0x74);
  }
  if (sVar2 == 0) {
    return;
  }
  if ((param_3[6] != 0) && ((*(byte *)(lVar6 + 0x387) & 0x78) != 0)) {
    return;
  }
  bVar3 = FUN_029719b8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x17a0) + 0x38),lVar6,
                       *(undefined2 *)(param_3 + 2),param_3[4]);
  bVar3 = bVar3 & 1;
  if (((param_3[8] != 0) && (lVar4 != 0)) && (*(char *)(lVar4 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar4 + 0x7d),0);
  }
  if ((param_3[9] == 2) || ((bVar3 & param_3[9] == 1) != 0)) {
    local_60 = (uint5)*(uint *)(param_3 + 10);
    local_58 = 0;
    FUN_02a00c54(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x19e0),auStack_68,&local_60);
  }
  if (bVar3 == 0) {
    FUN_02983bc8(*(undefined8 *)(param_1 + 0x38),lVar6,param_3[4],param_3[5]);
    bVar1 = param_3[8];
  }
  else {
    local_50 = param_3 + 0x10;
    local_48 = param_3[7] ^ 1;
    local_54 = *(undefined2 *)(param_3 + 4);
    local_47 = 1;
    local_58 = (uint)*(ushort *)(param_3 + 2);
    _local_60 = lVar6;
    FUN_029f6330(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17c0),auStack_68,&local_60);
    bVar1 = param_3[8];
  }
  if (((bVar1 != 0) && (lVar4 != 0)) && (*(char *)(lVar4 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  *param_2 = bVar3;
  return;
}


