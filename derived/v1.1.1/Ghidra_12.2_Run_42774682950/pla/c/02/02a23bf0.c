/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a23bf0; name: FUN_02a23bf0
 */


bool FUN_02a23bf0(long *param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  size_t __n;
  ulong uVar15;
  ulong local_118;
  byte local_110 [4];
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined6 uStack_f0;
  undefined1 uStack_ea;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  byte local_c0 [32];
  long local_a0 [5];
  char local_78 [24];
  
  lVar6 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x20);
  uVar14 = 0;
  if (lVar6 != 0) {
    uVar14 = *(uint *)(lVar6 + 0xc);
  }
  if (uVar14 != param_2) {
    return false;
  }
  lVar6 = 0;
  local_a0[0] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  if (5 < param_2) {
    if (param_2 < 0xc) {
      lVar6 = 2;
    }
    else if (param_2 < 0x12) {
      lVar6 = 1;
    }
    else if (param_2 < 0x18) {
      lVar6 = 3;
    }
    else {
      lVar6 = (ulong)(param_2 < 0x1e) << 2;
    }
  }
  uVar3 = FUN_02949cec(*(undefined4 *)(*param_1 + 0x110),
                       *(undefined1 *)(*(long *)(*param_1 + 0x58) + 0x55),0);
  local_118 = 0;
  uVar14 = *(uint *)(*param_1 + 0x110);
  if ((uVar3 & 1) != 0) {
    if ((uVar14 < 3) && ((&PTR_DAT_0427c9a8)[(int)uVar14][lVar6] != '\0')) {
      local_118 = 0;
    }
    else {
      local_a0[0] = *(long *)(param_1[1] + 8) + 8;
      local_118 = 1;
    }
  }
  uVar3 = FUN_02949cec((long)(int)uVar14,*(undefined1 *)(*(long *)(*param_1 + 0x58) + 0x55),1);
  lVar8 = *param_1;
  uVar14 = *(uint *)(lVar8 + 0x110);
  if (((uVar3 & 1) != 0) && ((2 < uVar14 || ((&PTR_DAT_0427c9a8)[(int)uVar14][lVar6] == '\x01')))) {
    local_a0[local_118] = *(long *)(param_1[1] + 8) + 0x40;
    local_118 = (ulong)((int)local_118 + 1);
  }
  uVar3 = FUN_02949cec((long)(int)uVar14,*(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x55),2);
  lVar8 = *param_1;
  iVar13 = *(int *)(lVar8 + 0x110);
  if ((uVar3 & 1) != 0) {
    cVar5 = '\x02';
    puVar10 = &DAT_03a7ebe0;
    if ((iVar13 == 0) || (iVar13 == 2)) {
LAB_02a23da8:
      if (puVar10[lVar6] != cVar5) goto LAB_02a23dd4;
    }
    else if (iVar13 == 1) {
      cVar5 = '\0';
      puVar10 = &DAT_03a7ebe5;
      goto LAB_02a23da8;
    }
    local_a0[local_118] = *(long *)(param_1[1] + 8) + 0x78;
    local_118 = (ulong)((int)local_118 + 1);
  }
LAB_02a23dd4:
  uVar3 = FUN_02949cec(iVar13,*(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x55),3);
  lVar8 = *param_1;
  iVar13 = *(int *)(lVar8 + 0x110);
  if ((uVar3 & 1) != 0) {
    cVar5 = '\x02';
    puVar10 = &DAT_03a7ebe0;
    if ((iVar13 == 0) || (iVar13 == 2)) {
LAB_02a23e24:
      if (puVar10[lVar6] != cVar5) goto LAB_02a23e50;
    }
    else if (iVar13 == 1) {
      cVar5 = '\x01';
      puVar10 = &DAT_03a7ebe5;
      goto LAB_02a23e24;
    }
    local_a0[local_118] = *(long *)(param_1[1] + 8) + 0xb0;
    local_118 = (ulong)((int)local_118 + 1);
  }
