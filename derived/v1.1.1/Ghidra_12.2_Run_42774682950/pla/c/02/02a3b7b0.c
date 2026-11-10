/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b7b0; name: FUN_02a3b7b0
 */


void FUN_02a3b7b0(long param_1,long param_2,uint param_3,undefined1 param_4,undefined1 param_5,
                 ulong param_6,uint param_7)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  
  bVar4 = *(byte *)(param_2 + 0x7d);
  uVar8 = (ulong)bVar4;
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + uVar8 * 8 +
                       0x120);
      uVar1 = (uint)*(ushort *)(lVar7 + 0x74) * 0x10000;
      iVar3 = 0;
      if (param_3 * -0x10000 <= uVar1) {
        iVar3 = uVar1 + param_3 * 0x10000;
      }
      *(short *)(lVar7 + 0x74) = (short)((uint)iVar3 >> 0x10);
      if (iVar3 == 0) {
        *(undefined1 *)(lVar7 + 0x2b0) = param_4;
        *(undefined1 *)(lVar7 + 0x2b1) = param_5;
      }
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),1,*(undefined1 *)(param_2 + 0x7d),param_5,
                   -param_3 & 0xffff,param_4);
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x74) + param_3;
    uVar2 = *(ushort *)(param_2 + 0x72);
    if ((uVar1 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x72)) {
      uVar2 = (ushort)uVar1;
    }
    *(ushort *)(param_2 + 0x74) = uVar2;
    if ((param_7 & 1) == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0xa9;
    }
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),uVar5,uVar8,param_3 & 0xffff);
  }
  if (((param_6 & 1) == 0) ||
     ((((pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8), *pcVar6 == '\0' ||
        (pcVar6[2] != bVar4)) && ((pcVar6[3] == '\0' || (pcVar6[5] != bVar4)))) &&
      ((((pcVar6[6] == '\0' || (pcVar6[8] != bVar4)) &&
        ((pcVar6[9] == '\0' || (pcVar6[0xb] != bVar4)))) &&
       (((pcVar6[0xc] == '\0' || (pcVar6[0xe] != bVar4)) &&
        ((pcVar6[0xf] == '\0' || (pcVar6[0x11] != bVar4)))))))))) {
    return;
  }
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x7d,uVar8);
  return;
}


