/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001410a0; name: FUN_001410a0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001410a0(byte *param_1,byte *param_2,byte *param_3,ulong *param_4,undefined8 param_5,
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
  byte *pbVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ushort *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  byte *__s;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint *puVar26;
  byte *pbVar27;
  byte *in_x15;
  byte *extraout_x15;
  byte *extraout_x15_00;
  ulong uVar28;
  ulong uVar29;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if ((long)param_4 - (long)param_3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*param_3 << 0x38;
  }
  puVar15 = (ulong *)(param_3 + 1);
  if (7 < (long)param_4 - (long)puVar15) {
    uVar12 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    goto LAB_00141220;
  }
  if ((long)param_4 - (long)puVar15 < 1) {
    uVar18 = 0;
    if ((long)param_4 - (long)(param_3 + 2) < 1) goto LAB_00141174;
LAB_00141128:
    uVar16 = (uint)param_3[2] << 0x10;
    if (0 < (long)param_4 - (long)(param_3 + 3)) goto LAB_00141140;
LAB_00141188:
    uVar23 = 0;
    if ((long)param_4 - (long)(param_3 + 4) < 1) goto LAB_0014119c;
LAB_00141158:
    uVar12 = (ulong)param_3[4];
  }
  else {
    uVar18 = (uint)(byte)*puVar15 << 0x18;
    if (0 < (long)param_4 - (long)(param_3 + 2)) goto LAB_00141128;
LAB_00141174:
    uVar16 = 0;
    if ((long)param_4 - (long)(param_3 + 3) < 1) goto LAB_00141188;
LAB_00141140:
    uVar23 = (uint)param_3[3] << 8;
    if (0 < (long)param_4 - (long)(param_3 + 4)) goto LAB_00141158;
LAB_0014119c:
    uVar12 = 0;
  }
  if ((long)param_4 - (long)(param_3 + 5) < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)param_3[5] << 0x18;
  }
  if ((long)param_4 - (long)(param_3 + 6) < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)param_3[6] << 0x10;
  }
  if ((long)param_4 - (long)(param_3 + 7) < 1) {
    uVar24 = 0;
  }
  else {
    uVar24 = (uint)param_3[7] << 8;
  }
  uVar12 = (ulong)(uVar17 | uVar11 | uVar24) | (uVar12 | (uVar16 | uVar18 | uVar23)) << 0x20;
LAB_00141220:
  uVar8 = uVar8 | uVar12 >> 8;
  local_70 = 0x14;
  uStack_6c = 0x18;
  local_68 = 0x200000001c;
  puVar15 = (ulong *)(param_3 + 7);
  uVar12 = 7;
  do {
    while( true ) {
      if (uVar8 < *(ulong *)(param_7 + 0x150)) {
        uVar19 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
        puVar14 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
      }
      else {
        lVar20 = *(long *)(param_7 + 0x2b0);
        if (uVar8 < *(ulong *)(param_7 + 0x158)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
          uVar19 = 0xb;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
          uVar19 = 0xc;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
          uVar19 = 0xd;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
          uVar19 = 0xe;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
          uVar19 = 0xf;
        }
        else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
          puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
          uVar19 = 0x10;
        }
        else {
          uVar19 = (ulong)*(int *)(param_7 + 0x29c);
          puVar14 = (ushort *)(lVar20 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
        }
      }
      uVar12 = uVar19 + uVar12;
      uVar8 = uVar8 << (uVar19 & 0x3f);
      uVar19 = (ulong)*puVar14 - 0x100;
      if ((long)uVar19 < 0) break;
      lVar20 = (long)uVar12 >> 3;
      __s = param_1;
joined_r0x0014130c:
      if ((long)param_4 - (long)puVar15 < 8) {
        if ((long)param_4 - (long)puVar15 < 1) {
          uVar18 = 0;
          if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_0014137c;
LAB_00141330:
          uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
          if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00141348;
LAB_00141390:
          uVar23 = 0;
          if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_001413a4;
LAB_00141360:
          uVar28 = (ulong)*(byte *)((long)puVar15 + 3);
        }
        else {
          uVar18 = (uint)(byte)*puVar15 << 0x18;
          if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_00141330;
LAB_0014137c:
          uVar16 = 0;
          if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00141390;
LAB_00141348:
          uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
          if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141360;
LAB_001413a4:
          uVar28 = 0;
        }
        if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
          uVar11 = 0;
          if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_001413f8;
LAB_001413d8:
          uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
        }
        else {
          uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
          if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_001413d8;
LAB_001413f8:
          uVar17 = 0;
        }
        if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
          in_x15 = (byte *)0x0;
        }
        else {
          in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
        }
        if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
          uVar25 = 0;
        }
        else {
          uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
        }
        uVar25 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
                 (uVar28 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar25;
      }
      else {
        uVar25 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
      }
      puVar15 = (ulong *)((long)puVar15 + lVar20);
      lVar20 = uVar19 * 8;
      uVar4 = *(ushort *)(&DAT_039c4f94 + lVar20);
      uVar28 = (ulong)uVar4;
      bVar1 = (&DAT_039c4f97)[lVar20];
      uVar29 = (ulong)bVar1;
      uVar8 = uVar25 >> (0x3f - uVar12 & 0x3f) | uVar8;
      uVar12 = uVar12 & 7;
      if ((long)uVar19 < 0x50) {
        puVar26 = (uint *)((ulong)&local_70 | (uVar19 & 3) << 2);
        local_70 = *puVar26;
        uVar19 = (ulong)local_70;
        *puVar26 = puVar26[-1];
        *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + -3);
        if (bVar1 == 0) {
          *(undefined8 *)__s = *(undefined8 *)((long)__s - uVar19);
          goto joined_r0x0014271c;
        }
        if (0x9c < uVar4) {
          if ((long)uVar8 < 0) {
            if ((uVar8 >> 0x3e & 1) == 0) {
              uVar25 = uVar8 << 9;
              uVar12 = uVar12 + 9;
              uVar28 = (uVar8 >> 0x37 & 0x7f) + 0x40 + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014276c;
            }
            else if ((uVar8 >> 0x3d & 1) == 0) {
              uVar25 = uVar8 << 0xb;
              uVar12 = uVar12 + 0xb;
              uVar28 = (uVar8 >> 0x35 & 0xff) + 0xc0 + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014276c;
            }
            else if ((uVar8 >> 0x3c & 1) == 0) {
              uVar25 = uVar8 << 0xe;
              uVar12 = uVar12 + 0xe;
              uVar28 = (uVar8 >> 0x32 & 0x3ff) + 0x1c0 + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014276c;
            }
            else {
              uVar25 = uVar8 << 0x12;
              uVar12 = uVar12 + 0x12;
              uVar28 = (uVar8 >> 0x2e & 0x3fff) + 0x5c0 + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) {
LAB_0014276c:
                pbVar9 = __s;
                do {
                  pbVar27 = pbVar9 + 4;
                  *(undefined4 *)pbVar9 = *(undefined4 *)(pbVar9 + -uVar19);
                  pbVar9 = pbVar27;
                } while (pbVar27 < (byte *)((long)__s + uVar28));
                goto joined_r0x00142794;
              }
            }
          }
          else {
            uVar25 = uVar8 << 7;
            uVar12 = uVar12 + 7;
            uVar28 = (uVar8 >> 0x39 & 0x3f) + uVar28;
            if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_0014276c;
          }
          FUN_0010a430();
          pcVar10 = *(code **)PTR_PTR_043722f8;
          if (pcVar10 == (code *)0x0) goto LAB_001431b4;
          uVar7 = 0x9d;
          goto LAB_001431ac;
        }
        uVar25 = uVar8 << (uVar29 & 0x3f);
        uVar28 = (uVar8 >> (-uVar29 & 0x3f)) + uVar28;
        pbVar9 = __s;
        do {
          pbVar27 = pbVar9 + 4;
          *(undefined4 *)pbVar9 = *(undefined4 *)(pbVar9 + -uVar19);
          pbVar9 = pbVar27;
        } while (pbVar27 < (byte *)((long)__s + uVar28));
        uVar12 = uVar12 + uVar29;
