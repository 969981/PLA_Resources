/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013fad0; name: FUN_0013fad0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0013fad0(byte *param_1,byte *param_2,byte *param_3,ulong *param_4,undefined8 param_5,
                undefined8 param_6,long param_7,long param_8,long param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ushort *puVar15;
  byte *__s;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  byte *in_x15;
  byte *extraout_x15;
  byte *extraout_x15_00;
  long lVar27;
  ulong __n;
  ulong uVar28;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if ((long)param_4 - (long)param_3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*param_3 << 0x38;
  }
  puVar9 = (ulong *)(param_3 + 1);
  if (7 < (long)param_4 - (long)puVar9) {
    uVar14 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    goto LAB_0013fc54;
  }
  if ((long)param_4 - (long)puVar9 < 1) {
    uVar19 = 0;
    if (0 < (long)param_4 - (long)(param_3 + 2)) goto LAB_0013fb5c;
LAB_0013fba8:
    uVar17 = 0;
    if (0 < (long)param_4 - (long)(param_3 + 3)) goto LAB_0013fb74;
LAB_0013fbbc:
    uVar21 = 0;
    if (0 < (long)param_4 - (long)(param_3 + 4)) goto LAB_0013fb8c;
LAB_0013fbd0:
    uVar14 = 0;
  }
  else {
    uVar19 = (uint)(byte)*puVar9 << 0x18;
    if ((long)param_4 - (long)(param_3 + 2) < 1) goto LAB_0013fba8;
LAB_0013fb5c:
    uVar17 = (uint)param_3[2] << 0x10;
    if ((long)param_4 - (long)(param_3 + 3) < 1) goto LAB_0013fbbc;
LAB_0013fb74:
    uVar21 = (uint)param_3[3] << 8;
    if ((long)param_4 - (long)(param_3 + 4) < 1) goto LAB_0013fbd0;
LAB_0013fb8c:
    uVar14 = (ulong)param_3[4];
  }
  if ((long)param_4 - (long)(param_3 + 5) < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)param_3[5] << 0x18;
  }
  if ((long)param_4 - (long)(param_3 + 6) < 1) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)param_3[6] << 0x10;
  }
  if ((long)param_4 - (long)(param_3 + 7) < 1) {
    uVar22 = 0;
  }
  else {
    uVar22 = (uint)param_3[7] << 8;
  }
  uVar14 = (ulong)(uVar18 | uVar12 | uVar22) | (uVar14 | (uVar17 | uVar19 | uVar21)) << 0x20;
