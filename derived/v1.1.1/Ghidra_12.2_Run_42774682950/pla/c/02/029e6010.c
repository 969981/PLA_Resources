/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e6010; name: FUN_029e6010
 */


byte FUN_029e6010(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  char local_a0 [8];
  byte local_98 [8];
  long local_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  byte local_7c;
  undefined2 local_7a;
  undefined4 local_78;
  byte local_74;
  byte local_73;
  undefined8 local_70;
  byte local_68;
  byte *local_60;
  byte local_58;
  
  bVar3 = param_2[1];
  pbVar1 = (byte *)0x0;
  if (param_2[0x27] != 0) {
    pbVar1 = param_2 + 0x2c;
  }
  if (bVar3 == 0) {
    bVar8 = 0;
  }
  else if (param_2[0x27] == 0) {
    uVar7 = 0;
    bVar8 = 0;
    do {
      pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
      bVar3 = param_2[uVar7 + 2];
      if ((((((*pcVar5 != '\0') && (pcVar5[2] == bVar3)) ||
            ((pcVar5[3] != '\0' && (pcVar5[5] == bVar3)))) ||
           ((pcVar5[6] != '\0' && (pcVar5[8] == bVar3)))) ||
          ((pcVar5[9] != '\0' && (pcVar5[0xb] == bVar3)))) ||
         (((pcVar5[0xc] != '\0' && (pcVar5[0xe] == bVar3)) ||
          ((pcVar5[0xf] != '\0' && (pcVar5[0x11] == bVar3)))))) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
        lVar6 = *(long *)(lVar4 + (ulong)bVar3 * 8 + 0x120);
        if (*(short *)(lVar6 + 0x74) != 0) {
          if (param_2[0x29] == 0) {
            if ((ulong)*param_2 == 0x1f) {
              local_73 = 0;
            }
            else {
              local_73 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(lVar4 + (ulong)*param_2 * 8 + 0x120),lVar6,0);
            }
          }
          else {
            local_73 = 1;
          }
          local_98[0] = *param_2;
          local_88 = *(undefined4 *)(param_2 + 8);
          local_80 = *(undefined4 *)(param_2 + 0x10);
          local_7c = param_2[0x14];
          local_7a = *(undefined2 *)(param_2 + 0x16);
          local_78 = *(undefined4 *)(param_2 + 0x18);
          local_74 = param_2[0x25];
          local_58 = param_2[0x28];
          iStack_84 = (int)(char)param_2[0xc];
          local_73 = local_73 & 1;
          local_68 = param_2[0x24] ^ 1;
          local_70 = 0;
          local_90 = lVar6;
          local_60 = pbVar1;
          FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_a0,local_98);
          if (local_a0[0] != '\0') {
            FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_2 + 0x2c);
            bVar8 = 1;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2[1]);
  }
  else {
    uVar7 = 0;
    bVar8 = 0;
    do {
      pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
      bVar2 = param_2[uVar7 + 2];
      if (((((*pcVar5 != '\0') && (pcVar5[2] == bVar2)) ||
           ((pcVar5[3] != '\0' && (pcVar5[5] == bVar2)))) ||
          ((pcVar5[6] != '\0' && (pcVar5[8] == bVar2)))) ||
         (((pcVar5[9] != '\0' && (pcVar5[0xb] == bVar2)) ||
          (((pcVar5[0xc] != '\0' && (pcVar5[0xe] == bVar2)) ||
           ((pcVar5[0xf] != '\0' && (pcVar5[0x11] == bVar2)))))))) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
        lVar6 = *(long *)(lVar4 + (ulong)bVar2 * 8 + 0x120);
        if (*(short *)(lVar6 + 0x74) != 0) {
          if (param_2[0x29] == 0) {
            if ((ulong)*param_2 == 0x1f) {
              local_73 = 0;
            }
            else {
              local_73 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(lVar4 + (ulong)*param_2 * 8 + 0x120),lVar6,0);
            }
          }
          else {
            local_73 = 1;
          }
          local_98[0] = *param_2;
          local_88 = *(undefined4 *)(param_2 + 8);
          local_80 = *(undefined4 *)(param_2 + 0x10);
          local_7c = param_2[0x14];
          local_7a = *(undefined2 *)(param_2 + 0x16);
          local_78 = *(undefined4 *)(param_2 + 0x18);
          local_74 = param_2[0x25];
          local_58 = param_2[0x28];
          iStack_84 = (int)(char)param_2[0xc];
          local_73 = local_73 & 1;
          local_68 = param_2[0x24] ^ 1;
          local_70 = 0;
          local_90 = lVar6;
          local_60 = pbVar1;
          FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_a0,local_98);
          bVar8 = bVar8 | local_a0[0] != '\0';
          bVar3 = param_2[1];
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < bVar3);
  }
  return bVar8;
}


