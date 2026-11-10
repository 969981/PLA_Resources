/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00145810; name: FUN_00145810
 */


int FUN_00145810(byte *param_1,byte *param_2,uint *******param_3,long param_4,undefined8 param_5,
                undefined8 param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  ushort *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ushort *puVar24;
  long lVar25;
  byte *__s;
  ulong uVar26;
  long lVar27;
  uint *******pppppppuVar28;
  size_t __n;
  uint *******local_e8;
  undefined1 auStack_dc [8];
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [16];
  uint *******local_78;
  uint local_70;
  uint local_6c [3];
  
  uVar5 = *(uint *)(param_7 + 2);
  if (0xbfff < uVar5) {
    puVar16 = (uint *)((long)param_7 + 0x14);
    uVar23 = *puVar16;
    if (0xbfff < uVar23) {
      puVar16 = (uint *)(param_7 + 3);
      uVar23 = *puVar16;
      if (2 < uVar23 >> 0xe) {
        puVar16 = (uint *)((long)param_7 + 0x1c);
        uVar23 = *puVar16;
        if (0xbfff < uVar23) {
          *(undefined4 *)(param_7 + 2) = 4;
          goto joined_r0x001458d4;
        }
      }
    }
    *(uint *)(param_7 + 2) = uVar23;
    *puVar16 = uVar5;
  }
joined_r0x001458d4:
  if (param_3 < (uint *******)(param_4 + -0x20)) {
    pppppppuVar28 = (uint *******)(param_4 + -0x20);
    uVar5 = (*(uint *)param_3 & 0xff00ff00) >> 8 | (*(uint *)param_3 & 0xff00ff) << 8;
    local_6c[0] = uVar5 >> 0x10 | uVar5 << 0x10;
    local_e8 = (uint *******)0x0;
    pppppppuVar10 = param_3;
  }
  else {
    memcpy(local_b8,param_3,param_4 - (long)param_3);
    pppppppuVar10 = (uint *******)local_b8;
    pppppppuVar28 = (uint *******)&local_78;
    uVar5 = (local_b8[0] & 0xff00ff00) >> 8 | (local_b8[0] & 0xff00ff) << 8;
    local_6c[0] = uVar5 >> 0x10 | uVar5 << 0x10;
    local_e8 = param_3;
  }
  local_78 = (uint *******)((long)pppppppuVar10 + 4);
  pppppppuVar9 = local_78;
  local_70 = 0xffffffff;
  uVar3 = *param_7;
  uVar4 = param_7[1];
  local_d0 = param_7[2];
  local_c8 = param_7[3];
  __s = param_1;
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
        local_78 = (uint *******)((long)pppppppuVar10 + 5);
        uVar23 = (uint)*(byte *)pppppppuVar9;
        uVar5 = local_6c[0] << 8;
        local_6c[0] = uVar23 | uVar5;
        if (local_70 >> 0x18 == 0) {
          local_70 = iVar15 * -0x10000;
          local_78 = (uint *******)((long)pppppppuVar10 + 6);
          local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 5) | (uVar23 | uVar5 & 0xffffff) << 8;
        }
      }
      bVar11 = FUN_00147fa0(param_7 + 0x34,local_6c,&local_70,&local_78,0);
    }
    else {
      uVar23 = ~local_70;
      local_6c[0] = uVar5;
      *(ushort *)(param_7 + 0x18) = uVar6 - (uVar6 >> 3);
      *(ushort *)((long)param_7 + 0xc2) = uVar7 - (uVar7 >> 6);
      if (local_70 >> 0x18 < 0xff) {
        bVar11 = 0;
        local_70 = uVar23;
      }
      else {
        local_70 = uVar23 << 8;
        local_78 = (uint *******)((long)pppppppuVar10 + 5);
        uVar19 = (uint)*(byte *)pppppppuVar9;
        uVar5 = uVar5 * 0x100;
        bVar11 = 0;
        local_6c[0] = uVar19 | uVar5;
        if ((uVar23 >> 0x10 & 0xff) == 0) {
          local_70 = uVar23 << 0x10;
          local_78 = (uint *******)((long)pppppppuVar10 + 6);
          local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 5) | (uVar19 | uVar5 & 0xffff00) << 8;
        }
      }
    }
    param_9 = 1;
    __s = param_1 + 1;
    *param_1 = bVar11;
  }
  uVar26 = (ulong)__s[-1];
  lVar27 = 5;
  do {
    while( true ) {
      while( true ) {
        pppppppuVar10 = local_78;
        if (local_78 < pppppppuVar28) {
        }
        else {
          memcpy(local_b8,local_78,param_4 - (long)local_78);
          local_e8 = pppppppuVar10;
          pppppppuVar28 = (uint *******)&local_78;
          local_78 = (uint *******)local_b8;
        }
        uVar19 = local_6c[0];
        pppppppuVar10 = local_78;
        uVar17 = param_9 & 7 | lVar27 << 3;
        puVar24 = (ushort *)((long)param_7 + uVar17 * 4 + 0x20);
        uVar6 = *puVar24;
        puVar20 = (ushort *)((long)param_7 + uVar17 * 4 + 0x22);
        uVar7 = *puVar20;
        uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        uVar23 = local_6c[0] - uVar5;
        if (uVar5 <= local_6c[0]) break;
        *puVar24 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar20 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        local_70 = uVar5;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *******)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar19 << 8;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_70 = uVar5 * 0x10000;
            local_6c[0] = local_6c[0] << 8;
            local_78 = (uint *******)((long)pppppppuVar10 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                          ((uint)*(byte *)pppppppuVar10 | uVar19 << 8 & 0xffffff) << 8;
          }
        }
        uVar26 = FUN_00147fa0(param_7 + (uVar26 >> 4 & 0x3ffffffffffffc | param_9 & 3) * 0x80 + 0x34
                              ,local_6c,&local_70,&local_78,__s[-(local_d0 & 0xffffffff)]);
        *__s = (byte)uVar26;
        lVar27 = (long)*(int *)(&UNK_039c59b0 + lVar27 * 4);
        pbVar14 = __s + 1;
        param_9 = param_9 + 1;
        __s = pbVar14;
        if (param_2 <= pbVar14) goto LAB_00146b94;
      }
      uVar5 = local_70 - uVar5;
      *puVar24 = uVar6 - (uVar6 >> 3);
      *puVar20 = uVar7 - (uVar7 >> 6);
      local_70 = uVar5;
      local_6c[0] = uVar23;
      if (uVar5 >> 0x18 == 0) {
        local_70 = uVar5 * 0x100;
        local_6c[0] = uVar23 * 0x100;
        local_78 = (uint *******)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar23 * 0x100;
        if ((uVar5 >> 0x10 & 0xff) == 0) {
          local_70 = uVar5 * 0x10000;
          local_6c[0] = local_6c[0] << 8;
          local_78 = (uint *******)((long)pppppppuVar10 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                        ((uint)*(byte *)pppppppuVar10 | uVar23 * 0x100 & 0xffff00) << 8;
        }
      }
      uVar19 = local_6c[0];
      pppppppuVar10 = local_78;
      uVar26 = param_9 & 3 | lVar27 << 2;
      puVar20 = (ushort *)((long)param_7 + uVar26 * 4 + 0x41a0);
      puVar24 = (ushort *)((long)param_7 + uVar26 * 4 + 0x41a2);
      uVar6 = *puVar20;
      uVar7 = *puVar24;
      uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar23 = local_6c[0] - uVar5;
      if (uVar5 <= local_6c[0]) break;
      *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
      *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
      local_70 = uVar5;
      if (uVar5 >> 0x18 == 0) {
        local_70 = uVar5 * 0x100;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *******)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar19 << 8;
        if ((uVar5 >> 0x10 & 0xff) == 0) {
          local_70 = uVar5 * 0x10000;
          local_6c[0] = local_6c[0] << 8;
          local_78 = (uint *******)((long)pppppppuVar10 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                        ((uint)*(byte *)pppppppuVar10 | uVar19 << 8 & 0xffffff) << 8;
        }
      }
      uVar19 = local_6c[0];
      pppppppuVar10 = local_78;
      puVar20 = (ushort *)((long)param_7 + uVar26 * 4 + 0x44a0);
      puVar24 = (ushort *)((long)param_7 + uVar26 * 4 + 0x44a2);
      uVar6 = *puVar20;
      uVar7 = *puVar24;
      uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar23 = local_6c[0] - uVar5;
      if (local_6c[0] < uVar5) {
        *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        local_70 = uVar5;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *******)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar19 << 8;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_6c[0] = local_6c[0] << 8;
            local_70 = uVar5 * 0x10000;
            local_78 = (uint *******)((long)pppppppuVar10 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                          ((uint)*(byte *)pppppppuVar10 | uVar19 << 8 & 0xffffff) << 8;
          }
        }
        lVar12 = FUN_00149640((long)param_7 + 0x47c6,local_6c,&local_70,&local_78);
        lVar13 = lVar12 + 5;
        if (2 < lVar13) {
          lVar13 = 3;
        }
        puVar20 = (ushort *)((long)param_7 + lVar13 * 4 + 0x4844);
        puVar24 = (ushort *)((long)param_7 + lVar13 * 4 + 0x4846);
        uVar6 = *puVar20;
        uVar7 = *puVar24;
        uVar23 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        __n = lVar12 + 8;
        uVar5 = local_6c[0] - uVar23;
        if (local_6c[0] < uVar23) {
          *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
          *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
          pppppppuVar10 = local_78;
          local_70 = uVar23;
          if (uVar23 >> 0x18 == 0) {
            local_70 = uVar23 * 0x100;
            uVar5 = local_6c[0] << 8;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppppuVar10 = (uint *******)((long)local_78 + 1);
            if ((uVar23 >> 0x10 & 0xff) == 0) {
              local_70 = uVar23 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
              pppppppuVar10 = (uint *******)((long)local_78 + 2);
            }
          }
          local_78 = pppppppuVar10;
          lVar13 = FUN_0014a710((long)param_7 + lVar13 * 0x100 + 0x4914,local_6c,&local_70,&local_78
                               );
          uVar26 = FUN_0014aac0((long)param_7 + 0x4894,local_6c,&local_70,&local_78);
          uVar26 = uVar26 | lVar13 << 6;
          bVar1 = lVar27 < 7;
          lVar27 = 10;
          if (bVar1) {
            lVar27 = 7;
          }
          lVar22 = -uVar26;
          uVar17 = lVar22 + 0x1f;
          *(undefined8 *)__s = *(undefined8 *)(__s + uVar17);
          lVar13 = uVar26 - 0x1f;
          *(undefined4 *)(__s + 8) = *(undefined4 *)(__s + uVar17 + 8);
          if (0xc < (long)__n) {
            lVar21 = lVar12 + -4;
            pbVar14 = __s + 0xc;
            if (3 < lVar21) {
              uVar5 = ((uint)(lVar12 - 8U >> 3) & 0x1fffffff) + 1;
              if ((uVar5 & 7) != 0) {
                lVar25 = -((ulong)uVar5 & 7);
                pbVar18 = __s;
                do {
                  pbVar14 = pbVar18;
                  lVar21 = lVar21 + -8;
                  lVar25 = lVar25 + 1;
                  *(undefined8 *)(pbVar14 + 0xc) = *(undefined8 *)(pbVar14 + (0x2b - uVar26));
                  pbVar18 = pbVar14 + 8;
                } while (lVar25 != 0);
                pbVar14 = pbVar14 + 0x14;
              }
              if (0x37 < lVar12 - 8U) {
                do {
                  *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar22 + 0x1f);
                  *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar14 + lVar22 + 0x27);
                  *(undefined8 *)(pbVar14 + 0x10) = *(undefined8 *)(pbVar14 + lVar22 + 0x2f);
                  *(undefined8 *)(pbVar14 + 0x18) = *(undefined8 *)(pbVar14 + lVar22 + 0x37);
                  *(undefined8 *)(pbVar14 + 0x20) = *(undefined8 *)(pbVar14 + lVar22 + 0x3f);
                  *(undefined8 *)(pbVar14 + 0x28) = *(undefined8 *)(pbVar14 + lVar22 + 0x47);
                  *(undefined8 *)(pbVar14 + 0x30) = *(undefined8 *)(pbVar14 + lVar22 + 0x4f);
                  lVar21 = lVar21 + -0x40;
                  *(undefined8 *)(pbVar14 + 0x38) = *(undefined8 *)(pbVar14 + lVar22 + 0x57);
                  pbVar14 = pbVar14 + 0x40;
                } while (3 < lVar21);
              }
LAB_001468dc:
              if ((long)((lVar12 + -0xc) - (lVar12 - 8U & 0xfffffffffffffff8)) < 1)
              goto LAB_00146af0;
            }
