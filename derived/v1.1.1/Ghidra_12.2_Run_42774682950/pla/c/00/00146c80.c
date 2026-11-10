/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00146c80; name: FUN_00146c80
 */


int FUN_00146c80(byte *param_1,byte *param_2,uint *****param_3,long param_4,byte *param_5,
                long param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  byte *pbVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  ushort *puVar20;
  ulong uVar21;
  uint uVar22;
  ushort *puVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *****pppppuVar28;
  uint *****local_f8;
  undefined1 auStack_dc [8];
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [16];
  uint *****local_78;
  uint local_70;
  uint local_6c [3];
  
  uVar5 = *(uint *)(param_7 + 2);
  if (0xbfff < uVar5) {
    puVar17 = (uint *)((long)param_7 + 0x14);
    uVar22 = *puVar17;
    if (0xbfff < uVar22) {
      puVar17 = (uint *)(param_7 + 3);
      uVar22 = *puVar17;
      if (2 < uVar22 >> 0xe) {
        puVar17 = (uint *)((long)param_7 + 0x1c);
        uVar22 = *puVar17;
        if (0xbfff < uVar22) {
          *(undefined4 *)(param_7 + 2) = 4;
          goto joined_r0x00146d48;
        }
      }
    }
    *(uint *)(param_7 + 2) = uVar22;
    *puVar17 = uVar5;
  }
joined_r0x00146d48:
  if (param_3 < (uint *****)(param_4 + -0x20)) {
    pppppuVar28 = (uint *****)(param_4 + -0x20);
    uVar5 = (*(uint *)param_3 & 0xff00ff00) >> 8 | (*(uint *)param_3 & 0xff00ff) << 8;
    local_6c[0] = uVar5 >> 0x10 | uVar5 << 0x10;
    local_f8 = (uint *****)0x0;
    pppppuVar11 = param_3;
  }
  else {
    memcpy(local_b8,param_3,param_4 - (long)param_3);
    pppppuVar11 = (uint *****)local_b8;
    pppppuVar28 = (uint *****)&local_78;
    uVar5 = (local_b8[0] & 0xff00ff00) >> 8 | (local_b8[0] & 0xff00ff) << 8;
    local_6c[0] = uVar5 >> 0x10 | uVar5 << 0x10;
    local_f8 = param_3;
  }
  local_78 = (uint *****)((long)pppppuVar11 + 4);
  pppppuVar10 = local_78;
  local_70 = 0xffffffff;
  uVar3 = *param_7;
  uVar4 = param_7[1];
  local_d0 = param_7[2];
  local_c8 = param_7[3];
  pbVar26 = param_1;
  if (param_9 == 0) {
    uVar6 = *(ushort *)(param_7 + 0x18);
    uVar7 = *(ushort *)((long)param_7 + 0xc2);
    iVar15 = (uint)uVar7 + (uint)uVar6;
    local_70 = iVar15 * 0x1ffff;
    uVar5 = local_6c[0] + iVar15 * -0x1ffff;
    if (local_6c[0] < local_70) {
      *(ushort *)((long)param_7 + 0xc2) = uVar7 + (short)(0x4000 - uVar7 >> 6);
      *(ushort *)(param_7 + 0x18) = uVar6 + (short)(0x4000 - uVar6 >> 3);
      if (local_70 >> 0x18 == 0) {
        local_70 = iVar15 * 0x1ffff00;
        local_78 = (uint *****)((long)pppppuVar11 + 5);
        uVar22 = (uint)*(byte *)pppppuVar10;
        uVar5 = local_6c[0] << 8;
        local_6c[0] = uVar22 | uVar5;
        if (local_70 >> 0x18 == 0) {
          local_70 = iVar15 * -0x10000;
          local_78 = (uint *****)((long)pppppuVar11 + 6);
          local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 5) | (uVar22 | uVar5 & 0xffffff) << 8;
        }
      }
      bVar12 = FUN_00147fa0(param_7 + 0x34,local_6c,&local_70,&local_78,0);
    }
    else {
      uVar22 = ~local_70;
      local_6c[0] = uVar5;
      *(ushort *)(param_7 + 0x18) = uVar6 - (uVar6 >> 3);
      *(ushort *)((long)param_7 + 0xc2) = uVar7 - (uVar7 >> 6);
      if (local_70 >> 0x18 < 0xff) {
        bVar12 = 0;
        local_70 = uVar22;
      }
      else {
        local_70 = uVar22 << 8;
        local_78 = (uint *****)((long)pppppuVar11 + 5);
        uVar19 = (uint)*(byte *)pppppuVar10;
        uVar5 = uVar5 * 0x100;
        bVar12 = 0;
        local_6c[0] = uVar19 | uVar5;
        if ((uVar22 >> 0x10 & 0xff) == 0) {
          local_70 = uVar22 << 0x10;
          local_78 = (uint *****)((long)pppppuVar11 + 6);
          local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 5) | (uVar19 | uVar5 & 0xffff00) << 8;
        }
      }
    }
    param_9 = 1;
    pbVar26 = param_1 + 1;
    *param_1 = bVar12;
  }
  pbVar2 = param_5 + param_6;
  pbVar27 = pbVar2;
  if (pbVar26 != param_5) {
    pbVar27 = pbVar26;
  }
  uVar24 = (ulong)pbVar27[-1];
  lVar25 = 5;
  do {
    while( true ) {
      while( true ) {
        pppppuVar11 = local_78;
        if (local_78 < pppppuVar28) {
        }
        else {
          memcpy(local_b8,local_78,param_4 - (long)local_78);
          local_f8 = pppppuVar11;
          pppppuVar28 = (uint *****)&local_78;
          local_78 = (uint *****)local_b8;
        }
        uVar19 = local_6c[0];
        pppppuVar11 = local_78;
        uVar21 = param_9 & 7 | lVar25 << 3;
        puVar23 = (ushort *)((long)param_7 + uVar21 * 4 + 0x20);
        uVar6 = *puVar23;
        puVar20 = (ushort *)((long)param_7 + uVar21 * 4 + 0x22);
        uVar7 = *puVar20;
        uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        uVar22 = local_6c[0] - uVar5;
        if (uVar5 <= local_6c[0]) break;
        *puVar23 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar20 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        local_70 = uVar5;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *****)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar19 << 8;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_70 = uVar5 * 0x10000;
            local_6c[0] = local_6c[0] << 8;
            local_78 = (uint *****)((long)pppppuVar11 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                          ((uint)*(byte *)pppppuVar11 | uVar19 << 8 & 0xffffff) << 8;
          }
        }
        pbVar16 = pbVar26 + -(local_d0 & 0xffffffff);
        pbVar27 = pbVar16 + param_6;
        if (param_5 <= pbVar16) {
          pbVar27 = pbVar16;
        }
        uVar24 = FUN_00147fa0(param_7 + (uVar24 >> 4 & 0x3ffffffffffffc | param_9 & 3) * 0x80 + 0x34
                              ,local_6c,&local_70,&local_78,*pbVar27);
        lVar25 = (long)*(int *)(&UNK_039c59b0 + lVar25 * 4);
        param_9 = param_9 + 1;
        pbVar27 = pbVar26 + 1;
        *pbVar26 = (byte)uVar24;
        pbVar26 = pbVar27;
        if (param_2 <= pbVar27) goto LAB_00147e58;
      }
      uVar5 = local_70 - uVar5;
      *puVar23 = uVar6 - (uVar6 >> 3);
      *puVar20 = uVar7 - (uVar7 >> 6);
      local_70 = uVar5;
      local_6c[0] = uVar22;
      if (uVar5 >> 0x18 == 0) {
        local_70 = uVar5 * 0x100;
        local_6c[0] = uVar22 * 0x100;
        local_78 = (uint *****)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar22 * 0x100;
        if ((uVar5 >> 0x10 & 0xff) == 0) {
          local_70 = uVar5 * 0x10000;
          local_6c[0] = local_6c[0] << 8;
          local_78 = (uint *****)((long)pppppuVar11 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                        ((uint)*(byte *)pppppuVar11 | uVar22 * 0x100 & 0xffff00) << 8;
        }
      }
      uVar19 = local_6c[0];
      pppppuVar11 = local_78;
      uVar24 = param_9 & 3 | lVar25 << 2;
      puVar20 = (ushort *)((long)param_7 + uVar24 * 4 + 0x41a0);
      puVar23 = (ushort *)((long)param_7 + uVar24 * 4 + 0x41a2);
      uVar6 = *puVar20;
      uVar7 = *puVar23;
      uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar22 = local_6c[0] - uVar5;
      if (uVar5 <= local_6c[0]) break;
      *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
      *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
      local_70 = uVar5;
      if (uVar5 >> 0x18 == 0) {
        local_70 = uVar5 * 0x100;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *****)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar19 << 8;
        if ((uVar5 >> 0x10 & 0xff) == 0) {
          local_70 = uVar5 * 0x10000;
          local_6c[0] = local_6c[0] << 8;
          local_78 = (uint *****)((long)pppppuVar11 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                        ((uint)*(byte *)pppppuVar11 | uVar19 << 8 & 0xffffff) << 8;
        }
      }
      uVar19 = local_6c[0];
      pppppuVar11 = local_78;
      puVar20 = (ushort *)((long)param_7 + uVar24 * 4 + 0x44a0);
      puVar23 = (ushort *)((long)param_7 + uVar24 * 4 + 0x44a2);
      uVar6 = *puVar20;
      uVar7 = *puVar23;
      uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar22 = local_6c[0] - uVar5;
      if (local_6c[0] < uVar5) {
        *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        local_70 = uVar5;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *****)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar19 << 8;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_6c[0] = local_6c[0] << 8;
            local_70 = uVar5 * 0x10000;
            local_78 = (uint *****)((long)pppppuVar11 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                          ((uint)*(byte *)pppppuVar11 | uVar19 << 8 & 0xffffff) << 8;
          }
        }
        lVar13 = FUN_00149640((long)param_7 + 0x47c6,local_6c,&local_70,&local_78);
        lVar14 = lVar13 + 5;
        if (2 < lVar14) {
          lVar14 = 3;
        }
        puVar20 = (ushort *)((long)param_7 + lVar14 * 4 + 0x4844);
        puVar23 = (ushort *)((long)param_7 + lVar14 * 4 + 0x4846);
        uVar6 = *puVar20;
        uVar7 = *puVar23;
        uVar22 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        uVar21 = lVar13 + 8;
        uVar5 = local_6c[0] - uVar22;
        if (local_6c[0] < uVar22) {
          *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
          *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
          pppppuVar11 = local_78;
          local_70 = uVar22;
          if (uVar22 >> 0x18 == 0) {
            local_70 = uVar22 * 0x100;
            uVar5 = local_6c[0] << 8;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppuVar11 = (uint *****)((long)local_78 + 1);
            if ((uVar22 >> 0x10 & 0xff) == 0) {
              local_70 = uVar22 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
              pppppuVar11 = (uint *****)((long)local_78 + 2);
            }
          }
          local_78 = pppppuVar11;
          lVar14 = FUN_0014a710((long)param_7 + lVar14 * 0x100 + 0x4914,local_6c,&local_70,&local_78
                               );
          uVar24 = FUN_0014aac0((long)param_7 + 0x4894,local_6c,&local_70,&local_78);
          uVar24 = uVar24 | lVar14 << 6;
          bVar1 = lVar25 < 7;
          lVar25 = 10;
          if (bVar1) {
            lVar25 = 7;
          }
          iVar15 = (int)uVar24 + -0x1f;
          if (0 < (long)uVar21) {
            pbVar27 = pbVar26 + (0x1f - uVar24);
            pbVar16 = pbVar27 + param_6;
            if (param_5 <= pbVar27) {
              pbVar16 = pbVar27;
            }
            uVar24 = uVar21 & 3;
            if (lVar13 + 7U < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              do {
                pbVar27 = pbVar26 + lVar14;
                *pbVar27 = *pbVar16;
                lVar14 = lVar14 + 4;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[1] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
                pbVar27[2] = *pbVar16;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[3] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
              } while (uVar21 - uVar24 != lVar14);
            }
            if (uVar24 != 0) {
              lVar13 = -uVar24;
              pbVar27 = pbVar26 + lVar14;
              do {
                pbVar18 = pbVar16 + 1;
                *pbVar27 = *pbVar16;
                pbVar16 = param_5;
                if (pbVar18 != pbVar2) {
                  pbVar16 = pbVar18;
                }
                lVar13 = lVar13 + 1;
                pbVar27 = pbVar27 + 1;
              } while (lVar13 != 0);
            }
          }
        }
        else {
          uVar22 = local_70 - uVar22;
          *puVar20 = uVar6 - (uVar6 >> 3);
          *puVar23 = uVar7 - (uVar7 >> 6);
          pppppuVar11 = local_78;
          local_70 = uVar22;
          local_6c[0] = uVar5;
          if (uVar22 >> 0x18 == 0) {
            local_70 = uVar22 * 0x100;
            uVar5 = uVar5 * 0x100;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppuVar11 = (uint *****)((long)local_78 + 1);
            if ((uVar22 >> 0x10 & 0xff) == 0) {
              local_70 = uVar22 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
              pppppuVar11 = (uint *****)((long)local_78 + 2);
            }
          }
          local_78 = pppppuVar11;
          uVar24 = FUN_0014a0c0((long)param_7 + 0x4854,local_6c,&local_70,&local_78);
          iVar15 = (int)uVar24 + 1;
          bVar1 = lVar25 < 7;
          lVar25 = 10;
          if (bVar1) {
            lVar25 = 7;
          }
          if (0 < (long)uVar21) {
            pbVar27 = pbVar26 + ~uVar24;
            pbVar16 = pbVar27 + param_6;
            if (param_5 <= pbVar27) {
              pbVar16 = pbVar27;
            }
            uVar24 = uVar21 & 3;
            if (lVar13 + 7U < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              do {
                pbVar27 = pbVar26 + lVar14;
                *pbVar27 = *pbVar16;
                lVar14 = lVar14 + 4;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[1] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
                pbVar27[2] = *pbVar16;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[3] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
              } while (uVar21 - uVar24 != lVar14);
            }
            if (uVar24 != 0) {
              lVar13 = -uVar24;
              pbVar27 = pbVar26 + lVar14;
              do {
                pbVar18 = pbVar16 + 1;
                *pbVar27 = *pbVar16;
                pbVar16 = param_5;
                if (pbVar18 != pbVar2) {
                  pbVar16 = pbVar18;
                }
                lVar13 = lVar13 + 1;
                pbVar27 = pbVar27 + 1;
              } while (lVar13 != 0);
            }
          }
        }
      }
      else {
        uVar5 = local_70 - uVar5;
        *puVar20 = uVar6 - (uVar6 >> 3);
        *puVar23 = uVar7 - (uVar7 >> 6);
        local_70 = uVar5;
        local_6c[0] = uVar22;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = uVar22 * 0x100;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *****)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar22 * 0x100;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_70 = uVar5 * 0x10000;
            local_6c[0] = local_6c[0] << 8;
            local_78 = (uint *****)((long)pppppuVar11 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                          ((uint)*(byte *)pppppuVar11 | uVar22 * 0x100 & 0xffff00) << 8;
          }
        }
        lVar13 = FUN_00148f20((long)param_7 + (param_9 & 3) * 0x12 + 0x4700,local_6c,&local_70,
                              &local_78);
        lVar14 = lVar13;
        if (2 < lVar13) {
          lVar14 = 3;
        }
        puVar20 = (ushort *)((long)param_7 + lVar14 * 4 + 0x4844);
        puVar23 = (ushort *)((long)param_7 + lVar14 * 4 + 0x4846);
        uVar6 = *puVar20;
        uVar7 = *puVar23;
        uVar22 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        uVar21 = lVar13 + 3;
        uVar5 = local_6c[0] - uVar22;
        if (local_6c[0] < uVar22) {
          *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
          *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
          pppppuVar11 = local_78;
          local_70 = uVar22;
          if (uVar22 >> 0x18 == 0) {
            local_70 = uVar22 * 0x100;
            uVar5 = local_6c[0] << 8;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppuVar11 = (uint *****)((long)local_78 + 1);
            if ((uVar22 >> 0x10 & 0xff) == 0) {
              local_70 = uVar22 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
              pppppuVar11 = (uint *****)((long)local_78 + 2);
            }
          }
          local_78 = pppppuVar11;
          lVar14 = FUN_0014a710((long)param_7 + lVar14 * 0x100 + 0x4914,local_6c,&local_70,&local_78
                               );
          uVar24 = FUN_0014aac0((long)param_7 + 0x4894,local_6c,&local_70,&local_78);
          uVar24 = uVar24 | lVar14 << 6;
          bVar1 = lVar25 < 7;
          lVar25 = 10;
          if (bVar1) {
            lVar25 = 7;
          }
          iVar15 = (int)uVar24 + -0x1f;
          if (0 < (long)uVar21) {
            pbVar27 = pbVar26 + (0x1f - uVar24);
            pbVar16 = pbVar27 + param_6;
            if (param_5 <= pbVar27) {
              pbVar16 = pbVar27;
            }
            uVar24 = uVar21 & 3;
            if (lVar13 + 2U < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              do {
                pbVar27 = pbVar26 + lVar14;
                *pbVar27 = *pbVar16;
                lVar14 = lVar14 + 4;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[1] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
                pbVar27[2] = *pbVar16;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[3] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
              } while (uVar21 - uVar24 != lVar14);
            }
            if (uVar24 != 0) {
              lVar13 = -uVar24;
              pbVar27 = pbVar26 + lVar14;
              do {
                pbVar18 = pbVar16 + 1;
                *pbVar27 = *pbVar16;
                pbVar16 = param_5;
                if (pbVar18 != pbVar2) {
                  pbVar16 = pbVar18;
                }
                lVar13 = lVar13 + 1;
                pbVar27 = pbVar27 + 1;
              } while (lVar13 != 0);
            }
          }
        }
        else {
          uVar22 = local_70 - uVar22;
          *puVar20 = uVar6 - (uVar6 >> 3);
          *puVar23 = uVar7 - (uVar7 >> 6);
          pppppuVar11 = local_78;
          local_70 = uVar22;
          local_6c[0] = uVar5;
          if (uVar22 >> 0x18 == 0) {
            local_70 = uVar22 * 0x100;
            uVar5 = uVar5 * 0x100;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppuVar11 = (uint *****)((long)local_78 + 1);
            if ((uVar22 >> 0x10 & 0xff) == 0) {
              local_70 = uVar22 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
              pppppuVar11 = (uint *****)((long)local_78 + 2);
            }
          }
          local_78 = pppppuVar11;
          uVar24 = FUN_0014a0c0((long)param_7 + 0x4854,local_6c,&local_70,&local_78);
          iVar15 = (int)uVar24 + 1;
          bVar1 = lVar25 < 7;
          lVar25 = 10;
          if (bVar1) {
            lVar25 = 7;
          }
          if (0 < (long)uVar21) {
            pbVar27 = pbVar26 + ~uVar24;
            pbVar16 = pbVar27 + param_6;
            if (param_5 <= pbVar27) {
              pbVar16 = pbVar27;
            }
            uVar24 = uVar21 & 3;
            if (lVar13 + 2U < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              do {
                pbVar27 = pbVar26 + lVar14;
                *pbVar27 = *pbVar16;
                lVar14 = lVar14 + 4;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[1] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
                pbVar27[2] = *pbVar16;
                pbVar18 = param_5;
                if (pbVar16 + 1 != pbVar2) {
                  pbVar18 = pbVar16 + 1;
                }
                pbVar27[3] = *pbVar18;
                pbVar16 = param_5;
                if (pbVar18 + 1 != pbVar2) {
                  pbVar16 = pbVar18 + 1;
                }
              } while (uVar21 - uVar24 != lVar14);
            }
            if (uVar24 != 0) {
              lVar13 = -uVar24;
              pbVar27 = pbVar26 + lVar14;
              do {
                pbVar18 = pbVar16 + 1;
                *pbVar27 = *pbVar16;
                pbVar16 = param_5;
                if (pbVar18 != pbVar2) {
                  pbVar16 = pbVar18;
                }
                lVar13 = lVar13 + 1;
                pbVar27 = pbVar27 + 1;
              } while (lVar13 != 0);
            }
          }
        }
      }
      uVar9 = local_d0._4_4_;
      local_d0 = CONCAT44((undefined4)local_d0,iVar15);
      local_c8 = CONCAT44((undefined4)local_c8,uVar9);
      pbVar27 = pbVar26 + uVar21;
      if (param_2 <= pbVar27) goto LAB_00147e58;