joined_r0x00142794:
        if ((long)param_4 - (long)puVar15 < 8) {
          if ((long)param_4 - (long)puVar15 < 1) {
            uVar18 = 0;
            if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00141a44;
LAB_001417b8:
            uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
            if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_001417d0;
LAB_00141a58:
            uVar23 = 0;
            if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00141a6c;
LAB_001417e8:
            uVar8 = (ulong)*(byte *)((long)puVar15 + 3);
          }
          else {
            uVar18 = (uint)(byte)*puVar15 << 0x18;
            if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_001417b8;
LAB_00141a44:
            uVar16 = 0;
            if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00141a58;
LAB_001417d0:
            uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
            if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_001417e8;
LAB_00141a6c:
            uVar8 = 0;
          }
          if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
            uVar11 = 0;
            if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_00141ac0;
LAB_00141aa0:
            uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
          }
          else {
            uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
            if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00141aa0;
LAB_00141ac0:
            uVar17 = 0;
          }
          if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
            uVar24 = 0;
          }
          else {
            uVar24 = (uint)*(byte *)((long)puVar15 + 6U) << 8;
          }
          if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
            in_x15 = (byte *)0x0;
          }
          else {
            in_x15 = (byte *)(ulong)*(byte *)((long)puVar15 + 7U);
          }
          uVar8 = (ulong)(uVar17 | uVar11 | uVar24) | (uVar8 | (uVar16 | uVar18 | uVar23)) << 0x20 |
                  (ulong)in_x15;
        }
        else {
          uVar8 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        }
        uVar8 = uVar8 >> (0x3f - uVar12 & 0x3f) | uVar25;
        puVar15 = (ulong *)((long)puVar15 + (uVar12 >> 3));
joined_r0x00142b58:
        uVar12 = uVar12 & 7;
      }
      else {
        iVar6 = *(int *)(&DAT_039c4f90 + uVar19 * 8);
        if (iVar6 == 1) {
          if (uVar8 < *(ulong *)(param_8 + 0x150)) {
            uVar19 = (ulong)*(byte *)(*(long *)(param_8 + 0x2b8) + (uVar8 >> 0x36));
            uVar5 = *(ushort *)(*(long *)(param_8 + 0x2c0) + (uVar8 >> 0x36) * 2);
          }
          else {
            if (uVar8 < *(ulong *)(param_8 + 0x158)) {
              lVar20 = (uVar8 >> 0x35) - *(long *)(param_8 + 0x58);
              uVar19 = 0xb;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x160)) {
              lVar20 = (uVar8 >> 0x34) - *(long *)(param_8 + 0x60);
              uVar19 = 0xc;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x168)) {
              lVar20 = (uVar8 >> 0x33) - *(long *)(param_8 + 0x68);
              uVar19 = 0xd;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x170)) {
              lVar20 = (uVar8 >> 0x32) - *(long *)(param_8 + 0x70);
              uVar19 = 0xe;
            }
            else if (uVar8 < *(ulong *)(param_8 + 0x178)) {
              lVar20 = (uVar8 >> 0x31) - *(long *)(param_8 + 0x78);
              uVar19 = 0xf;
            }
            else {
              if (*(ulong *)(param_8 + 0x180) <= uVar8) {
                uVar19 = (ulong)*(int *)(param_8 + 0x29c);
                uVar5 = *(ushort *)
                         (*(long *)(param_8 + 0x2b0) + (long)(*(int *)(param_8 + 0x288) + -1) * 2);
                goto joined_r0x00142fe8;
              }
              lVar20 = (uVar8 >> 0x30) - *(long *)(param_8 + 0x80);
              uVar19 = 0x10;
            }
            uVar5 = *(ushort *)(*(long *)(param_8 + 0x2b0) + lVar20 * 2);
          }