LAB_0013fc54:
  uVar8 = uVar8 | uVar14 >> 8;
  local_70 = 0x14;
  uStack_6c = 0x18;
  local_68 = 0x200000001c;
  puVar9 = (ulong *)(param_3 + 7);
  uVar14 = 7;
  do {
    while( true ) {
      if (uVar8 < *(ulong *)(param_7 + 0x150)) {
        uVar20 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
        puVar15 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
      }
      else {
        lVar27 = *(long *)(param_7 + 0x2b0);
        if (uVar8 < *(ulong *)(param_7 + 0x158)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
          uVar20 = 0xb;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
          uVar20 = 0xc;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
          uVar20 = 0xd;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
          uVar20 = 0xe;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
          uVar20 = 0xf;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
          puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
          uVar20 = 0x10;
        }
        else {
          uVar20 = (ulong)*(int *)(param_7 + 0x29c);
          puVar15 = (ushort *)(lVar27 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
        }
      }
      uVar14 = uVar20 + uVar14;
      uVar8 = uVar8 << (uVar20 & 0x3f);
      uVar20 = (ulong)*puVar15 - 0x100;
      __s = param_1;
      if ((long)uVar20 < 0) break;
LAB_0013fd5c:
      uVar16 = *puVar9;
      lVar27 = uVar20 * 8;
      uVar4 = *(ushort *)(&DAT_039c4f94 + lVar27);
      __n = (ulong)uVar4;
      bVar1 = (&DAT_039c4f97)[lVar27];
      uVar28 = (ulong)bVar1;
      uVar26 = 0x3f - uVar14;
      puVar9 = (ulong *)((long)puVar9 + ((long)uVar14 >> 3));
      uVar14 = uVar14 & 7;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar8 = (uVar16 >> 0x20 | uVar16 << 0x20) >> (uVar26 & 0x3f) | uVar8;
      if ((long)uVar20 < 0x50) {
        puVar23 = (uint *)((ulong)&local_70 | (uVar20 & 3) << 2);
        local_70 = *puVar23;
        uVar20 = (ulong)local_70;
        *puVar23 = puVar23[-1];
        *(undefined8 *)(puVar23 + -2) = *(undefined8 *)(puVar23 + -3);
        if (bVar1 == 0) {
          *(undefined8 *)__s = *(undefined8 *)(__s + -uVar20);
        }
        else {
          if (0x9c < uVar4) {
            if ((long)uVar8 < 0) {
              if ((uVar8 >> 0x3e & 1) == 0) {
                uVar16 = uVar8 << 9;
                uVar28 = uVar14 + 9;
                __n = (uVar8 >> 0x37 & 0x7f) + 0x40 + __n;
                if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_001408a8;
              }
              else if ((uVar8 >> 0x3d & 1) == 0) {
                uVar16 = uVar8 << 0xb;
                uVar28 = uVar14 + 0xb;
                __n = (uVar8 >> 0x35 & 0xff) + 0xc0 + __n;
                if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_001408a8;
              }
              else if ((uVar8 >> 0x3c & 1) == 0) {
                uVar16 = uVar8 << 0xe;
                uVar28 = uVar14 + 0xe;
                __n = (uVar8 >> 0x32 & 0x3ff) + 0x1c0 + __n;
                if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_001408a8;
              }
              else {
                uVar16 = uVar8 << 0x12;
                uVar28 = uVar14 + 0x12;
                __n = (uVar8 >> 0x2e & 0x3fff) + 0x5c0 + __n;
                if (__n <= (ulong)((long)param_2 - (long)__s)) {
LAB_001408a8:
                  pbVar10 = __s;
                  do {
                    pbVar25 = pbVar10 + 4;
                    *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + -uVar20);
                    pbVar10 = pbVar25;
                  } while (pbVar25 < __s + __n);
                  goto LAB_001408c4;
                }
              }
            }
            else {
              uVar16 = uVar8 << 7;
              uVar28 = uVar14 + 7;
              __n = (uVar8 >> 0x39 & 0x3f) + __n;
              if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_001408a8;
            }
            FUN_0010a430();
            pcVar11 = *(code **)PTR_PTR_043722f8;
            if (pcVar11 == (code *)0x0) goto LAB_00141074;
            uVar7 = 0x9d;
LAB_0014106c:
            (*pcVar11)(0,"v:/devel/projects/oodle2/core/rrlzhlwdecompresssub.inl",uVar7,
                       "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_00141074:
            FUN_0010a450();
            return 0;
          }
          uVar16 = uVar8 << (uVar28 & 0x3f);
          __n = (uVar8 >> (-uVar28 & 0x3f)) + __n;
          pbVar10 = __s;
          do {
            pbVar25 = pbVar10 + 4;
            *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + -uVar20);
            pbVar10 = pbVar25;
          } while (pbVar25 < __s + __n);
          uVar28 = uVar14 + uVar28;
LAB_001408c4:
          uVar8 = *puVar9;
          puVar9 = (ulong *)((long)puVar9 + (uVar28 >> 3));
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar28 & 7;
          uVar8 = (uVar8 >> 0x20 | uVar8 << 0x20) >> (0x3f - uVar28 & 0x3f) | uVar16;
        }
      }
      else {
        iVar6 = *(int *)(&DAT_039c4f90 + uVar20 * 8);
        if (iVar6 == 1) {
          if (uVar8 < *(ulong *)(param_8 + 0x150)) {
            uVar20 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar8 >> 0x36));
            uVar5 = *(ushort *)(*(long *)(param_8 + 0x2c0) + (uVar8 >> 0x36) * 2);
          }
          else {
            if (uVar8 < *(ulong *)(param_8 + 0x158)) {
              lVar27 = (uVar8 >> 0x35) - *(long *)(param_8 + 0x58);
              uVar20 = 0xb;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x160)) {
              lVar27 = (uVar8 >> 0x34) - *(long *)(param_8 + 0x60);
              uVar20 = 0xc;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x168)) {
              lVar27 = (uVar8 >> 0x33) - *(long *)(param_8 + 0x68);
              uVar20 = 0xd;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x170)) {
              lVar27 = (uVar8 >> 0x32) - *(long *)(param_8 + 0x70);
              uVar20 = 0xe;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x178)) {
              lVar27 = (uVar8 >> 0x31) - *(long *)(param_8 + 0x78);
              uVar20 = 0xf;
            }
            else {
              if (*(ulong *)(param_8 + 0x180) <= uVar8) {
                uVar20 = (ulong)*(int *)(param_8 + 0x29c);
                uVar5 = *(ushort *)
                         (*(long *)(param_8 + 0x2b0) + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
                goto joined_r0x00140eb0;
              }
              lVar27 = (uVar8 >> 0x30) - *(long *)(param_8 + 0x80);
              uVar20 = 0x10;
            }
            uVar5 = *(ushort *)(*(long *)(param_8 + 0x2b0) + lVar27 * 2);
          }
