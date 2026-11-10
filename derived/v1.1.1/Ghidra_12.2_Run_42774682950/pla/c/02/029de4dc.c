/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029de4dc; name: FUN_029de4dc
 */


void FUN_029de4dc(long param_1,int *param_2,ulong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  byte *pbVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined2 *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  uint uVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  byte bVar32;
  int *piVar33;
  byte bVar34;
  undefined2 local_1e8;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined2 uStack_13e;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  ulong local_e8;
  ulong uStack_e0;
  undefined2 *local_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined1 local_c0;
  ulong local_b8;
  ulong local_98;
  long *plStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  
  *param_2 = 0;
  if (1 < *(byte *)((long)param_3[4] + 0x5b)) {
    pcVar15 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    cVar2 = *(char *)(*(long *)param_3[4] + 0x7d);
    if ((*pcVar15 == '\0') || (pcVar15[2] != cVar2)) {
      if ((pcVar15[3] == '\0') || (pcVar15[5] != cVar2)) {
        if ((pcVar15[6] == '\0') || (pcVar15[8] != cVar2)) {
          if ((pcVar15[9] == '\0') || (pcVar15[0xb] != cVar2)) {
            if ((pcVar15[0xc] == '\0') || (pcVar15[0xe] != cVar2)) {
              if ((pcVar15[0xf] == '\0') || (pcVar15[0x11] != cVar2)) {
                uVar10 = 6;
              }
              else {
                uVar10 = 5;
              }
            }
            else {
              uVar10 = 4;
            }
          }
          else {
            uVar10 = 3;
          }
        }
        else {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 0;
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(undefined1 *)(lVar16 + (ulong)*(byte *)(lVar16 + 0x1c8) * 0x40 + 0x1d) = uVar10;
  }
  bVar5 = FUN_029979c4(*(undefined8 *)(param_1 + 0x38),*param_3);
  *(byte *)(param_3[6] + 8) = ~bVar5 & 1;
  *(byte *)(param_3[6] + 9) = ~bVar5 & 1;
  local_138 = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  pbVar11 = (byte *)param_3[6];
  if (*pbVar11 == 0) goto LAB_029defc8;
  uVar7 = *param_3;
  puVar30 = (undefined8 *)((ulong)&local_e8 | 4);
  bVar34 = 0;
  bVar32 = 0;
  iVar29 = 0;
  uVar6 = 0;
  puVar31 = (undefined8 *)((ulong)&local_1e8 | 4);
  do {
    if ((*(byte *)(uVar7 + 0x98) & 7) == 0) {
      if ((*(byte *)(uVar7 + 0xa0) & 7) == 0) {
        if ((*(byte *)(uVar7 + 0xa8) & 7) == 0) {
          if ((*(byte *)(uVar7 + 0xb0) & 7) == 0) {
            iVar13 = 5;
            if ((*(byte *)(uVar7 + 0xb8) & 7) == 0) {
              if ((*(byte *)(uVar7 + 0xc0) & 7) == 0) {
                iVar13 = 0;
                if ((*(byte *)(uVar7 + 200) & 7) != 0) {
                  iVar13 = 7;
                }
              }
              else {
                iVar13 = 6;
              }
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
    plVar17 = (long *)param_3[4];
    bVar3 = *(byte *)((long)plVar17 + 0x5a);
    uVar22 = (ulong)bVar3;
    if (bVar3 != 0) {
      plVar27 = plVar17;
LAB_029de740:
      if (*(short *)(*plVar27 + 0x74) == 0) goto LAB_029de734;
      pcVar15 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
      cVar2 = *(char *)(*plVar27 + 0x7d);
      if ((((((*pcVar15 == '\0') || (pcVar15[2] != cVar2)) &&
            ((pcVar15[3] == '\0' || (pcVar15[5] != cVar2)))) &&
           ((pcVar15[6] == '\0' || (pcVar15[8] != cVar2)))) &&
          ((pcVar15[9] == '\0' || (pcVar15[0xb] != cVar2)))) &&
         (((pcVar15[0xc] == '\0' || (pcVar15[0xe] != cVar2)) &&
          ((pcVar15[0xf] == '\0' || (pcVar15[0x11] != cVar2)))))) goto LAB_029de734;
      uVar26 = 0;
      uVar28 = 0;
      if (bVar3 == 0) goto LAB_029de7f8;
LAB_029de898:
      lVar16 = plVar17[uVar26];
      if (*(short *)(lVar16 + 0x74) != 0) goto LAB_029de804;
      while (uVar28 <= uVar6) {
        while( true ) {
          uVar4 = 0;
          uVar21 = (uint)bVar3;
          if (uVar21 != 0) {
            uVar4 = (uVar26 + 1) / uVar21;
          }
          uVar26 = (uVar26 + 1) - uVar4 * uVar21;
          if (uVar26 < uVar21) goto LAB_029de898;
LAB_029de7f8:
          lVar16 = 0;
          if (sRam0000000000000074 == 0) break;
LAB_029de804:
          cVar2 = *(char *)(lVar16 + 0x7d);
          if ((((*pcVar15 == '\0') || (pcVar15[2] != cVar2)) &&
              (((pcVar15[3] == '\0' || (pcVar15[5] != cVar2)) &&
               ((pcVar15[6] == '\0' || (pcVar15[8] != cVar2)))))) &&
             (((pcVar15[9] == '\0' || (pcVar15[0xb] != cVar2)) &&
              (((pcVar15[0xc] == '\0' || (pcVar15[0xe] != cVar2)) &&
               ((pcVar15[0xf] == '\0' || (pcVar15[0x11] != cVar2)))))))) {
            iVar14 = 0;
          }
          else {
            iVar14 = 1;
          }
          uVar28 = iVar14 + uVar28;
          if (uVar6 < uVar28) goto LAB_029de8ac;
        }
      }
LAB_029de8ac:
      if ((bVar3 <= uVar26) || (lVar16 = plVar17[uVar26], lVar16 == 0)) goto LAB_029de680;
      if (uVar6 == 0) {
        puVar12 = *(uint **)(param_1 + 0x18);
        uVar28 = *puVar12;
        local_168 = 0;
        local_160 = 0;
        local_178 = 0;
        local_170 = 0;
        local_188 = 0;
        local_180 = 0;
        local_198 = 0;
        local_190 = 0;
        FUN_02a3e7b8(puVar12,0x7f,6,&local_198);
        uVar26 = *puVar12;
        iVar14 = (int)((ulong)uVar28 & 0xffff);
        *(undefined1 *)((long)puVar12 + ((ulong)uVar28 & 0xffff) + 8) = 0;
        *(undefined1 *)((long)puVar12 + (ulong)(iVar14 + 1) + 8) = 0xab;
        *(char *)((long)puVar12 + (ulong)(iVar14 + 2) + 8) = (char)(uVar26 - uVar28) + -3;
        *puVar12 = iVar14 + (uVar26 - uVar28 & 0xff);
        *(short *)(param_2 + 1) = (short)uVar28;
        uVar28 = *puVar12;
        local_168 = 0;
        local_160 = 0;
        local_178 = 0;
        local_170 = 0;
        local_188 = 0;
        local_180 = 0;
        local_198 = 0;
        local_190 = 0;
        FUN_02a3e7b8(puVar12,0x6e,0x19,&local_198);
        uVar26 = *puVar12;
        iVar14 = (int)((ulong)uVar28 & 0xffff);
        *(undefined1 *)((long)puVar12 + ((ulong)uVar28 & 0xffff) + 8) = 0;
        *(undefined1 *)((long)puVar12 + (ulong)(iVar14 + 1) + 8) = 0xab;
        *(char *)((long)puVar12 + (ulong)(iVar14 + 2) + 8) = (char)(uVar26 - uVar28) + -3;
        *puVar12 = iVar14 + (uVar26 - uVar28 & 0xff);
        *(short *)((long)param_2 + 6) = (short)uVar28;
LAB_029deae8:
        local_1e8 = 0;
        puVar31[8] = 0;
        uStack_158 = 0;
        local_170 = 0;
        local_180 = 0;
        local_178 = 0;
        local_190 = 0;
        local_188 = 0;
        plStack_90 = &local_198;
        local_150 = 0;
        local_168 = 0;
        local_160 = 0;
        uStack_13e = 0x101;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        puVar31[4] = 0;
        puVar31[5] = 0;
        puVar31[6] = 0;
        puVar31[7] = 0;
        local_98 = *param_3;
        local_88 = param_3[2];
        uStack_80 = param_3[3];
        if ((((byte *)param_3[6])[3] == 0) && (1 < *(byte *)param_3[6])) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        local_78 = 0x400;
        if (!(bool)(uVar6 != 0 & bVar3)) {
          local_78 = 0x1000;
        }
        if (uVar6 == 0) {
          local_70 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x108);
        }
        else {
          local_70 = 0;
        }
        local_e8 = local_e8 & 0xffffffffffff0000;
        puVar30[8] = 0;
        *puVar30 = 0;
        puVar30[1] = 0;
        puVar30[2] = 0;
        puVar30[3] = 0;
        puVar30[4] = 0;
        puVar30[5] = 0;
        puVar30[6] = 0;
        puVar30[7] = 0;
        local_198 = lVar16;
        FUN_029d1af0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x160),&local_e8,&local_98);
        local_1e8 = (undefined2)local_e8;
        uVar9 = puVar30[2];
        uVar8 = puVar30[3];
        uVar1 = puVar30[1];
        *puVar31 = *puVar30;
        puVar31[1] = uVar1;
        uVar24 = puVar30[4];
        puVar31[2] = uVar9;
        puVar31[3] = uVar8;
        uVar9 = puVar30[7];
        puVar31[8] = puVar30[8];
        uVar8 = puVar30[5];
        uVar1 = puVar30[6];
        puVar31[4] = uVar24;
        puVar31[5] = uVar8;
        puVar31[6] = uVar1;
        puVar31[7] = uVar9;
        uStack_d0 = param_3[2];
        local_e8 = *param_3;
        uStack_e0 = param_3[1];
        local_b8 = param_3[5];
        local_c8 = param_3[6];
        local_c0 = 0;
        local_d8 = &local_1e8;
        FUN_029dd0d4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x900),&local_98,&local_e8);
        *param_2 = *param_2 + (int)local_98;
        if (((uint)local_1e8._1_1_ + (uint)(byte)local_1e8 != 0) &&
           ((uint)bVar32 + (uint)bVar34 + (uint)(byte)local_1e8 + (uint)local_1e8._1_1_ < 7)) {
          uVar7 = 0;
          puVar23 = puVar31;
          do {
            uVar9 = *puVar23;
            uVar28 = *(uint *)(puVar23 + 1);
            *(uint *)((long)&local_12c + ((ulong)bVar32 + (ulong)bVar34) * 0xc) = uVar28;
            *(undefined8 *)((long)&local_134 + ((ulong)bVar32 + (ulong)bVar34) * 0xc) = uVar9;
            if (((uVar28 >> 8 & 0xff) >> 3 & 1) == 0) {
              bVar32 = bVar32 + 1;
            }
            else {
              bVar34 = bVar34 + 1;
              local_138 = CONCAT11(bVar34,(undefined1)local_138);
            }
            uVar7 = uVar7 + 1;
            puVar23 = (undefined8 *)((long)puVar23 + 0xc);
          } while (uVar7 < (ulong)local_1e8._1_1_ + (ulong)(byte)local_1e8);
        }
        puVar12 = *(uint **)(param_1 + 0x18);
        uVar28 = *puVar12;
        *(undefined1 *)((long)puVar12 + (ulong)uVar28 + 8) = 0;
        iVar29 = iVar29 + 1;
        *(undefined1 *)((long)puVar12 + (ulong)(uVar28 + 1) + 8) = 0xad;
        *(undefined1 *)((long)puVar12 + (ulong)(uVar28 + 2) + 8) = 1;
        *puVar12 = uVar28 + 4;
        *(undefined1 *)((long)puVar12 + (ulong)(uVar28 + 3) + 8) = 0;
        if (*(short *)(lVar16 + 0x74) != 0) {
          lVar18 = *(long *)(*(long *)(param_1 + 0x60) + 800);
          lVar16 = *(long *)(*(long *)(*(long *)(lVar18 + 0x10) + 8) +
                             (ulong)*(byte *)(lVar16 + 0x7d) * 8 + 0x120);
          if (*(short *)(lVar16 + 0x76) != 0) {
            FUN_029825a0(*(undefined8 *)(lVar18 + 0x38),lVar16,1);
          }
        }
        uVar7 = *param_3;
        if (*(short *)(uVar7 + 0x74) != 0) {
          pcVar15 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
          uVar22 = param_3[4];
          cVar2 = *(char *)(uVar7 + 0x7d);
          if ((((((*pcVar15 != '\0') && (pcVar15[2] == cVar2)) ||
                ((pcVar15[3] != '\0' && (pcVar15[5] == cVar2)))) ||
               ((pcVar15[6] != '\0' && (pcVar15[8] == cVar2)))) ||
              ((pcVar15[9] != '\0' && (pcVar15[0xb] == cVar2)))) ||
             (((pcVar15[0xc] != '\0' && (pcVar15[0xe] == cVar2)) ||
              ((pcVar15[0xf] != '\0' && (pcVar15[0x11] == cVar2)))))) {
            uVar25 = (ulong)*(byte *)(uVar22 + 0x5a);
            if (uVar25 != 0) {
              uVar20 = uVar25 & 3;
              if (uVar25 - 1 < 3) {
                lVar16 = 0;
                iVar14 = 0;
              }
              else {
                lVar16 = 0;
                iVar14 = 0;
                plVar17 = (long *)(uVar22 + 0x10);
                do {
                  lVar16 = lVar16 + 4;
                  if (*(short *)(plVar17[-2] + 0x74) != 0) {
                    iVar14 = iVar14 + 1;
                  }
                  if (*(short *)(plVar17[-1] + 0x74) != 0) {
                    iVar14 = iVar14 + 1;
                  }
                  if (*(short *)(*plVar17 + 0x74) != 0) {
                    iVar14 = iVar14 + 1;
                  }
                  if (*(short *)(plVar17[1] + 0x74) != 0) {
                    iVar14 = iVar14 + 1;
                  }
                  plVar17 = plVar17 + 4;
                } while (uVar25 - uVar20 != lVar16);
              }
              if ((*(byte *)(uVar22 + 0x5a) & 3) != 0) {
                plVar17 = (long *)(uVar22 + lVar16 * 8);
                do {
                  if (*(short *)(*plVar17 + 0x74) != 0) {
                    iVar14 = iVar14 + 1;
                  }
                  uVar20 = uVar20 - 1;
                  plVar17 = plVar17 + 1;
                } while (uVar20 != 0);
              }
              if ((iVar14 != 0) &&
                 (((iVar13 == 2 || ((*(byte *)(uVar7 + 0x98) & 7) != 0)) ||
                  ((*(byte *)(uVar7 + 0xa0) & 7) == 0)))) goto LAB_029de680;
            }
          }
        }
      }
      else {
        if (pbVar11[2] == 0) {
LAB_029de8f4:
          if ((pbVar11[3] != 0) || (*pbVar11 < 2)) {
            lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 8);
            pcVar15 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
            cVar2 = *(char *)(lVar16 + 0x7d);
            if ((*pcVar15 == '\0') || (pcVar15[2] != cVar2)) {
              if ((pcVar15[3] == '\0') || (pcVar15[5] != cVar2)) {
                if ((pcVar15[6] == '\0') || (pcVar15[8] != cVar2)) {
                  if ((pcVar15[9] == '\0') || (pcVar15[0xb] != cVar2)) {
                    if ((pcVar15[0xc] == '\0') || (pcVar15[0xe] != cVar2)) {
                      if ((pcVar15[0xf] == '\0') || (uVar9 = 5, pcVar15[0x11] != cVar2)) {
                        uVar9 = 6;
                      }
                    }
                    else {
                      uVar9 = 4;
                    }
                  }
                  else {
                    uVar9 = 3;
                  }
                }
                else {
                  uVar9 = 2;
                }
              }
              else {
                uVar9 = 1;
              }
            }
            else {
              uVar9 = 0;
            }
            puVar19 = (undefined2 *)param_3[2];
            FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6e,
                         *(undefined1 *)(lVar18 + (ulong)*(byte *)(lVar18 + 0x1c8) * 0x40 + 0x1c),
                         uVar9,*puVar19,*(undefined1 *)(puVar19 + 5),0,7,0,
                         *(undefined1 *)(puVar19 + 0x10),*(undefined1 *)(puVar19 + 10));
          }
          goto LAB_029deae8;
        }
        uVar7 = FUN_0297eb68(*(undefined8 *)(param_1 + 0x38),uVar7,lVar16,param_3[2],0,0);
        if ((uVar7 & 1) != 0) {
          pbVar11 = (byte *)param_3[6];
          goto LAB_029de8f4;
        }
      }
      break;
    }
LAB_029de680:
    pbVar11 = (byte *)param_3[6];
    uVar6 = uVar6 + 1;
  } while (uVar6 < *pbVar11);
  local_138 = CONCAT11(local_138._1_1_,bVar32);
  if (iVar29 == 0 || ((bVar5 ^ 0xff) & 1) != 0) goto LAB_029defc8;
  if (*(char *)(param_3[6] + 9) == '\0') {
    iVar13 = *(int *)(param_3[6] + 4);
    if (iVar13 < 7) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar8 = 0x23f;
    }
    else {
      if (iVar13 == 7) goto LAB_029def00;
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar8 = 0x23e;
    }
    FUN_02a3fa08(uVar9,0x9c,uVar8,0xffff0000);
  }
LAB_029def00:
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x204,iVar29,0xffff0000);
  if ((uint)bVar34 + (uint)bVar32 != 0) {
    uVar7 = 0;
    piVar33 = (int *)((long)&local_134 + 4);
    do {
      if (7 < *piVar33) {
        lVar16 = *(long *)(param_1 + 0x10);
        lVar18 = *(long *)(param_1 + 0x20);
        uVar10 = *(undefined1 *)((long)piVar33 + -2);
        FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar16);
        uVar6 = FUN_02957720(*(undefined8 *)(lVar16 + 0x188),8,uVar10,0,0);
        if (-1 < (int)uVar6) {
          uVar6 = uVar6 & 0xff;
          if (uVar6 < 10) {
            *(undefined1 *)
             (*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0x10) + 0x188) + (ulong)uVar6 + 0x10) =
                 1;
          }
          FUN_02a3e6b8(*(undefined8 *)(lVar18 + 0x18),0x6d,(ulong)uVar6,8);
        }
      }
      uVar7 = uVar7 + 1;
      piVar33 = piVar33 + 3;
    } while (uVar7 < (uint)bVar32 + (uint)bVar34);
  }