joined_r0x00142fe8:
          uVar25 = (ulong)uVar5;
          if (0xf < uVar25) {
            local_68 = CONCAT44((undefined4)local_68,uStack_6c);
            uStack_6c = (undefined4)(uVar25 + 1);
          }
          uVar12 = uVar19 + uVar12;
          uVar8 = uVar8 << (uVar19 & 0x3f);
          lVar20 = (long)uVar12 >> 3;
          if (bVar1 != 0) {
            if (uVar4 < 0x9d) {
              uVar19 = uVar8 >> (-uVar29 & 0x3f);
              uVar8 = uVar8 << (uVar29 & 0x3f);
              uVar12 = uVar12 + uVar29;
              uVar28 = uVar19 + uVar28;
              pbVar9 = (byte *)((long)__s + ~uVar25);
              if (uVar5 == 0) {
                bVar1 = *pbVar9;
LAB_00142860:
                memset(__s,(uint)bVar1,uVar28);
                in_x15 = extraout_x15_00;
              }
              else {
                *__s = *pbVar9;
                *(byte *)((long)__s + 1) = pbVar9[1];
                *(byte *)((long)__s + 2) = pbVar9[2];
                *(byte *)((long)__s + 3) = pbVar9[3];
                *(byte *)((long)__s + 4) = pbVar9[4];
                *(byte *)((long)__s + 5) = pbVar9[5];
                *(byte *)((long)__s + 6) = pbVar9[6];
                pbVar27 = pbVar9 + 8;
                *(byte *)((long)__s + 7) = pbVar9[7];
                uVar19 = uVar28 - 8;
                if ((uVar19 & 7) == 0) {
                  pbVar9 = (byte *)((long)__s + 8);
                }
                else {
                  uVar25 = 0;
                  do {
                    uVar29 = uVar25;
                    uVar25 = uVar29 + 1;
                    *(byte *)((long)__s + uVar29 + 8) = pbVar27[uVar29];
                  } while ((uVar19 & 7) != uVar25);
                  pbVar9 = (byte *)((long)__s + uVar29 + 9);
                  pbVar27 = pbVar27 + uVar25;
                  uVar19 = uVar19 - uVar25;
                }
                if (6 < uVar28 - 9) {
                  do {
                    *pbVar9 = *pbVar27;
                    pbVar9[1] = pbVar27[1];
                    pbVar9[2] = pbVar27[2];
                    pbVar9[3] = pbVar27[3];
                    pbVar9[4] = pbVar27[4];
                    pbVar9[5] = pbVar27[5];
                    pbVar9[6] = pbVar27[6];
                    pbVar9[7] = pbVar27[7];
                    uVar19 = uVar19 - 8;
                    pbVar27 = pbVar27 + 8;
                    pbVar9 = pbVar9 + 8;
                  } while (uVar19 != 0);
                }
              }
              goto joined_r0x00142b30;
            }
            if ((long)param_4 - (long)puVar15 < 8) {
              if ((long)param_4 - (long)puVar15 < 1) {
                uVar18 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00141fa4;
LAB_00141d10:
                uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
                if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00141d28;
LAB_00141fb8:
                uVar23 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00141fcc;
LAB_00141d40:
                uVar19 = (ulong)*(byte *)((long)puVar15 + 3);
              }
              else {
                uVar18 = (uint)(byte)*puVar15 << 0x18;
                if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_00141d10;
LAB_00141fa4:
                uVar16 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00141fb8;
LAB_00141d28:
                uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
                if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141d40;
LAB_00141fcc:
                uVar19 = 0;
              }
              if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
                uVar11 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_00142048;
LAB_00142000:
                uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
              }
              else {
                uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
                if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00142000;
LAB_00142048:
                uVar17 = 0;
              }
              if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
                uVar24 = 0;
              }
              else {
                uVar24 = (uint)*(byte *)((long)puVar15 + 6U) << 8;
              }
              if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
                in_x15 = (byte *)0x0;
              }
              else {
                in_x15 = (byte *)(ulong)*(byte *)((long)puVar15 + 7U);
              }
              uVar19 = (ulong)(uVar17 | uVar11 | uVar24) |
                       (uVar19 | (uVar16 | uVar18 | uVar23)) << 0x20 | (ulong)in_x15;
            }
            else {
              uVar19 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
            }
            uVar29 = uVar12 & 7;
            uVar19 = uVar19 >> (0x3f - uVar12 & 0x3f) | uVar8;
            if ((long)uVar19 < 0) {
              if ((uVar19 >> 0x3e & 1) == 0) {
                uVar8 = uVar19 << 9;
                uVar12 = uVar29 + 9;
                uVar28 = (uVar19 >> 0x37 & 0x7f) + 0x40 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142834;
              }
              else if ((uVar19 >> 0x3d & 1) == 0) {
                uVar8 = uVar19 << 0xb;
                uVar12 = uVar29 + 0xb;
                uVar28 = (uVar19 >> 0x35 & 0xff) + 0xc0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142834;
              }
              else if ((uVar19 >> 0x3c & 1) == 0) {
                uVar8 = uVar19 << 0xe;
                uVar12 = uVar29 + 0xe;
                uVar28 = (uVar19 >> 0x32 & 0x3ff) + 0x1c0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142834;
              }
              else {
                uVar8 = uVar19 << 0x12;
                uVar12 = uVar29 + 0x12;
                uVar28 = (uVar19 >> 0x2e & 0x3fff) + 0x5c0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) {
LAB_00142834:
                  puVar15 = (ulong *)((long)puVar15 + lVar20);
                  pbVar9 = (byte *)((long)__s + ~uVar25);
                  if (pbVar9 != (byte *)0x0) {
                    if (uVar25 + 1 < 4) {
                      if (uVar5 == 1) {
                        bVar1 = *pbVar9;
                        bVar2 = pbVar9[1];
                        uVar19 = uVar28 >> 1;
                        uVar29 = uVar19 - 1;
                        uVar25 = uVar28 >> 1 & 7;
                        pbVar9 = __s;
                        if (uVar25 != 0) {
                          lVar20 = -uVar25;
                          pbVar27 = __s;
                          do {
                            pbVar9 = pbVar27 + 2;
                            *pbVar27 = bVar1;
                            pbVar27[1] = bVar2;
                            uVar19 = uVar19 - 1;
                            lVar20 = lVar20 + 1;
                            pbVar27 = pbVar9;
                          } while (lVar20 != 0);
                        }
                        pbVar27 = pbVar9;
                        if (6 < uVar29) {
                          do {
                            pbVar9 = pbVar27 + 0x10;
                            *pbVar27 = bVar1;
                            pbVar27[1] = bVar2;
                            pbVar27[2] = bVar1;
                            uVar19 = uVar19 - 8;
                            pbVar27[3] = bVar2;
                            pbVar27[4] = bVar1;
                            pbVar27[5] = bVar2;
                            pbVar27[6] = bVar1;
                            pbVar27[7] = bVar2;
                            pbVar27[8] = bVar1;
                            pbVar27[9] = bVar2;
                            pbVar27[10] = bVar1;
                            pbVar27[0xb] = bVar2;
                            pbVar27[0xc] = bVar1;
                            pbVar27[0xd] = bVar2;
                            pbVar27[0xe] = bVar1;
                            pbVar27[0xf] = bVar2;
                            pbVar27 = pbVar9;
                          } while (uVar19 != 0);
                        }
                        if ((uVar28 & 1) != 0) {
                          *pbVar9 = bVar1;
                        }
                      }
                      else {
                        if (uVar5 == 0) {
                          bVar1 = *pbVar9;
                          goto LAB_00142860;
                        }
                        bVar1 = *pbVar9;
                        bVar2 = pbVar9[1];
                        bVar3 = pbVar9[2];
                        uVar19 = uVar28 / 3;
                        uVar25 = uVar28 / 3 & 3;
                        uVar29 = uVar19 - 1;
                        pbVar9 = __s;
                        if (uVar25 != 0) {
                          lVar20 = -uVar25;
                          do {
                            in_x15 = pbVar9;
                            *in_x15 = bVar1;
                            in_x15[1] = bVar2;
                            uVar19 = uVar19 - 1;
                            in_x15[2] = bVar3;
                            pbVar9 = in_x15 + 3;
                            lVar20 = lVar20 + 1;
                          } while (lVar20 != 0);
                        }
                        if (2 < uVar29) {
                          do {
                            pbVar27 = pbVar9;
                            pbVar9 = pbVar27 + 0xc;
                            *pbVar27 = bVar1;
                            pbVar27[1] = bVar2;
                            pbVar27[2] = bVar3;
                            uVar19 = uVar19 - 4;
                            pbVar27[3] = bVar1;
                            pbVar27[4] = bVar2;
                            pbVar27[5] = bVar3;
                            pbVar27[6] = bVar1;
                            pbVar27[7] = bVar2;
                            pbVar27[8] = bVar3;
                            pbVar27[9] = bVar1;
                            pbVar27[10] = bVar2;
                            pbVar27[0xb] = bVar3;
                          } while (uVar19 != 0);
                          in_x15 = pbVar27 + 9;
                        }
                        if (uVar28 % 3 != 0) {
                          *pbVar9 = bVar1;
                          if (uVar28 % 3 == 1) goto joined_r0x00142b30;
                          pbVar9 = in_x15 + 4;
                        }
                        *pbVar9 = bVar2;
                      }
                    }
                    else {
                      *__s = *pbVar9;
                      *(byte *)((long)__s + 1) = pbVar9[1];
                      *(byte *)((long)__s + 2) = pbVar9[2];
                      *(byte *)((long)__s + 3) = pbVar9[3];
                      *(byte *)((long)__s + 4) = pbVar9[4];
                      *(byte *)((long)__s + 5) = pbVar9[5];
                      *(byte *)((long)__s + 6) = pbVar9[6];
                      *(byte *)((long)__s + 7) = pbVar9[7];
                      uVar19 = uVar28 - 8;
                      pbVar9 = pbVar9 + 8;
                      if ((uVar19 & 7) == 0) {
                        pbVar27 = (byte *)((long)__s + 8);
                      }
                      else {
                        uVar25 = 0;
                        do {
                          uVar29 = uVar25;
                          uVar25 = uVar29 + 1;
                          *(byte *)((long)__s + uVar29 + 8) = pbVar9[uVar29];
                        } while ((uVar19 & 7) != uVar25);
                        pbVar27 = (byte *)((long)__s + uVar29 + 9);
                        pbVar9 = pbVar9 + uVar25;
                        uVar19 = uVar19 - uVar25;
                      }
                      if (6 < uVar28 - 9) {
                        do {
                          *pbVar27 = *pbVar9;
                          pbVar27[1] = pbVar9[1];
                          pbVar27[2] = pbVar9[2];
                          pbVar27[3] = pbVar9[3];
                          pbVar27[4] = pbVar9[4];
                          pbVar27[5] = pbVar9[5];
                          pbVar27[6] = pbVar9[6];
                          pbVar27[7] = pbVar9[7];
                          uVar19 = uVar19 - 8;
                          pbVar9 = pbVar9 + 8;
                          pbVar27 = pbVar27 + 8;
                        } while (uVar19 != 0);
                      }
                    }
                  }
joined_r0x00142b30:
                  lVar20 = (long)uVar12 >> 3;
                  goto joined_r0x00142b30;
                }
              }
            }
            else {
              uVar8 = uVar19 << 7;
              uVar12 = uVar29 + 7;
              uVar28 = (uVar19 >> 0x39 & 0x3f) + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142834;
            }
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_001431b4;
            uVar7 = 0xf1;