LAB_00146f1c:
      uVar24 = (ulong)pbVar27[-1];
      param_9 = uVar21 + param_9;
      pbVar26 = pbVar27;
    }
    uVar5 = local_70 - uVar5;
    *puVar20 = uVar6 - (uVar6 >> 3);
    *puVar23 = uVar7 - (uVar7 >> 6);
    local_70 = uVar5;
    local_6c[0] = uVar22;
    if (uVar5 >> 0x18 == 0) {
      local_70 = uVar5 * 0x100;
      local_6c[0] = uVar22 * 0x100;
      local_78 = (uint *****)((long)local_78 + 1);
      local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar22 * 0x100;
      if ((uVar5 >> 0x10 & 0xff) == 0) {
        local_70 = uVar5 * 0x10000;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *****)((long)pppppuVar11 + 2);
        local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                      ((uint)*(byte *)pppppuVar11 | uVar22 * 0x100 & 0xffff00) << 8;
      }
    }
    uVar5 = local_6c[0];
    pppppuVar11 = local_78;
    pbVar16 = pbVar26 + -(local_d0 & 0xffffffff);
    pbVar27 = pbVar16 + param_6;
    if (param_5 <= pbVar16) {
      pbVar27 = pbVar16;
    }
    bVar12 = *pbVar27;
    uVar24 = (ulong)bVar12;
    uVar21 = lVar25 << 3 | (ulong)(bVar12 >> 5);
    puVar20 = (ushort *)((long)param_7 + uVar21 * 4 + 0x4320);
    puVar23 = (ushort *)((long)param_7 + uVar21 * 4 + 0x4322);
    uVar6 = *puVar20;
    uVar7 = *puVar23;
    uVar22 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
    uVar19 = local_6c[0] - uVar22;
    if (local_6c[0] < uVar22) {
      *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
      *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
      local_70 = uVar22;
      if (uVar22 >> 0x18 == 0) {
        local_6c[0] = local_6c[0] << 8;
        local_70 = uVar22 * 0x100;
        local_78 = (uint *****)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar5 << 8;
        if ((uVar22 >> 0x10 & 0xff) == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar22 * 0x10000;
          local_78 = (uint *****)((long)pppppuVar11 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                        ((uint)*(byte *)pppppuVar11 | uVar5 << 8 & 0xffffff) << 8;
        }
      }
      lVar13 = FUN_00148ab0(param_7 + lVar25 * 2 + 0x84c,local_6c,&local_70,&local_78);
      lVar14 = lVar13 * 4;
      uVar22 = *(uint *)(auStack_dc + lVar14 + 0xc);
      *(uint *)(auStack_dc + lVar14 + 0xc) = *(uint *)(auStack_dc + lVar14 + 8);
      *(undefined8 *)(auStack_dc + lVar14 + 4) = *(undefined8 *)(auStack_dc + lVar14);
      uVar24 = (ulong)((uint)lVar13 | (int)param_9 << 2) & 0xf;
      puVar20 = (ushort *)((long)param_7 + uVar24 * 4 + 0x4560);
      local_d0 = CONCAT44(local_d0._4_4_,uVar22);
      puVar23 = (ushort *)((long)param_7 + uVar24 * 4 + 0x4562);
      uVar6 = *puVar20;
      uVar7 = *puVar23;
      uVar19 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar5 = local_6c[0] - uVar19;
      if (local_6c[0] < uVar19) {
        *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar23 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        pppppuVar11 = local_78;
        local_70 = uVar19;
        if (uVar19 >> 0x18 == 0) {
          local_70 = uVar19 * 0x100;
          uVar5 = local_6c[0] << 8;
          local_6c[0] = *(byte *)local_78 | uVar5;
          pppppuVar11 = (uint *****)((long)local_78 + 1);
          if ((uVar19 >> 0x10 & 0xff) == 0) {
            local_70 = uVar19 * 0x10000;
            local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                          ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
            pppppuVar11 = (uint *****)((long)local_78 + 2);
          }
        }
        local_78 = pppppuVar11;
        lVar14 = FUN_00149640(param_7 + 0x8e9,local_6c,&local_70,&local_78);
        uVar21 = lVar14 + 8;
        if (0 < (long)uVar21) {
          pbVar16 = pbVar26 + -(ulong)uVar22;
          pbVar27 = pbVar16 + param_6;
          if (param_5 <= pbVar16) {
            pbVar27 = pbVar16;
          }
          uVar24 = uVar21 & 3;
          if (lVar14 + 7U < 3) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            do {
              pbVar16 = pbVar26 + lVar14;
              *pbVar16 = *pbVar27;
              lVar14 = lVar14 + 4;
              pbVar18 = param_5;
              if (pbVar27 + 1 != pbVar2) {
                pbVar18 = pbVar27 + 1;
              }
              pbVar16[1] = *pbVar18;
              pbVar27 = param_5;
              if (pbVar18 + 1 != pbVar2) {
                pbVar27 = pbVar18 + 1;
              }
              pbVar16[2] = *pbVar27;
              pbVar18 = param_5;
              if (pbVar27 + 1 != pbVar2) {
                pbVar18 = pbVar27 + 1;
              }
              pbVar16[3] = *pbVar18;
              pbVar27 = param_5;
              if (pbVar18 + 1 != pbVar2) {
                pbVar27 = pbVar18 + 1;
              }
            } while (uVar21 - uVar24 != lVar14);
          }
          if (uVar24 != 0) {
            lVar13 = -uVar24;
            pbVar16 = pbVar26 + lVar14;
            do {
              pbVar18 = pbVar27 + 1;
              *pbVar16 = *pbVar27;
              pbVar27 = param_5;
              if (pbVar18 != pbVar2) {
                pbVar27 = pbVar18;
              }
              lVar13 = lVar13 + 1;
              pbVar16 = pbVar16 + 1;
            } while (lVar13 != 0);
          }
        }
      }
      else {
        uVar19 = local_70 - uVar19;
        *puVar20 = uVar6 - (uVar6 >> 3);
        *puVar23 = uVar7 - (uVar7 >> 6);
        pppppuVar11 = local_78;
        local_70 = uVar19;
        local_6c[0] = uVar5;
        if (uVar19 >> 0x18 == 0) {
          local_70 = uVar19 * 0x100;
          uVar5 = uVar5 * 0x100;
          local_6c[0] = *(byte *)local_78 | uVar5;
          pppppuVar11 = (uint *****)((long)local_78 + 1);
          if ((uVar19 >> 0x10 & 0xff) == 0) {
            local_70 = uVar19 * 0x10000;
            local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                          ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
            pppppuVar11 = (uint *****)((long)local_78 + 2);
          }
        }
        local_78 = pppppuVar11;
        lVar14 = FUN_00148db0((long)param_7 + uVar24 * 0x16 + 0x45a0,local_6c,&local_70,&local_78);
        uVar21 = lVar14 + 2;
        if (0 < (long)uVar21) {
          pbVar16 = pbVar26 + -(ulong)uVar22;
          pbVar27 = pbVar16 + param_6;
          if (param_5 <= pbVar16) {
            pbVar27 = pbVar16;
          }
          uVar24 = uVar21 & 3;
          if (lVar14 + 1U < 3) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            do {
              pbVar16 = pbVar26 + lVar14;
              *pbVar16 = *pbVar27;
              lVar14 = lVar14 + 4;
              pbVar18 = param_5;
              if (pbVar27 + 1 != pbVar2) {
                pbVar18 = pbVar27 + 1;
              }
              pbVar16[1] = *pbVar18;
              pbVar27 = param_5;
              if (pbVar18 + 1 != pbVar2) {
                pbVar27 = pbVar18 + 1;
              }
              pbVar16[2] = *pbVar27;
              pbVar18 = param_5;
              if (pbVar27 + 1 != pbVar2) {
                pbVar18 = pbVar27 + 1;
              }
              pbVar16[3] = *pbVar18;
              pbVar27 = param_5;
              if (pbVar18 + 1 != pbVar2) {
                pbVar27 = pbVar18 + 1;
              }
            } while (uVar21 - uVar24 != lVar14);
          }
          if (uVar24 != 0) {
            lVar13 = -uVar24;
            pbVar16 = pbVar26 + lVar14;
            do {
              pbVar18 = pbVar27 + 1;
              *pbVar16 = *pbVar27;
              pbVar27 = param_5;
              if (pbVar18 != pbVar2) {
                pbVar27 = pbVar18;
              }
              lVar13 = lVar13 + 1;
              pbVar16 = pbVar16 + 1;
            } while (lVar13 != 0);
          }
        }
      }
      bVar1 = lVar25 < 7;
      lVar25 = 0xb;
      if (bVar1) {
        lVar25 = 8;
      }
      pbVar27 = pbVar26 + uVar21;
      if (pbVar27 < param_2) goto LAB_00146f1c;
      break;
    }
    uVar22 = local_70 - uVar22;
    *puVar20 = uVar6 - (uVar6 >> 3);
    *puVar23 = uVar7 - (uVar7 >> 6);
    local_70 = uVar22;
    local_6c[0] = uVar19;
    if (uVar22 >> 0x18 == 0) {
      local_6c[0] = uVar19 * 0x100;
      local_70 = uVar22 * 0x100;
      local_78 = (uint *****)((long)local_78 + 1);
      local_6c[0] = (uint)*(byte *)pppppuVar11 | uVar19 * 0x100;
      if ((uVar22 >> 0x10 & 0xff) == 0) {
        local_70 = uVar22 * 0x10000;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *****)((long)pppppuVar11 + 2);
        local_6c[0] = (uint)*(byte *)((long)pppppuVar11 + 1) |
                      ((uint)*(byte *)pppppuVar11 | uVar19 * 0x100 & 0xffff00) << 8;
      }
    }
    pbVar27 = pbVar26 + 1;
    *pbVar26 = bVar12;
    param_9 = param_9 + 1;
    bVar1 = lVar25 < 7;
    lVar25 = 0xb;
    if (bVar1) {
      lVar25 = 9;
    }
    pbVar26 = pbVar27;
  } while (pbVar27 < param_2);
LAB_00147e58:
  if (pbVar27 == param_2) {
    if (local_f8 == (uint *****)0x0) {
      iVar15 = 1;
      if (local_70 < 0x2000001) {
        iVar15 = 2;
      }
      iVar8 = -4 - (int)param_3;
    }
    else {
      iVar8 = ((-4 - (int)param_3) - (int)local_b8) + (int)local_f8;
      iVar15 = 1;
      if (local_70 < 0x2000001) {
        iVar15 = 2;
      }
    }
    iVar15 = iVar8 + (int)local_78 + iVar15;
    param_7[2] = local_d0;
    param_7[3] = local_c8;
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
    iVar15 = -1;
  }
  return iVar15;
}