LAB_02a23e50:
  uVar3 = FUN_02949cec(iVar13,*(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x55),4);
  if (((uVar3 & 1) == 0) ||
     ((*(uint *)(*param_1 + 0x110) < 3 &&
      ((&PTR_DAT_0427c9a8)[(int)*(uint *)(*param_1 + 0x110)][lVar6] != '\x02')))) {
    if ((int)local_118 == 0) goto LAB_02a24124;
  }
  else {
    local_a0[local_118] = *(long *)(param_1[1] + 8) + 0xe8;
    local_118 = (ulong)((int)local_118 + 1);
  }
  uVar3 = 0;
  __n = 0;
  do {
    lVar6 = local_a0[uVar3];
    uVar12 = (ulong)*(byte *)(lVar6 + 0x30);
    if (uVar12 != 0) {
      uVar15 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(lVar6 + uVar15 * 8) + 0x7d);
        pcVar7 = *(char **)(param_1[1] + 0xa8);
        uVar14 = (uint)bVar2;
        if ((*pcVar7 == '\0') || (pcVar7[2] != bVar2)) {
          if ((pcVar7[3] == '\0') || (pcVar7[5] != bVar2)) {
            if ((pcVar7[6] == '\0') || (pcVar7[8] != bVar2)) {
              if ((pcVar7[9] == '\0') || (pcVar7[0xb] != bVar2)) {
                if ((pcVar7[0xc] == '\0') || ((byte)pcVar7[0xe] != uVar14)) {
                  if ((pcVar7[0xf] == '\0') || (iVar13 = 5, (byte)pcVar7[0x11] != uVar14)) {
                    iVar13 = 6;
                  }
                }
                else {
                  iVar13 = 4;
                }
              }
              else {
                iVar13 = 3;
              }
            }
            else {
              iVar13 = 2;
            }
          }
          else {
            iVar13 = 1;
          }
        }
        else {
          iVar13 = 0;
        }
        uVar4 = FUN_02947978(*param_1,iVar13);
        if ((iVar13 == 6) || ((uVar4 & 1) == 0)) {
LAB_02a24050:
          lVar8 = *(long *)(*(long *)(param_1[1] + 8) + (ulong)bVar2 * 8 + 0x120);
          if ((lVar8 != 0) &&
             ((((((*(byte *)(lVar8 + 0x98) & 7) != 0 || ((*(byte *)(lVar8 + 0xa0) & 7) != 0)) ||
                ((*(byte *)(lVar8 + 0xa8) & 7) != 0)) ||
               (((*(byte *)(lVar8 + 0xb0) & 7) != 0 || ((*(byte *)(lVar8 + 0xb8) & 7) != 0)))) ||
              (((*(byte *)(lVar8 + 0xc0) & 7) != 0 || ((*(byte *)(lVar8 + 200) & 7) != 0)))))) {
            local_c0[__n] = bVar2;
            __n = (size_t)((int)__n + 1);
          }
        }
        else {
          lVar8 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x30);
          if ((lVar8 != 0) && (uVar1 = *(uint *)(lVar8 + 0xc), uVar1 != 0)) {
            uVar9 = 0;
            do {
              if ((uVar9 & 0xff) < uVar1) {
                uVar11 = (uVar9 & 0xff) + 6;
                if (uVar11 < 0x82) {
                  lVar8 = *(long *)(*(long *)(param_1[6] + 0x70) + (ulong)uVar11 * 8 + 8);
                  uVar11 = 0;
                  if (lVar8 != 0) {
                    uVar11 = *(uint *)(lVar8 + 0xc) & 0xff;
                  }
                  goto joined_r0x02a24030;
                }
                if (uVar14 == 0) goto LAB_02a24050;
              }
              else {
                uVar11 = 0x1f;
joined_r0x02a24030:
                if (uVar14 == uVar11) goto LAB_02a24050;
              }
              uVar9 = uVar9 + 1;
            } while (uVar1 != uVar9);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar12);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != local_118);
  if ((int)__n != 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    local_c8 = 0;
    uStack_ea = (undefined1)__n;
    local_10c = 0x35;
    local_100 = 0;
    uStack_f8 = 0;
    local_f1 = 0;
    local_110[0] = param_2;
    memcpy(&local_108,local_c0,__n);
    FUN_029da128(*(undefined8 *)(param_1[4] + 0xb40),local_78,local_110);
    return local_78[0] != '\0';
  }
LAB_02a24124:
  lVar6 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x2d0);
  if (((lVar6 == 0) || (1 < *(byte *)(lVar6 + 10))) ||
     (*(undefined4 *)(lVar6 + 0xc) = 1, *(byte *)(lVar6 + 10) != 1)) {
    return false;
  }
  *(undefined1 *)(lVar6 + 10) = 2;
  return false;
}