LAB_001468f0:
            *(undefined4 *)pbVar14 = *(undefined4 *)(pbVar14 + uVar17);
          }
        }
        else {
          uVar23 = local_70 - uVar23;
          *puVar20 = uVar6 - (uVar6 >> 3);
          *puVar24 = uVar7 - (uVar7 >> 6);
          pppppppuVar10 = local_78;
          local_70 = uVar23;
          local_6c[0] = uVar5;
          if (uVar23 >> 0x18 == 0) {
            local_70 = uVar23 * 0x100;
            uVar5 = uVar5 * 0x100;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppppuVar10 = (uint *******)((long)local_78 + 1);
            if ((uVar23 >> 0x10 & 0xff) == 0) {
              local_70 = uVar23 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
              pppppppuVar10 = (uint *******)((long)local_78 + 2);
            }
          }
          local_78 = pppppppuVar10;
          uVar26 = FUN_0014a0c0((long)param_7 + 0x4854,local_6c,&local_70,&local_78);
          lVar13 = uVar26 + 1;
          bVar1 = lVar27 < 7;
          lVar27 = 10;
          if (bVar1) {
            lVar27 = 7;
          }
          uVar17 = ~uVar26;
          pbVar14 = __s + uVar17;
          if (lVar13 < 8) {
            if (lVar13 < 4) {
              if (uVar26 == 0) {
                memset(__s,(uint)*pbVar14,__n);
                lVar13 = 1;
              }
              else {
                *__s = *pbVar14;
                __s[1] = pbVar14[1];
                __s[2] = pbVar14[2];
                __s[3] = pbVar14[3];
                __s[4] = pbVar14[4];
                __s[5] = pbVar14[5];
                __s[6] = pbVar14[6];
                __s[7] = pbVar14[7];
                __s[8] = pbVar14[8];
                if (9 < (long)__n) {
                  uVar26 = lVar12 - 1U & 3;
                  if (lVar12 - 2U < 3) {
                    lVar21 = 9;
                  }
                  else {
                    lVar22 = 0;
                    do {
                      lVar21 = lVar22;
                      pbVar18 = pbVar14 + lVar21 + 0xc;
                      __s[lVar21 + 9] = pbVar18[-3];
                      __s[lVar21 + 10] = pbVar18[-2];
                      __s[lVar21 + 0xb] = pbVar18[-1];
                      __s[lVar21 + 0xc] = *pbVar18;
                      lVar22 = lVar21 + 4;
                    } while ((lVar12 - 1U) - uVar26 != lVar21 + 4);
                    lVar21 = lVar21 + 0xd;
                  }
                  if (uVar26 != 0) {
                    lVar12 = -uVar26;
                    pbVar14 = __s + lVar21;
                    do {
                      lVar12 = lVar12 + 1;
                      *pbVar14 = pbVar14[uVar17];
                      pbVar14 = pbVar14 + 1;
                    } while (lVar12 != 0);
                  }
                }
              }
            }
            else {
              *(undefined4 *)__s = *(undefined4 *)pbVar14;
              *(undefined4 *)(__s + 4) = *(undefined4 *)(pbVar14 + 4);
              *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar14 + 8);
              if ((0xc < (long)__n) &&
                 (*(undefined4 *)(__s + 0xc) = *(undefined4 *)(pbVar14 + 0xc), 0x10 < (long)__n)) {
                lVar12 = 0x10;
                iVar15 = 0x14;
                do {
                  *(undefined4 *)(__s + lVar12) = *(undefined4 *)(pbVar14 + lVar12);
                  lVar12 = (long)iVar15;
                  iVar15 = iVar15 + 4;
                } while (lVar12 < (long)__n);
              }
            }
          }
          else {
            *(undefined8 *)__s = *(undefined8 *)pbVar14;
            *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar14 + 8);
            if (0xc < (long)__n) {
              lVar22 = lVar12 + -4;
              pbVar14 = __s + 0xc;
              if (3 < lVar22) {
                uVar5 = ((uint)(lVar12 - 8U >> 3) & 0x1fffffff) + 1;
                if ((uVar5 & 7) != 0) {
                  lVar21 = -((ulong)uVar5 & 7);
                  pbVar18 = __s + 0xb;
                  do {
                    pbVar14 = pbVar18;
                    *(undefined8 *)(pbVar14 + 1) = *(undefined8 *)(pbVar14 + uVar17 + 1);
                    lVar22 = lVar22 + -8;
                    lVar21 = lVar21 + 1;
                    pbVar18 = pbVar14 + 8;
                  } while (lVar21 != 0);
                  pbVar14 = pbVar14 + 9;
                }
                if (0x37 < lVar12 - 8U) {
                  do {
                    pbVar18 = pbVar14 + (0x37 - uVar26);
                    *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar18 + -0x38);
                    *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar18 + -0x30);
                    *(undefined8 *)(pbVar14 + 0x10) = *(undefined8 *)(pbVar18 + -0x28);
                    *(undefined8 *)(pbVar14 + 0x18) = *(undefined8 *)(pbVar18 + -0x20);
                    *(undefined8 *)(pbVar14 + 0x20) = *(undefined8 *)(pbVar18 + -0x18);
                    *(undefined8 *)(pbVar14 + 0x28) = *(undefined8 *)(pbVar18 + -0x10);
                    *(undefined8 *)(pbVar14 + 0x30) = *(undefined8 *)(pbVar18 + -8);
                    lVar22 = lVar22 + -0x40;
                    *(undefined8 *)(pbVar14 + 0x38) = *(undefined8 *)pbVar18;
                    pbVar14 = pbVar14 + 0x40;
                  } while (3 < lVar22);
                }
                goto LAB_001468dc;
              }
              goto LAB_001468f0;
            }
          }
        }
      }
      else {
        uVar5 = local_70 - uVar5;
        *puVar20 = uVar6 - (uVar6 >> 3);
        *puVar24 = uVar7 - (uVar7 >> 6);
        local_70 = uVar5;
        local_6c[0] = uVar23;
        if (uVar5 >> 0x18 == 0) {
          local_6c[0] = uVar23 * 0x100;
          local_70 = uVar5 * 0x100;
          local_78 = (uint *******)((long)local_78 + 1);
          local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar23 * 0x100;
          if ((uVar5 >> 0x10 & 0xff) == 0) {
            local_70 = uVar5 * 0x10000;
            local_6c[0] = local_6c[0] << 8;
            local_78 = (uint *******)((long)pppppppuVar10 + 2);
            local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                          ((uint)*(byte *)pppppppuVar10 | uVar23 * 0x100 & 0xffff00) << 8;
          }
        }
        lVar12 = FUN_00148f20((long)param_7 + (param_9 & 3) * 0x12 + 0x4700,local_6c,&local_70,
                              &local_78);
        lVar13 = lVar12;
        if (2 < lVar12) {
          lVar13 = 3;
        }
        puVar20 = (ushort *)((long)param_7 + lVar13 * 4 + 0x4844);
        puVar24 = (ushort *)((long)param_7 + lVar13 * 4 + 0x4846);
        uVar6 = *puVar20;
        uVar7 = *puVar24;
        uVar23 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
        __n = lVar12 + 3;
        uVar5 = local_6c[0] - uVar23;
        if (local_6c[0] < uVar23) {
          *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
          *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
          pppppppuVar10 = local_78;
          local_70 = uVar23;
          if (uVar23 >> 0x18 == 0) {
            local_70 = uVar23 * 0x100;
            uVar5 = local_6c[0] << 8;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppppuVar10 = (uint *******)((long)local_78 + 1);
            if ((uVar23 >> 0x10 & 0xff) == 0) {
              local_70 = uVar23 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
              pppppppuVar10 = (uint *******)((long)local_78 + 2);
            }
          }
          local_78 = pppppppuVar10;
          lVar13 = FUN_0014a710((long)param_7 + lVar13 * 0x100 + 0x4914,local_6c,&local_70,&local_78
                               );
          uVar26 = FUN_0014aac0((long)param_7 + 0x4894,local_6c,&local_70,&local_78);
          uVar26 = uVar26 | lVar13 << 6;
          lVar13 = uVar26 - 0x1f;
          lVar12 = -uVar26;
          bVar1 = lVar27 < 7;
          lVar27 = 10;
          if (bVar1) {
            lVar27 = 7;
          }
          *(undefined4 *)__s = *(undefined4 *)(__s + lVar12 + 0x1f);
          if (4 < (long)__n) {
            *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + lVar12 + 0x23);
          }
        }
        else {
          uVar23 = local_70 - uVar23;
          *puVar20 = uVar6 - (uVar6 >> 3);
          *puVar24 = uVar7 - (uVar7 >> 6);
          pppppppuVar10 = local_78;
          local_70 = uVar23;
          local_6c[0] = uVar5;
          if (uVar23 >> 0x18 == 0) {
            local_70 = uVar23 * 0x100;
            uVar5 = uVar5 * 0x100;
            local_6c[0] = *(byte *)local_78 | uVar5;
            pppppppuVar10 = (uint *******)((long)local_78 + 1);
            if ((uVar23 >> 0x10 & 0xff) == 0) {
              local_70 = uVar23 * 0x10000;
              local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                            ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
              pppppppuVar10 = (uint *******)((long)local_78 + 2);
            }
          }
          local_78 = pppppppuVar10;
          uVar26 = FUN_0014a0c0((long)param_7 + 0x4854,local_6c,&local_70,&local_78);
          lVar13 = uVar26 + 1;
          bVar1 = lVar27 < 7;
          lVar27 = 10;
          if (bVar1) {
            lVar27 = 7;
          }
          pbVar14 = __s + ~uVar26;
          if (lVar13 < 8) {
            *__s = *pbVar14;
            __s[1] = pbVar14[1];
            __s[2] = pbVar14[2];
            __s[3] = pbVar14[3];
            if (4 < (long)__n) {
              __s[4] = pbVar14[4];
              __s[5] = pbVar14[5];
              __s[6] = pbVar14[6];
              __s[7] = pbVar14[7];
            }
          }
          else {
            *(undefined4 *)__s = *(undefined4 *)pbVar14;
            if (4 < (long)__n) {
              *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + ~uVar26 + 4);
            }
          }
        }
      }