joined_r0x00140eb0:
          uVar26 = (ulong)uVar5;
          if (0xf < uVar26) {
            local_68 = CONCAT44((undefined4)local_68,uStack_6c);
            uStack_6c = (undefined4)(uVar26 + 1);
          }
          uVar14 = uVar20 + uVar14;
          uVar8 = uVar8 << (uVar20 & 0x3f);
          if (bVar1 == 0) {
            pbVar10 = __s + ~uVar26;
            *__s = *pbVar10;
            __s[1] = pbVar10[1];
            __s[2] = pbVar10[2];
            __s[3] = pbVar10[3];
            __s[4] = pbVar10[4];
            __s[5] = pbVar10[5];
            __s[6] = pbVar10[6];
            __s[7] = pbVar10[7];
            uVar16 = uVar14;
          }
          else if (uVar4 < 0x9d) {
            uVar20 = uVar8 >> (-uVar28 & 0x3f);
            uVar8 = uVar8 << (uVar28 & 0x3f);
            uVar16 = uVar14 + uVar28;
            __n = uVar20 + __n;
            pbVar10 = __s + ~uVar26;
            if (uVar5 == 0) {
              bVar1 = *pbVar10;
LAB_00140324:
              memset(__s,(uint)bVar1,__n);
              in_x15 = extraout_x15_00;
            }
            else {
              *__s = *pbVar10;
              __s[1] = pbVar10[1];
              __s[2] = pbVar10[2];
              __s[3] = pbVar10[3];
              __s[4] = pbVar10[4];
              __s[5] = pbVar10[5];
              __s[6] = pbVar10[6];
              pbVar25 = pbVar10 + 8;
              __s[7] = pbVar10[7];
              uVar14 = __n - 8;
              if ((uVar14 & 7) == 0) {
                pbVar10 = __s + 8;
              }
              else {
                uVar20 = 0;
                do {
                  uVar28 = uVar20;
                  uVar20 = uVar28 + 1;
                  __s[uVar28 + 8] = pbVar25[uVar28];
                } while ((uVar14 & 7) != uVar20);
                pbVar10 = __s + uVar28 + 9;
                pbVar25 = pbVar25 + uVar20;
                uVar14 = uVar14 - uVar20;
              }
              if (6 < __n - 9) {
                do {
                  *pbVar10 = *pbVar25;
                  pbVar10[1] = pbVar25[1];
                  pbVar10[2] = pbVar25[2];
                  pbVar10[3] = pbVar25[3];
                  pbVar10[4] = pbVar25[4];
                  pbVar10[5] = pbVar25[5];
                  pbVar10[6] = pbVar25[6];
                  pbVar10[7] = pbVar25[7];
                  uVar14 = uVar14 - 8;
                  pbVar25 = pbVar25 + 8;
                  pbVar10 = pbVar10 + 8;
                } while (uVar14 != 0);
              }
            }
          }
          else {
            uVar20 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar14 & 7;
            uVar20 = (uVar20 >> 0x20 | uVar20 << 0x20) >> (0x3f - uVar14 & 0x3f) | uVar8;
            if ((long)uVar20 < 0) {
              if ((uVar20 >> 0x3e & 1) == 0) {
                uVar8 = uVar20 << 9;
                uVar16 = uVar16 + 9;
                __n = (uVar20 >> 0x37 & 0x7f) + 0x40 + __n;
                if ((ulong)((long)param_2 - (long)__s) < __n) goto LAB_00141018;
              }
              else if ((uVar20 >> 0x3d & 1) == 0) {
                uVar8 = uVar20 << 0xb;
                uVar16 = uVar16 + 0xb;
                __n = (uVar20 >> 0x35 & 0xff) + 0xc0 + __n;
                if ((ulong)((long)param_2 - (long)__s) < __n) goto LAB_00141018;
              }
              else if ((uVar20 >> 0x3c & 1) == 0) {
                uVar8 = uVar20 << 0xe;
                uVar16 = uVar16 + 0xe;
                __n = (uVar20 >> 0x32 & 0x3ff) + 0x1c0 + __n;
                if ((ulong)((long)param_2 - (long)__s) < __n) goto LAB_00141018;
              }
              else {
                uVar8 = uVar20 << 0x12;
                uVar16 = uVar16 + 0x12;
                __n = (uVar20 >> 0x2e & 0x3fff) + 0x5c0 + __n;
                if ((ulong)((long)param_2 - (long)__s) < __n) {
LAB_00141018:
                  FUN_0010a430();
                  pcVar11 = *(code **)PTR_PTR_043722f8;
                  if (pcVar11 == (code *)0x0) goto LAB_00141074;
                  uVar7 = 0xf1;
                  goto LAB_0014106c;
                }
              }
            }
            else {
              uVar8 = uVar20 << 7;
              uVar16 = uVar16 + 7;
              __n = (uVar20 >> 0x39 & 0x3f) + __n;
              if ((ulong)((long)param_2 - (long)__s) < __n) goto LAB_00141018;
            }
            puVar9 = (ulong *)((long)puVar9 + ((long)uVar14 >> 3));
            pbVar10 = __s + ~uVar26;
            if (pbVar10 != (byte *)0x0) {
              if (uVar26 + 1 < 4) {
                if (uVar5 == 1) {
                  bVar1 = *pbVar10;
                  bVar2 = pbVar10[1];
                  uVar14 = __n >> 1;
                  uVar28 = uVar14 - 1;
                  uVar20 = __n >> 1 & 7;
                  pbVar10 = __s;
                  if (uVar20 != 0) {
                    lVar27 = -uVar20;
                    pbVar25 = __s;
                    do {
                      pbVar10 = pbVar25 + 2;
                      *pbVar25 = bVar1;
                      pbVar25[1] = bVar2;
                      uVar14 = uVar14 - 1;
                      lVar27 = lVar27 + 1;
                      pbVar25 = pbVar10;
                    } while (lVar27 != 0);
                  }
                  pbVar25 = pbVar10;
                  if (6 < uVar28) {
                    do {
                      pbVar10 = pbVar25 + 0x10;
                      *pbVar25 = bVar1;
                      pbVar25[1] = bVar2;
                      pbVar25[2] = bVar1;
                      uVar14 = uVar14 - 8;
                      pbVar25[3] = bVar2;
                      pbVar25[4] = bVar1;
                      pbVar25[5] = bVar2;
                      pbVar25[6] = bVar1;
                      pbVar25[7] = bVar2;
                      pbVar25[8] = bVar1;
                      pbVar25[9] = bVar2;
                      pbVar25[10] = bVar1;
                      pbVar25[0xb] = bVar2;
                      pbVar25[0xc] = bVar1;
                      pbVar25[0xd] = bVar2;
                      pbVar25[0xe] = bVar1;
                      pbVar25[0xf] = bVar2;
                      pbVar25 = pbVar10;
                    } while (uVar14 != 0);
                  }
                  if ((__n & 1) != 0) {
                    *pbVar10 = bVar1;
                  }
                }
                else {
                  if (uVar5 == 0) {
                    bVar1 = *pbVar10;
                    goto LAB_00140324;
                  }
                  bVar1 = *pbVar10;
                  bVar2 = pbVar10[1];
                  bVar3 = pbVar10[2];
                  uVar14 = __n / 3;
                  uVar20 = __n / 3 & 3;
                  uVar28 = uVar14 - 1;
                  pbVar10 = __s;
                  if (uVar20 != 0) {
                    lVar27 = -uVar20;
                    do {
                      in_x15 = pbVar10;
                      *in_x15 = bVar1;
                      in_x15[1] = bVar2;
                      uVar14 = uVar14 - 1;
                      in_x15[2] = bVar3;
                      pbVar10 = in_x15 + 3;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 0);
                  }
                  if (2 < uVar28) {
                    do {
                      pbVar25 = pbVar10;
                      pbVar10 = pbVar25 + 0xc;
                      *pbVar25 = bVar1;
                      pbVar25[1] = bVar2;
                      pbVar25[2] = bVar3;
                      uVar14 = uVar14 - 4;
                      pbVar25[3] = bVar1;
                      pbVar25[4] = bVar2;
                      pbVar25[5] = bVar3;
                      pbVar25[6] = bVar1;
                      pbVar25[7] = bVar2;
                      pbVar25[8] = bVar3;
                      pbVar25[9] = bVar1;
                      pbVar25[10] = bVar2;
                      pbVar25[0xb] = bVar3;
                    } while (uVar14 != 0);
                    in_x15 = pbVar25 + 9;
                  }
                  if (__n % 3 != 0) {
                    *pbVar10 = bVar1;
                    if (__n % 3 == 1) goto LAB_00140a78;
                    pbVar10 = in_x15 + 4;
                  }
                  *pbVar10 = bVar2;
                }
              }
              else {
                *__s = *pbVar10;
                __s[1] = pbVar10[1];
                __s[2] = pbVar10[2];
                __s[3] = pbVar10[3];
                __s[4] = pbVar10[4];
                __s[5] = pbVar10[5];
                __s[6] = pbVar10[6];
                __s[7] = pbVar10[7];
                uVar14 = __n - 8;
                pbVar10 = pbVar10 + 8;
                if ((uVar14 & 7) == 0) {
                  pbVar25 = __s + 8;
                }
                else {
                  uVar20 = 0;
                  do {
                    uVar28 = uVar20;
                    uVar20 = uVar28 + 1;
                    __s[uVar28 + 8] = pbVar10[uVar28];
                  } while ((uVar14 & 7) != uVar20);
                  pbVar25 = __s + uVar28 + 9;
                  pbVar10 = pbVar10 + uVar20;
                  uVar14 = uVar14 - uVar20;
                }
                if (6 < __n - 9) {
                  do {
                    *pbVar25 = *pbVar10;
                    pbVar25[1] = pbVar10[1];
                    pbVar25[2] = pbVar10[2];
                    pbVar25[3] = pbVar10[3];
                    pbVar25[4] = pbVar10[4];
                    pbVar25[5] = pbVar10[5];
                    pbVar25[6] = pbVar10[6];
                    pbVar25[7] = pbVar10[7];
                    uVar14 = uVar14 - 8;
                    pbVar10 = pbVar10 + 8;
                    pbVar25 = pbVar25 + 8;
                  } while (uVar14 != 0);
                }
              }
            }
          }
