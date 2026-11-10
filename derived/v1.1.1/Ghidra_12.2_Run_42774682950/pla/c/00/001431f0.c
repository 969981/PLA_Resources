/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001431f0; name: FUN_001431f0
 */


int FUN_001431f0(byte *param_1,byte *param_2,uint *param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *in_x6;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  int iVar22;
  long lVar23;
  byte *__s;
  long lVar24;
  size_t __n;
  ulong in_stack_00000000;
  undefined1 auStack_8c [8];
  uint uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  uVar17 = *(uint *)(in_x6 + 2);
  if (0xbfff < uVar17) {
    puVar13 = (uint *)((long)in_x6 + 0x14);
    uVar16 = *puVar13;
    if (0xbfff < uVar16) {
      puVar13 = (uint *)(in_x6 + 3);
      uVar16 = *puVar13;
      if (2 < uVar16 >> 0xe) {
        puVar13 = (uint *)((long)in_x6 + 0x1c);
        uVar16 = *puVar13;
        if (0xbfff < uVar16) {
          *(undefined4 *)(in_x6 + 2) = 4;
          goto LAB_00143268;
        }
      }
    }
    *(uint *)(in_x6 + 2) = uVar16;
    *puVar13 = uVar17;
  }
LAB_00143268:
  local_68 = 0xffffffff;
  local_70 = param_3 + 1;
  uVar16 = (*param_3 & 0xff00ff00) >> 8;
  uVar17 = uVar16 | (*param_3 & 0xff00ff) << 8;
  uVar11 = uVar17 >> 0x10;
  uVar17 = uVar11 | uVar17 << 0x10;
  uVar3 = *in_x6;
  uVar4 = in_x6[1];
  local_80 = in_x6[2];
  local_78 = in_x6[3];
  __s = param_1;
  local_64 = uVar17;
  if (in_stack_00000000 == 0) {
    uVar5 = *(ushort *)(in_x6 + 0x18);
    uVar6 = *(ushort *)((long)in_x6 + 0xc2);
    iVar22 = (uint)uVar6 + (uint)uVar5;
    local_68 = iVar22 * 0x1ffff;
    local_64 = uVar17 + iVar22 * -0x1ffff;
    if (uVar17 < local_68) {
      *(ushort *)((long)in_x6 + 0xc2) = uVar6 + (short)(0x4000 - uVar6 >> 6);
      *(ushort *)(in_x6 + 0x18) = uVar5 + (short)(0x4000 - uVar5 >> 3);
      local_64 = uVar17;
      if (local_68 >> 0x18 == 0) {
        local_68 = iVar22 * 0x1ffff00;
        local_70 = (uint *)((long)param_3 + 5);
        local_64 = (uint)(byte)param_3[1] | (uVar11 | uVar16 << 0x10) << 8;
        if (local_68 >> 0x18 == 0) {
          local_68 = iVar22 * -0x10000;
          local_70 = (uint *)((long)param_3 + 6);
          local_64 = (uint)*(byte *)((long)param_3 + 5) |
                     ((uint)(byte)param_3[1] | uVar11 << 8) << 8;
        }
      }
      bVar7 = FUN_00147fa0(in_x6 + 0x34,&local_64,&local_68,&local_70,0);
    }
    else {
      uVar17 = ~local_68;
      *(ushort *)(in_x6 + 0x18) = uVar5 - (uVar5 >> 3);
      *(ushort *)((long)in_x6 + 0xc2) = uVar6 - (uVar6 >> 6);
      if (local_68 >> 0x18 < 0xff) {
        bVar7 = 0;
        local_68 = uVar17;
      }
      else {
        local_70 = (uint *)((long)param_3 + 5);
        uVar16 = local_64 * 0x100;
        local_64 = (byte)param_3[1] | uVar16;
        bVar7 = 0;
        local_68 = uVar17 << 8;
        if ((uVar17 >> 0x10 & 0xff) == 0) {
          local_70 = (uint *)((long)param_3 + 6);
          local_64 = (uint)*(byte *)((long)param_3 + 5) |
                     ((uint)(byte)param_3[1] | uVar16 & 0xffff00) << 8;
          local_68 = uVar17 << 0x10;
        }
      }
    }
    in_stack_00000000 = 1;
    __s = param_1 + 1;
    *param_1 = bVar7;
  }
  uVar8 = (ulong)__s[-1];
  lVar24 = 5;
  do {
    while( true ) {
      while( true ) {
        uVar14 = in_stack_00000000 & 7 | lVar24 << 3;
        puVar21 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x20);
        uVar5 = *puVar21;
        puVar18 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x22);
        uVar6 = *puVar18;
        uVar16 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        uVar17 = local_64 - uVar16;
        if (uVar16 <= local_64) break;
        *puVar21 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar18 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar13 = local_70;
        local_68 = uVar16;
        if (uVar16 >> 0x18 == 0) {
          local_68 = uVar16 * 0x100;
          uVar17 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar17;
          puVar13 = (uint *)((long)local_70 + 1);
          if ((uVar16 >> 0x10 & 0xff) == 0) {
            local_68 = uVar16 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
            puVar13 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar13;
        uVar8 = FUN_00147fa0(in_x6 + (uVar8 >> 4 & 0x3ffffffffffffc | in_stack_00000000 & 3) * 0x80
                                     + 0x34,&local_64,&local_68,&local_70,
                             __s[-(local_80 & 0xffffffff)]);
        *__s = (byte)uVar8;
        lVar24 = (long)*(int *)(&UNK_039c59b0 + lVar24 * 4);
        pbVar12 = __s + 1;
        in_stack_00000000 = in_stack_00000000 + 1;
        __s = pbVar12;
        if (param_2 <= pbVar12) goto LAB_0014458c;
      }
      local_68 = local_68 - uVar16;
      *puVar21 = uVar5 - (uVar5 >> 3);
      *puVar18 = uVar6 - (uVar6 >> 6);
      uVar16 = local_68;
      local_64 = uVar17;
      if (local_68 >> 0x18 == 0) {
        uVar16 = local_68 * 0x100;
        uVar17 = uVar17 * 0x100;
        local_64 = (byte)*local_70 | uVar17;
        if ((local_68 >> 0x10 & 0xff) == 0) {
          uVar16 = local_68 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
          local_70 = (uint *)((long)local_70 + 2);
        }
        else {
          local_70 = (uint *)((long)local_70 + 1);
        }
      }
      uVar8 = in_stack_00000000 & 3 | lVar24 << 2;
      puVar18 = (ushort *)((long)in_x6 + uVar8 * 4 + 0x41a0);
      puVar21 = (ushort *)((long)in_x6 + uVar8 * 4 + 0x41a2);
      uVar5 = *puVar18;
      uVar6 = *puVar21;
      uVar11 = ((uint)uVar6 + (uint)uVar5) * (uVar16 >> 0xf);
      uVar17 = local_64 - uVar11;
      if (uVar11 <= local_64) break;
      *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
      *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
      uVar17 = uVar11;
      if (uVar11 >> 0x18 == 0) {
        uVar17 = uVar11 * 0x100;
        uVar16 = local_64 << 8;
        local_64 = (byte)*local_70 | uVar16;
        if ((uVar11 >> 0x10 & 0xff) == 0) {
          uVar17 = uVar11 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar16 & 0xffffff) << 8;
          local_70 = (uint *)((long)local_70 + 2);
        }
        else {
          local_70 = (uint *)((long)local_70 + 1);
        }
      }
      puVar18 = (ushort *)((long)in_x6 + uVar8 * 4 + 0x44a0);
      puVar21 = (ushort *)((long)in_x6 + uVar8 * 4 + 0x44a2);
      uVar5 = *puVar18;
      uVar6 = *puVar21;
      uVar11 = ((uint)uVar6 + (uint)uVar5) * (uVar17 >> 0xf);
      uVar16 = local_64 - uVar11;
      if (local_64 < uVar11) {
        *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar13 = local_70;
        local_68 = uVar11;
        if (uVar11 >> 0x18 == 0) {
          local_68 = uVar11 * 0x100;
          uVar17 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar17;
          puVar13 = (uint *)((long)local_70 + 1);
          if ((uVar11 >> 0x10 & 0xff) == 0) {
            local_68 = uVar11 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
            puVar13 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar13;
        lVar9 = FUN_00149640((long)in_x6 + 0x47c6,&local_64,&local_68,&local_70);
        lVar10 = lVar9 + 5;
        if (2 < lVar10) {
          lVar10 = 3;
        }
        puVar18 = (ushort *)((long)in_x6 + lVar10 * 4 + 0x4844);
        puVar21 = (ushort *)((long)in_x6 + lVar10 * 4 + 0x4846);
        uVar5 = *puVar18;
        uVar6 = *puVar21;
        uVar16 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        __n = lVar9 + 8;
        uVar17 = local_64 - uVar16;
        if (local_64 < uVar16) {
          *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
          *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
          puVar13 = local_70;
          local_68 = uVar16;
          if (uVar16 >> 0x18 == 0) {
            local_68 = uVar16 * 0x100;
            uVar17 = local_64 << 8;
            local_64 = (byte)*local_70 | uVar17;
            puVar13 = (uint *)((long)local_70 + 1);
            if ((uVar16 >> 0x10 & 0xff) == 0) {
              local_68 = uVar16 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
              puVar13 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar13;
          lVar10 = FUN_0014a710((long)in_x6 + lVar10 * 0x100 + 0x4914,&local_64,&local_68,&local_70)
          ;
          uVar8 = FUN_0014aac0((long)in_x6 + 0x4894,&local_64,&local_68,&local_70);
          uVar8 = uVar8 | lVar10 << 6;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          lVar20 = -uVar8;
          uVar14 = lVar20 + 0x1f;
          *(undefined8 *)__s = *(undefined8 *)(__s + uVar14);
          lVar10 = uVar8 - 0x1f;
          *(undefined4 *)(__s + 8) = *(undefined4 *)(__s + uVar14 + 8);
          if (0xc < (long)__n) {
            lVar19 = lVar9 + -4;
            pbVar12 = __s + 0xc;
            if (3 < lVar19) {
              uVar17 = ((uint)(lVar9 - 8U >> 3) & 0x1fffffff) + 1;
              if ((uVar17 & 7) != 0) {
                lVar23 = -((ulong)uVar17 & 7);
                pbVar15 = __s;
                do {
                  pbVar12 = pbVar15;
                  lVar19 = lVar19 + -8;
                  lVar23 = lVar23 + 1;
                  *(undefined8 *)(pbVar12 + 0xc) = *(undefined8 *)(pbVar12 + (0x2b - uVar8));
                  pbVar15 = pbVar12 + 8;
                } while (lVar23 != 0);
                pbVar12 = pbVar12 + 0x14;
              }
              if (0x37 < lVar9 - 8U) {
                do {
                  *(undefined8 *)pbVar12 = *(undefined8 *)(pbVar12 + lVar20 + 0x1f);
                  *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar12 + lVar20 + 0x27);
                  *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(pbVar12 + lVar20 + 0x2f);
                  *(undefined8 *)(pbVar12 + 0x18) = *(undefined8 *)(pbVar12 + lVar20 + 0x37);
                  *(undefined8 *)(pbVar12 + 0x20) = *(undefined8 *)(pbVar12 + lVar20 + 0x3f);
                  *(undefined8 *)(pbVar12 + 0x28) = *(undefined8 *)(pbVar12 + lVar20 + 0x47);
                  *(undefined8 *)(pbVar12 + 0x30) = *(undefined8 *)(pbVar12 + lVar20 + 0x4f);
                  lVar19 = lVar19 + -0x40;
                  *(undefined8 *)(pbVar12 + 0x38) = *(undefined8 *)(pbVar12 + lVar20 + 0x57);
                  pbVar12 = pbVar12 + 0x40;
                } while (3 < lVar19);
              }
              goto LAB_00144288;
            }
LAB_00144374:
            pbVar12 = __s + 0xc;
LAB_00144378:
            *(undefined4 *)pbVar12 = *(undefined4 *)(pbVar12 + uVar14);
          }
        }
        else {
          uVar16 = local_68 - uVar16;
          *puVar18 = uVar5 - (uVar5 >> 3);
          *puVar21 = uVar6 - (uVar6 >> 6);
          puVar13 = local_70;
          local_68 = uVar16;
          local_64 = uVar17;
          if (uVar16 >> 0x18 == 0) {
            local_68 = uVar16 * 0x100;
            uVar17 = uVar17 * 0x100;
            local_64 = (byte)*local_70 | uVar17;
            puVar13 = (uint *)((long)local_70 + 1);
            if ((uVar16 >> 0x10 & 0xff) == 0) {
              local_68 = uVar16 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
              puVar13 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar13;
          uVar8 = FUN_0014a0c0((long)in_x6 + 0x4854,&local_64,&local_68,&local_70);
          lVar10 = uVar8 + 1;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          uVar14 = ~uVar8;
          pbVar12 = __s + uVar14;
          if (lVar10 < 8) {
            if (lVar10 < 4) {
              if (uVar8 == 0) {
                memset(__s,(uint)*pbVar12,__n);
                lVar10 = 1;
              }
              else {
                *__s = *pbVar12;
                __s[1] = pbVar12[1];
                __s[2] = pbVar12[2];
                __s[3] = pbVar12[3];
                __s[4] = pbVar12[4];
                __s[5] = pbVar12[5];
                __s[6] = pbVar12[6];
                __s[7] = pbVar12[7];
                __s[8] = pbVar12[8];
                if (9 < (long)__n) {
                  uVar8 = lVar9 - 1U & 3;
                  if (lVar9 - 2U < 3) {
                    lVar19 = 9;
                  }
                  else {
                    lVar20 = 0;
                    do {
                      lVar19 = lVar20;
                      pbVar15 = pbVar12 + lVar19 + 0xc;
                      __s[lVar19 + 9] = pbVar15[-3];
                      __s[lVar19 + 10] = pbVar15[-2];
                      __s[lVar19 + 0xb] = pbVar15[-1];
                      __s[lVar19 + 0xc] = *pbVar15;
                      lVar20 = lVar19 + 4;
                    } while ((lVar9 - 1U) - uVar8 != lVar19 + 4);
                    lVar19 = lVar19 + 0xd;
                  }
                  if (uVar8 != 0) {
                    lVar9 = -uVar8;
                    pbVar12 = __s + lVar19;
                    do {
                      lVar9 = lVar9 + 1;
                      *pbVar12 = pbVar12[uVar14];
                      pbVar12 = pbVar12 + 1;
                    } while (lVar9 != 0);
                  }
                }
              }
            }
            else {
              *(undefined4 *)__s = *(undefined4 *)pbVar12;
              *(undefined4 *)(__s + 4) = *(undefined4 *)(pbVar12 + 4);
              *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar12 + 8);
              if ((0xc < (long)__n) &&
                 (*(undefined4 *)(__s + 0xc) = *(undefined4 *)(pbVar12 + 0xc), 0x10 < (long)__n)) {
                lVar9 = 0x10;
                iVar22 = 0x14;
                do {
                  *(undefined4 *)(__s + lVar9) = *(undefined4 *)(pbVar12 + lVar9);
                  lVar9 = (long)iVar22;
                  iVar22 = iVar22 + 4;
                } while (lVar9 < (long)__n);
              }
            }
          }
          else {
            *(undefined8 *)__s = *(undefined8 *)pbVar12;
            *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar12 + 8);
            if (0xc < (long)__n) {
              lVar20 = lVar9 + -4;
              pbVar12 = __s + 0xc;
              if (lVar20 < 4) goto LAB_00144374;
              uVar17 = ((uint)(lVar9 - 8U >> 3) & 0x1fffffff) + 1;
              if ((uVar17 & 7) != 0) {
                lVar19 = -((ulong)uVar17 & 7);
                pbVar15 = __s + 0xb;
                do {
                  pbVar12 = pbVar15;
                  *(undefined8 *)(pbVar12 + 1) = *(undefined8 *)(pbVar12 + uVar14 + 1);
                  lVar20 = lVar20 + -8;
                  lVar19 = lVar19 + 1;
                  pbVar15 = pbVar12 + 8;
                } while (lVar19 != 0);
                pbVar12 = pbVar12 + 9;
              }
              if (0x37 < lVar9 - 8U) {
                do {
                  pbVar15 = pbVar12 + (0x37 - uVar8);
                  *(undefined8 *)pbVar12 = *(undefined8 *)(pbVar15 + -0x38);
                  *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar15 + -0x30);
                  *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(pbVar15 + -0x28);
                  *(undefined8 *)(pbVar12 + 0x18) = *(undefined8 *)(pbVar15 + -0x20);
                  *(undefined8 *)(pbVar12 + 0x20) = *(undefined8 *)(pbVar15 + -0x18);
                  *(undefined8 *)(pbVar12 + 0x28) = *(undefined8 *)(pbVar15 + -0x10);
                  *(undefined8 *)(pbVar12 + 0x30) = *(undefined8 *)(pbVar15 + -8);
                  lVar20 = lVar20 + -0x40;
                  *(undefined8 *)(pbVar12 + 0x38) = *(undefined8 *)pbVar15;
                  pbVar12 = pbVar12 + 0x40;
                } while (3 < lVar20);
              }
LAB_00144288:
              if (0 < (long)((lVar9 + -0xc) - (lVar9 - 8U & 0xfffffffffffffff8))) goto LAB_00144378;
            }
          }
        }
      }
      else {
        uVar17 = uVar17 - uVar11;
        *puVar18 = uVar5 - (uVar5 >> 3);
        *puVar21 = uVar6 - (uVar6 >> 6);
        puVar13 = local_70;
        local_68 = uVar17;
        local_64 = uVar16;
        if (uVar17 >> 0x18 == 0) {
          local_68 = uVar17 * 0x100;
          uVar16 = uVar16 * 0x100;
          local_64 = (byte)*local_70 | uVar16;
          puVar13 = (uint *)((long)local_70 + 1);
          if ((uVar17 >> 0x10 & 0xff) == 0) {
            local_68 = uVar17 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar16 & 0xffff00) << 8;
            puVar13 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar13;
        lVar9 = FUN_00148f20((long)in_x6 + (in_stack_00000000 & 3) * 0x12 + 0x4700,&local_64,
                             &local_68,&local_70);
        lVar10 = lVar9;
        if (2 < lVar9) {
          lVar10 = 3;
        }
        puVar18 = (ushort *)((long)in_x6 + lVar10 * 4 + 0x4844);
        puVar21 = (ushort *)((long)in_x6 + lVar10 * 4 + 0x4846);
        uVar5 = *puVar18;
        uVar6 = *puVar21;
        uVar16 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
        __n = lVar9 + 3;
        uVar17 = local_64 - uVar16;
        if (local_64 < uVar16) {
          *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
          *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
          puVar13 = local_70;
          local_68 = uVar16;
          if (uVar16 >> 0x18 == 0) {
            local_68 = uVar16 * 0x100;
            uVar17 = local_64 << 8;
            local_64 = (byte)*local_70 | uVar17;
            puVar13 = (uint *)((long)local_70 + 1);
            if ((uVar16 >> 0x10 & 0xff) == 0) {
              local_68 = uVar16 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
              puVar13 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar13;
          lVar10 = FUN_0014a710((long)in_x6 + lVar10 * 0x100 + 0x4914,&local_64,&local_68,&local_70)
          ;
          uVar8 = FUN_0014aac0((long)in_x6 + 0x4894,&local_64,&local_68,&local_70);
          uVar8 = uVar8 | lVar10 << 6;
          lVar10 = uVar8 - 0x1f;
          lVar9 = -uVar8;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          *(undefined4 *)__s = *(undefined4 *)(__s + lVar9 + 0x1f);
          if (4 < (long)__n) {
            *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + lVar9 + 0x23);
          }
        }
        else {
          uVar16 = local_68 - uVar16;
          *puVar18 = uVar5 - (uVar5 >> 3);
          *puVar21 = uVar6 - (uVar6 >> 6);
          puVar13 = local_70;
          local_68 = uVar16;
          local_64 = uVar17;
          if (uVar16 >> 0x18 == 0) {
            local_68 = uVar16 * 0x100;
            uVar17 = uVar17 * 0x100;
            local_64 = (byte)*local_70 | uVar17;
            puVar13 = (uint *)((long)local_70 + 1);
            if ((uVar16 >> 0x10 & 0xff) == 0) {
              local_68 = uVar16 * 0x10000;
              local_64 = (uint)*(byte *)((long)local_70 + 1) |
                         ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
              puVar13 = (uint *)((long)local_70 + 2);
            }
          }
          local_70 = puVar13;
          uVar8 = FUN_0014a0c0((long)in_x6 + 0x4854,&local_64,&local_68,&local_70);
          lVar10 = uVar8 + 1;
          bVar1 = lVar24 < 7;
          lVar24 = 10;
          if (bVar1) {
            lVar24 = 7;
          }
          pbVar12 = __s + ~uVar8;
          if (lVar10 < 8) {
            *__s = *pbVar12;
            __s[1] = pbVar12[1];
            __s[2] = pbVar12[2];
            __s[3] = pbVar12[3];
            if (4 < (long)__n) {
              __s[4] = pbVar12[4];
              __s[5] = pbVar12[5];
              __s[6] = pbVar12[6];
              __s[7] = pbVar12[7];
            }
          }
          else {
            *(undefined4 *)__s = *(undefined4 *)pbVar12;
            if (4 < (long)__n) {
              *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + ~uVar8 + 4);
            }
          }
        }
      }
      local_78 = CONCAT44((undefined4)local_78,local_80._4_4_);
      local_80 = CONCAT44((undefined4)local_80,(int)lVar10);
joined_r0x00144584:
      pbVar12 = __s + __n;
      if (param_2 <= pbVar12) goto LAB_0014458c;
      uVar8 = (ulong)pbVar12[-1];
      in_stack_00000000 = __n + in_stack_00000000;
      __s = pbVar12;
    }
    uVar16 = uVar16 - uVar11;
    *puVar18 = uVar5 - (uVar5 >> 3);
    *puVar21 = uVar6 - (uVar6 >> 6);
    uVar11 = uVar16;
    local_64 = uVar17;
    if (uVar16 >> 0x18 == 0) {
      uVar11 = uVar16 * 0x100;
      uVar17 = uVar17 * 0x100;
      local_64 = (byte)*local_70 | uVar17;
      if ((uVar16 >> 0x10 & 0xff) == 0) {
        uVar11 = uVar16 * 0x10000;
        local_64 = (uint)*(byte *)((long)local_70 + 1) |
                   ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
        local_70 = (uint *)((long)local_70 + 2);
      }
      else {
        local_70 = (uint *)((long)local_70 + 1);
      }
    }
    bVar7 = __s[-(local_80 & 0xffffffff)];
    uVar8 = (ulong)bVar7;
    uVar14 = lVar24 << 3 | (ulong)(bVar7 >> 5);
    puVar18 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x4320);
    puVar21 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x4322);
    uVar5 = *puVar18;
    uVar6 = *puVar21;
    uVar16 = ((uint)uVar6 + (uint)uVar5) * (uVar11 >> 0xf);
    uVar17 = local_64 - uVar16;
    if (local_64 < uVar16) {
      *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
      *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
      puVar13 = local_70;
      local_68 = uVar16;
      if (uVar16 >> 0x18 == 0) {
        local_68 = uVar16 * 0x100;
        uVar17 = local_64 << 8;
        local_64 = (byte)*local_70 | uVar17;
        puVar13 = (uint *)((long)local_70 + 1);
        if ((uVar16 >> 0x10 & 0xff) == 0) {
          local_68 = uVar16 * 0x10000;
          local_64 = (uint)*(byte *)((long)local_70 + 1) |
                     ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
          puVar13 = (uint *)((long)local_70 + 2);
        }
      }
      local_70 = puVar13;
      lVar9 = FUN_00148ab0(in_x6 + lVar24 * 2 + 0x84c,&local_64,&local_68,&local_70);
      lVar10 = lVar9 * 4;
      uVar16 = *(uint *)(auStack_8c + lVar10 + 0xc);
      uVar8 = (ulong)uVar16;
      *(uint *)(auStack_8c + lVar10 + 0xc) = *(uint *)(auStack_8c + lVar10 + 8);
      *(undefined8 *)(auStack_8c + lVar10 + 4) = *(undefined8 *)(auStack_8c + lVar10);
      uVar14 = (ulong)((uint)lVar9 | (int)in_stack_00000000 << 2) & 0xf;
      puVar18 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x4560);
      local_80 = CONCAT44(local_80._4_4_,uVar16);
      puVar21 = (ushort *)((long)in_x6 + uVar14 * 4 + 0x4562);
      uVar5 = *puVar18;
      uVar6 = *puVar21;
      uVar11 = ((uint)uVar6 + (uint)uVar5) * (local_68 >> 0xf);
      uVar17 = local_64 - uVar11;
      if (local_64 < uVar11) {
        *puVar18 = uVar5 + (short)(0x4000 - uVar5 >> 3);
        *puVar21 = uVar6 + (short)(0x4000 - uVar6 >> 6);
        puVar13 = local_70;
        local_68 = uVar11;
        if (uVar11 >> 0x18 == 0) {
          local_68 = uVar11 * 0x100;
          uVar17 = local_64 << 8;
          local_64 = (byte)*local_70 | uVar17;
          puVar13 = (uint *)((long)local_70 + 1);
          if ((uVar11 >> 0x10 & 0xff) == 0) {
            local_68 = uVar11 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar17 & 0xffffff) << 8;
            puVar13 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar13;
        lVar10 = FUN_00149640(in_x6 + 0x8e9,&local_64,&local_68,&local_70);
        __n = lVar10 + 8;
        pbVar12 = __s + -uVar8;
        if (uVar16 < 8) {
          if (uVar16 < 4) {
            if (uVar16 == 1) {
              memset(__s,(uint)*pbVar12,__n);
            }
            else {
              *__s = *pbVar12;
              __s[1] = pbVar12[1];
              __s[2] = pbVar12[2];
              __s[3] = pbVar12[3];
              __s[4] = pbVar12[4];
              __s[5] = pbVar12[5];
              __s[6] = pbVar12[6];
              __s[7] = pbVar12[7];
              __s[8] = pbVar12[8];
              if (9 < (long)__n) {
                uVar17 = (int)lVar10 - 1;
                uVar14 = (ulong)uVar17 & 3;
                if (lVar10 - 2U < 3) {
                  lVar9 = 9;
                }
                else {
                  lVar9 = 9;
                  do {
                    pbVar15 = pbVar12 + lVar9;
                    pbVar2 = __s + lVar9;
                    lVar9 = lVar9 + 4;
                    *pbVar2 = *pbVar15;
                    pbVar2[1] = pbVar15[1];
                    pbVar2[2] = pbVar15[2];
                    pbVar2[3] = pbVar15[3];
                  } while (((uVar14 + 1) - lVar10) + lVar9 != 9);
                }
                if ((uVar17 & 3) != 0) {
                  lVar10 = -uVar14;
                  pbVar12 = __s + lVar9;
                  do {
                    lVar10 = lVar10 + 1;
                    *pbVar12 = pbVar12[-uVar8];
                    pbVar12 = pbVar12 + 1;
                  } while (lVar10 != 0);
                }
              }
            }
          }
          else {
            *(undefined4 *)__s = *(undefined4 *)pbVar12;
            *(undefined4 *)(__s + 4) = *(undefined4 *)(pbVar12 + 4);
            *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar12 + 8);
            if ((0xc < (long)__n) &&
               (*(undefined4 *)(__s + 0xc) = *(undefined4 *)(pbVar12 + 0xc), 0x10 < (long)__n)) {
              lVar10 = 0x10;
              iVar22 = 0x14;
              do {
                *(undefined4 *)(__s + lVar10) = *(undefined4 *)(pbVar12 + lVar10);
                lVar10 = (long)iVar22;
                iVar22 = iVar22 + 4;
              } while (lVar10 < (long)__n);
            }
          }
        }
        else {
          *(undefined8 *)__s = *(undefined8 *)pbVar12;
          *(undefined4 *)(__s + 8) = *(undefined4 *)(pbVar12 + 8);
          if (0xc < (long)__n) {
            lVar9 = lVar10 + -4;
            lVar20 = -uVar8;
            pbVar12 = __s + 0xc;
            if (3 < lVar9) {
              uVar8 = lVar10 - 8;
              uVar17 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
              if ((uVar17 & 7) != 0) {
                lVar19 = -((ulong)uVar17 & 7);
                pbVar15 = pbVar12;
                do {
                  lVar9 = lVar9 + -8;
                  pbVar12 = pbVar15 + 8;
                  *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar15 + lVar20);
                  lVar19 = lVar19 + 1;
                  pbVar15 = pbVar12;
                } while (lVar19 != 0);
              }
              if (0x37 < uVar8) {
                do {
                  pbVar15 = pbVar12 + lVar20;
                  *(undefined8 *)pbVar12 = *(undefined8 *)pbVar15;
                  *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar15 + 8);
                  *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
                  *(undefined8 *)(pbVar12 + 0x18) = *(undefined8 *)(pbVar15 + 0x18);
                  *(undefined8 *)(pbVar12 + 0x20) = *(undefined8 *)(pbVar15 + 0x20);
                  *(undefined8 *)(pbVar12 + 0x28) = *(undefined8 *)(pbVar15 + 0x28);
                  *(undefined8 *)(pbVar12 + 0x30) = *(undefined8 *)(pbVar15 + 0x30);
                  lVar9 = lVar9 + -0x40;
                  *(undefined8 *)(pbVar12 + 0x38) = *(undefined8 *)(pbVar15 + 0x38);
                  pbVar12 = pbVar12 + 0x40;
                } while (3 < lVar9);
              }
              if ((long)((lVar10 + -0xc) - (uVar8 & 0xfffffffffffffff8)) < 1) goto LAB_0014456c;
            }
            *(undefined4 *)pbVar12 = *(undefined4 *)(pbVar12 + lVar20);
          }
        }
      }
      else {
        uVar11 = local_68 - uVar11;
        *puVar18 = uVar5 - (uVar5 >> 3);
        *puVar21 = uVar6 - (uVar6 >> 6);
        puVar13 = local_70;
        local_68 = uVar11;
        local_64 = uVar17;
        if (uVar11 >> 0x18 == 0) {
          local_68 = uVar11 * 0x100;
          uVar17 = uVar17 * 0x100;
          local_64 = (byte)*local_70 | uVar17;
          puVar13 = (uint *)((long)local_70 + 1);
          if ((uVar11 >> 0x10 & 0xff) == 0) {
            local_68 = uVar11 * 0x10000;
            local_64 = (uint)*(byte *)((long)local_70 + 1) |
                       ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
            puVar13 = (uint *)((long)local_70 + 2);
          }
        }
        local_70 = puVar13;
        lVar10 = FUN_00148db0((long)in_x6 + uVar14 * 0x16 + 0x45a0,&local_64,&local_68,&local_70);
        __n = lVar10 + 2;
        pbVar12 = __s + -uVar8;
        if (uVar16 < 8) {
          *__s = *pbVar12;
          __s[1] = pbVar12[1];
          __s[2] = pbVar12[2];
          __s[3] = pbVar12[3];
          if (4 < (long)__n) {
            __s[4] = pbVar12[4];
            __s[5] = pbVar12[5];
            __s[6] = pbVar12[6];
            __s[7] = pbVar12[7];
          }
        }
        else {
          *(undefined4 *)__s = *(undefined4 *)pbVar12;
          if (4 < (long)__n) {
            *(undefined4 *)(__s + 4) = *(undefined4 *)(__s + (4 - uVar8));
          }
        }
      }
