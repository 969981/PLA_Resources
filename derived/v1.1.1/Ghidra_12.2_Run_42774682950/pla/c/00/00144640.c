/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00144640; name: FUN_00144640
 */


int FUN_00144640(byte *param_1,byte *param_2,uint *param_3,undefined8 param_4,byte *param_5,
                long param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  ulong uVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  long lVar24;
  undefined1 auStack_8c [8];
  uint uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  uVar18 = *(uint *)(param_7 + 2);
  if (0xbfff < uVar18) {
    puVar15 = (uint *)((long)param_7 + 0x14);
    uVar17 = *puVar15;
    if (0xbfff < uVar17) {
      puVar15 = (uint *)(param_7 + 3);
      uVar17 = *puVar15;
      if (2 < uVar17 >> 0xe) {
        puVar15 = (uint *)((long)param_7 + 0x1c);
        uVar17 = *puVar15;
        if (0xbfff < uVar17) {
          *(undefined4 *)(param_7 + 2) = 4;
          goto LAB_001446c0;
        }
      }
    }
    *(uint *)(param_7 + 2) = uVar17;
    *puVar15 = uVar18;
  }
LAB_001446c0:
  local_68 = 0xffffffff;
  local_70 = param_3 + 1;
  uVar17 = (*param_3 & 0xff00ff00) >> 8;
  uVar18 = uVar17 | (*param_3 & 0xff00ff) << 8;
  uVar13 = uVar18 >> 0x10;
  uVar18 = uVar13 | uVar18 << 0x10;
  uVar3 = *param_7;
  uVar4 = param_7[1];
  local_80 = param_7[2];
  local_78 = param_7[3];
  pbVar22 = param_1;
  local_64 = uVar18;
  if (param_9 == 0) {
    uVar5 = *(ushort *)(param_7 + 0x18);
    uVar6 = *(ushort *)((long)param_7 + 0xc2);
    iVar12 = (uint)uVar6 + (uint)uVar5;
    local_68 = iVar12 * 0x1ffff;
    local_64 = uVar18 + iVar12 * -0x1ffff;
    if (uVar18 < local_68) {
      *(ushort *)((long)param_7 + 0xc2) = uVar6 + (short)(0x4000 - uVar6 >> 6);
      *(ushort *)(param_7 + 0x18) = uVar5 + (short)(0x4000 - uVar5 >> 3);
      local_64 = uVar18;
      if (local_68 >> 0x18 == 0) {
        local_68 = iVar12 * 0x1ffff00;
        local_70 = (uint *)((long)param_3 + 5);
        local_64 = (uint)(byte)param_3[1] | (uVar13 | uVar17 << 0x10) << 8;
        if (local_68 >> 0x18 == 0) {
          local_68 = iVar12 * -0x10000;
          local_70 = (uint *)((long)param_3 + 6);
          local_64 = (uint)*(byte *)((long)param_3 + 5) |
                     ((uint)(byte)param_3[1] | uVar13 << 8) << 8;
        }
      }
      bVar8 = FUN_00147fa0(param_7 + 0x34,&local_64,&local_68,&local_70,0);
    }
    else {
      uVar18 = ~local_68;
      *(ushort *)(param_7 + 0x18) = uVar5 - (uVar5 >> 3);
      *(ushort *)((long)param_7 + 0xc2) = uVar6 - (uVar6 >> 6);
      if (local_68 >> 0x18 < 0xff) {
        bVar8 = 0;
        local_68 = uVar18;
      }
      else {
        local_70 = (uint *)((long)param_3 + 5);
        uVar17 = local_64 * 0x100;
        local_64 = (byte)param_3[1] | uVar17;
        bVar8 = 0;
        local_68 = uVar18 << 8;
        if ((uVar18 >> 0x10 & 0xff) == 0) {
          local_70 = (uint *)((long)param_3 + 6);
          local_64 = (uint)*(byte *)((long)param_3 + 5) |
                     ((uint)(byte)param_3[1] | uVar17 & 0xffff00) << 8;
          local_68 = uVar18 << 0x10;
        }
      }
    }
    param_9 = 1;
    pbVar22 = param_1 + 1;
    *param_1 = bVar8;
  }
  pbVar2 = param_5 + param_6;
  lVar24 = 5;
  pbVar23 = pbVar2;
  if (pbVar22 != param_5) {
    pbVar23 = pbVar22;
  }
  uVar9 = (ulong)pbVar23[-1];
  do {
    while( true ) {
      while( true ) {
        uVar20 = param_9 & 7 | lVar24 << 3;
        puVar21 = (ushort *)((long)param_7 + uVar20 * 4 + 0x20);
        uVar5 = *puVar21;
        puVar19 = (ushort *)((long)param_7 + uVar20 * 4 + 0x22);
        uVar6 = *puVar19;
        uVar17 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        uVar18 = local_64 - uVar17;
        if (uVar17 <= local_64) break;
        *puVar21 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar19 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar15 = local_70;
        local_68 = uVar17;
        if (uVar17 >> 0x18 == 0) {
          local_68 = uVar17 * 0x100;
          uVar18 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar18;
          puVar15 = (uint *)((long)local_70 + 1);
          if ((uVar17 >> 0x10 & 0xff) == 0) {
            local_68 = uVar17 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
            puVar15 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar15;
        pbVar14 = pbVar22 + -(local_80 & 0xffffffff);
        pbVar23 = pbVar14 + param_6;
        if (param_5 <= pbVar14) {
          pbVar23 = pbVar14;
        }
        uVar9 = FUN_00147fa0(param_7 + (uVar9 >> 4 & 0x3ffffffffffffc | param_9 & 3) * 0x80 + 0x34,
                             &local_64,&local_68,&local_70,*pbVar23);
        param_9 = param_9 + 1;
        lVar24 = (long)*(int *)(&UNK_039c59b0 + lVar24 * 4);
        pbVar23 = pbVar22 + 1;
        *pbVar22 = (byte)uVar9;
        pbVar22 = pbVar23;
        if (param_2 <= pbVar23) goto LAB_00145764;
      }
      local_68 = local_68 - uVar17;
      *puVar21 = uVar5 - (uVar5 >> 3);
      *puVar19 = uVar6 - (uVar6 >> 6);
      uVar17 = local_68;
      local_64 = uVar18;
      if (local_68 >> 0x18 == 0) {
        uVar17 = local_68 * 0x100;
        uVar18 = uVar18 * 0x100;
        local_64 = (byte)*local_70 | uVar18;
        if ((local_68 >> 0x10 & 0xff) == 0) {
          uVar17 = local_68 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
          local_70 = (uint *)((long)local_70 + 2);
        }
        else {
          local_70 = (uint *)((long)local_70 + 1);
        }
      }
      uVar9 = param_9 & 3 | lVar24 << 2;
      puVar19 = (ushort *)((long)param_7 + uVar9 * 4 + 0x41a0);
      puVar21 = (ushort *)((long)param_7 + uVar9 * 4 + 0x41a2);
      uVar5 = *puVar19;
      uVar6 = *puVar21;
      uVar13 = ((uint)uVar6 + (uint)uVar5) * (uVar17 >> 0xf);
      uVar18 = local_64 - uVar13;
      if (uVar13 <= local_64) break;
      *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
      *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
      uVar18 = uVar13;
      if (uVar13 >> 0x18 == 0) {
        uVar18 = uVar13 * 0x100;
        uVar17 = local_64 << 8;
        local_64 = (byte)*local_70 | uVar17;
        if ((uVar13 >> 0x10 & 0xff) == 0) {
          uVar18 = uVar13 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
          local_70 = (uint *)((long)local_70 + 2);
        }
        else {
          local_70 = (uint *)((long)local_70 + 1);
        }
      }
      puVar19 = (ushort *)((long)param_7 + uVar9 * 4 + 0x44a0);
      puVar21 = (ushort *)((long)param_7 + uVar9 * 4 + 0x44a2);
      uVar5 = *puVar19;
      uVar6 = *puVar21;
      uVar13 = ((uint)uVar6 + (uint)uVar5) * (uVar18 >> 0xf);
      uVar17 = local_64 - uVar13;
      if (local_64 < uVar13) {
        *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar15 = local_70;
        local_68 = uVar13;
        if (uVar13 >> 0x18 == 0) {
          local_68 = uVar13 * 0x100;
          uVar18 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar18;
          puVar15 = (uint *)((long)local_70 + 1);
          if ((uVar13 >> 0x10 & 0xff) == 0) {
            local_68 = uVar13 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
            puVar15 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar15;
        lVar10 = FUN_00149640((long)param_7 + 0x47c6,&local_64,&local_68,&local_70);
        lVar11 = lVar10 + 5;
        if (2 < lVar11) {
          lVar11 = 3;
        }
        puVar19 = (ushort *)((long)param_7 + lVar11 * 4 + 0x4844);
        puVar21 = (ushort *)((long)param_7 + lVar11 * 4 + 0x4846);
        uVar5 = *puVar19;
        uVar6 = *puVar21;
        uVar17 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        uVar20 = lVar10 + 8;
        uVar18 = local_64 - uVar17;
        if (local_64 < uVar17) {
          *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
          *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
          puVar15 = local_70;
          local_68 = uVar17;
          if (uVar17 >> 0x18 == 0) {
            local_68 = uVar17 * 0x100;
            uVar18 = local_64 << 8;
            local_64 = (byte)*local_70 | uVar18;
            puVar15 = (uint *)((long)local_70 + 1);
            if ((uVar17 >> 0x10 & 0xff) == 0) {
              local_68 = uVar17 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
              puVar15 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar15;
          lVar11 = FUN_0014a710((long)param_7 + lVar11 * 0x100 + 0x4914,&local_64,&local_68,
                                &local_70);
          uVar9 = FUN_0014aac0((long)param_7 + 0x4894,&local_64,&local_68,&local_70);
          uVar9 = uVar9 | lVar11 << 6;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          iVar12 = (int)uVar9 + -0x1f;
          if (0 < (long)uVar20) {
            pbVar23 = pbVar22 + (0x1f - uVar9);
            pbVar14 = pbVar23 + param_6;
            if (param_5 <= pbVar23) {
              pbVar14 = pbVar23;
            }
            uVar9 = uVar20 & 3;
            if (lVar10 + 7U < 3) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              do {
                pbVar23 = pbVar22 + lVar11;
                *pbVar23 = *pbVar14;
                lVar11 = lVar11 + 4;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[1] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
                pbVar23[2] = *pbVar14;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[3] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
              } while (uVar20 - uVar9 != lVar11);
            }
            if (uVar9 != 0) {
              lVar10 = -uVar9;
              pbVar23 = pbVar22 + lVar11;
              do {
                pbVar16 = pbVar14 + 1;
                *pbVar23 = *pbVar14;
                pbVar14 = param_5;
                if (pbVar16 != pbVar2) {
                  pbVar14 = pbVar16;
                }
                lVar10 = lVar10 + 1;
                pbVar23 = pbVar23 + 1;
              } while (lVar10 != 0);
            }
          }
        }
        else {
          uVar17 = local_68 - uVar17;
          *puVar19 = uVar5 - (uVar5 >> 3);
          *puVar21 = uVar6 - (uVar6 >> 6);
          puVar15 = local_70;
          local_68 = uVar17;
          local_64 = uVar18;
          if (uVar17 >> 0x18 == 0) {
            local_68 = uVar17 * 0x100;
            uVar18 = uVar18 * 0x100;
            local_64 = (byte)*local_70 | uVar18;
            puVar15 = (uint *)((long)local_70 + 1);
            if ((uVar17 >> 0x10 & 0xff) == 0) {
              local_68 = uVar17 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
              puVar15 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar15;
          uVar9 = FUN_0014a0c0((long)param_7 + 0x4854,&local_64,&local_68,&local_70);
          iVar12 = (int)uVar9 + 1;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          if (0 < (long)uVar20) {
            pbVar23 = pbVar22 + ~uVar9;
            pbVar14 = pbVar23 + param_6;
            if (param_5 <= pbVar23) {
              pbVar14 = pbVar23;
            }
            uVar9 = uVar20 & 3;
            if (lVar10 + 7U < 3) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              do {
                pbVar23 = pbVar22 + lVar11;
                *pbVar23 = *pbVar14;
                lVar11 = lVar11 + 4;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[1] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
                pbVar23[2] = *pbVar14;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[3] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
              } while (uVar20 - uVar9 != lVar11);
            }
            if (uVar9 != 0) {
              lVar10 = -uVar9;
              pbVar23 = pbVar22 + lVar11;
              do {
                pbVar16 = pbVar14 + 1;
                *pbVar23 = *pbVar14;
                pbVar14 = param_5;
                if (pbVar16 != pbVar2) {
                  pbVar14 = pbVar16;
                }
                lVar10 = lVar10 + 1;
                pbVar23 = pbVar23 + 1;
              } while (lVar10 != 0);
            }
          }
        }
      }
      else {
        uVar18 = uVar18 - uVar13;
        *puVar19 = uVar5 - (uVar5 >> 3);
        *puVar21 = uVar6 - (uVar6 >> 6);
        puVar15 = local_70;
        local_68 = uVar18;
        local_64 = uVar17;
        if (uVar18 >> 0x18 == 0) {
          local_68 = uVar18 * 0x100;
          uVar17 = uVar17 * 0x100;
          local_64 = (byte)*local_70 | uVar17;
          puVar15 = (uint *)((long)local_70 + 1);
          if ((uVar18 >> 0x10 & 0xff) == 0) {
            local_68 = uVar18 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
            puVar15 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar15;
        lVar10 = FUN_00148f20((long)param_7 + (param_9 & 3) * 0x12 + 0x4700,&local_64,&local_68,
                              &local_70);
        lVar11 = lVar10;
        if (2 < lVar10) {
          lVar11 = 3;
        }
        puVar19 = (ushort *)((long)param_7 + lVar11 * 4 + 0x4844);
        puVar21 = (ushort *)((long)param_7 + lVar11 * 4 + 0x4846);
        uVar5 = *puVar19;
        uVar6 = *puVar21;
        uVar17 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        uVar20 = lVar10 + 3;
        uVar18 = local_64 - uVar17;
        if (local_64 < uVar17) {
          *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
          *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
          puVar15 = local_70;
          local_68 = uVar17;
          if (uVar17 >> 0x18 == 0) {
            local_68 = uVar17 * 0x100;
            uVar18 = local_64 << 8;
            local_64 = (byte)*local_70 | uVar18;
            puVar15 = (uint *)((long)local_70 + 1);
            if ((uVar17 >> 0x10 & 0xff) == 0) {
              local_68 = uVar17 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
              puVar15 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar15;
          lVar11 = FUN_0014a710((long)param_7 + lVar11 * 0x100 + 0x4914,&local_64,&local_68,
                                &local_70);
          uVar9 = FUN_0014aac0((long)param_7 + 0x4894,&local_64,&local_68,&local_70);
          uVar9 = uVar9 | lVar11 << 6;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          iVar12 = (int)uVar9 + -0x1f;
          if (0 < (long)uVar20) {
            pbVar23 = pbVar22 + (0x1f - uVar9);
            pbVar14 = pbVar23 + param_6;
            if (param_5 <= pbVar23) {
              pbVar14 = pbVar23;
            }
            uVar9 = uVar20 & 3;
            if (lVar10 + 2U < 3) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              do {
                pbVar23 = pbVar22 + lVar11;
                *pbVar23 = *pbVar14;
                lVar11 = lVar11 + 4;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[1] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
                pbVar23[2] = *pbVar14;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[3] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
              } while (uVar20 - uVar9 != lVar11);
            }
            if (uVar9 != 0) {
              lVar10 = -uVar9;
              pbVar23 = pbVar22 + lVar11;
              do {
                pbVar16 = pbVar14 + 1;
                *pbVar23 = *pbVar14;
                pbVar14 = param_5;
                if (pbVar16 != pbVar2) {
                  pbVar14 = pbVar16;
                }
                lVar10 = lVar10 + 1;
                pbVar23 = pbVar23 + 1;
              } while (lVar10 != 0);
            }
          }
        }
        else {
          uVar17 = local_68 - uVar17;
          *puVar19 = uVar5 - (uVar5 >> 3);
          *puVar21 = uVar6 - (uVar6 >> 6);
          puVar15 = local_70;
          local_68 = uVar17;
          local_64 = uVar18;
          if (uVar17 >> 0x18 == 0) {
            local_68 = uVar17 * 0x100;
            uVar18 = uVar18 * 0x100;
            local_64 = (byte)*local_70 | uVar18;
            puVar15 = (uint *)((long)local_70 + 1);
            if ((uVar17 >> 0x10 & 0xff) == 0) {
              local_68 = uVar17 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
              puVar15 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar15;
          uVar9 = FUN_0014a0c0((long)param_7 + 0x4854,&local_64,&local_68,&local_70);
          iVar12 = (int)uVar9 + 1;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          if (0 < (long)uVar20) {
            pbVar23 = pbVar22 + ~uVar9;
            pbVar14 = pbVar23 + param_6;
            if (param_5 <= pbVar23) {
              pbVar14 = pbVar23;
            }
            uVar9 = uVar20 & 3;
            if (lVar10 + 2U < 3) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              do {
                pbVar23 = pbVar22 + lVar11;
                *pbVar23 = *pbVar14;
                lVar11 = lVar11 + 4;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[1] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
                pbVar23[2] = *pbVar14;
                pbVar16 = param_5;
                if (pbVar14 + 1 != pbVar2) {
                  pbVar16 = pbVar14 + 1;
                }
                pbVar23[3] = *pbVar16;
                pbVar14 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar14 = pbVar16 + 1;
                }
              } while (uVar20 - uVar9 != lVar11);
            }
            if (uVar9 != 0) {
              lVar10 = -uVar9;
              pbVar23 = pbVar22 + lVar11;
              do {
                pbVar16 = pbVar14 + 1;
                *pbVar23 = *pbVar14;
                pbVar14 = param_5;
                if (pbVar16 != pbVar2) {
                  pbVar14 = pbVar16;
                }
                lVar10 = lVar10 + 1;
                pbVar23 = pbVar23 + 1;
              } while (lVar10 != 0);
            }
          }
        }
      }
      uVar7 = local_80._4_4_;
      local_80 = CONCAT44((undefined4)local_80,iVar12);
      local_78 = CONCAT44((undefined4)local_78,uVar7);
      pbVar23 = pbVar22 + uVar20;
      if (param_2 <= pbVar23) goto LAB_00145764;
LAB_00144870:
      uVar9 = (ulong)pbVar23[-1];
      param_9 = uVar20 + param_9;
      pbVar22 = pbVar23;
    }
    uVar17 = uVar17 - uVar13;
    *puVar19 = uVar5 - (uVar5 >> 3);
    *puVar21 = uVar6 - (uVar6 >> 6);
    uVar13 = uVar17;
    local_64 = uVar18;
    if (uVar17 >> 0x18 == 0) {
      uVar13 = uVar17 * 0x100;
      uVar18 = uVar18 * 0x100;
      local_64 = (byte)*local_70 | uVar18;
      if ((uVar17 >> 0x10 & 0xff) == 0) {
        uVar13 = uVar17 * 0x10000;
        local_64 = (uint)*(byte *)((long)local_70 + 1) |
                   ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
        local_70 = (uint *)((long)local_70 + 2);
      }
      else {
        local_70 = (uint *)((long)local_70 + 1);
      }
    }
    pbVar14 = pbVar22 + -(local_80 & 0xffffffff);
    pbVar23 = pbVar14 + param_6;
    if (param_5 <= pbVar14) {
      pbVar23 = pbVar14;
    }
    bVar8 = *pbVar23;
    uVar9 = (ulong)bVar8;
    uVar20 = lVar24 << 3 | (ulong)(bVar8 >> 5);
    puVar19 = (ushort *)((long)param_7 + uVar20 * 4 + 0x4320);
    puVar21 = (ushort *)((long)param_7 + uVar20 * 4 + 0x4322);
    uVar5 = *puVar19;
    uVar6 = *puVar21;
    uVar17 = ((uint)uVar6 + (uint)uVar5) * (uVar13 >> 0xf);
    uVar18 = local_64 - uVar17;
    if (local_64 < uVar17) {
      *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
      *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
      puVar15 = local_70;
      local_68 = uVar17;
      if (uVar17 >> 0x18 == 0) {
        local_68 = uVar17 * 0x100;
        uVar18 = local_64 << 8;
        local_64 = (byte)*local_70 | uVar18;
        puVar15 = (uint *)((long)local_70 + 1);
        if ((uVar17 >> 0x10 & 0xff) == 0) {
          local_68 = uVar17 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
          puVar15 = (uint *)((long)local_70 + 2);
        }
      }
      local_70 = puVar15;
      lVar10 = FUN_00148ab0(param_7 + lVar24 * 2 + 0x84c,&local_64,&local_68,&local_70);
      lVar11 = lVar10 * 4;
      uVar17 = *(uint *)(auStack_8c + lVar11 + 0xc);
      *(uint *)(auStack_8c + lVar11 + 0xc) = *(uint *)(auStack_8c + lVar11 + 8);
      *(undefined8 *)(auStack_8c + lVar11 + 4) = *(undefined8 *)(auStack_8c + lVar11);
      uVar9 = (ulong)((uint)lVar10 | (int)param_9 << 2) & 0xf;
      puVar19 = (ushort *)((long)param_7 + uVar9 * 4 + 0x4560);
      local_80 = CONCAT44(local_80._4_4_,uVar17);
      puVar21 = (ushort *)((long)param_7 + uVar9 * 4 + 0x4562);
      uVar5 = *puVar19;
      uVar6 = *puVar21;
      uVar13 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
      uVar18 = local_64 - uVar13;
      if (local_64 < uVar13) {
        *puVar19 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar15 = local_70;
        local_68 = uVar13;
        if (uVar13 >> 0x18 == 0) {
          local_68 = uVar13 * 0x100;
          uVar18 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar18;
          puVar15 = (uint *)((long)local_70 + 1);
          if ((uVar13 >> 0x10 & 0xff) == 0) {
            local_68 = uVar13 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar18 & 0xffffff) << 8;
            puVar15 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar15;
        lVar11 = FUN_00149640(param_7 + 0x8e9,&local_64,&local_68,&local_70);
        uVar20 = lVar11 + 8;
        if (0 < (long)uVar20) {
          pbVar14 = pbVar22 + -(ulong)uVar17;
          pbVar23 = pbVar14 + param_6;
          if (param_5 <= pbVar14) {
            pbVar23 = pbVar14;
          }
          uVar9 = uVar20 & 3;
          if (lVar11 + 7U < 3) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            do {
              pbVar14 = pbVar22 + lVar11;
              *pbVar14 = *pbVar23;
              lVar11 = lVar11 + 4;
              pbVar16 = param_5;
              if (pbVar23 + 1 != pbVar2) {
                pbVar16 = pbVar23 + 1;
              }
              pbVar14[1] = *pbVar16;
              pbVar23 = param_5;
              if (pbVar16 + 1 != pbVar2) {
                pbVar23 = pbVar16 + 1;
              }
              pbVar14[2] = *pbVar23;
              pbVar16 = param_5;
              if (pbVar23 + 1 != pbVar2) {
                pbVar16 = pbVar23 + 1;
              }
              pbVar14[3] = *pbVar16;
              pbVar23 = param_5;
              if (pbVar16 + 1 != pbVar2) {
                pbVar23 = pbVar16 + 1;
              }
            } while (uVar20 - uVar9 != lVar11);
          }
          if (uVar9 != 0) {
            lVar10 = -uVar9;
            pbVar14 = pbVar22 + lVar11;
            do {
              pbVar16 = pbVar23 + 1;
              *pbVar14 = *pbVar23;
              pbVar23 = param_5;
              if (pbVar16 != pbVar2) {
                pbVar23 = pbVar16;
              }
              lVar10 = lVar10 + 1;
              pbVar14 = pbVar14 + 1;
            } while (lVar10 != 0);
          }
        }
      }
      else {
        uVar13 = local_68 - uVar13;
        *puVar19 = uVar5 - (uVar5 >> 3);
        *puVar21 = uVar6 - (uVar6 >> 6);
        puVar15 = local_70;
        local_68 = uVar13;
        local_64 = uVar18;
        if (uVar13 >> 0x18 == 0) {
          local_68 = uVar13 * 0x100;
          uVar18 = uVar18 * 0x100;
          local_64 = (byte)*local_70 | uVar18;
          puVar15 = (uint *)((long)local_70 + 1);
          if ((uVar13 >> 0x10 & 0xff) == 0) {
            local_68 = uVar13 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
            puVar15 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar15;
        lVar11 = FUN_00148db0((long)param_7 + uVar9 * 0x16 + 0x45a0,&local_64,&local_68,&local_70);
        uVar20 = lVar11 + 2;
        if (0 < (long)uVar20) {
          pbVar14 = pbVar22 + -(ulong)uVar17;
          pbVar23 = pbVar14 + param_6;
          if (param_5 <= pbVar14) {
            pbVar23 = pbVar14;
          }
          uVar9 = uVar20 & 3;
          if (lVar11 + 1U < 3) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            do {
              pbVar14 = pbVar22 + lVar11;
              *pbVar14 = *pbVar23;
              lVar11 = lVar11 + 4;
              pbVar16 = param_5;
              if (pbVar23 + 1 != pbVar2) {
                pbVar16 = pbVar23 + 1;
              }
              pbVar14[1] = *pbVar16;
              pbVar23 = param_5;
              if (pbVar16 + 1 != pbVar2) {
                pbVar23 = pbVar16 + 1;
              }
              pbVar14[2] = *pbVar23;
              pbVar16 = param_5;
              if (pbVar23 + 1 != pbVar2) {
                pbVar16 = pbVar23 + 1;
              }
              pbVar14[3] = *pbVar16;
              pbVar23 = param_5;
              if (pbVar16 + 1 != pbVar2) {
                pbVar23 = pbVar16 + 1;
              }
            } while (uVar20 - uVar9 != lVar11);
          }
          if (uVar9 != 0) {
            lVar10 = -uVar9;
            pbVar14 = pbVar22 + lVar11;
            do {
              pbVar16 = pbVar23 + 1;
              *pbVar14 = *pbVar23;
              pbVar23 = param_5;
              if (pbVar16 != pbVar2) {
                pbVar23 = pbVar16;
              }
              lVar10 = lVar10 + 1;
              pbVar14 = pbVar14 + 1;
            } while (lVar10 != 0);
          }
        }
      }
      bVar1 = lVar24 < 7;
      lVar24 = 0xb;
      if (bVar1) {
        lVar24 = 8;
      }
      pbVar23 = pbVar22 + uVar20;
      if (pbVar23 < param_2) goto LAB_00144870;
      break;
    }
    uVar13 = uVar13 - uVar17;
    *puVar19 = uVar5 - (uVar5 >> 3);
    *puVar21 = uVar6 - (uVar6 >> 6);
    puVar15 = local_70;
    local_68 = uVar13;
    local_64 = uVar18;
    if (uVar13 >> 0x18 == 0) {
      local_68 = uVar13 * 0x100;
      uVar18 = uVar18 * 0x100;
      local_64 = (byte)*local_70 | uVar18;
      puVar15 = (uint *)((long)local_70 + 1);
      if ((uVar13 >> 0x10 & 0xff) == 0) {
        local_68 = uVar13 * 0x10000;
        local_64 = (uint)*(byte *)((long)local_70 + 1) |
                   ((uint)(byte)*local_70 | uVar18 & 0xffff00) << 8;
        puVar15 = (uint *)((long)local_70 + 2);
      }
    }
    local_70 = puVar15;
    pbVar23 = pbVar22 + 1;
    *pbVar22 = bVar8;
    param_9 = param_9 + 1;
    bVar1 = lVar24 < 7;
    lVar24 = 0xb;
    if (bVar1) {
      lVar24 = 9;
    }
    pbVar22 = pbVar23;
  } while (pbVar23 < param_2);
LAB_00145764:
  if (pbVar23 == param_2) {
    iVar12 = 1;
    if (local_68 < 0x2000001) {
      iVar12 = 2;
    }
    iVar12 = (-4 - (int)param_3) + (int)local_70 + iVar12;
    param_7[2] = local_80;
    param_7[3] = local_78;
    *param_7 = uVar3;
    param_7[1] = uVar4;
  }
  else {
    FUN_0010a430();
    if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
      (**(code **)PTR_PTR_043722f8)
                (0,"v:/devel/projects/oodle2/core/lzadecompresssub.inl",0x1c6,
                 "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
    }
    FUN_0010a450();
    iVar12 = -1;
  }
  return iVar12;
}