LAB_00140a78:
          uVar14 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          puVar9 = (ulong *)((long)puVar9 + ((long)uVar16 >> 3));
          uVar8 = (uVar14 >> 0x20 | uVar14 << 0x20) >> (0x3f - uVar16 & 0x3f) | uVar8;
        }
        else {
          if (uVar8 < *(ulong *)(param_9 + 0x150)) {
            uVar20 = (ulong)*(byte *)(*(long *)(param_9 + 0x2b8) + (uVar8 >> 0x36));
            puVar15 = (ushort *)(*(long *)(param_9 + 0x2c0) + (uVar8 >> 0x36) * 2);
          }
          else {
            lVar24 = *(long *)(param_9 + 0x2b0);
            if (uVar8 < *(ulong *)(param_9 + 0x158)) {
              uVar20 = 0xb;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x35) - *(long *)(param_9 + 0x58)) * 2);
            }
            else if (uVar8 < *(ulong *)(param_9 + 0x160)) {
              uVar20 = 0xc;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x34) - *(long *)(param_9 + 0x60)) * 2);
            }
            else if (uVar8 < *(ulong *)(param_9 + 0x168)) {
              uVar20 = 0xd;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x33) - *(long *)(param_9 + 0x68)) * 2);
            }
            else if (uVar8 < *(ulong *)(param_9 + 0x170)) {
              uVar20 = 0xe;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x32) - *(long *)(param_9 + 0x70)) * 2);
            }
            else if (uVar8 < *(ulong *)(param_9 + 0x178)) {
              uVar20 = 0xf;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x31) - *(long *)(param_9 + 0x78)) * 2);
            }
            else if (uVar8 < *(ulong *)(param_9 + 0x180)) {
              uVar20 = 0x10;
              puVar15 = (ushort *)(lVar24 + ((uVar8 >> 0x30) - *(long *)(param_9 + 0x80)) * 2);
            }
            else {
              uVar20 = (ulong)*(int *)(param_9 + 0x29c);
              puVar15 = (ushort *)(lVar24 + (long)(*(int *)(param_9 + 0x288) + -1) * 2);
            }
          }
          uVar5 = *puVar15;
          uVar16 = uVar20 + uVar14;
          uVar8 = uVar8 << (uVar20 & 0x3f);
          if (iVar6 == 0x400a1) {
            iVar13 = 0;
            lVar24 = (long)param_4 - (long)puVar9;
            lVar27 = (long)uVar16 >> 3;
            if (7 < lVar24) goto LAB_00140050;
LAB_0013fee8:
            if (lVar24 < 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = (uint)(byte)*puVar9 << 0x18;
            }
            if ((long)param_4 - (long)((long)puVar9 + 1U) < 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = (uint)*(byte *)((long)puVar9 + 1) << 0x10;
            }
            if ((long)param_4 - (long)((long)puVar9 + 2U) < 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = (uint)*(byte *)((long)puVar9 + 2) << 8;
            }
            if ((long)param_4 - (long)((long)puVar9 + 3U) < 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulong)*(byte *)((long)puVar9 + 3);
            }
            if ((long)param_4 - (long)((long)puVar9 + 4U) < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = (uint)*(byte *)((long)puVar9 + 4U) << 0x18;
            }
            if ((long)param_4 - (long)((long)puVar9 + 5U) < 1) {
              uVar18 = 0;
            }
            else {
              uVar18 = (uint)*(byte *)((long)puVar9 + 5) << 0x10;
            }
            if ((long)param_4 - (long)((long)puVar9 + 6U) < 1) {
              in_x15 = (byte *)0x0;
            }
            else {
              in_x15 = (byte *)((ulong)*(byte *)((long)puVar9 + 6U) << 8);
            }
            if ((long)param_4 - (long)((long)puVar9 + 7U) < 1) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulong)*(byte *)((long)puVar9 + 7U);
            }
            uVar20 = (ulong)(uVar18 | uVar12 | (uint)in_x15) |
                     (uVar14 | (uVar17 | uVar19 | uVar21)) << 0x20 | uVar20;
            do {
              uVar14 = uVar16 & 7;
              uVar8 = uVar20 >> (0x3f - uVar16 & 0x3f) | uVar8;
              puVar9 = (ulong *)((long)puVar9 + lVar27);
              if (uVar8 == 0) {
                if (puVar9 < param_4) {
                  uVar19 = (uint)uVar14 ^ 0x3f;
                  uVar8 = 0;
                  uVar16 = 0x3f;
                  goto LAB_0014003c;
                }
                FUN_0010a430();
                if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                  (**(code **)PTR_PTR_043722f8)
                            (0,"v:/devel/projects/oodle2/core/rrvarbitcodes.cpp",0x3f,
                             "OODLE ERROR : corruption : ReadUnary past end\n");
                }
                FUN_0010a450();
                uVar8 = 0;
                iVar13 = 0;
                uVar20 = 0x3f;
                in_x15 = extraout_x15;
LAB_00140634:
                uVar14 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar8 = (uVar14 >> 0x20 | uVar14 << 0x20) >> (0x3f - uVar20 & 0x3f) | uVar8;
                puVar9 = (ulong *)((long)puVar9 + (uVar20 >> 3));
                uVar26 = uVar8 << 10;
                uVar16 = (uVar20 & 7) + 10;
                uVar14 = (ulong)((uint)(uVar8 >> 0x36) | iVar13 << 10);
                goto LAB_00140660;
              }
              uVar19 = (uint)LZCOUNT(uVar8);
              if (uVar19 < 0x1f) {
                uVar20 = LZCOUNT(uVar8) + 1;
                uVar8 = uVar8 << (uVar20 & 0x3f);
                uVar20 = uVar20 + uVar14;
                uVar19 = iVar13 + uVar19;
                if (uVar19 == 0) {
                  iVar13 = 0;
                  goto LAB_00140634;
                }
                if ((long)param_4 - (long)puVar9 < 8) {
                  if ((long)param_4 - (long)puVar9 < 1) {
                    uVar17 = 0;
                    if (0 < (long)param_4 - (long)((long)puVar9 + 1U)) goto LAB_0014039c;
LAB_00140524:
                    uVar21 = 0;
                    if (0 < (long)param_4 - (long)((long)puVar9 + 2U)) goto LAB_001403b4;
LAB_00140538:
                    uVar12 = 0;
                    if (0 < (long)param_4 - (long)((long)puVar9 + 3U)) goto LAB_001403cc;
LAB_0014054c:
                    uVar14 = 0;
                  }
                  else {
                    uVar17 = (uint)(byte)*puVar9 << 0x18;
                    if ((long)param_4 - (long)((long)puVar9 + 1U) < 1) goto LAB_00140524;
LAB_0014039c:
                    uVar21 = (uint)*(byte *)((long)puVar9 + 1) << 0x10;
                    if ((long)param_4 - (long)((long)puVar9 + 2U) < 1) goto LAB_00140538;
LAB_001403b4:
                    uVar12 = (uint)*(byte *)((long)puVar9 + 2) << 8;
                    if ((long)param_4 - (long)((long)puVar9 + 3U) < 1) goto LAB_0014054c;
LAB_001403cc:
                    uVar14 = (ulong)*(byte *)((long)puVar9 + 3);
                  }
                  if ((long)param_4 - (long)((long)puVar9 + 4U) < 1) {
                    uVar18 = 0;
                    if (0 < (long)param_4 - (long)((long)puVar9 + 5U)) goto LAB_00140580;
LAB_001405a0:
                    uVar22 = 0;
                  }
                  else {
                    uVar18 = (uint)*(byte *)((long)puVar9 + 4U) << 0x18;
                    if ((long)param_4 - (long)((long)puVar9 + 5U) < 1) goto LAB_001405a0;
LAB_00140580:
                    uVar22 = (uint)*(byte *)((long)puVar9 + 5) << 0x10;
                  }
                  if ((long)param_4 - (long)((long)puVar9 + 6U) < 1) {
                    in_x15 = (byte *)0x0;
                  }
                  else {
                    in_x15 = (byte *)((ulong)*(byte *)((long)puVar9 + 6U) << 8);
                  }
                  if ((long)param_4 - (long)((long)puVar9 + 7U) < 1) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = (ulong)*(byte *)((long)puVar9 + 7U);
                  }
                  uVar16 = (ulong)(uVar22 | uVar18 | (uint)in_x15) |
                           (uVar14 | (uVar21 | uVar17 | uVar12)) << 0x20 | uVar16;
                }
                else {
                  uVar14 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar16 = uVar14 >> 0x20 | uVar14 << 0x20;
                }
                puVar9 = (ulong *)((long)puVar9 + (uVar20 >> 3));
                uVar14 = uVar16 >> (0x3f - uVar20 & 0x3f) | uVar8;
                uVar8 = uVar14 << ((ulong)uVar19 & 0x3f);
                uVar20 = (uVar20 & 7) + (ulong)uVar19;
                iVar13 = (int)(uVar14 >> ((ulong)-uVar19 & 0x3f)) + ~(-1 << (ulong)(uVar19 & 0x1f));
                goto LAB_00140634;
              }
              uVar19 = 0x1f;
              uVar8 = uVar8 << 0x1f;
              uVar16 = uVar14 + 0x1f;