LAB_001431ac:
            (*pcVar10)(0,"v:/devel/projects/oodle2/core/rrlzhlwdecompresssub.inl",uVar7,
                       "OODLE ERROR : LZ corruption : bad long len, overrun\n");
LAB_001431b4:
            FUN_0010a450();
            return 0;
          }
          pbVar9 = (byte *)((long)__s + ~uVar25);
          *__s = *pbVar9;
          *(byte *)((long)__s + 1) = pbVar9[1];
          *(byte *)((long)__s + 2) = pbVar9[2];
          *(byte *)((long)__s + 3) = pbVar9[3];
          *(byte *)((long)__s + 4) = pbVar9[4];
          *(byte *)((long)__s + 5) = pbVar9[5];
          *(byte *)((long)__s + 6) = pbVar9[6];
          *(byte *)((long)__s + 7) = pbVar9[7];
joined_r0x00142b30:
          if ((long)param_4 - (long)puVar15 < 8) {
            if ((long)param_4 - (long)puVar15 < 1) {
              uVar18 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00141c14;
LAB_001418f4:
              uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
              if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_0014190c;
LAB_00141c28:
              uVar23 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00141c3c;
LAB_00141924:
              uVar19 = (ulong)*(byte *)((long)puVar15 + 3);
            }
            else {
              uVar18 = (uint)*(byte *)puVar15 << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_001418f4;
LAB_00141c14:
              uVar16 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00141c28;
LAB_0014190c:
              uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
              if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141924;
LAB_00141c3c:
              uVar19 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
              uVar11 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_00141c90;
LAB_00141c70:
              uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
            }
            else {
              uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00141c70;
LAB_00141c90:
              uVar17 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
              uVar24 = 0;
            }
            else {
              uVar24 = (uint)*(byte *)((long)puVar15 + 6U) << 8;
            }
            if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
              uVar25 = 0;
            }
            else {
              uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
            }
            uVar25 = (ulong)(uVar17 | uVar11 | uVar24) |
                     (uVar19 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar25;
          }
          else {
            uVar19 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar19 >> 0x20 | uVar19 << 0x20;
          }
          puVar15 = (ulong *)((long)puVar15 + lVar20);
          uVar8 = uVar25 >> (0x3f - uVar12 & 0x3f) | uVar8;
          goto joined_r0x00142b58;
        }
        if (uVar8 < *(ulong *)(param_9 + 0x150)) {
          uVar19 = (ulong)*(byte *)(*(long *)(param_9 + 0x2b8) + (uVar8 >> 0x36));
          puVar14 = (ushort *)(*(long *)(param_9 + 0x2c0) + (uVar8 >> 0x36) * 2);
        }
        else {
          lVar21 = *(long *)(param_9 + 0x2b0);
          if (uVar8 < *(ulong *)(param_9 + 0x158)) {
            uVar19 = 0xb;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x35) - *(long *)(param_9 + 0x58)) * 2);
          }
          else if (uVar8 < *(ulong *)(param_9 + 0x160)) {
            uVar19 = 0xc;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x34) - *(long *)(param_9 + 0x60)) * 2);
          }
          else if (uVar8 < *(ulong *)(param_9 + 0x168)) {
            uVar19 = 0xd;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x33) - *(long *)(param_9 + 0x68)) * 2);
          }
          else if (uVar8 < *(ulong *)(param_9 + 0x170)) {
            uVar19 = 0xe;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x32) - *(long *)(param_9 + 0x70)) * 2);
          }
          else if (uVar8 < *(ulong *)(param_9 + 0x178)) {
            uVar19 = 0xf;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x31) - *(long *)(param_9 + 0x78)) * 2);
          }
          else if (uVar8 < *(ulong *)(param_9 + 0x180)) {
            uVar19 = 0x10;
            puVar14 = (ushort *)(lVar21 + ((uVar8 >> 0x30) - *(long *)(param_9 + 0x80)) * 2);
          }
          else {
            uVar19 = (ulong)*(int *)(param_9 + 0x29c);
            puVar14 = (ushort *)(lVar21 + (long)(*(int *)(param_9 + 0x288) + -1) * 2);
          }
        }
        uVar5 = *puVar14;
        uVar12 = uVar19 + uVar12;
        uVar8 = uVar8 << (uVar19 & 0x3f);
        if (iVar6 == 0x400a1) {
          iVar13 = 0;
          lVar21 = (long)param_4 - (long)puVar15;
          lVar20 = (long)uVar12 >> 3;
          if (7 < lVar21) goto LAB_001416f4;
LAB_0014158c:
          if (lVar21 < 1) {
            uVar18 = 0;
          }
          else {
            uVar18 = (uint)(byte)*puVar15 << 0x18;
          }
          if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
          }
          if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) {
            uVar23 = 0;
          }
          else {
            uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
          }
          if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) {
            uVar19 = 0;
          }
          else {
            uVar19 = (ulong)*(byte *)((long)puVar15 + 3);
          }
          if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
          }
          if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
          }
          if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
            in_x15 = (byte *)0x0;
          }
          else {
            in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
          }
          if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
            uVar25 = 0;
          }
          else {
            uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
          }
          uVar25 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
                   (uVar19 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar25;
          do {
            uVar8 = uVar25 >> (0x3f - uVar12 & 0x3f) | uVar8;
            puVar15 = (ulong *)((long)puVar15 + lVar20);
            uVar12 = uVar12 & 7;
            if (uVar8 == 0) {
              if (puVar15 < param_4) {
                uVar18 = (uint)uVar12 ^ 0x3f;
                uVar8 = 0;
                uVar12 = 0x3f;
                goto LAB_001416e0;
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
              uVar19 = 0x3f;
              lVar20 = (long)param_4 - (long)puVar15;
              uVar12 = 7;
              in_x15 = extraout_x15;
              if (lVar20 < 8) goto LAB_00141ba8;
LAB_00142374:
              uVar25 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
              uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
              uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
LAB_0014237c:
              uVar8 = uVar25 >> (0x3f - uVar19 & 0x3f) | uVar8;
              puVar15 = (ulong *)((long)puVar15 + uVar12);
              uVar25 = uVar8 << 10;
              uVar12 = (uVar19 & 7) + 10;
              uVar19 = (ulong)((uint)(uVar8 >> 0x36) | iVar13 << 10);
              goto LAB_001423a0;
            }
            uVar18 = (uint)LZCOUNT(uVar8);
            if (uVar18 < 0x1f) {
              uVar19 = LZCOUNT(uVar8) + 1;
              uVar8 = uVar8 << (uVar19 & 0x3f);
              uVar19 = uVar19 + uVar12;
              uVar18 = iVar13 + uVar18;
              if (uVar18 == 0) {
                iVar13 = 0;
              }
              else {
                if ((long)param_4 - (long)puVar15 < 8) {
                  if ((long)param_4 - (long)puVar15 < 1) {
                    uVar16 = 0;
                    if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00142254;
LAB_00141e08:
                    uVar23 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
                    if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00141e20;
LAB_00142268:
                    uVar11 = 0;
                    if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_0014227c;
LAB_00141e38:
                    uVar12 = (ulong)*(byte *)((long)puVar15 + 3);
                  }
                  else {
                    uVar16 = (uint)(byte)*puVar15 << 0x18;
                    if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_00141e08;
LAB_00142254:
                    uVar23 = 0;
                    if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00142268;
LAB_00141e20:
                    uVar11 = (uint)*(byte *)((long)puVar15 + 2) << 8;
                    if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141e38;
LAB_0014227c:
                    uVar12 = 0;
                  }
                  if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
                    uVar17 = 0;
                    if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_001422d0;
LAB_001422b0:
                    uVar24 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
                  }
                  else {
                    uVar17 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
                    if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_001422b0;
LAB_001422d0:
                    uVar24 = 0;
                  }
                  if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
                    in_x15 = (byte *)0x0;
                  }
                  else {
                    in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
                  }
                  if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
                  }
                  uVar25 = (ulong)(uVar24 | uVar17 | (uint)in_x15) |
                           (uVar12 | (uVar23 | uVar16 | uVar11)) << 0x20 | uVar25;
                }
                else {
                  uVar12 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8
                  ;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar25 = uVar12 >> 0x20 | uVar12 << 0x20;
                }
                puVar15 = (ulong *)((long)puVar15 + (uVar19 >> 3));
                uVar12 = uVar25 >> (0x3f - uVar19 & 0x3f) | uVar8;
                uVar8 = uVar12 << ((ulong)uVar18 & 0x3f);
                uVar19 = (uVar19 & 7) + (ulong)uVar18;
                iVar13 = (int)(uVar12 >> ((ulong)-uVar18 & 0x3f)) + ~(-1 << (ulong)(uVar18 & 0x1f));
              }
              lVar20 = (long)param_4 - (long)puVar15;
              uVar12 = uVar19 >> 3;
              if (7 < lVar20) goto LAB_00142374;
LAB_00141ba8:
              if (lVar20 < 1) {
                uVar18 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00141e54;
LAB_00141bc8:
                uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
                if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00141be0;
LAB_00141e68:
                uVar23 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00141e7c;
LAB_00141bf8:
                uVar22 = (ulong)*(byte *)((long)puVar15 + 3);
              }
              else {
                uVar18 = (uint)(byte)*puVar15 << 0x18;
                if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_00141bc8;
LAB_00141e54:
                uVar16 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00141e68;
LAB_00141be0:
                uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
                if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141bf8;
LAB_00141e7c:
                uVar22 = 0;
              }
              if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
                uVar11 = 0;
                if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_00141ed0;
LAB_00141eb0:
                uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
              }
              else {
                uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
                if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00141eb0;
LAB_00141ed0:
                uVar17 = 0;
              }
              if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
                in_x15 = (byte *)0x0;
              }
              else {
                in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
              }
              if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
              }
              uVar25 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
                       (uVar22 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar25;
              goto LAB_0014237c;
            }
            uVar12 = uVar12 + 0x1f;
            uVar18 = 0x1f;
            uVar8 = uVar8 << 0x1f;