LAB_029defc8:
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x89,0x60);
  if (*(char *)(param_3[6] + 8) == '\0') {
    *(undefined1 *)(param_3[4] + 0x5c) = 0;
    uVar7 = param_3[4];
    bVar5 = *(byte *)(uVar7 + 0x5c);
    if (bVar5 < *(byte *)(uVar7 + 0x5a)) {
      *(byte *)(uVar7 + 0x5c) = bVar5 + 1;
      lVar16 = *(long *)(uVar7 + (ulong)bVar5 * 8);
      while (lVar16 != 0) {
        if (*(short *)(lVar16 + 0x74) == 0) {
          bVar5 = *(byte *)(lVar16 + 0x7d);
          uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
          if (bVar5 < 6) {
            lVar16 = 0;
          }
          else if (bVar5 < 0xc) {
            lVar16 = 2;
          }
          else if (bVar5 < 0x12) {
            lVar16 = 1;
          }
          else if (bVar5 < 0x18) {
            lVar16 = 3;
          }
          else {
            lVar16 = (ulong)(bVar5 < 0x1e) << 2;
          }
          if ((uVar6 < 3) && ((&PTR_DAT_04277998)[(int)uVar6][lVar16] == '\x01')) {
            FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0,bVar5,0xffff0000);
          }
        }
        uVar7 = param_3[4];
        bVar5 = *(byte *)(uVar7 + 0x5c);
        if (*(byte *)(uVar7 + 0x5a) <= bVar5) {
          return;
        }
        *(byte *)(uVar7 + 0x5c) = bVar5 + 1;
        lVar16 = *(long *)(uVar7 + (ulong)bVar5 * 8);
      }
    }
  }
  return;
LAB_029de734:
  uVar22 = uVar22 - 1;
  plVar27 = plVar27 + 1;
  if (uVar22 == 0) goto LAB_029de680;
  goto LAB_029de740;
}