LAB_0014003c:
              iVar13 = uVar19 + iVar13;
              lVar24 = (long)param_4 - (long)puVar9;
              lVar27 = (long)uVar16 >> 3;
              if (lVar24 < 8) goto LAB_0013fee8;
LAB_00140050:
              uVar14 = (*puVar9 & 0xff00ff00ff00ff00) >> 8 | (*puVar9 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar20 = uVar14 >> 0x20 | uVar14 << 0x20;
            } while( true );
          }
          uVar20 = (ulong)(byte)(&DAT_039c4f96)[lVar27];
          uVar26 = uVar8;
          if (uVar20 != 0) {
            uVar16 = uVar16 + uVar20;
            uVar26 = uVar8 << (uVar20 & 0x3f);
          }
          uVar14 = 0;
          if (uVar20 != 0) {
            uVar14 = uVar8 >> ((ulong)-(uint)(byte)(&DAT_039c4f96)[lVar27] & 0x3f);
          }
LAB_00140660:
          lVar27 = (ulong)uVar5 + (long)iVar6 + uVar14 * 0x80;
          local_68 = CONCAT44((undefined4)local_68,uStack_6c);
          uStack_6c = (int)lVar27;
          if (bVar1 == 0) {
            *(undefined8 *)__s = *(undefined8 *)(__s + -lVar27);
          }
          else {
            if (0x9c < uVar4) {
              if ((long)uVar26 < 0) {
                if ((uVar26 >> 0x3e & 1) == 0) {
                  uVar8 = uVar26 >> 0x37;
                  uVar26 = uVar26 << 9;
                  uVar16 = uVar16 + 9;
                  __n = (uVar8 & 0x7f) + 0x40 + __n;
                  if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014095c;
                }
                else if ((uVar26 >> 0x3d & 1) == 0) {
                  uVar8 = uVar26 >> 0x35;
                  uVar26 = uVar26 << 0xb;
                  uVar16 = uVar16 + 0xb;
                  __n = (uVar8 & 0xff) + 0xc0 + __n;
                  if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014095c;
                }
                else if ((uVar26 >> 0x3c & 1) == 0) {
                  uVar8 = uVar26 >> 0x32;
                  uVar26 = uVar26 << 0xe;
                  uVar16 = uVar16 + 0xe;
                  __n = (uVar8 & 0x3ff) + 0x1c0 + __n;
                  if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014095c;
                }
                else {
                  uVar8 = uVar26 >> 0x2e;
                  uVar26 = uVar26 << 0x12;
                  uVar16 = uVar16 + 0x12;
                  __n = (uVar8 & 0x3fff) + 0x5c0 + __n;
                  if (__n <= (ulong)((long)param_2 - (long)__s)) {
LAB_0014095c:
                    pbVar10 = __s;
                    do {
                      pbVar25 = pbVar10 + 4;
                      *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + -lVar27);
                      pbVar10 = pbVar25;
                    } while (pbVar25 < __s + __n);
                    goto LAB_00140978;
                  }
                }
              }
              else {
                uVar8 = uVar26 >> 0x39;
                uVar26 = uVar26 << 7;
                uVar16 = uVar16 + 7;
                __n = (uVar8 & 0x3f) + __n;
                if (__n <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014095c;
              }
              FUN_0010a430();
              pcVar11 = *(code **)PTR_PTR_043722f8;
              if (pcVar11 == (code *)0x0) goto LAB_00141074;
              uVar7 = 0x157;
              goto LAB_0014106c;
            }
            uVar8 = uVar26 >> (-uVar28 & 0x3f);
            uVar26 = uVar26 << (uVar28 & 0x3f);
            __n = uVar8 + __n;
            pbVar10 = __s;
            do {
              pbVar25 = pbVar10 + 4;
              *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + -lVar27);
              pbVar10 = pbVar25;
            } while (pbVar25 < __s + __n);
            uVar16 = uVar16 + uVar28;
          }