LAB_001416e0:
            iVar13 = uVar18 + iVar13;
            lVar21 = (long)param_4 - (long)puVar15;
            lVar20 = (long)uVar12 >> 3;
            if (lVar21 < 8) goto LAB_0014158c;
LAB_001416f4:
            uVar19 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar19 >> 0x20 | uVar19 << 0x20;
          } while( true );
        }
        uVar22 = (ulong)(byte)(&DAT_039c4f96)[lVar20];
        uVar25 = uVar8;
        if (uVar22 != 0) {
          uVar12 = uVar12 + uVar22;
          uVar25 = uVar8 << (uVar22 & 0x3f);
        }
        uVar19 = 0;
        if (uVar22 != 0) {
          uVar19 = uVar8 >> ((ulong)-(uint)(byte)(&DAT_039c4f96)[lVar20] & 0x3f);
        }
LAB_001423a0:
        lVar20 = (ulong)uVar5 + (long)iVar6 + uVar19 * 0x80;
        local_68 = CONCAT44((undefined4)local_68,uStack_6c);
        uStack_6c = (int)lVar20;
        if (bVar1 == 0) {
          *(undefined8 *)__s = *(undefined8 *)((long)__s - lVar20);
          if ((long)param_4 - (long)puVar15 < 8) {
            if ((long)param_4 - (long)puVar15 < 1) {
              uVar18 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00142628;
LAB_001424c4:
              uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
              if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_001424dc;
LAB_0014263c:
              uVar23 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00142650;
LAB_001424f4:
              uVar8 = (ulong)*(byte *)((long)puVar15 + 3);
            }
            else {
              uVar18 = (uint)(byte)*puVar15 << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_001424c4;
LAB_00142628:
              uVar16 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_0014263c;
LAB_001424dc:
              uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
              if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_001424f4;
LAB_00142650:
              uVar8 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
              uVar11 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_001426a4;
LAB_00142684:
              uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
            }
            else {
              uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00142684;
LAB_001426a4:
              uVar17 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
              in_x15 = (byte *)0x0;
            }
            else {
              in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
            }
            if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = (ulong)*(byte *)((long)puVar15 + 7U);
            }
            uVar19 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
                     (uVar8 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar19;
          }
          else {
            uVar8 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar19 = uVar8 >> 0x20 | uVar8 << 0x20;
          }
          uVar8 = uVar19 >> (0x3f - uVar12 & 0x3f) | uVar25;
        }
        else {
          if (0x9c < uVar4) {
            if ((long)uVar25 < 0) {
              if ((uVar25 >> 0x3e & 1) == 0) {
                uVar8 = uVar25 << 9;
                uVar12 = uVar12 + 9;
                uVar28 = (uVar25 >> 0x37 & 0x7f) + 0x40 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142a64;
              }
              else if ((uVar25 >> 0x3d & 1) == 0) {
                uVar8 = uVar25 << 0xb;
                uVar12 = uVar12 + 0xb;
                uVar28 = (uVar25 >> 0x35 & 0xff) + 0xc0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142a64;
              }
              else if ((uVar25 >> 0x3c & 1) == 0) {
                uVar8 = uVar25 << 0xe;
                uVar12 = uVar12 + 0xe;
                uVar28 = (uVar25 >> 0x32 & 0x3ff) + 0x1c0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142a64;
              }
              else {
                uVar8 = uVar25 << 0x12;
                uVar12 = uVar12 + 0x12;
                uVar28 = (uVar25 >> 0x2e & 0x3fff) + 0x5c0 + uVar28;
                if (uVar28 <= (ulong)((long)param_2 - (long)__s)) {
LAB_00142a64:
                  pbVar9 = __s;
                  do {
                    pbVar27 = pbVar9 + 4;
                    *(undefined4 *)pbVar9 = *(undefined4 *)(pbVar9 + -lVar20);
                    pbVar9 = pbVar27;
                  } while (pbVar27 < (byte *)((long)__s + uVar28));
                  goto joined_r0x00142a8c;
                }
              }
            }
            else {
              uVar8 = uVar25 << 7;
              uVar12 = uVar12 + 7;
              uVar28 = (uVar25 >> 0x39 & 0x3f) + uVar28;
              if (uVar28 <= (ulong)((long)param_2 - (long)__s)) goto LAB_00142a64;
            }
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_001431b4;
            uVar7 = 0x157;
            goto LAB_001431ac;
          }
          uVar8 = uVar25 << (uVar29 & 0x3f);
          uVar28 = (uVar25 >> (-uVar29 & 0x3f)) + uVar28;
          pbVar9 = __s;
          do {
            pbVar27 = pbVar9 + 4;
            *(undefined4 *)pbVar9 = *(undefined4 *)(pbVar9 + -lVar20);
            pbVar9 = pbVar27;
          } while (pbVar27 < (byte *)((long)__s + uVar28));
          uVar12 = uVar12 + uVar29;
joined_r0x00142a8c:
          if ((long)param_4 - (long)puVar15 < 8) {
            if ((long)param_4 - (long)puVar15 < 1) {
              uVar18 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_00142538;
LAB_0014246c:
              uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
              if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00142484;
LAB_0014254c:
              uVar23 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00142560;
LAB_0014249c:
              uVar25 = (ulong)*(byte *)((long)puVar15 + 3);
            }
            else {
              uVar18 = (uint)(byte)*puVar15 << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_0014246c;
LAB_00142538:
              uVar16 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_0014254c;
LAB_00142484:
              uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
              if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_0014249c;
LAB_00142560:
              uVar25 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
              uVar11 = 0;
              if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_001425b4;
LAB_00142594:
              uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
            }
            else {
              uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
              if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00142594;
LAB_001425b4:
              uVar17 = 0;
            }
            if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
              in_x15 = (byte *)0x0;
            }
            else {
              in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
            }
            if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = (ulong)*(byte *)((long)puVar15 + 7U);
            }
            uVar19 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
                     (uVar25 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar19;
          }
          else {
            uVar19 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
          }
          uVar8 = uVar19 >> (0x3f - uVar12 & 0x3f) | uVar8;
        }
        puVar15 = (ulong *)((long)puVar15 + ((long)uVar12 >> 3));
        uVar12 = uVar12 & 7;
      }