LAB_00146af0:
      local_c8 = CONCAT44((undefined4)local_c8,local_d0._4_4_);
      local_d0 = CONCAT44((undefined4)local_d0,(int)lVar13);
joined_r0x00146b8c:
      pbVar14 = __s + __n;
      if (param_2 <= pbVar14) goto LAB_00146b94;
      uVar26 = (ulong)pbVar14[-1];
      param_9 = __n + param_9;
      __s = pbVar14;
    }
    uVar5 = local_70 - uVar5;
    *puVar20 = uVar6 - (uVar6 >> 3);
    *puVar24 = uVar7 - (uVar7 >> 6);
    local_70 = uVar5;
    local_6c[0] = uVar23;
    if (uVar5 >> 0x18 == 0) {
      local_70 = uVar5 * 0x100;
      local_6c[0] = uVar23 * 0x100;
      local_78 = (uint *******)((long)local_78 + 1);
      local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar23 * 0x100;
      if ((uVar5 >> 0x10 & 0xff) == 0) {
        local_70 = uVar5 * 0x10000;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *******)((long)pppppppuVar10 + 2);
        local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                      ((uint)*(byte *)pppppppuVar10 | uVar23 * 0x100 & 0xffff00) << 8;
      }
    }
    uVar19 = local_6c[0];
    pppppppuVar10 = local_78;
    bVar11 = __s[-(local_d0 & 0xffffffff)];
    uVar26 = (ulong)bVar11;
    uVar17 = lVar27 << 3 | (ulong)(bVar11 >> 5);
    puVar20 = (ushort *)((long)param_7 + uVar17 * 4 + 0x4320);
    puVar24 = (ushort *)((long)param_7 + uVar17 * 4 + 0x4322);
    uVar6 = *puVar20;
    uVar7 = *puVar24;
    uVar5 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
    uVar23 = local_6c[0] - uVar5;
    if (local_6c[0] < uVar5) {
      *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
      *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
      local_70 = uVar5;
      if (uVar5 >> 0x18 == 0) {
        local_6c[0] = local_6c[0] << 8;
        local_70 = uVar5 * 0x100;
        local_78 = (uint *******)((long)local_78 + 1);
        local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar19 << 8;
        if ((uVar5 >> 0x10 & 0xff) == 0) {
          local_6c[0] = local_6c[0] << 8;
          local_70 = uVar5 * 0x10000;
          local_78 = (uint *******)((long)pppppppuVar10 + 2);
          local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                        ((uint)*(byte *)pppppppuVar10 | uVar19 << 8 & 0xffffff) << 8;
        }
      }
      lVar12 = FUN_00148ab0(param_7 + lVar27 * 2 + 0x84c,local_6c,&local_70,&local_78);
      lVar13 = lVar12 * 4;
      uVar23 = *(uint *)(auStack_dc + lVar13 + 0xc);
      uVar26 = (ulong)uVar23;
      *(uint *)(auStack_dc + lVar13 + 0xc) = *(uint *)(auStack_dc + lVar13 + 8);
      *(undefined8 *)(auStack_dc + lVar13 + 4) = *(undefined8 *)(auStack_dc + lVar13);
      uVar17 = (ulong)((uint)lVar12 | (int)param_9 << 2) & 0xf;
      puVar20 = (ushort *)((long)param_7 + uVar17 * 4 + 0x4560);
      local_d0 = CONCAT44(local_d0._4_4_,uVar23);
      puVar24 = (ushort *)((long)param_7 + uVar17 * 4 + 0x4562);
      uVar6 = *puVar20;
      uVar7 = *puVar24;
      uVar19 = ((uint)uVar7 + (uint)uVar6) * (local_70 >> 0xf);
      uVar5 = local_6c[0] - uVar19;
      if (local_6c[0] < uVar19) {
        *puVar20 = uVar6 + (short)(0x4000 - uVar6 >> 3);
        *puVar24 = uVar7 + (short)(0x4000 - uVar7 >> 6);
        pppppppuVar10 = local_78;
        local_70 = uVar19;
        if (uVar19 >> 0x18 == 0) {
          local_70 = uVar19 * 0x100;
          uVar5 = local_6c[0] << 8;
          local_6c[0] = *(byte *)local_78 | uVar5;
          pppppppuVar10 = (uint *******)((long)local_78 + 1);
          if ((uVar19 >> 0x10 & 0xff) == 0) {
            local_70 = uVar19 * 0x10000;
            local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                          ((uint)*(byte *)local_78 | uVar5 & 0xffffff) << 8;
            pppppppuVar10 = (uint *******)((long)local_78 + 2);
          }
        }
        local_78 = pppppppuVar10;
        lVar13 = FUN_00149640(param_7 + 0x8e9,local_6c,&local_70,&local_78);
        __n = lVar13 + 8;
        pbVar14 = __s + -uVar26;
        if (uVar23 < 8) {
          if (uVar23 < 4) {
            if (uVar23 == 1) {
              memset(__s,(uint)*pbVar14,__n);
            }
            else {
              *__s = *pbVar14;
              __s[1] = pbVar14[1];
              __s[2] = pbVar14[2];
              __s[3] = pbVar14[3];
              __s[4] = pbVar14[4];
              __s[5] = pbVar14[5];
              __s[6] = pbVar14[6];
              __s[7] = pbVar14[7];
              __s[8] = pbVar14[8];
              if (9 < (long)__n) {
                uVar5 = (int)lVar13 - 1;
                uVar17 = (ulong)uVar5 & 3;
                if (lVar13 - 2U < 3) {
                  lVar12 = 9;
                }
                else {
                  lVar12 = 9;
                  do {
                    pbVar18 = pbVar14 + lVar12;
                    pbVar2 = __s + lVar12;
                    lVar12 = lVar12 + 4;
                    *pbVar2 = *pbVar18;
                    pbVar2[1] = pbVar18[1];
                    pbVar2[2] = pbVar18[2];
                    pbVar2[3] = pbVar18[3];
                  } while (((uVar17 + 1) - lVar13) + lVar12 != 9);
                }
                if ((uVar5 & 3) != 0) {
                  lVar13 = -uVar17;
                  pbVar14 = __s + lVar12;
                  do {
                    lVar13 = lVar13 + 1;
                    *pbVar14 = pbVar14[-uVar26];
                    pbVar14 = pbVar14 + 1;
                  } while (lVar13 != 0);
                }
              }
            }
          }
          else {
            *(undefined4 *)__s = *(undefined4 *)pbVar14;
            *(undefined4 *)(__s + 4) = *(undefined4 *)(pbVar14 + 4);
            *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar14 + 8);
            if ((0xc < (long)__n) &&
               (*(undefined4 *)(__s + 0xc) = *(undefined4 *)(pbVar14 + 0xc), 0x10 < (long)__n)) {
              lVar13 = 0x10;
              iVar15 = 0x14;
              do {
                *(undefined4 *)(__s + lVar13) = *(undefined4 *)(pbVar14 + lVar13);
                lVar13 = (long)iVar15;
                iVar15 = iVar15 + 4;
              } while (lVar13 < (long)__n);
            }
          }
        }
        else {
          *(undefined8 *)__s = *(undefined8 *)pbVar14;
          *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar14 + 8);
          if (0xc < (long)__n) {
            lVar22 = lVar13 + -4;
            lVar12 = -uVar26;
            pbVar14 = __s + 0xc;
            if (3 < lVar22) {
              uVar26 = lVar13 - 8;
              uVar5 = ((uint)(uVar26 >> 3) & 0x1fffffff) + 1;
              if ((uVar5 & 7) != 0) {
                lVar21 = -((ulong)uVar5 & 7);
                pbVar18 = pbVar14;
                do {
                  lVar22 = lVar22 + -8;
                  pbVar14 = pbVar18 + 8;
                  *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + lVar12);
                  lVar21 = lVar21 + 1;
                  pbVar18 = pbVar14;
                } while (lVar21 != 0);
              }
              if (0x37 < uVar26) {
                do {
                  pbVar18 = pbVar14 + lVar12;
                  *(undefined8 *)pbVar14 = *(undefined8 *)pbVar18;
                  *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar18 + 8);
                  *(undefined8 *)(pbVar14 + 0x10) = *(undefined8 *)(pbVar18 + 0x10);
                  *(undefined8 *)(pbVar14 + 0x18) = *(undefined8 *)(pbVar18 + 0x18);
                  *(undefined8 *)(pbVar14 + 0x20) = *(undefined8 *)(pbVar18 + 0x20);
                  *(undefined8 *)(pbVar14 + 0x28) = *(undefined8 *)(pbVar18 + 0x28);
                  *(undefined8 *)(pbVar14 + 0x30) = *(undefined8 *)(pbVar18 + 0x30);
                  lVar22 = lVar22 + -0x40;
                  *(undefined8 *)(pbVar14 + 0x38) = *(undefined8 *)(pbVar18 + 0x38);
                  pbVar14 = pbVar14 + 0x40;
                } while (3 < lVar22);
              }
              if ((long)((lVar13 + -0xc) - (uVar26 & 0xfffffffffffffff8)) < 1) goto LAB_00146b74;
            }
            *(undefined4 *)pbVar14 = *(undefined4 *)(pbVar14 + lVar12);
          }
        }
      }
      else {
        uVar19 = local_70 - uVar19;
        *puVar20 = uVar6 - (uVar6 >> 3);
        *puVar24 = uVar7 - (uVar7 >> 6);
        pppppppuVar10 = local_78;
        local_70 = uVar19;
        local_6c[0] = uVar5;
        if (uVar19 >> 0x18 == 0) {
          local_70 = uVar19 * 0x100;
          uVar5 = uVar5 * 0x100;
          local_6c[0] = *(byte *)local_78 | uVar5;
          pppppppuVar10 = (uint *******)((long)local_78 + 1);
          if ((uVar19 >> 0x10 & 0xff) == 0) {
            local_70 = uVar19 * 0x10000;
            local_6c[0] = (uint)*(byte *)((long)local_78 + 1) |
                          ((uint)*(byte *)local_78 | uVar5 & 0xffff00) << 8;
            pppppppuVar10 = (uint *******)((long)local_78 + 2);
          }
        }
        local_78 = pppppppuVar10;
        lVar13 = FUN_00148db0((long)param_7 + uVar17 * 0x16 + 0x45a0,local_6c,&local_70,&local_78);
        __n = lVar13 + 2;
        pbVar14 = __s + -uVar26;
        if (uVar23 < 8) {
          *__s = *pbVar14;
          __s[1] = pbVar14[1];
          __s[2] = pbVar14[2];
          __s[3] = pbVar14[3];
          if (4 < (long)__n) {
            __s[4] = pbVar14[4];
            __s[5] = pbVar14[5];
            __s[6] = pbVar14[6];
            __s[7] = pbVar14[7];
          }
        }
        else {
          *(undefined4 *)__s = *(undefined4 *)pbVar14;
          if (4 < (long)__n) {
            *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + (4 - uVar26));
          }
        }
      }