LAB_00140978:
          uVar8 = *puVar9;
          puVar9 = (ulong *)((long)puVar9 + ((long)uVar16 >> 3));
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = (uVar8 >> 0x20 | uVar8 << 0x20) >> (0x3f - uVar16 & 0x3f) | uVar26;
        }
        uVar14 = uVar16 & 7;
      }
      __s = __s + __n;
      param_1 = __s;
      if (param_2 <= __s) goto LAB_00140f7c;
    }
    __s = param_1 + 1;
    *param_1 = (byte)*puVar15;
    if (param_2 <= __s) break;
    if (uVar8 < *(ulong *)(param_7 + 0x150)) {
      uVar20 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
      puVar15 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
    }
    else {
      lVar27 = *(long *)(param_7 + 0x2b0);
      if (uVar8 < *(ulong *)(param_7 + 0x158)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
        uVar20 = 0xb;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
        uVar20 = 0xc;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
        uVar20 = 0xd;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
        uVar20 = 0xe;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
        uVar20 = 0xf;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
        uVar20 = 0x10;
      }
      else {
        uVar20 = (ulong)*(int *)(param_7 + 0x29c);
        puVar15 = (ushort *)(lVar27 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
      }
    }
    uVar14 = uVar20 + uVar14;
    uVar8 = uVar8 << (uVar20 & 0x3f);
    uVar20 = (ulong)*puVar15 - 0x100;
    if (-1 < (long)uVar20) goto LAB_0013fd5c;
    __s = param_1 + 2;
    param_1[1] = (byte)*puVar15;
    if (param_2 <= __s) break;
    if (uVar8 < *(ulong *)(param_7 + 0x150)) {
      uVar20 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
      puVar15 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
    }
    else {
      lVar27 = *(long *)(param_7 + 0x2b0);
      if (uVar8 < *(ulong *)(param_7 + 0x158)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
        uVar20 = 0xb;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
        uVar20 = 0xc;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
        uVar20 = 0xd;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
        uVar20 = 0xe;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
        uVar20 = 0xf;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
        puVar15 = (ushort *)(lVar27 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
        uVar20 = 0x10;
      }
      else {
        uVar20 = (ulong)*(int *)(param_7 + 0x29c);
        puVar15 = (ushort *)(lVar27 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
      }
    }
    uVar14 = uVar20 + uVar14;
    uVar8 = uVar8 << (uVar20 & 0x3f);
    uVar20 = (ulong)*puVar15 - 0x100;
    if (-1 < (long)uVar20) goto LAB_0013fd5c;
    uVar20 = *puVar9;
    uVar28 = 0x3f - uVar14;
    puVar9 = (ulong *)((long)puVar9 + ((long)uVar14 >> 3));
    uVar14 = uVar14 & 7;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    __s = param_1 + 3;
    param_1[2] = (byte)*puVar15;
    uVar8 = (uVar20 >> 0x20 | uVar20 << 0x20) >> (uVar28 & 0x3f) | uVar8;
    param_1 = __s;
  } while (__s < param_2);
LAB_00140f7c:
  if (__s == param_2) {
    uVar8 = 0x46 - uVar14;
    if (-1 < (long)(0x3f - uVar14)) {
      uVar8 = 0x3f - uVar14;
    }
    iVar6 = ((int)puVar9 - (int)(uVar8 >> 3)) - (int)param_3;
  }
  else {
    FUN_0010a430();
    if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
      (**(code **)PTR_PTR_043722f8)
                (0,"v:/devel/projects/oodle2/core/rrlzhlwdecompresssub.inl",0x18a,
                 "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
    }
    FUN_0010a450();
    iVar6 = -1;
  }
  return iVar6;
}