joined_r0x0014271c:
      __s = (byte *)((long)__s + uVar28);
      param_1 = __s;
      if (param_2 <= __s) goto joined_r0x00143128;
    }
    __s = param_1 + 1;
    *param_1 = (byte)*puVar14;
    if (param_2 <= __s) break;
    if (uVar8 < *(ulong *)(param_7 + 0x150)) {
      uVar19 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
      puVar14 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
    }
    else {
      lVar20 = *(long *)(param_7 + 0x2b0);
      if (uVar8 < *(ulong *)(param_7 + 0x158)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
        uVar19 = 0xb;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
        uVar19 = 0xc;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
        uVar19 = 0xd;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
        uVar19 = 0xe;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
        uVar19 = 0xf;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
        uVar19 = 0x10;
      }
      else {
        uVar19 = (ulong)*(int *)(param_7 + 0x29c);
        puVar14 = (ushort *)(lVar20 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
      }
    }
    uVar12 = uVar19 + uVar12;
    uVar8 = uVar8 << (uVar19 & 0x3f);
    uVar19 = (ulong)*puVar14 - 0x100;
    if (-1 < (long)uVar19) {
      lVar20 = (long)uVar12 >> 3;
      goto joined_r0x0014130c;
    }
    __s = param_1 + 2;
    param_1[1] = (byte)*puVar14;
    if (param_2 <= __s) break;
    if (uVar8 < *(ulong *)(param_7 + 0x150)) {
      uVar19 = (ulong)*(byte *)(*(long *)(param_7 + 0x2b8) + (uVar8 >> 0x36));
      puVar14 = (ushort *)(*(long *)(param_7 + 0x2c0) + (uVar8 >> 0x36) * 2);
    }
    else {
      lVar20 = *(long *)(param_7 + 0x2b0);
      if (uVar8 < *(ulong *)(param_7 + 0x158)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x35) - *(long *)(param_7 + 0x58)) * 2);
        uVar19 = 0xb;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x160)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x34) - *(long *)(param_7 + 0x60)) * 2);
        uVar19 = 0xc;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x168)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x33) - *(long *)(param_7 + 0x68)) * 2);
        uVar19 = 0xd;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x170)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x32) - *(long *)(param_7 + 0x70)) * 2);
        uVar19 = 0xe;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x178)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x31) - *(long *)(param_7 + 0x78)) * 2);
        uVar19 = 0xf;
      }
      else if (uVar8 < *(ulong *)(param_7 + 0x180)) {
        puVar14 = (ushort *)(lVar20 + ((uVar8 >> 0x30) - *(long *)(param_7 + 0x80)) * 2);
        uVar19 = 0x10;
      }
      else {
        uVar19 = (ulong)*(int *)(param_7 + 0x29c);
        puVar14 = (ushort *)(lVar20 + (long)(*(int *)(param_7 + 0x288) + -1) * 2);
      }
    }
    uVar12 = uVar19 + uVar12;
    uVar8 = uVar8 << (uVar19 & 0x3f);
    uVar19 = (ulong)*puVar14 - 0x100;
    lVar20 = (long)uVar12 >> 3;
    if (-1 < (long)uVar19) goto joined_r0x0014130c;
    if ((long)param_4 - (long)puVar15 < 8) {
      if ((long)param_4 - (long)puVar15 < 1) {
        uVar18 = 0;
        if ((long)param_4 - (long)((long)puVar15 + 1U) < 1) goto LAB_0014213c;
LAB_00141db0:
        uVar16 = (uint)*(byte *)((long)puVar15 + 1) << 0x10;
        if (0 < (long)param_4 - (long)((long)puVar15 + 2U)) goto LAB_00141dc8;
LAB_00142150:
        uVar23 = 0;
        if ((long)param_4 - (long)((long)puVar15 + 3U) < 1) goto LAB_00142164;
LAB_00141de0:
        uVar19 = (ulong)*(byte *)((long)puVar15 + 3);
      }
      else {
        uVar18 = (uint)(byte)*puVar15 << 0x18;
        if (0 < (long)param_4 - (long)((long)puVar15 + 1U)) goto LAB_00141db0;
LAB_0014213c:
        uVar16 = 0;
        if ((long)param_4 - (long)((long)puVar15 + 2U) < 1) goto LAB_00142150;
LAB_00141dc8:
        uVar23 = (uint)*(byte *)((long)puVar15 + 2) << 8;
        if (0 < (long)param_4 - (long)((long)puVar15 + 3U)) goto LAB_00141de0;
LAB_00142164:
        uVar19 = 0;
      }
      if ((long)param_4 - (long)((long)puVar15 + 4U) < 1) {
        uVar11 = 0;
        if ((long)param_4 - (long)((long)puVar15 + 5U) < 1) goto LAB_001421b8;
LAB_00142198:
        uVar17 = (uint)*(byte *)((long)puVar15 + 5) << 0x10;
      }
      else {
        uVar11 = (uint)*(byte *)((long)puVar15 + 4U) << 0x18;
        if (0 < (long)param_4 - (long)((long)puVar15 + 5U)) goto LAB_00142198;
LAB_001421b8:
        uVar17 = 0;
      }
      if ((long)param_4 - (long)((long)puVar15 + 6U) < 1) {
        in_x15 = (byte *)0x0;
      }
      else {
        in_x15 = (byte *)((ulong)*(byte *)((long)puVar15 + 6U) << 8);
      }
      if ((long)param_4 - (long)((long)puVar15 + 7U) < 1) {
        uVar25 = 0;
      }
      else {
        uVar25 = (ulong)*(byte *)((long)puVar15 + 7U);
      }
      uVar25 = (ulong)(uVar17 | uVar11 | (uint)in_x15) |
               (uVar19 | (uVar16 | uVar18 | uVar23)) << 0x20 | uVar25;
    }
    else {
      uVar19 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar25 = uVar19 >> 0x20 | uVar19 << 0x20;
    }
    uVar19 = 0x3f - uVar12;
    puVar15 = (ulong *)((long)puVar15 + lVar20);
    __s = param_1 + 3;
    uVar12 = uVar12 & 7;
    param_1[2] = (byte)*puVar14;
    uVar8 = uVar25 >> (uVar19 & 0x3f) | uVar8;
    param_1 = __s;
  } while (__s < param_2);
joined_r0x00143128:
  if (__s == param_2) {
    uVar8 = 0x46 - uVar12;
    if (-1 < (long)(0x3f - uVar12)) {
      uVar8 = 0x3f - uVar12;
    }
    iVar6 = ((int)puVar15 - (int)(uVar8 >> 3)) - (int)param_3;
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