LAB_00146b74:
      bVar1 = lVar27 < 7;
      lVar27 = 0xb;
      if (bVar1) {
        lVar27 = 8;
      }
      goto joined_r0x00146b8c;
    }
    uVar5 = local_70 - uVar5;
    *puVar20 = uVar6 - (uVar6 >> 3);
    *puVar24 = uVar7 - (uVar7 >> 6);
    local_70 = uVar5;
    local_6c[0] = uVar23;
    if (uVar5 >> 0x18 == 0) {
      local_6c[0] = uVar23 * 0x100;
      local_70 = uVar5 * 0x100;
      local_78 = (uint *******)((long)local_78 + 1);
      local_6c[0] = (uint)*(byte *)pppppppuVar10 | uVar23 * 0x100;
      if ((uVar5 >> 0x10 & 0xff) == 0) {
        local_70 = uVar5 * 0x10000;
        local_6c[0] = local_6c[0] << 8;
        local_78 = (uint *******)((long)pppppppuVar10 + 2);
        local_6c[0] = (uint)*(byte *)((long)pppppppuVar10 + 1) |
                      ((uint)*(byte *)pppppppuVar10 | uVar23 * 0x100 & 0xffff00) << 8;
      }
    }
    pbVar14 = __s + 1;
    *__s = bVar11;
    param_9 = param_9 + 1;
    bVar1 = lVar27 < 7;
    lVar27 = 0xb;
    if (bVar1) {
      lVar27 = 9;
    }
    __s = pbVar14;
  } while (pbVar14 < param_2);
LAB_00146b94:
  if (pbVar14 == param_2) {
    if (local_e8 == (uint *******)0x0) {
      iVar15 = 1;
      if (local_70 < 0x2000001) {
        iVar15 = 2;
      }
      iVar8 = -4 - (int)param_3;
    }
    else {
      iVar8 = ((-4 - (int)param_3) - (int)local_b8) + (int)local_e8;
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


