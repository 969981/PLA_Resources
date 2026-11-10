/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00213030; name: FUN_00213030
 */


/* WARNING: Removing unreachable block (ram,0x002136e4) */
/* WARNING: Removing unreachable block (ram,0x002144a0) */
/* WARNING: Removing unreachable block (ram,0x0021441c) */
/* WARNING: Removing unreachable block (ram,0x00214600) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00213030(long *param_1,int param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  void *__dest;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  undefined2 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  undefined1 *__dest_00;
  undefined1 *puVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  int local_8c;
  ulong local_88;
  uint local_7c;
  undefined4 local_64;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 != (long *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
     ((puVar36 = (undefined8 *)param_1[7], puVar36 != (undefined8 *)0x0 &&
      ((long *)*puVar36 == param_1)))) {
    puVar26 = (uint *)(puVar36 + 1);
    uVar11 = *puVar26;
    if (((uVar11 - 0x3f34 < 0x20) &&
        (__dest_00 = (undefined1 *)param_1[3], __dest_00 != (undefined1 *)0x0)) &&
       ((pbVar34 = (byte *)*param_1, pbVar34 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
      if (uVar11 == 0x3f3f) {
        uVar11 = 0x3f40;
        *puVar26 = 0x3f40;
        __dest_00 = (undefined1 *)param_1[3];
        pbVar34 = (byte *)*param_1;
      }
      puVar1 = puVar36 + 4;
      puVar2 = puVar36 + 0xab;
      puVar3 = puVar36 + 99;
      uVar25 = *(uint *)(param_1 + 4);
      puVar4 = puVar36 + 0x12;
      uVar32 = puVar36[10];
      uVar29 = (ulong)*(uint *)(puVar36 + 0xb);
      uVar6 = *(uint *)(param_1 + 1);
      local_88 = (ulong)uVar6;
      local_8c = 0;
      uVar18 = (ulong)(uVar11 - 0x3f34);
      local_7c = uVar25;
      if (uVar11 - 0x3f34 < 0x1f) {
LAB_00213140:
        uVar11 = (uint)uVar29;
        uVar28 = (uint)local_88;
        pbVar35 = pbVar34;
        pbVar14 = pbVar34;
        iVar31 = 1;
        switch((ulong)(&switchD_00213150::switchdataD_039cc176)[uVar18] * 4 + 0x213154) {
        case 0x213154:
          uVar12 = *(uint *)(puVar36 + 2);
          if (uVar12 == 0) {
            uVar11 = 0x3f40;
            goto LAB_00214a18;
          }
          if (uVar11 < 0x10) {
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 == 0) goto LAB_00214e6c;
            pbVar35 = pbVar34 + 1;
            uVar19 = uVar29 & 0x3f;
            uVar29 = uVar18 + 8;
            uVar11 = uVar28 - 1;
            uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
            if (0xf < uVar29) {
LAB_002131a8:
              local_88 = (ulong)uVar11;
              goto LAB_002131b0;
            }
            if (uVar11 != 0) {
              uVar11 = uVar28 - 2;
              pbVar35 = pbVar34 + 2;
              uVar32 = ((ulong)pbVar34[1] << (uVar29 & 0x3f)) + uVar32;
              uVar29 = uVar18 + 0x10;
              goto LAB_002131a8;
            }
            goto LAB_00214e74;
          }
LAB_002131b0:
          if (((uVar12 >> 1 & 1) == 0) || (uVar32 != 0x8b1f)) {
            *(undefined4 *)(puVar36 + 3) = 0;
            if (puVar36[6] != 0) {
              *(undefined4 *)(puVar36[6] + 0x48) = 0xffffffff;
              uVar12 = *(uint *)(puVar36 + 2);
            }
            if (((uVar12 & 1) == 0) ||
               (0x842108421084210 <
                (((ulong)(uint)((int)uVar32 << 8) & 0xff00) + (uVar32 >> 8)) * -0x1084210842108421))
            {
              pcVar15 = "incorrect header check";
            }
            else {
              if ((uVar32 & 0xf) == 8) {
                uVar12 = (uint)(uVar32 >> 4) & 0xf;
                uVar11 = uVar12 + 8;
                uVar28 = *(uint *)(puVar36 + 7);
                if (*(uint *)(puVar36 + 7) == 0) {
                  *(uint *)(puVar36 + 7) = uVar11;
                  uVar28 = uVar11;
                }
                if ((uVar11 < 0x10) && (uVar11 <= uVar28)) {
                  *(int *)((long)puVar36 + 0x1c) = 0x100 << (ulong)uVar12;
                  lVar30 = FUN_00215360(0,0,0);
                  uVar13 = 0x3f3f;
                  if ((uVar32 & 0x2000) != 0) {
                    uVar13 = 0x3f3d;
                  }
                  puVar36[4] = lVar30;
                  uVar29 = 0;
                  param_1[0xc] = lVar30;
                  *(undefined4 *)(puVar36 + 1) = uVar13;
                  uVar32 = 0;
                }
                else {
                  uVar32 = uVar32 >> 4;
                  uVar29 = (ulong)((int)uVar29 - 4);
                  param_1[6] = (long)"invalid window size";
                  *puVar26 = 0x3f51;
                }
                goto LAB_00213484;
              }
              pcVar15 = "unknown compression method";
            }
            param_1[6] = (long)pcVar15;
            *puVar26 = 0x3f51;
          }
          else {
            if (*(int *)(puVar36 + 7) == 0) {
              *(undefined4 *)(puVar36 + 7) = 0xf;
            }
            uVar29 = FUN_00215640(0,0,0);
            *puVar1 = uVar29;
            local_64 = CONCAT22(local_64._2_2_,0x8b1f);
            uVar18 = FUN_00215640(uVar29,&local_64,2);
            uVar32 = 0;
            uVar29 = 0;
            *puVar1 = uVar18;
            *puVar26 = 0x3f35;
          }
          goto LAB_00213484;
        case 0x21321c:
          if (uVar11 < 0x10) {
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 != 0) {
              pbVar14 = pbVar34 + 1;
              uVar19 = uVar29 & 0x3f;
              uVar29 = uVar18 + 8;
              uVar11 = uVar28 - 1;
              uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
              if (uVar29 < 0x10) {
                if (uVar11 == 0) goto LAB_00214c34;
                uVar11 = uVar28 - 2;
                pbVar14 = pbVar34 + 2;
                uVar32 = ((ulong)pbVar34[1] << (uVar29 & 0x3f)) + uVar32;
                uVar29 = uVar18 + 0x10;
              }
              local_88 = (ulong)uVar11;
              pbVar34 = pbVar14;
              goto LAB_00213270;
            }
            goto LAB_00214c2c;
          }
LAB_00213270:
          uVar28 = (uint)local_88;
          uVar11 = (uint)uVar32;
          *(uint *)(puVar36 + 3) = uVar11;
          if ((uVar11 & 0xff) == 8) {
            if ((uVar32 & 0xe000) == 0) {
              if ((uint *)puVar36[6] != (uint *)0x0) {
                *(uint *)puVar36[6] = uVar11 >> 8 & 1;
                uVar11 = *(uint *)(puVar36 + 3);
              }
              if (((uVar11 >> 9 & 1) != 0) && ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
                local_64 = CONCAT22(local_64._2_2_,(short)uVar32);
                uVar29 = FUN_00215640(*puVar1,&local_64,2);
                *puVar1 = uVar29;
              }
              uVar29 = 0;
              *puVar26 = 0x3f36;
              uVar32 = 0;
              pbVar35 = pbVar34;
              goto LAB_00213df4;
            }
            pcVar15 = "unknown header flags set";
          }
          else {
            pcVar15 = "unknown compression method";
          }
          goto LAB_00214a10;
        case 0x213294:
          if (uVar11 < 0x20) {
LAB_00213df4:
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 == 0) break;
            pbVar14 = pbVar35 + 1;
            uVar32 = ((ulong)*pbVar35 << (uVar29 & 0x3f)) + uVar32;
            uVar19 = uVar18 + 8;
            uVar11 = uVar28 - 1;
            if (0x1f < uVar19) {
LAB_00213e88:
              pbVar34 = pbVar14;
              uVar28 = uVar11;
              goto LAB_00213e90;
            }
            if (uVar11 != 0) {
              uVar32 = ((ulong)pbVar35[1] << (uVar19 & 0x3f)) + uVar32;
              uVar19 = uVar18 + 0x10;
              uVar11 = uVar28 - 2;
              pbVar14 = pbVar35 + 2;
              if (0x1f < uVar19) goto LAB_00213e88;
              if (uVar11 == 0) goto LAB_00214ec0;
              uVar29 = uVar19 & 0x3f;
              uVar19 = uVar18 + 0x18;
              uVar11 = uVar28 - 3;
              pbVar14 = pbVar35 + 3;
              uVar32 = ((ulong)pbVar35[2] << uVar29) + uVar32;
              if (0x1f < uVar19) goto LAB_00213e88;
              if (uVar11 == 0) goto LAB_00214ec0;
              pbVar34 = pbVar35 + 3;
              pbVar35 = pbVar35 + 4;
              uVar28 = uVar28 - 4;
              uVar32 = ((ulong)*pbVar34 << (uVar19 & 0x3f)) + uVar32;
              lVar30 = puVar36[6];
              goto joined_r0x00213e94;
            }
LAB_00214ec0:
            uVar18 = uVar19;
            pbVar35 = pbVar14;
          }
          else {
LAB_00213e90:
            lVar30 = puVar36[6];
            pbVar35 = pbVar34;
joined_r0x00213e94:
            if (lVar30 != 0) {
              *(ulong *)(lVar30 + 8) = uVar32;
            }
            if (((*(byte *)((long)puVar36 + 0x19) >> 1 & 1) != 0) &&
               ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
              local_64 = (undefined4)uVar32;
              uVar29 = FUN_00215640(*puVar1,&local_64,4);
              *puVar1 = uVar29;
            }
            uVar29 = 0;
            *puVar26 = 0x3f37;
            uVar32 = 0;
LAB_00213ef8:
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 != 0) {
              pbVar14 = pbVar35 + 1;
              uVar19 = uVar18 + 8;
              uVar32 = ((ulong)*pbVar35 << (uVar29 & 0x3f)) + uVar32;
              if (0xf < uVar19) {
                local_88 = (ulong)(uVar28 - 1);
                pbVar34 = pbVar14;
                goto LAB_00213f4c;
              }
              if (uVar28 - 1 == 0) goto LAB_00214ec0;
              pbVar34 = pbVar35 + 2;
              local_88 = (ulong)(uVar28 - 2);
              uVar32 = ((ulong)pbVar35[1] << (uVar19 & 0x3f)) + uVar32;
              lVar30 = puVar36[6];
              goto joined_r0x00213f50;
            }
          }
          break;
        case 0x2132a0:
          if (uVar11 < 0x10) goto LAB_00213ef8;
LAB_00213f4c:
          lVar30 = puVar36[6];
joined_r0x00213f50:
          if (lVar30 != 0) {
            *(uint *)(lVar30 + 0x10) = (uint)uVar32 & 0xff;
            *(int *)(puVar36[6] + 0x14) = (int)(uVar32 >> 8);
          }
          if (((*(byte *)((long)puVar36 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
            local_64._2_2_ = (undefined2)((uint)local_64 >> 0x10);
            local_64 = CONCAT22(local_64._2_2_,(short)uVar32);
            uVar29 = FUN_00215640(*puVar1,&local_64,2);
            *puVar1 = uVar29;
          }
          uVar32 = 0;
          uVar29 = 0;
          *puVar26 = 0x3f38;
        case 0x213fc4:
          uVar11 = *(uint *)(puVar36 + 3);
          if ((uVar11 >> 10 & 1) == 0) {
            if (puVar36[6] != 0) {
              *(undefined8 *)(puVar36[6] + 0x18) = 0;
            }
          }
          else {
            pbVar35 = pbVar34;
            if ((uint)uVar29 < 0x10) {
              uVar18 = uVar29 & 0xffffffff;
              iVar31 = (int)local_88;
              if (iVar31 == 0) break;
              pbVar35 = pbVar34 + 1;
              uVar18 = uVar18 + 8;
              uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
              if (0xf < uVar18) {
                local_88 = (ulong)(iVar31 - 1U);
                goto LAB_0021403c;
              }
              if (iVar31 - 1U == 0) break;
              pbVar14 = pbVar34 + 1;
              pbVar34 = pbVar34 + 2;
              local_88 = (ulong)(iVar31 - 2);
              iVar31 = ((uint)*pbVar14 << (uVar18 & 0x3f)) + (int)uVar32;
              lVar30 = puVar36[6];
              *(int *)((long)puVar36 + 0x5c) = iVar31;
            }
            else {
LAB_0021403c:
              lVar30 = puVar36[6];
              iVar31 = (int)uVar32;
              *(int *)((long)puVar36 + 0x5c) = iVar31;
              pbVar34 = pbVar35;
            }
            if (lVar30 != 0) {
              *(int *)(lVar30 + 0x20) = iVar31;
              uVar11 = *(uint *)(puVar36 + 3);
            }
            if (((uVar11 >> 9 & 1) == 0) || ((*(byte *)(puVar36 + 2) >> 2 & 1) == 0)) {
              uVar32 = 0;
              uVar29 = 0;
            }
            else {
              local_64 = CONCAT22(local_64._2_2_,(short)iVar31);
              uVar29 = FUN_00215640(*puVar1,&local_64,2);
              *puVar1 = uVar29;
              uVar32 = 0;
              uVar29 = 0;
            }
          }
          *puVar26 = 0x3f39;
switchD_00213150_caseD_2140b4:
          uVar11 = *(uint *)(puVar36 + 3);
          if ((uVar11 >> 10 & 1) != 0) {
            uVar12 = *(uint *)((long)puVar36 + 0x5c);
            uVar17 = (uint)local_88;
            uVar28 = uVar17;
            if (uVar12 <= uVar17) {
              uVar28 = uVar12;
            }
            if (uVar28 != 0) {
              lVar30 = puVar36[6];
              if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
                uVar12 = *(int *)(lVar30 + 0x20) - uVar12;
                uVar11 = *(uint *)(lVar30 + 0x24) - uVar12;
                if (uVar12 + uVar28 <= *(uint *)(lVar30 + 0x24)) {
                  uVar11 = uVar28;
                }
                memcpy((void *)(*(long *)(lVar30 + 0x18) + (ulong)uVar12),pbVar34,(ulong)uVar11);
                uVar11 = *(uint *)(puVar36 + 3);
              }
              if (((uVar11 >> 9 & 1) != 0) && ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
                uVar18 = FUN_00215640(*puVar1,pbVar34,uVar28);
                *puVar1 = uVar18;
              }
              pbVar34 = pbVar34 + uVar28;
              local_88 = (ulong)(uVar17 - uVar28);
              uVar12 = *(int *)((long)puVar36 + 0x5c) - uVar28;
              *(uint *)((long)puVar36 + 0x5c) = uVar12;
            }
            uVar28 = (uint)local_88;
            if (uVar12 == 0) goto LAB_00214184;
LAB_00214c3c:
            uVar11 = (uint)uVar29;
            pbVar35 = pbVar34;
            iVar31 = local_8c;
            goto switchD_00213150_caseD_214c40;
          }
LAB_00214184:
          *(undefined4 *)((long)puVar36 + 0x5c) = 0;
          *(undefined4 *)(puVar36 + 1) = 0x3f3a;
switchD_00213150_caseD_214190:
          iVar31 = (int)local_88;
          if ((*(byte *)((long)puVar36 + 0x19) >> 3 & 1) != 0) {
            uVar28 = 0;
            if (iVar31 != 0) {
              uVar18 = 0;
              do {
                bVar7 = pbVar34[uVar18];
                uVar18 = uVar18 + 1;
                lVar30 = puVar36[6];
                if ((lVar30 != 0) && (lVar33 = *(long *)(lVar30 + 0x28), lVar33 != 0)) {
                  uVar11 = *(uint *)((long)puVar36 + 0x5c);
                  if (uVar11 < *(uint *)(lVar30 + 0x30)) {
                    *(uint *)((long)puVar36 + 0x5c) = uVar11 + 1;
                    *(byte *)(lVar33 + (ulong)uVar11) = bVar7;
                  }
                }
              } while ((bVar7 != 0) && (uVar18 < (local_88 & 0xffffffff)));
              if (((*(byte *)((long)puVar36 + 0x19) >> 1 & 1) != 0) &&
                 ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
                uVar19 = FUN_00215640(*puVar1,pbVar34,uVar18 & 0xffffffff);
                *puVar1 = uVar19;
              }
              pbVar34 = pbVar34 + uVar18;
              if (bVar7 == 0) {
                local_88 = (local_88 & 0xffffffff) - uVar18;
                goto LAB_0021424c;
              }
LAB_00214c24:
              uVar28 = iVar31 - (int)uVar18;
            }
            goto LAB_00214c3c;
          }
          if (puVar36[6] != 0) {
            *(undefined8 *)(puVar36[6] + 0x28) = 0;
          }
LAB_0021424c:
          *(undefined4 *)((long)puVar36 + 0x5c) = 0;
          *(undefined4 *)(puVar36 + 1) = 0x3f3b;
switchD_00213150_caseD_214258:
          iVar31 = (int)local_88;
          if ((*(byte *)((long)puVar36 + 0x19) >> 4 & 1) == 0) {
            if (puVar36[6] != 0) {
              *(undefined8 *)(puVar36[6] + 0x38) = 0;
            }
          }
          else {
            uVar28 = 0;
            if (iVar31 == 0) goto LAB_00214c3c;
            uVar18 = 0;
            do {
              bVar7 = pbVar34[uVar18];
              uVar18 = uVar18 + 1;
              lVar30 = puVar36[6];
              if ((lVar30 != 0) && (lVar33 = *(long *)(lVar30 + 0x38), lVar33 != 0)) {
                uVar11 = *(uint *)((long)puVar36 + 0x5c);
                if (uVar11 < *(uint *)(lVar30 + 0x40)) {
                  *(uint *)((long)puVar36 + 0x5c) = uVar11 + 1;
                  *(byte *)(lVar33 + (ulong)uVar11) = bVar7;
                }
              }
            } while ((bVar7 != 0) && (uVar18 < (local_88 & 0xffffffff)));
            if (((*(byte *)((long)puVar36 + 0x19) >> 1 & 1) != 0) &&
               ((*(byte *)(puVar36 + 2) >> 2 & 1) != 0)) {
              uVar19 = FUN_00215640(*puVar1,pbVar34,uVar18 & 0xffffffff);
              *puVar1 = uVar19;
            }
            pbVar34 = pbVar34 + uVar18;
            if (bVar7 != 0) goto LAB_00214c24;
            local_88 = (local_88 & 0xffffffff) - uVar18;
          }
          *puVar26 = 0x3f3c;
switchD_00213150_caseD_21431c:
          if ((*(uint *)(puVar36 + 3) >> 9 & 1) == 0) {
LAB_002143ac:
            if (puVar36[6] != 0) {
              *(uint *)(puVar36[6] + 0x44) = *(uint *)(puVar36 + 3) >> 9 & 1;
              *(undefined4 *)(puVar36[6] + 0x48) = 1;
            }
            uVar18 = FUN_00215640(0,0,0);
            *puVar1 = uVar18;
            param_1[0xc] = uVar18;
            *puVar26 = 0x3f3f;
            uVar18 = 0xb;
          }
          else {
            if ((uint)uVar29 < 0x10) {
              uVar18 = uVar29 & 0xffffffff;
              iVar31 = (int)local_88;
              pbVar35 = pbVar34;
              if (iVar31 == 0) {
LAB_00214e6c:
                uVar29 = uVar18;
LAB_00214e74:
                uVar11 = (uint)uVar29;
                uVar28 = 0;
                iVar31 = local_8c;
                goto switchD_00213150_caseD_214c40;
              }
              pbVar35 = pbVar34 + 1;
              uVar19 = uVar29 & 0x3f;
              uVar29 = uVar18 + 8;
              uVar11 = iVar31 - 1;
              uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
              if (uVar29 < 0x10) {
                if (uVar11 == 0) goto LAB_00214e74;
                uVar11 = iVar31 - 2;
                pbVar35 = pbVar34 + 2;
                uVar32 = ((ulong)pbVar34[1] << (uVar29 & 0x3f)) + uVar32;
                uVar29 = uVar18 + 0x10;
              }
              local_88 = (ulong)uVar11;
              pbVar34 = pbVar35;
            }
            if (((*(byte *)(puVar36 + 2) >> 2 & 1) == 0) || (uVar32 == (ushort)*puVar1)) {
              uVar32 = 0;
              uVar29 = 0;
              goto LAB_002143ac;
            }
            pcVar15 = "header crc mismatch";
LAB_00214a10:
            param_1[6] = (long)pcVar15;
            uVar11 = 0x3f51;
LAB_00214a18:
            *puVar26 = uVar11;
LAB_00214a1c:
            uVar28 = *puVar26;
joined_r0x00214b14:
            uVar18 = (ulong)(uVar28 - 0x3f34);
            if (0x1e < uVar28 - 0x3f34) {
              return -2;
            }
          }
          goto LAB_00213140;
        case 0x2132ac:
          if (0x1f < uVar11) {
LAB_00213b88:
            uVar18 = uVar32 >> 8;
            iVar31 = (int)uVar32;
            uVar29 = uVar32 >> 0x18;
            uVar32 = 0;
            uVar18 = uVar18 & 0xff00 | uVar29 & 0xff | (ulong)(uint)(iVar31 << 8) & 0xff0000 |
                     (ulong)(uint)(iVar31 << 0x18);
            uVar29 = 0;
            *puVar1 = uVar18;
            param_1[0xc] = uVar18;
            *puVar26 = 0x3f3e;
            goto switchD_00213150_caseD_213bc4;
          }
          uVar18 = uVar29 & 0xffffffff;
          if (uVar28 != 0) {
            pbVar14 = pbVar34 + 1;
            uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
            uVar19 = uVar18 + 8;
            uVar11 = uVar28 - 1;
            if (0x1f < uVar19) {
LAB_00213b80:
              local_88 = (ulong)uVar11;
              goto LAB_00213b88;
            }
            if (uVar11 != 0) {
              uVar32 = ((ulong)pbVar34[1] << (uVar19 & 0x3f)) + uVar32;
              uVar19 = uVar18 + 0x10;
              uVar11 = uVar28 - 2;
              pbVar14 = pbVar34 + 2;
              if (0x1f < uVar19) goto LAB_00213b80;
              if (uVar11 != 0) {
                uVar29 = uVar19 & 0x3f;
                uVar19 = uVar18 + 0x18;
                uVar11 = uVar28 - 3;
                pbVar14 = pbVar34 + 3;
                uVar32 = ((ulong)pbVar34[2] << uVar29) + uVar32;
                if (0x1f < uVar19) goto LAB_00213b80;
                if (uVar11 != 0) {
                  pbVar14 = pbVar34 + 4;
                  local_88 = (ulong)(uVar28 - 4);
                  uVar32 = ((ulong)pbVar34[3] << (uVar19 & 0x3f)) + uVar32;
                  goto LAB_00213b88;
                }
              }
            }
            goto LAB_00214ec0;
          }
          break;
        case 0x213340:
          uVar12 = uVar11 - (uVar11 & 7);
          uVar18 = (ulong)uVar12;
          uVar32 = uVar32 >> (uVar11 & 7);
          uVar29 = uVar18;
          if (0x1f < uVar12) {
LAB_002133e8:
            uVar28 = (uint)local_88;
            uVar11 = (uint)uVar32;
            if ((uVar32 >> 0x10 ^ 0xffff) != (uVar32 & 0xffff)) {
              pcVar15 = "invalid stored block lengths";
              goto LAB_00214a10;
            }
            uVar32 = 0;
            *(uint *)((long)puVar36 + 0x5c) = uVar11 & 0xffff;
            uVar29 = 0;
            *(undefined4 *)(puVar36 + 1) = 0x3f42;
            if (param_2 == 6) goto LAB_00214c3c;
            goto switchD_00213150_caseD_21341c;
          }
          if (uVar28 == 0) goto LAB_00214c2c;
          pbVar14 = pbVar34 + 1;
          uVar29 = uVar18 + 8;
          uVar11 = uVar28 - 1;
          uVar32 = ((ulong)*pbVar34 << (uVar18 & 0x3f)) + uVar32;
          if (0x1f < uVar29) {
LAB_002133e0:
            local_88 = (ulong)uVar11;
            pbVar34 = pbVar14;
            goto LAB_002133e8;
          }
          if (uVar11 != 0) {
            uVar19 = uVar29 & 0x3f;
            uVar29 = uVar18 + 0x10;
            uVar11 = uVar28 - 2;
            pbVar14 = pbVar34 + 2;
            uVar32 = ((ulong)pbVar34[1] << uVar19) + uVar32;
            if (uVar29 < 0x20) {
              if (uVar11 == 0) goto LAB_00214c34;
              uVar19 = uVar29 & 0x3f;
              uVar29 = uVar18 + 0x18;
              uVar11 = uVar28 - 3;
              pbVar14 = pbVar34 + 3;
              uVar32 = ((ulong)pbVar34[2] << uVar19) + uVar32;
              if (uVar29 < 0x20) {
                if (uVar11 == 0) goto LAB_00214c34;
                uVar11 = uVar28 - 4;
                pbVar14 = pbVar34 + 4;
                uVar32 = ((ulong)pbVar34[3] << (uVar29 & 0x3f)) + uVar32;
                uVar29 = uVar18 + 0x20;
              }
            }
            goto LAB_002133e0;
          }
          goto LAB_00214c34;
        case 0x21341c:
switchD_00213150_caseD_21341c:
          *puVar26 = 0x3f43;
        case 0x213424:
          uVar28 = (uint)local_88;
          uVar11 = *(uint *)((long)puVar36 + 0x5c);
          if (uVar11 == 0) {
            uVar11 = 0x3f3f;
            goto LAB_00214a18;
          }
          uVar12 = uVar28;
          if (uVar11 <= uVar28) {
            uVar12 = uVar11;
          }
          uVar11 = uVar25;
          if (uVar12 <= uVar25) {
            uVar11 = uVar12;
          }
          if (uVar11 == 0) goto LAB_00214c3c;
          uVar18 = (ulong)uVar11;
          memcpy(__dest_00,pbVar34,uVar18);
          local_88 = (ulong)(uVar28 - uVar11);
          pbVar35 = pbVar34 + uVar18;
          uVar25 = uVar25 - uVar11;
          __dest_00 = __dest_00 + uVar18;
          *(uint *)((long)puVar36 + 0x5c) = *(int *)((long)puVar36 + 0x5c) - uVar11;
LAB_00213484:
          uVar28 = *puVar26;
          pbVar34 = pbVar35;
          goto joined_r0x00214b14;
        case 0x2134a4:
          if (uVar11 < 0xe) {
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 == 0) goto LAB_00214c2c;
            pbVar14 = pbVar34 + 1;
            uVar19 = uVar29 & 0x3f;
            uVar29 = uVar18 + 8;
            uVar12 = uVar28 - 1;
            uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
            if (uVar29 < 0xe) {
              if (uVar12 == 0) goto LAB_00214c34;
              uVar12 = uVar28 - 2;
              pbVar14 = pbVar34 + 2;
              uVar32 = ((ulong)pbVar34[1] << (uVar29 & 0x3f)) + uVar32;
              uVar29 = uVar18 + 0x10;
            }
            uVar11 = (uint)uVar29;
            local_88 = (ulong)uVar12;
            pbVar34 = pbVar14;
          }
          uVar12 = (uint)uVar32;
          uVar28 = (uVar12 & 0x1f) + 0x101;
          uVar17 = uVar12 >> 5 & 0x1f;
          uVar12 = (uVar12 >> 10 & 0xf) + 4;
          *(uint *)(puVar36 + 0x10) = uVar12;
          *(uint *)((long)puVar36 + 0x84) = uVar28;
          *(uint *)(puVar36 + 0x11) = uVar17 + 1;
          uVar32 = uVar32 >> 0xe;
          uVar11 = uVar11 - 0xe;
          uVar29 = (ulong)uVar11;
          if ((0x11e < uVar28) || (0x1d < uVar17)) {
            pcVar15 = "too many length or distance symbols";
            goto LAB_00214a10;
          }
          *(undefined4 *)((long)puVar36 + 0x8c) = 0;
          *(undefined4 *)(puVar36 + 1) = 0x3f45;
          uVar18 = 0;
joined_r0x00213548:
          do {
            iVar31 = (int)uVar29;
            pbVar14 = pbVar34;
            if (uVar11 < 3) {
              uVar28 = 0;
              if ((int)local_88 == 0) goto LAB_00214c3c;
              pbVar14 = pbVar34 + 1;
              iVar31 = iVar31 + 8;
              local_88 = (ulong)((int)local_88 - 1);
              uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
            }
            uVar9 = (ushort)uVar32;
            uVar8 = (&DAT_039cc1b8)[uVar18];
            uVar18 = uVar18 + 1;
            uVar32 = uVar32 >> 3;
            uVar11 = iVar31 - 3;
            uVar29 = (ulong)uVar11;
            *(uint *)((long)puVar36 + 0x8c) = (uint)uVar18;
            *(ushort *)((long)puVar36 + (ulong)uVar8 * 2 + 0x98) = uVar9 & 7;
            pbVar34 = pbVar14;
          } while ((uint)uVar18 < uVar12);
          goto LAB_002135c4;
        case 0x213550:
          uVar28 = *(uint *)((long)puVar36 + 0x8c);
          uVar18 = (ulong)uVar28;
          uVar12 = *(uint *)(puVar36 + 0x10);
          if (uVar28 < uVar12) {
            uVar18 = (ulong)uVar28;
            goto joined_r0x00213548;
          }
LAB_002135c4:
          uVar11 = (uint)uVar18;
          if (uVar11 < 0x13) {
            uVar28 = 3 - uVar11 & 3;
            if (uVar28 != 0) {
              uVar18 = uVar18 & 0xffffffff;
              do {
                uVar8 = (&DAT_039cc1b8)[uVar18];
                uVar18 = uVar18 + 1;
                *(int *)((long)puVar36 + 0x8c) = (int)uVar18;
                uVar28 = uVar28 - 1;
                *(undefined2 *)((long)puVar36 + (ulong)uVar8 * 2 + 0x98) = 0;
              } while (uVar28 != 0);
            }
            if (2 < 0x12 - uVar11) {
              lVar30 = 0;
              do {
                uVar8 = (&DAT_039cc1b8)[(uVar18 & 0xffffffff) + lVar30];
                lVar33 = (uVar18 & 0xffffffff) + lVar30;
                *(int *)((long)puVar36 + 0x8c) = (int)(lVar33 + 1U);
                *(undefined2 *)((long)puVar36 + (ulong)uVar8 * 2 + 0x98) = 0;
                uVar8 = (&DAT_039cc1b8)[lVar33 + 1U & 0xffffffff];
                *(int *)((long)puVar36 + 0x8c) = (int)(lVar33 + 2U);
                *(undefined2 *)((long)puVar36 + (ulong)uVar8 * 2 + 0x98) = 0;
                uVar8 = (&DAT_039cc1b8)[lVar33 + 2U & 0xffffffff];
                *(int *)((long)puVar36 + 0x8c) = (int)(lVar33 + 3U);
                uVar9 = (&DAT_039cc1b8)[lVar33 + 3U & 0xffffffff];
                lVar30 = lVar30 + 4;
                *(undefined2 *)((long)puVar36 + (ulong)uVar8 * 2 + 0x98) = 0;
                *(int *)((long)puVar36 + 0x8c) = (int)lVar33 + 4;
                *(undefined2 *)((long)puVar36 + (ulong)uVar9 * 2 + 0x98) = 0;
              } while ((uint)((int)uVar18 + (int)lVar30) < 0x13);
            }
          }
          puVar36[0x12] = puVar2;
          puVar36[0xd] = puVar2;
          *(undefined4 *)(puVar36 + 0xf) = 7;
          local_8c = FUN_00215d80(0,puVar36 + 0x13,0x13,puVar4,puVar36 + 0xf,puVar3);
          if (local_8c == 0) {
            uVar11 = 0;
            local_8c = 0;
            *(undefined4 *)((long)puVar36 + 0x8c) = 0;
            *(undefined4 *)(puVar36 + 1) = 0x3f46;
            iVar31 = *(int *)((long)puVar36 + 0x84);
            uVar12 = *(int *)(puVar36 + 0x11) + iVar31;
            pbVar14 = pbVar34;
            if (uVar12 != 0) {
LAB_002138f4:
              lVar30 = puVar36[0xd];
              uVar17 = ~(-1 << (ulong)(*(uint *)(puVar36 + 0xf) & 0x1f));
              do {
                while( true ) {
                  uVar19 = (ulong)(uVar17 & (uint)uVar32);
                  bVar7 = *(byte *)(lVar30 + uVar19 * 4 + 1);
                  uVar18 = (ulong)bVar7;
                  if ((uint)uVar29 < (uint)bVar7) {
                    uVar29 = uVar29 & 0xffffffff;
                    pbVar34 = pbVar14;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar18 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      uVar32 = ((ulong)*pbVar34 << uVar18) + uVar32;
                      uVar28 = uVar17 & (uint)uVar32;
                      uVar18 = (ulong)*(byte *)(lVar30 + (ulong)uVar28 * 4 + 1);
                      local_88 = (ulong)((int)local_88 - 1);
                      pbVar34 = pbVar14;
                    } while (uVar29 < uVar18);
                    uVar19 = (ulong)uVar28;
                  }
                  uVar8 = *(ushort *)(lVar30 + uVar19 * 4 + 2);
                  iVar20 = (int)uVar18;
                  uVar28 = (uint)uVar29;
                  pbVar34 = pbVar14;
                  if (0xf < uVar8) break;
                  uVar19 = (ulong)uVar11;
                  uVar11 = uVar11 + 1;
                  uVar32 = uVar32 >> (uVar18 & 0x3f);
                  *(uint *)((long)puVar36 + 0x8c) = uVar11;
                  uVar29 = (ulong)(uVar28 - iVar20);
                  *(ushort *)((long)puVar36 + uVar19 * 2 + 0x98) = uVar8;
                  if (uVar12 <= uVar11) goto LAB_00213b34;
                }
                if (uVar8 == 0x10) {
                  if (uVar28 < iVar20 + 2U) {
                    uVar29 = uVar29 & 0xffffffff;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar19 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      local_88 = (ulong)((int)local_88 - 1);
                      uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
                      pbVar34 = pbVar14;
                    } while (uVar29 < iVar20 + 2U);
                  }
                  uVar32 = uVar32 >> (uVar18 & 0x3f);
                  uVar28 = (int)uVar29 - iVar20;
                  uVar29 = (ulong)uVar28;
                  if (uVar11 != 0) {
                    uVar23 = ((uint)uVar32 & 3) + 3;
                    uVar22 = *(undefined2 *)((long)puVar36 + (ulong)(uVar11 - 1) * 2 + 0x98);
                    uVar32 = uVar32 >> 2;
                    uVar29 = (ulong)(uVar28 - 2);
                    if (uVar23 + uVar11 <= uVar12) goto LAB_00213abc;
                  }
LAB_00214bb4:
                  pcVar15 = "invalid bit length repeat";
                  pbVar34 = pbVar14;
                  goto LAB_00214a10;
                }
                if (uVar8 == 0x11) {
                  if (uVar28 < iVar20 + 3U) {
                    uVar29 = uVar29 & 0xffffffff;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar19 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      local_88 = (ulong)((int)local_88 - 1);
                      uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
                      pbVar34 = pbVar14;
                    } while (uVar29 < iVar20 + 3U);
                  }
                  uVar18 = uVar32 >> (uVar18 & 0x3f);
                  uVar32 = uVar18 >> 3;
                  uVar28 = ((int)uVar29 - iVar20) - 3;
                  uVar23 = ((uint)uVar18 & 7) + 3;
                }
                else {
                  if (uVar28 < iVar20 + 7U) {
                    uVar29 = uVar29 & 0xffffffff;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar19 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      local_88 = (ulong)((int)local_88 - 1);
                      uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
                      pbVar34 = pbVar14;
                    } while (uVar29 < iVar20 + 7U);
                  }
                  uVar18 = uVar32 >> (uVar18 & 0x3f);
                  uVar32 = uVar18 >> 7;
                  uVar28 = ((int)uVar29 - iVar20) - 7;
                  uVar23 = ((uint)uVar18 & 0x7f) + 0xb;
                }
                uVar22 = 0;
                uVar29 = (ulong)uVar28;
                if (uVar12 < uVar23 + uVar11) goto LAB_00214bb4;
LAB_00213abc:
                uVar10 = uVar23 - 1;
                uVar28 = uVar23 & 3;
                if (uVar28 != 0) {
                  uVar24 = uVar11;
                  do {
                    uVar11 = uVar24 + 1;
                    uVar23 = uVar23 - 1;
                    *(uint *)((long)puVar36 + 0x8c) = uVar11;
                    *(undefined2 *)((long)puVar36 + (ulong)uVar24 * 2 + 0x98) = uVar22;
                    uVar28 = uVar28 - 1;
                    uVar24 = uVar11;
                  } while (uVar28 != 0);
                }
                if (2 < uVar10) {
                  do {
                    *(uint *)((long)puVar36 + 0x8c) = uVar11 + 1;
                    uVar28 = uVar11 + 2;
                    *(undefined2 *)((long)puVar36 + (ulong)uVar11 * 2 + 0x98) = uVar22;
                    *(uint *)((long)puVar36 + 0x8c) = uVar28;
                    uVar23 = uVar23 - 4;
                    *(undefined2 *)((long)puVar36 + (ulong)(uVar11 + 1) * 2 + 0x98) = uVar22;
                    uVar10 = uVar11 + 3;
                    uVar11 = uVar11 + 4;
                    *(uint *)((long)puVar36 + 0x8c) = uVar10;
                    *(undefined2 *)((long)puVar36 + (ulong)uVar28 * 2 + 0x98) = uVar22;
                    *(uint *)((long)puVar36 + 0x8c) = uVar11;
                    *(undefined2 *)((long)puVar36 + (ulong)uVar10 * 2 + 0x98) = uVar22;
                  } while (uVar23 != 0);
                }
                pbVar34 = pbVar14;
              } while (uVar11 < uVar12);
            }
LAB_00213b34:
            uVar28 = (uint)local_88;
            if (*(short *)(puVar36 + 0x53) == 0) {
              pcVar15 = "invalid code -- missing end-of-block";
              goto LAB_00214a10;
            }
            puVar36[0x12] = puVar2;
            puVar36[0xd] = puVar2;
            *(undefined4 *)(puVar36 + 0xf) = 9;
            local_8c = FUN_00215d80(1,puVar36 + 0x13,iVar31,puVar4,puVar36 + 0xf,puVar3);
            if (local_8c == 0) {
              puVar36[0xe] = puVar36[0x12];
              *(undefined4 *)((long)puVar36 + 0x7c) = 6;
              local_8c = FUN_00215d80(2,(long)puVar36 +
                                        (ulong)*(uint *)((long)puVar36 + 0x84) * 2 + 0x98,
                                      *(undefined4 *)(puVar36 + 0x11),puVar4,(long)puVar36 + 0x7c,
                                      puVar3);
              if (local_8c != 0) {
                pcVar15 = "invalid distances set";
                goto LAB_0021446c;
              }
              *puVar26 = 0x3f47;
              local_8c = 0;
              if (param_2 == 6) goto LAB_00214c3c;
switchD_00213150_caseD_214634:
              *puVar26 = 0x3f48;
              pbVar14 = pbVar34;
switchD_00213150_caseD_21463c:
              if ((uVar25 < 0x102) || ((uint)local_88 < 6)) {
                uVar11 = -1 << (ulong)(*(uint *)(puVar36 + 0xf) & 0x1f);
                lVar30 = puVar36[0xd];
                uVar19 = (ulong)((uint)uVar32 & (uVar11 ^ 0xffffffff));
                *(undefined4 *)((long)puVar36 + 0x1bec) = 0;
                bVar7 = *(byte *)(lVar30 + uVar19 * 4 + 1);
                uVar18 = (ulong)bVar7;
                if ((uint)uVar29 < (uint)bVar7) {
                  uVar29 = uVar29 & 0xffffffff;
                  pbVar34 = pbVar14;
                  do {
                    uVar28 = 0;
                    if ((int)local_88 == 0) goto LAB_00214c3c;
                    pbVar14 = pbVar34 + 1;
                    uVar18 = uVar29 & 0x3f;
                    uVar29 = uVar29 + 8;
                    uVar32 = ((ulong)*pbVar34 << uVar18) + uVar32;
                    uVar28 = ~uVar11 & (uint)uVar32;
                    uVar18 = (ulong)*(byte *)(lVar30 + (ulong)uVar28 * 4 + 1);
                    local_88 = (ulong)((int)local_88 - 1);
                    pbVar34 = pbVar14;
                  } while (uVar29 < uVar18);
                  uVar19 = (ulong)uVar28;
                }
                uVar11 = (uint)uVar29;
                uVar12 = (uint)uVar18;
                pbVar34 = (byte *)(lVar30 + uVar19 * 4);
                uVar8 = *(ushort *)(pbVar34 + 2);
                bVar7 = *pbVar34;
                if (bVar7 == 0 || (bVar7 & 0xf0) != 0) {
                  uVar12 = 0;
                  uVar19 = uVar18;
                }
                else {
                  uVar17 = -1 << (ulong)(uVar12 + bVar7 & 0x1f);
                  uVar21 = (ulong)((((uint)uVar32 & (uVar17 ^ 0xffffffff)) >> (ulong)(uVar12 & 0x1f)
                                   ) + (uint)uVar8);
                  bVar7 = *(byte *)(lVar30 + uVar21 * 4 + 1);
                  uVar19 = (ulong)bVar7;
                  if (uVar11 < uVar12 + bVar7) {
                    uVar29 = uVar29 & 0xffffffff;
                    pbVar34 = pbVar14;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar19 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
                      uVar11 = (((uint)uVar32 & ~uVar17) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar8;
                      uVar19 = (ulong)*(byte *)(lVar30 + (ulong)uVar11 * 4 + 1);
                      local_88 = (ulong)((int)local_88 - 1);
                      pbVar34 = pbVar14;
                    } while (uVar29 < uVar18 + uVar19);
                    uVar21 = (ulong)uVar11;
                  }
                  pbVar34 = (byte *)(lVar30 + uVar21 * 4);
                  uVar8 = *(ushort *)(pbVar34 + 2);
                  bVar7 = *pbVar34;
                  uVar32 = uVar32 >> (uVar18 & 0x3f);
                  uVar11 = (int)uVar29 - uVar12;
                  *(uint *)((long)puVar36 + 0x1bec) = uVar12;
                }
                uVar32 = uVar32 >> (uVar19 & 0x3f);
                *(uint *)((long)puVar36 + 0x1bec) = uVar12 + (int)uVar19;
                uVar29 = (ulong)(uVar11 - (int)uVar19);
                *(uint *)((long)puVar36 + 0x5c) = (uint)uVar8;
                pbVar34 = pbVar14;
                if (bVar7 == 0) {
                  uVar11 = 0x3f4d;
                  goto LAB_00214a18;
                }
                if ((bVar7 >> 5 & 1) != 0) {
                  *(undefined4 *)((long)puVar36 + 0x1bec) = 0xffffffff;
                  *(undefined4 *)(puVar36 + 1) = 0x3f3f;
                  uVar28 = *puVar26;
                  goto joined_r0x00214b14;
                }
                if ((bVar7 >> 6 & 1) != 0) {
                  pcVar15 = "invalid literal/length code";
                  goto LAB_00214a10;
                }
                uVar11 = bVar7 & 0xf;
                *(uint *)((long)puVar36 + 100) = uVar11;
                *(undefined4 *)(puVar36 + 1) = 0x3f49;
                if ((bVar7 & 0xf) == 0) {
LAB_00214808:
                  iVar31 = *(int *)((long)puVar36 + 0x5c);
                }
                else {
LAB_00213708:
                  uVar28 = (uint)uVar29;
                  pbVar34 = pbVar14;
                  while (uVar28 < uVar11) {
                    uVar28 = 0;
                    if ((int)local_88 == 0) goto LAB_00214c3c;
                    local_88 = (ulong)((int)local_88 - 1);
                    uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
                    uVar28 = (int)uVar29 + 8;
                    uVar29 = (ulong)uVar28;
                    pbVar34 = pbVar34 + 1;
                  }
                  uVar12 = (uint)uVar32;
                  uVar32 = uVar32 >> ((ulong)uVar11 & 0x3f);
                  iVar31 = *(int *)((long)puVar36 + 0x5c) +
                           (uVar12 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
                  uVar29 = (ulong)(uVar28 - uVar11);
                  *(int *)((long)puVar36 + 0x5c) = iVar31;
                  *(uint *)((long)puVar36 + 0x1bec) = *(int *)((long)puVar36 + 0x1bec) + uVar11;
                  pbVar14 = pbVar34;
                }
                *(int *)(puVar36 + 0x37e) = iVar31;
                *(undefined4 *)(puVar36 + 1) = 0x3f4a;
switchD_00213150_caseD_214818:
                uVar11 = -1 << (ulong)(*(uint *)((long)puVar36 + 0x7c) & 0x1f);
                lVar30 = puVar36[0xe];
                uVar19 = (ulong)((uint)uVar32 & (uVar11 ^ 0xffffffff));
                bVar7 = *(byte *)(lVar30 + uVar19 * 4 + 1);
                uVar18 = (ulong)bVar7;
                if ((uint)uVar29 < (uint)bVar7) {
                  uVar29 = uVar29 & 0xffffffff;
                  pbVar34 = pbVar14;
                  do {
                    uVar28 = 0;
                    if ((int)local_88 == 0) goto LAB_00214c3c;
                    pbVar14 = pbVar34 + 1;
                    uVar18 = uVar29 & 0x3f;
                    uVar29 = uVar29 + 8;
                    uVar32 = ((ulong)*pbVar34 << uVar18) + uVar32;
                    uVar28 = ~uVar11 & (uint)uVar32;
                    uVar18 = (ulong)*(byte *)(lVar30 + (ulong)uVar28 * 4 + 1);
                    local_88 = (ulong)((int)local_88 - 1);
                    pbVar34 = pbVar14;
                  } while (uVar29 < uVar18);
                  uVar19 = (ulong)uVar28;
                }
                uVar11 = (uint)uVar29;
                pbVar34 = (byte *)(lVar30 + uVar19 * 4);
                uVar8 = *(ushort *)(pbVar34 + 2);
                bVar7 = *pbVar34;
                if ((bVar7 & 0xf0) == 0) {
                  uVar17 = (uint)uVar18;
                  uVar12 = -1 << (ulong)(uVar17 + bVar7 & 0x1f);
                  uVar21 = (ulong)((((uint)uVar32 & (uVar12 ^ 0xffffffff)) >> (ulong)(uVar17 & 0x1f)
                                   ) + (uint)uVar8);
                  bVar7 = *(byte *)(lVar30 + uVar21 * 4 + 1);
                  uVar19 = (ulong)bVar7;
                  if (uVar11 < uVar17 + bVar7) {
                    uVar29 = uVar29 & 0xffffffff;
                    pbVar34 = pbVar14;
                    do {
                      uVar28 = 0;
                      if ((int)local_88 == 0) goto LAB_00214c3c;
                      pbVar14 = pbVar34 + 1;
                      uVar19 = uVar29 & 0x3f;
                      uVar29 = uVar29 + 8;
                      uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
                      uVar11 = (((uint)uVar32 & ~uVar12) >> (ulong)(uVar17 & 0x1f)) + (uint)uVar8;
                      uVar19 = (ulong)*(byte *)(lVar30 + (ulong)uVar11 * 4 + 1);
                      local_88 = (ulong)((int)local_88 - 1);
                      pbVar34 = pbVar14;
                    } while (uVar29 < uVar18 + uVar19);
                    uVar21 = (ulong)uVar11;
                  }
                  pbVar34 = (byte *)(lVar30 + uVar21 * 4);
                  uVar8 = *(ushort *)(pbVar34 + 2);
                  bVar7 = *pbVar34;
                  uVar32 = uVar32 >> (uVar18 & 0x3f);
                  uVar11 = (int)uVar29 - uVar17;
                  iVar31 = *(int *)((long)puVar36 + 0x1bec) + uVar17;
                  *(int *)((long)puVar36 + 0x1bec) = iVar31;
                }
                else {
                  iVar31 = *(int *)((long)puVar36 + 0x1bec);
                  uVar19 = uVar18;
                }
                uVar32 = uVar32 >> (uVar19 & 0x3f);
                uVar29 = (ulong)(uVar11 - (int)uVar19);
                *(int *)((long)puVar36 + 0x1bec) = iVar31 + (int)uVar19;
                pbVar34 = pbVar14;
                if ((bVar7 >> 6 & 1) != 0) {
                  pcVar15 = "invalid distance code";
                  goto LAB_00214a10;
                }
                uVar11 = bVar7 & 0xf;
                *(uint *)(puVar36 + 0xc) = (uint)uVar8;
                *(uint *)((long)puVar36 + 100) = uVar11;
                *(undefined4 *)(puVar36 + 1) = 0x3f4b;
                if ((bVar7 & 0xf) != 0) {
LAB_00214948:
                  uVar28 = (uint)uVar29;
                  pbVar34 = pbVar14;
                  while (uVar28 < uVar11) {
                    uVar28 = 0;
                    if ((int)local_88 == 0) goto LAB_00214c3c;
                    local_88 = (ulong)((int)local_88 - 1);
                    uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
                    uVar28 = (int)uVar29 + 8;
                    uVar29 = (ulong)uVar28;
                    pbVar34 = pbVar34 + 1;
                  }
                  uVar12 = (uint)uVar32;
                  uVar32 = uVar32 >> ((ulong)uVar11 & 0x3f);
                  *(uint *)(puVar36 + 0xc) =
                       *(int *)(puVar36 + 0xc) +
                       (uVar12 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
                  uVar29 = (ulong)(uVar28 - uVar11);
                  *(uint *)((long)puVar36 + 0x1bec) = *(int *)((long)puVar36 + 0x1bec) + uVar11;
                }
LAB_0021499c:
                *puVar26 = 0x3f4c;
switchD_00213150_caseD_2149a4:
                uVar28 = (uint)local_88;
                if (uVar25 == 0) goto LAB_00214c3c;
                uVar11 = *(uint *)(puVar36 + 0xc);
                if (local_7c - uVar25 < uVar11) {
                  uVar11 = uVar11 - (local_7c - uVar25);
                  if ((*(uint *)(puVar36 + 8) < uVar11) && (*(int *)(puVar36 + 0x37d) != 0)) {
                    pcVar15 = "invalid distance too far back";
                    goto LAB_00214a10;
                  }
                  uVar28 = *(uint *)((long)puVar36 + 0x44);
                  uVar12 = uVar11 - uVar28;
                  if (uVar11 < uVar28 || uVar12 == 0) {
                    uVar28 = uVar28 - uVar11;
                  }
                  else {
                    uVar28 = *(int *)((long)puVar36 + 0x3c) - uVar12;
                    uVar11 = uVar12;
                  }
                  puVar16 = (undefined1 *)(puVar36[9] + (ulong)uVar28);
                  uVar12 = *(uint *)((long)puVar36 + 0x5c);
                  uVar28 = uVar12;
                  if (uVar11 <= uVar12) {
                    uVar28 = uVar11;
                  }
                }
                else {
                  uVar12 = *(uint *)((long)puVar36 + 0x5c);
                  puVar16 = __dest_00 + -(ulong)uVar11;
                  uVar28 = uVar12;
                }
                uVar11 = uVar25;
                if (uVar28 <= uVar25) {
                  uVar11 = uVar28;
                }
                *(uint *)((long)puVar36 + 0x5c) = uVar12 - uVar11;
                uVar12 = uVar11;
                for (uVar28 = uVar11 & 7; uVar28 != 0; uVar28 = uVar28 - 1) {
                  uVar12 = uVar12 - 1;
                  *__dest_00 = *puVar16;
                  puVar16 = puVar16 + 1;
                  __dest_00 = __dest_00 + 1;
                }
                puVar27 = __dest_00;
                if (6 < uVar11 - 1) {
                  do {
                    *puVar27 = *puVar16;
                    puVar27[1] = puVar16[1];
                    puVar27[2] = puVar16[2];
                    puVar27[3] = puVar16[3];
                    puVar27[4] = puVar16[4];
                    puVar27[5] = puVar16[5];
                    puVar27[6] = puVar16[6];
                    __dest_00 = puVar27 + 8;
                    uVar12 = uVar12 - 8;
                    puVar27[7] = puVar16[7];
                    puVar16 = puVar16 + 8;
                    puVar27 = __dest_00;
                  } while (uVar12 != 0);
                }
                uVar25 = uVar25 - uVar11;
                if (*(int *)((long)puVar36 + 0x5c) == 0) {
                  uVar11 = 0x3f48;
                  goto LAB_00214a18;
                }
                goto LAB_00214a1c;
              }
              param_1[3] = (long)__dest_00;
              *(uint *)(param_1 + 4) = uVar25;
              *param_1 = (long)pbVar14;
              *(uint *)(param_1 + 1) = (uint)local_88;
              puVar36[10] = uVar32;
              *(uint *)(puVar36 + 0xb) = (uint)uVar29;
              FUN_00215650(param_1,local_7c);
              __dest_00 = (undefined1 *)param_1[3];
              uVar25 = *(uint *)(param_1 + 4);
              pbVar34 = (byte *)*param_1;
              local_88 = (ulong)*(uint *)(param_1 + 1);
              uVar32 = puVar36[10];
              uVar29 = (ulong)*(uint *)(puVar36 + 0xb);
              if (*(int *)(puVar36 + 1) == 0x3f3f) {
                *(undefined4 *)((long)puVar36 + 0x1bec) = 0xffffffff;
              }
              uVar28 = *puVar26;
              goto joined_r0x00214b14;
            }
            pcVar15 = "invalid literal/lengths set";
LAB_0021446c:
            param_1[6] = (long)pcVar15;
            *puVar26 = 0x3f51;
            uVar18 = 0x1d;
          }
          else {
            param_1[6] = (long)"invalid code lengths set";
            *puVar26 = 0x3f51;
            uVar18 = 0x1d;
          }
          goto LAB_00213140;
        case 0x2136e8:
          uVar11 = *(uint *)((long)puVar36 + 0x8c);
          iVar31 = *(int *)((long)puVar36 + 0x84);
          uVar12 = *(int *)(puVar36 + 0x11) + iVar31;
          pbVar14 = pbVar34;
          if (uVar11 < uVar12) goto LAB_002138f4;
          goto LAB_00213b34;
        case 0x213700:
          uVar11 = *(uint *)((long)puVar36 + 100);
          if (uVar11 == 0) goto LAB_00214808;
          goto LAB_00213708;
        case 0x213760:
          uVar11 = *(uint *)((long)puVar36 + 100);
          if (uVar11 != 0) goto LAB_00214948;
          goto LAB_0021499c;
        case 0x21376c:
          if (uVar25 == 0) goto LAB_00214c3c;
          uVar25 = uVar25 - 1;
          *__dest_00 = (char)*(undefined4 *)((long)puVar36 + 0x5c);
          *(undefined4 *)(puVar36 + 1) = 0x3f48;
          uVar28 = *puVar26;
          __dest_00 = __dest_00 + 1;
          goto joined_r0x00214b14;
        case 0x213798:
          uVar12 = 0;
          if (*(int *)(puVar36 + 2) != 0) {
            if (uVar11 < 0x20) {
              uVar18 = uVar29 & 0xffffffff;
              if (uVar28 == 0) goto LAB_00214c2c;
              pbVar14 = pbVar34 + 1;
              uVar19 = uVar29 & 0x3f;
              uVar29 = uVar18 + 8;
              uVar11 = uVar28 - 1;
              uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
              if (uVar29 < 0x20) {
                if (uVar11 == 0) goto LAB_00214c34;
                uVar19 = uVar29 & 0x3f;
                uVar29 = uVar18 + 0x10;
                uVar11 = uVar28 - 2;
                pbVar14 = pbVar34 + 2;
                uVar32 = ((ulong)pbVar34[1] << uVar19) + uVar32;
                if (uVar29 < 0x20) {
                  if (uVar11 == 0) goto LAB_00214c34;
                  uVar19 = uVar29 & 0x3f;
                  uVar29 = uVar18 + 0x18;
                  uVar11 = uVar28 - 3;
                  pbVar14 = pbVar34 + 3;
                  uVar32 = ((ulong)pbVar34[2] << uVar19) + uVar32;
                  if (uVar29 < 0x20) {
                    if (uVar11 == 0) goto LAB_00214c34;
                    uVar11 = uVar28 - 4;
                    pbVar14 = pbVar34 + 4;
                    uVar32 = ((ulong)pbVar34[3] << (uVar29 & 0x3f)) + uVar32;
                    uVar29 = uVar18 + 0x20;
                  }
                }
              }
              local_88 = (ulong)uVar11;
              pbVar34 = pbVar14;
            }
            uVar18 = (ulong)(local_7c - uVar25);
            param_1[5] = param_1[5] + uVar18;
            puVar36[5] = puVar36[5] + uVar18;
            uVar12 = *(uint *)(puVar36 + 2);
            uVar11 = uVar12 & 4;
            if ((local_7c - uVar25 != 0) && (uVar11 != 0)) {
              if (*(int *)(puVar36 + 3) == 0) {
                lVar30 = FUN_00215360(puVar36[4],(long)__dest_00 - uVar18);
              }
              else {
                lVar30 = FUN_00215640();
              }
              puVar36[4] = lVar30;
              param_1[0xc] = lVar30;
              uVar12 = *(uint *)(puVar36 + 2);
              uVar11 = uVar12 & 4;
            }
            local_7c = uVar25;
            if (uVar11 != 0) {
              uVar18 = uVar32;
              if (*(int *)(puVar36 + 3) == 0) {
                uVar18 = uVar32 >> 8 & 0xff00 | uVar32 >> 0x18 & 0xff |
                         (ulong)(uint)((int)uVar32 << 8) & 0xff0000 |
                         (ulong)(uint)((int)uVar32 << 0x18);
              }
              if (uVar18 != *puVar1) {
                param_1[6] = (long)"incorrect data check";
                *puVar26 = 0x3f51;
                uVar18 = 0x1d;
                goto LAB_00213140;
              }
            }
            uVar32 = 0;
            uVar29 = 0;
          }
          uVar28 = (uint)local_88;
          uVar11 = (uint)uVar29;
          *puVar26 = 0x3f4f;
          goto joined_r0x00213890;
        case 0x21388c:
          uVar12 = *(uint *)(puVar36 + 2);
joined_r0x00213890:
          if (uVar12 == 0) {
LAB_00214eac:
            *puVar26 = 0x3f50;
            pbVar35 = pbVar34;
            iVar31 = 1;
            goto switchD_00213150_caseD_214c40;
          }
          uVar28 = (uint)local_88;
          uVar11 = (uint)uVar29;
          if (*(int *)(puVar36 + 3) == 0) goto LAB_00214eac;
          pbVar14 = pbVar34;
          if (uVar11 < 0x20) {
            uVar18 = uVar29 & 0xffffffff;
            if (uVar28 != 0) {
              pbVar14 = pbVar34 + 1;
              uVar19 = uVar29 & 0x3f;
              uVar29 = uVar18 + 8;
              uVar11 = uVar28 - 1;
              uVar32 = ((ulong)*pbVar34 << uVar19) + uVar32;
              if (uVar29 < 0x20) {
                if (uVar11 == 0) goto LAB_00214c34;
                uVar19 = uVar29 & 0x3f;
                uVar29 = uVar18 + 0x10;
                uVar11 = uVar28 - 2;
                pbVar14 = pbVar34 + 2;
                uVar32 = ((ulong)pbVar34[1] << uVar19) + uVar32;
                if (uVar29 < 0x20) {
                  if (uVar11 == 0) goto LAB_00214c34;
                  uVar19 = uVar29 & 0x3f;
                  uVar29 = uVar18 + 0x18;
                  uVar11 = uVar28 - 3;
                  pbVar14 = pbVar34 + 3;
                  uVar32 = ((ulong)pbVar34[2] << uVar19) + uVar32;
                  if (uVar29 < 0x20) {
                    if (uVar11 == 0) goto LAB_00214c34;
                    uVar11 = uVar28 - 4;
                    pbVar14 = pbVar34 + 4;
                    uVar32 = ((ulong)pbVar34[3] << (uVar29 & 0x3f)) + uVar32;
                    uVar29 = uVar18 + 0x20;
                  }
                }
              }
              local_88 = (ulong)uVar11;
              goto LAB_002145c0;
            }
LAB_00214c2c:
            uVar29 = uVar18;
LAB_00214c34:
            uVar28 = 0;
            pbVar34 = pbVar14;
            goto LAB_00214c3c;
          }
LAB_002145c0:
          uVar28 = (uint)local_88;
          pbVar34 = pbVar14;
          if (uVar32 == *(uint *)(puVar36 + 5)) {
            uVar32 = 0;
            uVar11 = 0;
            goto LAB_00214eac;
          }
          pcVar15 = "incorrect length check";
          goto LAB_00214a10;
        case 0x213bc4:
switchD_00213150_caseD_213bc4:
          if (*(int *)((long)puVar36 + 0x14) == 0) {
            param_1[3] = (long)__dest_00;
            *(uint *)(param_1 + 4) = uVar25;
            *param_1 = (long)pbVar14;
            *(int *)(param_1 + 1) = (int)local_88;
            puVar36[10] = uVar32;
            *(int *)(puVar36 + 0xb) = (int)uVar29;
            return 2;
          }
          uVar18 = FUN_00215360(0,0,0);
          *puVar1 = uVar18;
          param_1[0xc] = uVar18;
          *puVar26 = 0x3f3f;
          pbVar34 = pbVar14;
        case 0x213c14:
          uVar28 = (uint)local_88;
          if (param_2 - 5U < 2) goto LAB_00214c3c;
switchD_00213150_caseD_213c20:
          uVar11 = (uint)uVar29;
          if (*(int *)((long)puVar36 + 0xc) != 0) {
            uVar32 = uVar32 >> (uVar11 & 7);
            uVar29 = (ulong)(uVar11 - (uVar11 & 7));
            uVar11 = 0x3f4e;
            goto LAB_00214a18;
          }
          pbVar35 = pbVar34;
          if (uVar11 < 3) {
            uVar28 = 0;
            if ((int)local_88 == 0) goto LAB_00214c3c;
            pbVar35 = pbVar34 + 1;
            uVar11 = uVar11 + 8;
            local_88 = (ulong)((int)local_88 - 1);
            uVar32 = ((ulong)*pbVar34 << (uVar29 & 0x3f)) + uVar32;
          }
          uVar28 = (uint)local_88;
          uVar17 = (uint)uVar32;
          *(uint *)((long)puVar36 + 0xc) = uVar17 & 1;
          uVar12 = 0x3f41;
          uVar32 = uVar32 >> 3;
          switch(uVar17 >> 1 & 3) {
          case 1:
            puVar36[0xe] = &DAT_039cc9de;
            puVar36[0xf] = 0x500000009;
            puVar36[0xd] = &DAT_039cc1de;
            *(undefined4 *)(puVar36 + 1) = 0x3f47;
            if (param_2 == 6) {
              uVar11 = uVar11 - 3;
              iVar31 = local_8c;
              goto switchD_00213150_caseD_214c40;
            }
            goto LAB_00213ce8;
          case 2:
            uVar12 = 0x3f44;
            break;
          case 3:
            param_1[6] = (long)"invalid block type";
            uVar12 = 0x3f51;
          }
          *puVar26 = uVar12;
LAB_00213ce8:
          uVar28 = *puVar26;
          uVar29 = (ulong)(uVar11 - 3);
          pbVar34 = pbVar35;
          goto joined_r0x00214b14;
        case 0x213c20:
          goto switchD_00213150_caseD_213c20;
        case 0x2140b4:
          goto switchD_00213150_caseD_2140b4;
        case 0x214190:
          goto switchD_00213150_caseD_214190;
        case 0x214258:
          goto switchD_00213150_caseD_214258;
        case 0x21431c:
          goto switchD_00213150_caseD_21431c;
        case 0x214634:
          goto switchD_00213150_caseD_214634;
        case 0x21463c:
          goto switchD_00213150_caseD_21463c;
        case 0x214818:
          goto switchD_00213150_caseD_214818;
        case 0x2149a4:
          goto switchD_00213150_caseD_2149a4;
        case 0x214c14:
          iVar31 = -3;
          goto switchD_00213150_caseD_214c40;
        case 0x214c1c:
          return -4;
        case 0x214c40:
          goto switchD_00213150_caseD_214c40;
        }
        uVar11 = (uint)uVar18;
        uVar28 = 0;
        iVar31 = local_8c;
switchD_00213150_caseD_214c40:
        param_1[3] = (long)__dest_00;
        *(uint *)(param_1 + 4) = uVar25;
        *param_1 = (long)pbVar35;
        *(uint *)(param_1 + 1) = uVar28;
        puVar36[10] = uVar32;
        *(uint *)(puVar36 + 0xb) = uVar11;
        uVar11 = *(uint *)(param_1 + 4);
        if ((*(int *)((long)puVar36 + 0x3c) != 0) ||
           (((local_7c != uVar11 && (*puVar26 < 0x3f51)) && ((param_2 != 4 || (*puVar26 < 0x3f4e))))
           )) {
          lVar30 = param_1[7];
          lVar33 = param_1[3];
          __dest = *(void **)(lVar30 + 0x48);
          if (__dest == (void *)0x0) {
            __dest = (void *)(*(code *)param_1[8])
                                       (param_1[10],1 << (ulong)(*(uint *)(lVar30 + 0x38) & 0x1f),1)
            ;
            *(void **)(lVar30 + 0x48) = __dest;
            if (__dest == (void *)0x0) {
              *puVar26 = 0x3f52;
              return -4;
            }
          }
          uVar25 = *(uint *)(lVar30 + 0x3c);
          uVar11 = local_7c - uVar11;
          if (uVar25 == 0) {
            uVar25 = 1 << (ulong)(*(uint *)(lVar30 + 0x38) & 0x1f);
            *(uint *)(lVar30 + 0x3c) = uVar25;
            *(undefined8 *)(lVar30 + 0x40) = 0;
          }
          if (uVar11 < uVar25) {
            uVar25 = uVar25 - *(uint *)(lVar30 + 0x44);
            uVar28 = uVar11;
            if (uVar25 <= uVar11) {
              uVar28 = uVar25;
            }
            memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar30 + 0x44)),
                   (void *)(lVar33 - (ulong)uVar11),(ulong)uVar28);
            uVar11 = uVar11 - uVar28;
            if (uVar11 == 0) {
              uVar11 = *(int *)(lVar30 + 0x44) + uVar28;
              uVar25 = 0;
              if (uVar11 != *(uint *)(lVar30 + 0x3c)) {
                uVar25 = uVar11;
              }
              *(uint *)(lVar30 + 0x44) = uVar25;
              if (*(uint *)(lVar30 + 0x40) < *(uint *)(lVar30 + 0x3c)) {
                *(uint *)(lVar30 + 0x40) = *(uint *)(lVar30 + 0x40) + uVar28;
              }
            }
            else {
              memcpy(*(void **)(lVar30 + 0x48),(void *)(lVar33 - (ulong)uVar11),(ulong)uVar11);
              *(undefined4 *)(lVar30 + 0x40) = *(undefined4 *)(lVar30 + 0x3c);
              *(uint *)(lVar30 + 0x44) = uVar11;
            }
          }
          else {
            memcpy(__dest,(void *)(lVar33 - (ulong)uVar25),(ulong)uVar25);
            *(undefined4 *)(lVar30 + 0x40) = *(undefined4 *)(lVar30 + 0x3c);
            *(undefined4 *)(lVar30 + 0x44) = 0;
          }
        }
        uVar6 = uVar6 - (int)param_1[1];
        local_7c = local_7c - (int)param_1[4];
        uVar29 = (ulong)local_7c;
        param_1[2] = param_1[2] + (ulong)uVar6;
        param_1[5] = param_1[5] + uVar29;
        puVar36[5] = puVar36[5] + uVar29;
        if ((local_7c != 0) && ((*(uint *)(puVar36 + 2) >> 2 & 1) != 0)) {
          if (*(int *)(puVar36 + 3) == 0) {
            uVar29 = FUN_00215360(puVar36[4],param_1[3] - uVar29,uVar29);
          }
          else {
            uVar29 = FUN_00215640();
          }
          *puVar1 = uVar29;
          param_1[0xc] = uVar29;
        }
        iVar5 = *(int *)(puVar36 + 1);
        iVar20 = 0x100;
        if (iVar5 != 0x3f42 && iVar5 != 0x3f47) {
          iVar20 = 0;
        }
        *(uint *)(param_1 + 0xb) =
             *(int *)(puVar36 + 0xb) + (uint)(*(int *)((long)puVar36 + 0xc) != 0) * 0x40 +
             (uint)(iVar5 == 0x3f3f) * 0x80 + iVar20;
        iVar20 = -5;
        if ((local_7c != 0 || uVar6 != 0) && param_2 != 4 || iVar31 != 0) {
          iVar20 = iVar31;
        }
        return iVar20;
      }
    }
  }
  return -2;
}