LAB_0014456c:
      bVar1 = lVar24 < 7;
      lVar24 = 0xb;
      if (bVar1) {
        lVar24 = 8;
      }
      goto joined_r0x00144584;
    }
    uVar11 = uVar11 - uVar16;
    *puVar18 = uVar5 - (uVar5 >> 3);
    *puVar21 = uVar6 - (uVar6 >> 6);
    puVar13 = local_70;
    local_68 = uVar11;
    local_64 = uVar17;
    if (uVar11 >> 0x18 == 0) {
      local_68 = uVar11 * 0x100;
      uVar17 = uVar17 * 0x100;
      local_64 = (byte)*local_70 | uVar17;
      puVar13 = (uint *)((long)local_70 + 1);
      if ((uVar11 >> 0x10 & 0xff) == 0) {
        local_68 = uVar11 * 0x10000;
        local_64 = (uint)*(byte *)((long)local_70 + 1) |
                   ((uint)(byte)*local_70 | uVar17 & 0xffff00) << 8;
        puVar13 = (uint *)((long)local_70 + 2);
      }
    }
    local_70 = puVar13;
    pbVar12 = __s + 1;
    *__s = bVar7;
    in_stack_00000000 = in_stack_00000000 + 1;
    bVar1 = lVar24 < 7;
    lVar24 = 0xb;
    if (bVar1) {
      lVar24 = 9;
    }
    __s = pbVar12;
  } while (pbVar12 < param_2);
LAB_0014458c:
  if (pbVar12 == param_2) {
    iVar22 = 1;
    if (local_68 < 0x2000001) {
      iVar22 = 2;
    }
    iVar22 = (-4 - (int)param_3) + (int)local_70 + iVar22;
    in_x6[2] = local_80;
    in_x6[3] = local_78;
    *in_x6 = uVar3;
    in_x6[1] = uVar4;
  }
  else {
    FUN_0010a430();
    if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
      (**(code **)PTR_PTR_043722f8)
                (0,"v:/devel/projects/oodle2/core/lzadecompresssub.inl",0x1c6,
                 "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
    }
    FUN_0010a450();
    iVar22 = -1;
  }
  return iVar22;
}


