/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f14178; name: FUN_01f14178
 */


void FUN_01f14178(long param_1)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  long *plVar8;
  ushort uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 *puVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined8 local_148;
  float local_140 [5];
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 *local_108;
  byte *local_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  
  pcVar1 = (char *)(param_1 + 0x285b8);
  puVar10 = *(uint **)(*(long *)(param_1 + 0x6128) + 0x250);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  puVar10 = puVar3 + 1;
  uVar11 = (ulong)*puVar3;
  if (uVar11 != 0) {
    puVar3 = puVar10 + uVar11;
    do {
      uVar30 = 0;
      piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
      local_100 = &DAT_03996322;
      local_108 = &DAT_cbf29ce484222645;
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_cbf29ce484222645;
      pbStack_e0 = &DAT_03996322;
      local_b0 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = 0;
      local_d8 = 0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar11 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar21 = (long)puVar4 + (ulong)*puVar4;
      }
      pbVar16 = (byte *)(lVar21 + 4);
      local_f8 = strlen((char *)pbVar16);
      bVar5 = *(byte *)(lVar21 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar21 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar5 != 0);
      }
      local_f0 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar11 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar19 = (long)puVar4 + (ulong)*puVar4;
      }
      pbVar17 = (byte *)(lVar19 + 4);
      local_100 = pbVar16;
      local_d8 = strlen((char *)pbVar17);
      bVar5 = *(byte *)(lVar19 + 4);
      local_e8 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_e8 = &DAT_cbf29ce484222645;
        pbVar14 = (byte *)(lVar19 + 5);
        do {
          local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 != 0);
      }
      local_d0 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar11 == 0)) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)((long)piVar2 + uVar11);
      }
      pbStack_e0 = pbVar17;
      local_c8 = uVar20;
      sVar6 = strlen((char *)pbVar16);
      bVar5 = *pbVar16;
      if (bVar5 == 0) {
LAB_01f149f0:
        puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar9 = *puVar13;
        uVar32 = 0;
        uVar30 = 0;
        uVar27 = 0;
        uVar33 = 0;
        if (10 < uVar9) {
          uVar30 = 0;
          if ((ulong)puVar13[5] != 0) {
            uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[5]);
          }
          if (uVar9 < 0xd) {
            uVar32 = 0;
            uVar27 = 0;
            uVar33 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar13[6] != 0) {
              uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
            }
            if (uVar9 < 0xf) {
              uVar32 = 0;
            }
            else {
              uVar32 = 0;
              if ((ulong)puVar13[7] != 0) {
                uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[7]);
              }
              if ((0x10 < uVar9) && ((ulong)puVar13[8] != 0)) {
                uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[8]);
                goto LAB_01f14a68;
              }
            }
            uVar33 = 0;
          }
        }
LAB_01f14a68:
        local_c0 = CONCAT44(uVar27,uVar30);
        local_b8 = CONCAT44(uVar33,uVar32);
        FUN_01f1f4c8(param_1 + 0x6150,&local_108);
        puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar9 = *puVar13;
        uVar32 = 0;
        uVar30 = 0;
        uVar27 = 0;
        uVar33 = 0;
        if (0x12 < uVar9) {
          uVar30 = 0;
          if ((ulong)puVar13[9] != 0) {
            uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[9]);
          }
          if (uVar9 < 0x15) {
            uVar32 = 0;
            uVar27 = 0;
            uVar33 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar13[10] != 0) {
              uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[10]);
            }
            if (uVar9 < 0x17) {
              uVar32 = 0;
            }
            else {
              uVar32 = 0;
              if ((ulong)puVar13[0xb] != 0) {
                uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xb]);
              }
              if ((0x18 < uVar9) && ((ulong)puVar13[0xc] != 0)) {
                uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xc]);
                goto LAB_01f14af4;
              }
            }
            uVar33 = 0;
          }
        }
LAB_01f14af4:
        local_c0 = CONCAT44(uVar27,uVar30);
        local_b8 = CONCAT44(uVar33,uVar32);
        FUN_01f1f4c8(param_1 + 0xc158,&local_108);
        puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar9 = *puVar13;
        uVar32 = 0;
        uVar30 = 0;
        uVar27 = 0;
        uVar33 = 0;
        if (0x1a < uVar9) {
          uVar30 = 0;
          if ((ulong)puVar13[0xd] != 0) {
            uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xd]);
          }
          if (uVar9 < 0x1d) {
            uVar32 = 0;
            uVar27 = 0;
            uVar33 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar13[0xe] != 0) {
              uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xe]);
            }
            if (uVar9 < 0x1f) {
              uVar32 = 0;
            }
            else {
              uVar32 = 0;
              if ((ulong)puVar13[0xf] != 0) {
                uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xf]);
              }
              if ((0x20 < uVar9) && ((ulong)puVar13[0x10] != 0)) {
                uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x10]);
                goto LAB_01f14b80;
              }
            }
            uVar33 = 0;
          }
        }
LAB_01f14b80:
        local_c0 = CONCAT44(uVar27,uVar30);
        local_b8 = CONCAT44(uVar33,uVar32);
        FUN_01f1f4c8(param_1 + 0x12160,&local_108);
        puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar9 = *puVar13;
        uVar32 = 0;
        uVar30 = 0;
        uVar27 = 0;
        uVar33 = 0;
        if (0x22 < uVar9) {
          uVar30 = 0;
          if ((ulong)puVar13[0x11] != 0) {
            uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x11]);
          }
          if (uVar9 < 0x25) {
            uVar32 = 0;
            uVar27 = 0;
            uVar33 = 0;
          }
          else {
            uVar27 = 0;
            if ((ulong)puVar13[0x12] != 0) {
              uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x12]);
            }
            if (uVar9 < 0x27) {
              uVar32 = 0;
            }
            else {
              uVar32 = 0;
              if ((ulong)puVar13[0x13] != 0) {
                uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x13]);
              }
              if ((0x28 < uVar9) && ((ulong)puVar13[0x14] != 0)) {
                uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x14]);
                goto LAB_01f14c0c;
              }
            }
            uVar33 = 0;
          }
        }
LAB_01f14c0c:
        local_c0 = CONCAT44(uVar27,uVar30);
        local_b8 = CONCAT44(uVar33,uVar32);
        FUN_01f1f4c8(param_1 + 0x18168,&local_108);
        goto LAB_01f142f4;
      }
      puVar18 = &DAT_cbf29ce484222645;
      pbVar14 = (byte *)(lVar21 + 5);
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar5 != 0);
      if ((long)puVar18 < 0x762b5ab5dde02739) {
        if ((long)puVar18 < 0x762b57b5dde02220) {
          if ((puVar18 != (undefined1 *)0xfd38748071be3b78) &&
             (puVar18 != (undefined1 *)0x53de8ada89be1c09)) goto LAB_01f149f0;
        }
        else if ((puVar18 != (undefined1 *)0x762b57b5dde02220) &&
                (puVar18 != (undefined1 *)0x762b58b5dde023d3)) {
          uVar11 = 0x59b5dde02586;
          goto LAB_01f145b8;
        }
      }
      else if ((long)puVar18 < 0x762b5cb5dde02a9f) {
        if (puVar18 != (undefined1 *)0x762b5ab5dde02739) {
          uVar11 = 0x5bb5dde028ec;
          goto LAB_01f145b8;
        }
      }
      else if ((puVar18 != (undefined1 *)0x762b5cb5dde02a9f) &&
              (puVar18 != (undefined1 *)0x762b5eb5dde02e05)) {
        uVar11 = 0x5db5dde02c52;
LAB_01f145b8:
        if (puVar18 != (undefined1 *)(uVar11 | 0x762b000000000000)) goto LAB_01f149f0;
      }
      uVar27 = 0;
      if (10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
        uVar27 = 0;
        if (uVar11 != 0) {
          uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      fVar23 = 0.0;
      if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
        fVar23 = 0.0;
        if (uVar11 != 0) {
          fVar23 = *(float *)((long)piVar2 + uVar11);
        }
      }
      local_148 = CONCAT44(fVar23,uVar27);
      fVar28 = 0.0;
      if (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
        fVar28 = 0.0;
        if (uVar11 != 0) {
          fVar28 = *(float *)((long)piVar2 + uVar11);
        }
      }
      fVar36 = 0.0;
      if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
        fVar36 = 0.0;
        if (uVar11 != 0) {
          fVar36 = *(float *)((long)piVar2 + uVar11);
        }
      }
      fVar25 = 0.0;
      if (0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
        fVar25 = 0.0;
        if (uVar11 != 0) {
          fVar25 = *(float *)((long)piVar2 + uVar11);
        }
      }
      uVar32 = 0;
      if (0x14 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
        uVar32 = 0;
        if (uVar11 != 0) {
          uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      uVar33 = 0;
      if (0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
        uVar33 = 0;
        if (uVar11 != 0) {
          uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      local_12c = 0;
      if (0x18 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc];
        local_12c = 0;
        if (uVar11 != 0) {
          local_12c = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      uVar24 = 0;
      if (0x1a < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
        uVar24 = 0;
        if (uVar11 != 0) {
          uVar24 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      fVar31 = 0.0;
      if (0x1c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe];
        fVar31 = 0.0;
        if (uVar11 != 0) {
          fVar31 = *(float *)((long)piVar2 + uVar11);
        }
      }
      uVar35 = 0;
      if (0x1e < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf];
        uVar35 = 0;
        if (uVar11 != 0) {
          uVar35 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      fVar34 = 0.0;
      if (0x20 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10];
        fVar34 = 0.0;
        if (uVar11 != 0) {
          fVar34 = *(float *)((long)piVar2 + uVar11);
        }
      }
      fVar26 = 0.0;
      if (0x22 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
        fVar26 = 0.0;
        if (uVar11 != 0) {
          fVar26 = *(float *)((long)piVar2 + uVar11);
        }
      }
      uVar29 = 0;
      if (0x24 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12];
        uVar29 = 0;
        if (uVar11 != 0) {
          uVar29 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      local_10c = 0;
      if (0x26 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x13];
        uVar30 = 0;
        if (uVar11 != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      if (0x28 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14];
        local_10c = 0;
        if (uVar11 != 0) {
          local_10c = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      local_140[0] = fVar28;
      local_140[1] = fVar36;
      local_140[2] = fVar25;
      local_140[3] = (float)uVar32;
      local_140[4] = (float)uVar33;
      local_128 = uVar24;
      local_124 = fVar31;
      local_120 = uVar35;
      local_11c = fVar34;
      local_118 = fVar26;
      local_114 = uVar29;
      local_110 = uVar30;
      sVar7 = strlen((char *)pbVar17);
      bVar5 = *pbVar17;
      puVar12 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar12 = &DAT_cbf29ce484222645;
        pbVar14 = (byte *)(lVar19 + 5);
        do {
          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 != 0);
      }
      if ((long)puVar18 < 0x762b5ab5dde02739) {
        if (0x762b57b5dde0221f < (long)puVar18) {
          if (puVar18 == (undefined1 *)0x762b58b5dde023d3) {
            lVar21 = 4;
          }
          else if (puVar18 == (undefined1 *)0x762b57b5dde02220) {
            lVar21 = 5;
          }
          else {
            if (puVar18 != (undefined1 *)0x762b59b5dde02586) goto LAB_01f142f4;
            lVar21 = 7;
          }
          goto LAB_01f14d5c;
        }
        if (puVar18 != (undefined1 *)0x53de8ada89be1c09) {
          if (puVar18 != (undefined1 *)0xfd38748071be3b78) goto LAB_01f142f4;
          if (puVar12 == (undefined1 *)0xb740941422bf5a7b) {
            plVar8 = *(long **)(param_1 + 0x241f0);
            *(undefined8 *)(param_1 + 0x241d8) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x241e0) = pbVar16;
            *(size_t *)(param_1 + 0x241e8) = sVar6;
            *(undefined8 *)(param_1 + 0x241f0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x24210);
            *(undefined8 *)(param_1 + 0x241f8) = 0xb740941422bf5a7b;
            *(byte **)(param_1 + 0x24200) = pbVar17;
            *(size_t *)(param_1 + 0x24208) = sVar7;
            *(undefined8 *)(param_1 + 0x24210) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x24218) = uVar20;
            *(undefined4 *)(param_1 + 0x24220) = uVar27;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x24bb0);
            *(undefined8 *)(param_1 + 0x24b98) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x24ba0) = pbVar16;
            *(size_t *)(param_1 + 0x24ba8) = sVar6;
            *(undefined8 *)(param_1 + 0x24bb0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x24bd0);
            *(undefined8 *)(param_1 + 0x24bb8) = 0xb740941422bf5a7b;
            *(byte **)(param_1 + 0x24bc0) = pbVar17;
            *(size_t *)(param_1 + 0x24bc8) = sVar7;
            *(undefined8 *)(param_1 + 0x24bd0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x24bd8) = uVar20;
            *(float *)(param_1 + 0x24be0) = fVar25;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x25570);
            *(undefined8 *)(param_1 + 0x25558) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x25560) = pbVar16;
            *(size_t *)(param_1 + 0x25568) = sVar6;
            *(undefined8 *)(param_1 + 0x25570) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x25590);
            *(undefined8 *)(param_1 + 0x25578) = 0xb740941422bf5a7b;
            *(byte **)(param_1 + 0x25580) = pbVar17;
            *(size_t *)(param_1 + 0x25588) = sVar7;
            *(undefined8 *)(param_1 + 0x25590) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x25598) = uVar20;
            *(undefined4 *)(param_1 + 0x255a0) = uVar24;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x25f30);
            *(undefined8 *)(param_1 + 0x25f18) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x25f20) = pbVar16;
            *(size_t *)(param_1 + 0x25f28) = sVar6;
            *(undefined8 *)(param_1 + 0x25f30) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x25f50);
            *(undefined8 *)(param_1 + 0x25f38) = 0xb740941422bf5a7b;
            *(byte **)(param_1 + 0x25f40) = pbVar17;
            *(size_t *)(param_1 + 0x25f48) = sVar7;
            *(undefined8 *)(param_1 + 0x25f50) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x25f58) = uVar20;
            *(float *)(param_1 + 0x25f60) = fVar26;
          }
          else {
            if (puVar12 != (undefined1 *)0xd780927e607fc640) goto LAB_01f142f4;
            plVar8 = *(long **)(param_1 + 0x24190);
            *(undefined8 *)(param_1 + 0x24178) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x24180) = pbVar16;
            *(size_t *)(param_1 + 0x24188) = sVar6;
            *(undefined8 *)(param_1 + 0x24190) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x241b0);
            *(undefined8 *)(param_1 + 0x24198) = 0xd780927e607fc640;
            *(byte **)(param_1 + 0x241a0) = pbVar17;
            *(size_t *)(param_1 + 0x241a8) = sVar7;
            *(undefined8 *)(param_1 + 0x241b0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x241b8) = uVar20;
            *(undefined4 *)(param_1 + 0x241c0) = uVar27;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x24b50);
            *(undefined8 *)(param_1 + 0x24b38) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x24b40) = pbVar16;
            *(size_t *)(param_1 + 0x24b48) = sVar6;
            *(undefined8 *)(param_1 + 0x24b50) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x24b70);
            *(undefined8 *)(param_1 + 0x24b58) = 0xd780927e607fc640;
            *(byte **)(param_1 + 0x24b60) = pbVar17;
            *(size_t *)(param_1 + 0x24b68) = sVar7;
            *(undefined8 *)(param_1 + 0x24b70) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x24b78) = uVar20;
            *(float *)(param_1 + 0x24b80) = fVar25;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x25510);
            *(undefined8 *)(param_1 + 0x254f8) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x25500) = pbVar16;
            *(size_t *)(param_1 + 0x25508) = sVar6;
            *(undefined8 *)(param_1 + 0x25510) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x25530);
            *(undefined8 *)(param_1 + 0x25518) = 0xd780927e607fc640;
            *(byte **)(param_1 + 0x25520) = pbVar17;
            *(size_t *)(param_1 + 0x25528) = sVar7;
            *(undefined8 *)(param_1 + 0x25530) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x25538) = uVar20;
            *(undefined4 *)(param_1 + 0x25540) = uVar24;
            *pcVar1 = '\x01';
            plVar8 = *(long **)(param_1 + 0x25ed0);
            *(undefined8 *)(param_1 + 0x25eb8) = 0xfd38748071be3b78;
            *(byte **)(param_1 + 0x25ec0) = pbVar16;
            *(size_t *)(param_1 + 0x25ec8) = sVar6;
            *(undefined8 *)(param_1 + 0x25ed0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(param_1 + 0x25ef0);
            *(undefined8 *)(param_1 + 0x25ed8) = 0xd780927e607fc640;
            *(byte **)(param_1 + 0x25ee0) = pbVar17;
            *(size_t *)(param_1 + 0x25ee8) = sVar7;
            *(undefined8 *)(param_1 + 0x25ef0) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x25ef8) = uVar20;
            *(float *)(param_1 + 0x25f00) = fVar26;
          }
          goto LAB_01f142d4;
        }
        if (puVar12 == (undefined1 *)0x521c897f23005ab3) {
          *(float *)(param_1 + 0x1008d8) = fVar36;
          *(undefined4 *)(param_1 + 0x1008cc) = uVar27;
          *(float *)(param_1 + 0x1008d4) = fVar23;
          *(undefined4 *)(param_1 + 0x1008e0) = uVar32;
          *(undefined4 *)(param_1 + 0x1008e4) = uVar33;
          *(float *)(param_1 + 0x1008f0) = fVar31;
          *(bool *)(param_1 + 0x1008dc) = fVar25 != 0.0;
          *(float *)(param_1 + 0x1008d0) = fVar28;
          *(undefined4 *)(param_1 + 0x1008ec) = uVar35;
          *(float *)(param_1 + 0x1008f4) = fVar34;
          *(undefined4 *)(param_1 + 0x1008fc) = uVar29;
          *(undefined4 *)(param_1 + 0x100900) = uVar30;
          *(bool *)(param_1 + 0x1008f8) = fVar26 != 0.0;
          *(undefined4 *)(param_1 + 0x1008e8) = uVar24;
          if (fVar23 != fVar36) {
            if (fVar25 == 0.0) {
              if (fVar36 <= fVar23) {
                fVar23 = 1.0;
                fVar36 = 1.0 - ABS(fVar36);
LAB_01f14cec:
                fVar36 = fVar36 + fVar23;
LAB_01f14cf0:
                *(float *)(param_1 + 0x1008d8) = fVar36;
              }
            }
            else if (0.0 <= fVar23) {
              if (fVar23 <= fVar36) {
LAB_01f14ce0:
                fVar23 = -1.0;
                fVar36 = ABS(fVar36) + -1.0;
                goto LAB_01f14cec;
              }
            }
            else if (fVar23 <= fVar36) {
              if (0.0 <= fVar36) goto LAB_01f14ce0;
              fVar36 = fVar36 + -2.0;
              goto LAB_01f14cf0;
            }
          }
          if (fVar31 != fVar34) {
            if (fVar26 == 0.0) {
              if (fVar34 <= fVar31) {
                fVar23 = 1.0;
                fVar34 = 1.0 - ABS(fVar34);
LAB_01f14d28:
                fVar34 = fVar34 + fVar23;
LAB_01f14d2c:
                *(float *)(param_1 + 0x1008f4) = fVar34;
              }
            }
            else if (0.0 <= fVar31) {
              if (fVar31 <= fVar34) {
LAB_01f14d1c:
                fVar23 = -1.0;
                fVar34 = ABS(fVar34) + -1.0;
                goto LAB_01f14d28;
              }
            }
            else if (fVar31 <= fVar34) {
              if (0.0 <= fVar34) goto LAB_01f14d1c;
              fVar34 = fVar34 + -2.0;
              goto LAB_01f14d2c;
            }
          }
          *(undefined1 *)(param_1 + 0x1008c8) = 1;
        }
      }
      else {
        if ((long)puVar18 < 0x762b5db5dde02c52) {
          if (puVar18 == (undefined1 *)0x762b5cb5dde02a9f) {
            lVar21 = 0;
          }
          else if (puVar18 == (undefined1 *)0x762b5bb5dde028ec) {
            lVar21 = 1;
          }
          else {
            if (puVar18 != (undefined1 *)0x762b5ab5dde02739) goto LAB_01f142f4;
            lVar21 = 6;
          }
        }
        else if (puVar18 == (undefined1 *)0x762b5eb5dde02e05) {
          lVar21 = 2;
        }
        else {
          if (puVar18 != (undefined1 *)0x762b5db5dde02c52) goto LAB_01f142f4;
          lVar21 = 3;
        }
LAB_01f14d5c:
        if (puVar12 == (undefined1 *)0xa9467a944c3c2678) {
          puVar22 = (undefined4 *)(param_1 + 0x2428c + lVar21 * 0x120);
          lVar21 = 0;
          do {
            plVar8 = *(long **)(puVar22 + -0xf);
            *(undefined1 **)(puVar22 + -0x15) = puVar18;
            *(byte **)(puVar22 + -0x13) = pbVar16;
            *(size_t *)(puVar22 + -0x11) = sVar6;
            *(undefined8 *)(puVar22 + -0xf) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(puVar22 + -7);
            *(undefined8 *)(puVar22 + -0xd) = 0xa9467a944c3c2678;
            *(byte **)(puVar22 + -0xb) = pbVar17;
            *(size_t *)(puVar22 + -9) = sVar7;
            *(undefined8 *)(puVar22 + -7) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(puVar22 + -5) = uVar20;
            lVar19 = lVar21 + 0x10;
            puVar22[-3] = *(undefined4 *)((long)local_140 + lVar21 + -8);
            puVar22[-2] = *(undefined4 *)((long)local_140 + lVar21 + -4);
            puVar22[-1] = *(undefined4 *)((long)local_140 + lVar21);
            *puVar22 = *(undefined4 *)((long)local_140 + lVar21 + 4);
            puVar22 = puVar22 + 0x270;
            *pcVar1 = '\x01';
            lVar21 = lVar19;
          } while (lVar19 != 0x40);
        }
        else if (puVar12 == (undefined1 *)0x62f9c80d3c6933ea) {
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined1 **)(lVar19 + 0x24298) = puVar18;
          *(byte **)(lVar19 + 0x242a0) = pbVar16;
          *(size_t *)(lVar19 + 0x242a8) = sVar6;
          plVar8 = *(long **)(lVar19 + 0x242b0);
          *(undefined8 *)(lVar19 + 0x242b0) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x242b8) = 0x62f9c80d3c6933ea;
          *(byte **)(lVar19 + 0x242c0) = pbVar17;
          *(size_t *)(lVar19 + 0x242c8) = sVar7;
          plVar8 = *(long **)(lVar19 + 0x242d0);
          *(undefined8 *)(lVar19 + 0x242d0) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x242d8) = uVar20;
          *(undefined4 *)(lVar19 + 0x242e0) = uVar27;
          *pcVar1 = '\x01';
          *(undefined1 **)(lVar19 + 0x24c58) = puVar18;
          *(byte **)(lVar19 + 0x24c60) = pbVar16;
          *(size_t *)(lVar19 + 0x24c68) = sVar6;
          plVar8 = *(long **)(lVar19 + 0x24c70);
          *(undefined8 *)(lVar19 + 0x24c70) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x24c78) = 0x62f9c80d3c6933ea;
          *(byte **)(lVar19 + 0x24c80) = pbVar17;
          *(size_t *)(lVar19 + 0x24c88) = sVar7;
          plVar8 = *(long **)(lVar19 + 0x24c90);
          *(undefined8 *)(lVar19 + 0x24c90) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x24c98) = uVar20;
          *(float *)(lVar19 + 0x24ca0) = fVar25;
          *pcVar1 = '\x01';
          *(undefined1 **)(lVar19 + 0x25618) = puVar18;
          *(byte **)(lVar19 + 0x25620) = pbVar16;
          *(size_t *)(lVar19 + 0x25628) = sVar6;
          plVar8 = *(long **)(lVar19 + 0x25630);
          *(undefined8 *)(lVar19 + 0x25630) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x25638) = 0x62f9c80d3c6933ea;
          *(byte **)(lVar19 + 0x25640) = pbVar17;
          *(size_t *)(lVar19 + 0x25648) = sVar7;
          plVar8 = *(long **)(lVar19 + 0x25650);
          *(undefined8 *)(lVar19 + 0x25650) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x25658) = uVar20;
          *(undefined4 *)(lVar19 + 0x25660) = uVar24;
          *pcVar1 = '\x01';
          *(undefined1 **)(lVar19 + 0x25fd8) = puVar18;
          *(byte **)(lVar19 + 0x25fe0) = pbVar16;
          *(size_t *)(lVar19 + 0x25fe8) = sVar6;
          plVar8 = *(long **)(lVar19 + 0x25ff0);
          *(undefined8 *)(lVar19 + 0x25ff0) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar19 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar19 + 0x25ff8) = 0x62f9c80d3c6933ea;
          *(byte **)(lVar19 + 0x26000) = pbVar17;
          *(size_t *)(lVar19 + 0x26008) = sVar7;
          plVar8 = *(long **)(lVar19 + 0x26010);
          *(undefined8 *)(lVar19 + 0x26010) = 0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          lVar21 = param_1 + lVar21 * 0x120;
          *(undefined8 *)(lVar21 + 0x26018) = uVar20;
          *(float *)(lVar21 + 0x26020) = fVar26;
LAB_01f142d4:
          *pcVar1 = '\x01';
        }
        else if (puVar12 == (undefined1 *)0xb96fd10afa34ad68) {
          puVar22 = (undefined4 *)(param_1 + 0x2434c + lVar21 * 0x120);
          lVar21 = 0;
          do {
            plVar8 = *(long **)(puVar22 + -0xf);
            *(undefined1 **)(puVar22 + -0x15) = puVar18;
            *(byte **)(puVar22 + -0x13) = pbVar16;
            *(size_t *)(puVar22 + -0x11) = sVar6;
            *(undefined8 *)(puVar22 + -0xf) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            plVar8 = *(long **)(puVar22 + -7);
            *(undefined8 *)(puVar22 + -0xd) = 0xb96fd10afa34ad68;
            *(byte **)(puVar22 + -0xb) = pbVar17;
            *(size_t *)(puVar22 + -9) = sVar7;
            *(undefined8 *)(puVar22 + -7) = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x20))();
            }
            *(undefined8 *)(puVar22 + -5) = uVar20;
            lVar19 = lVar21 + 0x10;
            puVar22[-3] = *(undefined4 *)((long)local_140 + lVar21 + -8);
            puVar22[-2] = *(undefined4 *)((long)local_140 + lVar21 + -4);
            puVar22[-1] = *(undefined4 *)((long)local_140 + lVar21);
            *puVar22 = *(undefined4 *)((long)local_140 + lVar21 + 4);
            puVar22 = puVar22 + 0x270;
            *pcVar1 = '\x01';
            lVar21 = lVar19;
          } while (lVar19 != 0x40);
        }
      }
LAB_01f142f4:
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  if (*pcVar1 != '\0') {
    puVar22 = (undefined4 *)(param_1 + 0x61b0);
    lVar21 = 0x6000;
    do {
      lVar19 = *(long *)(puVar22 + -0x16);
      if (lVar19 < -0x2f82a22f8c82230c) {
        if (-0x2f82a42f8c822673 < lVar19) {
          if (lVar19 == -0x2f82a42f8c822672) {
            lVar19 = *(long *)(puVar22 + -0xe);
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x244d0);
LAB_01f16010:
              *puVar15 = *puVar22;
              lVar19 = *(long *)(puVar22 + -0xe);
            }
            else {
              if (lVar19 == -0x46902ef505cb5298) {
                puVar15 = (undefined4 *)(param_1 + 0x24590);
                goto LAB_01f16010;
              }
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x24530);
                goto LAB_01f16010;
              }
            }
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x24e90);
LAB_01f16044:
              *puVar15 = *puVar22;
            }
            else {
              puVar15 = (undefined4 *)(param_1 + 0x24f50);
              if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16044;
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x24ef0);
                goto LAB_01f16044;
              }
            }
            lVar19 = *(long *)(puVar22 + -0xe);
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x25850);
LAB_01f16078:
              *puVar15 = *puVar22;
              lVar19 = *(long *)(puVar22 + -0xe);
            }
            else {
              puVar15 = (undefined4 *)(param_1 + 0x25910);
              if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16078;
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x258b0);
                goto LAB_01f16078;
              }
            }
            if (lVar19 == -0x56b9856bb3c3d988) {
              *(undefined4 *)(param_1 + 0x26210) = *puVar22;
            }
            else if (lVar19 == 0x62f9c80d3c6933ea) {
              *(undefined4 *)(param_1 + 0x26270) = *puVar22;
            }
            else if (lVar19 == -0x46902ef505cb5298) {
              *(undefined4 *)(param_1 + 0x262d0) = *puVar22;
            }
          }
          else if (lVar19 == -0x2f82a32f8c8224bf) {
            lVar19 = *(long *)(puVar22 + -0xe);
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x245f0);
LAB_01f160d8:
              *puVar15 = *puVar22;
              lVar19 = *(long *)(puVar22 + -0xe);
            }
            else {
              if (lVar19 == -0x46902ef505cb5298) {
                puVar15 = (undefined4 *)(param_1 + 0x246b0);
                goto LAB_01f160d8;
              }
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x24650);
                goto LAB_01f160d8;
              }
            }
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x24fb0);
LAB_01f1610c:
              *puVar15 = *puVar22;
            }
            else {
              puVar15 = (undefined4 *)(param_1 + 0x25070);
              if (lVar19 == -0x46902ef505cb5298) goto LAB_01f1610c;
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x25010);
                goto LAB_01f1610c;
              }
            }
            lVar19 = *(long *)(puVar22 + -0xe);
            if (lVar19 == -0x56b9856bb3c3d988) {
              puVar15 = (undefined4 *)(param_1 + 0x25970);
LAB_01f16140:
              *puVar15 = *puVar22;
              lVar19 = *(long *)(puVar22 + -0xe);
            }
            else {
              puVar15 = (undefined4 *)(param_1 + 0x25a30);
              if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16140;
              if (lVar19 == 0x62f9c80d3c6933ea) {
                puVar15 = (undefined4 *)(param_1 + 0x259d0);
                goto LAB_01f16140;
              }
            }
            if (lVar19 == -0x56b9856bb3c3d988) {
              *(undefined4 *)(param_1 + 0x26330) = *puVar22;
            }
            else if (lVar19 == 0x62f9c80d3c6933ea) {
              *(undefined4 *)(param_1 + 0x26390) = *puVar22;
            }
            else if (lVar19 == -0x46902ef505cb5298) {
              *(undefined4 *)(param_1 + 0x263f0) = *puVar22;
            }
          }
          goto LAB_01f15be4;
        }
        if (lVar19 == -0x2f82a62f8c8229d8) {
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x24290);
LAB_01f15e90:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            if (lVar19 == -0x46902ef505cb5298) {
              puVar15 = (undefined4 *)(param_1 + 0x24350);
              goto LAB_01f15e90;
            }
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x242f0);
              goto LAB_01f15e90;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x24c50);
LAB_01f15ec4:
            *puVar15 = *puVar22;
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x24d10);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f15ec4;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x24cb0);
              goto LAB_01f15ec4;
            }
          }
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25610);
LAB_01f15ef8:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x256d0);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f15ef8;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25670);
              goto LAB_01f15ef8;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            *(undefined4 *)(param_1 + 0x25fd0) = *puVar22;
          }
          else if (lVar19 == 0x62f9c80d3c6933ea) {
            *(undefined4 *)(param_1 + 0x26030) = *puVar22;
          }
          else if (lVar19 == -0x46902ef505cb5298) {
            *(undefined4 *)(param_1 + 0x26090) = *puVar22;
          }
          goto LAB_01f15be4;
        }
        if (lVar19 != -0x2f82a52f8c822825) goto LAB_01f15be4;
        lVar19 = *(long *)(puVar22 + -0xe);
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x243b0);
LAB_01f15f48:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else {
          if (lVar19 == -0x46902ef505cb5298) {
            puVar15 = (undefined4 *)(param_1 + 0x24470);
            goto LAB_01f15f48;
          }
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x24410);
            goto LAB_01f15f48;
          }
        }
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x24d70);
LAB_01f15f7c:
          *puVar15 = *puVar22;
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x24e30);
          if (lVar19 == -0x46902ef505cb5298) goto LAB_01f15f7c;
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x24dd0);
            goto LAB_01f15f7c;
          }
        }
        lVar19 = *(long *)(puVar22 + -0xe);
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x25730);
LAB_01f15fb0:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x257f0);
          if (lVar19 == -0x46902ef505cb5298) goto LAB_01f15fb0;
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x25790);
            goto LAB_01f15fb0;
          }
        }
        if (lVar19 == -0x56b9856bb3c3d988) {
          *(undefined4 *)(param_1 + 0x260f0) = *puVar22;
        }
        else if (lVar19 == 0x62f9c80d3c6933ea) {
          *(undefined4 *)(param_1 + 0x26150) = *puVar22;
        }
        else if (lVar19 == -0x46902ef505cb5298) {
          *(undefined4 *)(param_1 + 0x261b0) = *puVar22;
        }
      }
      else if (lVar19 < -0x2f82a02f8c821fa6) {
        if (lVar19 == -0x2f82a22f8c82230c) {
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x24710);
LAB_01f161a0:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            if (lVar19 == -0x46902ef505cb5298) {
              puVar15 = (undefined4 *)(param_1 + 0x247d0);
              goto LAB_01f161a0;
            }
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x24770);
              goto LAB_01f161a0;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x250d0);
LAB_01f161d4:
            *puVar15 = *puVar22;
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x25190);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f161d4;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25130);
              goto LAB_01f161d4;
            }
          }
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25a90);
LAB_01f16208:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x25b50);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16208;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25af0);
              goto LAB_01f16208;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            *(undefined4 *)(param_1 + 0x26450) = *puVar22;
          }
          else if (lVar19 == 0x62f9c80d3c6933ea) {
            *(undefined4 *)(param_1 + 0x264b0) = *puVar22;
          }
          else if (lVar19 == -0x46902ef505cb5298) {
            *(undefined4 *)(param_1 + 0x26510) = *puVar22;
          }
          goto LAB_01f15be4;
        }
        if (lVar19 != -0x2f82a12f8c822159) goto LAB_01f15be4;
        lVar19 = *(long *)(puVar22 + -0xe);
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x24830);
LAB_01f16268:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else {
          if (lVar19 == -0x46902ef505cb5298) {
            puVar15 = (undefined4 *)(param_1 + 0x248f0);
            goto LAB_01f16268;
          }
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x24890);
            goto LAB_01f16268;
          }
        }
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x251f0);
LAB_01f1629c:
          *puVar15 = *puVar22;
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x252b0);
          if (lVar19 == -0x46902ef505cb5298) goto LAB_01f1629c;
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x25250);
            goto LAB_01f1629c;
          }
        }
        lVar19 = *(long *)(puVar22 + -0xe);
        if (lVar19 == -0x56b9856bb3c3d988) {
          puVar15 = (undefined4 *)(param_1 + 0x25bb0);
LAB_01f162d0:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x25c70);
          if (lVar19 == -0x46902ef505cb5298) goto LAB_01f162d0;
          if (lVar19 == 0x62f9c80d3c6933ea) {
            puVar15 = (undefined4 *)(param_1 + 0x25c10);
            goto LAB_01f162d0;
          }
        }
        if (lVar19 == -0x56b9856bb3c3d988) {
          *(undefined4 *)(param_1 + 0x26570) = *puVar22;
        }
        else if (lVar19 == 0x62f9c80d3c6933ea) {
          *(undefined4 *)(param_1 + 0x265d0) = *puVar22;
        }
        else if (lVar19 == -0x46902ef505cb5298) {
          *(undefined4 *)(param_1 + 0x26630) = *puVar22;
        }
      }
      else {
        if (lVar19 == -0x2f82a02f8c821fa6) {
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x24950);
LAB_01f16330:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            if (lVar19 == -0x46902ef505cb5298) {
              puVar15 = (undefined4 *)(param_1 + 0x24a10);
              goto LAB_01f16330;
            }
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x249b0);
              goto LAB_01f16330;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25310);
LAB_01f16364:
            *puVar15 = *puVar22;
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x253d0);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16364;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25370);
              goto LAB_01f16364;
            }
          }
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25cd0);
LAB_01f16398:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x25d90);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16398;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25d30);
              goto LAB_01f16398;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            *(undefined4 *)(param_1 + 0x26690) = *puVar22;
          }
          else if (lVar19 == 0x62f9c80d3c6933ea) {
            *(undefined4 *)(param_1 + 0x266f0) = *puVar22;
          }
          else if (lVar19 == -0x46902ef505cb5298) {
            *(undefined4 *)(param_1 + 0x26750) = *puVar22;
          }
          goto LAB_01f15be4;
        }
        if (lVar19 == -0x2f829f2f8c821df3) {
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x24a70);
LAB_01f163f8:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            if (lVar19 == -0x46902ef505cb5298) {
              puVar15 = (undefined4 *)(param_1 + 0x24b30);
              goto LAB_01f163f8;
            }
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x24ad0);
              goto LAB_01f163f8;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25430);
LAB_01f1642c:
            *puVar15 = *puVar22;
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x254f0);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f1642c;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25490);
              goto LAB_01f1642c;
            }
          }
          lVar19 = *(long *)(puVar22 + -0xe);
          if (lVar19 == -0x56b9856bb3c3d988) {
            puVar15 = (undefined4 *)(param_1 + 0x25df0);
LAB_01f16460:
            *puVar15 = *puVar22;
            lVar19 = *(long *)(puVar22 + -0xe);
          }
          else {
            puVar15 = (undefined4 *)(param_1 + 0x25eb0);
            if (lVar19 == -0x46902ef505cb5298) goto LAB_01f16460;
            if (lVar19 == 0x62f9c80d3c6933ea) {
              puVar15 = (undefined4 *)(param_1 + 0x25e50);
              goto LAB_01f16460;
            }
          }
          if (lVar19 == -0x56b9856bb3c3d988) {
            *(undefined4 *)(param_1 + 0x267b0) = *puVar22;
          }
          else if (lVar19 == 0x62f9c80d3c6933ea) {
            *(undefined4 *)(param_1 + 0x26810) = *puVar22;
          }
          else if (lVar19 == -0x46902ef505cb5298) {
            *(undefined4 *)(param_1 + 0x26870) = *puVar22;
          }
          goto LAB_01f15be4;
        }
        if (lVar19 != 0x12ee93efcc18b5c6) goto LAB_01f15be4;
        lVar19 = *(long *)(puVar22 + -0xe);
        puVar15 = (undefined4 *)(param_1 + 0x241d0);
        if (lVar19 == -0x287f6d819f8039c0) {
LAB_01f15c58:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else if (lVar19 == -0x48bf6bebdd40a585) {
          puVar15 = (undefined4 *)(param_1 + 0x24230);
          goto LAB_01f15c58;
        }
        puVar15 = (undefined4 *)(param_1 + 0x24bf0);
        if (lVar19 == -0x48bf6bebdd40a585) {
LAB_01f15c9c:
          *puVar15 = *puVar22;
        }
        else if (lVar19 == -0x287f6d819f8039c0) {
          puVar15 = (undefined4 *)(param_1 + 0x24b90);
          goto LAB_01f15c9c;
        }
        lVar19 = *(long *)(puVar22 + -0xe);
        puVar15 = (undefined4 *)(param_1 + 0x255b0);
        if (lVar19 == -0x48bf6bebdd40a585) {
LAB_01f15ce0:
          *puVar15 = *puVar22;
          lVar19 = *(long *)(puVar22 + -0xe);
        }
        else if (lVar19 == -0x287f6d819f8039c0) {
          puVar15 = (undefined4 *)(param_1 + 0x25550);
          goto LAB_01f15ce0;
        }
        if (lVar19 == -0x287f6d819f8039c0) {
          *(undefined4 *)(param_1 + 0x25f10) = *puVar22;
        }
        else if (lVar19 == -0x48bf6bebdd40a585) {
          *(undefined4 *)(param_1 + 0x25f70) = *puVar22;
        }
      }
LAB_01f15be4:
      puVar22 = puVar22 + 0x18;
      lVar21 = lVar21 + -0x60;
    } while (lVar21 != 0);
    FUN_01f1eec8(param_1 + 0x26878,param_1 + 0x24178);
    *(undefined8 *)(param_1 + 0x268c8) = 0;
    *(undefined8 *)(param_1 + 0x268c0) = 0;
    *(undefined8 *)(param_1 + 0x26920) = 0;
    *(undefined8 *)(param_1 + 0x26928) = 0;
    *(undefined8 *)(param_1 + 0x26980) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26988) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26a40) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26a48) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x269e8) = 0;
    *(undefined8 *)(param_1 + 0x269e0) = 0;
    *(undefined8 *)(param_1 + 0x26aa0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26aa8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26b60) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26b68) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26b08) = 0;
    *(undefined8 *)(param_1 + 0x26b00) = 0;
    *(undefined8 *)(param_1 + 0x26bc0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26bc8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26c80) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26c88) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26c28) = 0;
    *(undefined8 *)(param_1 + 0x26c20) = 0;
    *(undefined8 *)(param_1 + 0x26ce0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26ce8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26da0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26da8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26d48) = 0;
    *(undefined8 *)(param_1 + 0x26d40) = 0;
    *(undefined8 *)(param_1 + 0x26e00) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26e08) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26ec0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26ec8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26e68) = 0;
    *(undefined8 *)(param_1 + 0x26e60) = 0;
    *(undefined8 *)(param_1 + 0x26f20) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26f28) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26fe0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26fe8) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x26f88) = 0;
    *(undefined8 *)(param_1 + 0x26f80) = 0;
    *(undefined8 *)(param_1 + 0x27040) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x27048) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 160000) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x27108) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x270a8) = 0;
    *(undefined8 *)(param_1 + 0x270a0) = 0;
    *(undefined8 *)(param_1 + 0x27160) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x27168) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x27220) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x27228) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x271c8) = 0;
    *(undefined8 *)(param_1 + 0x271c0) = 0;
    FUN_01f1eec8(param_1 + 0x27238,param_1 + 0x26878);
    FUN_01f1eec8(param_1 + 0x27bf8,param_1 + 0x27238);
    *(undefined4 *)(param_1 + 0x285bc) = 0;
  }
  puVar10 = *(uint **)(*(long *)(param_1 + 0x285d0) + 0x250);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  puVar10 = puVar3 + 1;
  uVar11 = (ulong)*puVar3;
  if (uVar11 != 0) {
    puVar3 = puVar10 + uVar11;
    do {
      piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
      local_100 = &DAT_03996322;
      local_108 = &DAT_cbf29ce484222645;
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_cbf29ce484222645;
      pbStack_e0 = &DAT_03996322;
      local_b0 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = 0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar11 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar21 = (long)puVar4 + (ulong)*puVar4;
      }
      local_f8 = strlen((char *)(lVar21 + 4));
      bVar5 = *(byte *)(lVar21 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar21 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 != 0);
      }
      local_f0 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar11 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar19 = (long)puVar4 + (ulong)*puVar4;
      }
      local_100 = (byte *)(lVar21 + 4);
      local_d8 = strlen((char *)(lVar19 + 4));
      bVar5 = *(byte *)(lVar19 + 4);
      local_e8 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_e8 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar19 + 5);
        do {
          local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 != 0);
      }
      local_d0 = (long *)0x0;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
        local_c8 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
        local_c8 = 0;
        if (uVar11 != 0) {
          local_c8 = *(undefined8 *)((long)piVar2 + uVar11);
        }
      }
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (10 < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[5] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[5]);
        }
        if (uVar9 < 0xd) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[6] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
          }
          if (uVar9 < 0xf) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[7] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[7]);
            }
            if ((0x10 < uVar9) && ((ulong)puVar13[8] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[8]);
              goto LAB_01f16914;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16914:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      pbStack_e0 = (byte *)(lVar19 + 4);
      FUN_01f1f4c8(param_1 + 0x285f8,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x12 < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[9] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[9]);
        }
        if (uVar9 < 0x15) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[10] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[10]);
          }
          if (uVar9 < 0x17) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0xb] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xb]);
            }
            if ((0x18 < uVar9) && ((ulong)puVar13[0xc] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xc]);
              goto LAB_01f169a0;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f169a0:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x2e600,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x1a < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0xd] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xd]);
        }
        if (uVar9 < 0x1d) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0xe] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xe]);
          }
          if (uVar9 < 0x1f) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0xf] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0xf]);
            }
            if ((0x20 < uVar9) && ((ulong)puVar13[0x10] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x10]);
              goto LAB_01f16a2c;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16a2c:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x34608,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x22 < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0x11] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x11]);
        }
        if (uVar9 < 0x25) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0x12] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x12]);
          }
          if (uVar9 < 0x27) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0x13] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x13]);
            }
            if ((0x28 < uVar9) && ((ulong)puVar13[0x14] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x14]);
              goto LAB_01f16ab8;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16ab8:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x3a610,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x2a < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0x15] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x15]);
        }
        if (uVar9 < 0x2d) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0x16] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x16]);
          }
          if (uVar9 < 0x2f) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0x17] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x17]);
            }
            if ((0x30 < uVar9) && ((ulong)puVar13[0x18] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x18]);
              goto LAB_01f16b44;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16b44:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x40618,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x32 < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0x19] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x19]);
        }
        if (uVar9 < 0x35) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0x1a] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1a]);
          }
          if (uVar9 < 0x37) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0x1b] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1b]);
            }
            if ((0x38 < uVar9) && ((ulong)puVar13[0x1c] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1c]);
              goto LAB_01f16bd0;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16bd0:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x46620,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x3a < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0x1d] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1d]);
        }
        if (uVar9 < 0x3d) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0x1e] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1e]);
          }
          if (uVar9 < 0x3f) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0x1f] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x1f]);
            }
            if ((0x40 < uVar9) && ((ulong)puVar13[0x20] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x20]);
              goto LAB_01f16c5c;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16c5c:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x4c628,&local_108);
      puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar9 = *puVar13;
      uVar32 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar33 = 0;
      if (0x42 < uVar9) {
        uVar30 = 0;
        if ((ulong)puVar13[0x21] != 0) {
          uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x21]);
        }
        if (uVar9 < 0x45) {
          uVar32 = 0;
          uVar27 = 0;
          uVar33 = 0;
        }
        else {
          uVar27 = 0;
          if ((ulong)puVar13[0x22] != 0) {
            uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x22]);
          }
          if (uVar9 < 0x47) {
            uVar32 = 0;
          }
          else {
            uVar32 = 0;
            if ((ulong)puVar13[0x23] != 0) {
              uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x23]);
            }
            if ((0x48 < uVar9) && ((ulong)puVar13[0x24] != 0)) {
              uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[0x24]);
              goto LAB_01f16ce8;
            }
          }
          uVar33 = 0;
        }
      }
LAB_01f16ce8:
      local_c0 = CONCAT44(uVar27,uVar30);
      local_b8 = CONCAT44(uVar33,uVar32);
      FUN_01f1f4c8(param_1 + 0x52630,&local_108);
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  puVar10 = *(uint **)(*(long *)(param_1 + 0x5e660) + 0x250);
  piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  puVar10 = puVar3 + 1;
  uVar11 = (ulong)*puVar3;
  if (uVar11 != 0) {
    puVar3 = puVar10 + uVar11;
    do {
      piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
      local_100 = &DAT_03996322;
      local_108 = &DAT_cbf29ce484222645;
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_cbf29ce484222645;
      pbStack_e0 = &DAT_03996322;
      local_b0 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = 0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar11 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar21 = (long)puVar4 + (ulong)*puVar4;
      }
      local_f8 = strlen((char *)(lVar21 + 4));
      bVar5 = *(byte *)(lVar21 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar21 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 != 0);
      }
      local_f0 = (long *)0x0;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar11 == 0)) {
        lVar19 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar2 + uVar11);
        lVar19 = (long)puVar4 + (ulong)*puVar4;
      }
      pbVar16 = (byte *)(lVar19 + 4);
      local_100 = (byte *)(lVar21 + 4);
      local_d8 = strlen((char *)pbVar16);
      bVar5 = *(byte *)(lVar19 + 4);
      local_e8 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_e8 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar19 + 5);
        do {
          local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar5 != 0);
      }
      local_d0 = (long *)0x0;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
        local_c8 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
        local_c8 = 0;
        if (uVar11 != 0) {
          local_c8 = *(undefined8 *)((long)piVar2 + uVar11);
        }
      }
      lVar21 = (long)*piVar2;
      puVar13 = (ushort *)((long)piVar2 - lVar21);
      uVar9 = *puVar13;
      pbStack_e0 = pbVar16;
      if (10 < uVar9) {
        if (((ulong)puVar13[5] != 0) && (*(char *)((long)piVar2 + (ulong)puVar13[5]) != '\0')) {
          uVar32 = 0;
          uVar30 = 0;
          uVar27 = 0;
          uVar33 = 0;
          if (0xc < uVar9) {
            uVar30 = 0;
            if ((ulong)puVar13[6] != 0) {
              uVar30 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
            }
            if (uVar9 < 0xf) {
              uVar32 = 0;
              uVar27 = 0;
              uVar33 = 0;
            }
            else {
              uVar27 = 0;
              if ((ulong)puVar13[7] != 0) {
                uVar27 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[7]);
              }
              if (uVar9 < 0x11) {
                uVar32 = 0;
              }
              else {
                uVar32 = 0;
                if ((ulong)puVar13[8] != 0) {
                  uVar32 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[8]);
                }
                if ((0x12 < uVar9) && ((ulong)puVar13[9] != 0)) {
                  uVar33 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[9]);
                  goto LAB_01f17c8c;
                }
              }
              uVar33 = 0;
            }
          }
LAB_01f17c8c:
          local_c0 = CONCAT44(uVar27,uVar30);
          local_b8 = CONCAT44(uVar33,uVar32);
          FUN_01f1f4c8(param_1 + 0x5e688,&local_108);
          lVar21 = (long)*piVar2;
          uVar9 = *(ushort *)((long)piVar2 - lVar21);
        }
        if (0x14 < uVar9) {
          lVar21 = -lVar21;
          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x14);
          if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
            uVar32 = 0;
            uVar30 = 0;
            uVar27 = 0;
            uVar33 = 0;
            if (0x16 < uVar9) {
              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x16);
              uVar30 = 0;
              if (uVar11 != 0) {
                uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
              }
              if (uVar9 < 0x19) {
                uVar32 = 0;
                uVar27 = 0;
                uVar33 = 0;
              }
              else {
                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x18);
                uVar27 = 0;
                if (uVar11 != 0) {
                  uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                }
                if (uVar9 < 0x1b) {
                  uVar32 = 0;
                }
                else {
                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x1a);
                  uVar32 = 0;
                  if (uVar11 != 0) {
                    uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                  }
                  if ((0x1c < uVar9) &&
                     (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x1c), uVar11 != 0)) {
                    uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                    goto LAB_01f177a4;
                  }
                }
                uVar33 = 0;
              }
            }
LAB_01f177a4:
            local_c0 = CONCAT44(uVar27,uVar30);
            local_b8 = CONCAT44(uVar33,uVar32);
            FUN_01f1f4c8(param_1 + 0x64690,&local_108);
            lVar21 = -(long)*piVar2;
            uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
          }
          if (0x1e < uVar9) {
            uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x1e);
            if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
              uVar32 = 0;
              uVar30 = 0;
              uVar27 = 0;
              uVar33 = 0;
              if (0x20 < uVar9) {
                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x20);
                uVar30 = 0;
                if (uVar11 != 0) {
                  uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                }
                if (uVar9 < 0x23) {
                  uVar32 = 0;
                  uVar27 = 0;
                  uVar33 = 0;
                }
                else {
                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x22);
                  uVar27 = 0;
                  if (uVar11 != 0) {
                    uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                  }
                  if (uVar9 < 0x25) {
                    uVar32 = 0;
                  }
                  else {
                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x24);
                    uVar32 = 0;
                    if (uVar11 != 0) {
                      uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                    }
                    if ((0x26 < uVar9) &&
                       (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x26), uVar11 != 0)) {
                      uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                      goto LAB_01f17840;
                    }
                  }
                  uVar33 = 0;
                }
              }
LAB_01f17840:
              local_c0 = CONCAT44(uVar27,uVar30);
              local_b8 = CONCAT44(uVar33,uVar32);
              FUN_01f1f4c8(param_1 + 0x6a698,&local_108);
              lVar21 = -(long)*piVar2;
              uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
            }
            if (0x28 < uVar9) {
              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x28);
              if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                uVar32 = 0;
                uVar30 = 0;
                uVar27 = 0;
                uVar33 = 0;
                if (0x2a < uVar9) {
                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x2a);
                  uVar30 = 0;
                  if (uVar11 != 0) {
                    uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                  }
                  if (uVar9 < 0x2d) {
                    uVar32 = 0;
                    uVar27 = 0;
                    uVar33 = 0;
                  }
                  else {
                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x2c);
                    uVar27 = 0;
                    if (uVar11 != 0) {
                      uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                    }
                    if (uVar9 < 0x2f) {
                      uVar32 = 0;
                    }
                    else {
                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x2e);
                      uVar32 = 0;
                      if (uVar11 != 0) {
                        uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                      }
                      if ((0x30 < uVar9) &&
                         (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x30), uVar11 != 0)) {
                        uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                        goto LAB_01f17dc4;
                      }
                    }
                    uVar33 = 0;
                  }
                }
LAB_01f17dc4:
                local_c0 = CONCAT44(uVar27,uVar30);
                local_b8 = CONCAT44(uVar33,uVar32);
                FUN_01f1f4c8(param_1 + 0x706a0,&local_108);
                lVar21 = -(long)*piVar2;
                uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
              }
              if (0x32 < uVar9) {
                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x32);
                if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                  uVar32 = 0;
                  uVar30 = 0;
                  uVar27 = 0;
                  uVar33 = 0;
                  if (0x34 < uVar9) {
                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x34);
                    uVar30 = 0;
                    if (uVar11 != 0) {
                      uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                    }
                    if (uVar9 < 0x37) {
                      uVar32 = 0;
                      uVar27 = 0;
                      uVar33 = 0;
                    }
                    else {
                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x36);
                      uVar27 = 0;
                      if (uVar11 != 0) {
                        uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                      }
                      if (uVar9 < 0x39) {
                        uVar32 = 0;
                      }
                      else {
                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x38);
                        uVar32 = 0;
                        if (uVar11 != 0) {
                          uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                        }
                        if ((0x3a < uVar9) &&
                           (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x3a), uVar11 != 0))
                        {
                          uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                          goto LAB_01f17e60;
                        }
                      }
                      uVar33 = 0;
                    }
                  }
LAB_01f17e60:
                  local_c0 = CONCAT44(uVar27,uVar30);
                  local_b8 = CONCAT44(uVar33,uVar32);
                  FUN_01f1f4c8(param_1 + 0x766a8,&local_108);
                  lVar21 = -(long)*piVar2;
                  uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                }
                if (0x3c < uVar9) {
                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x3c);
                  if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                    uVar32 = 0;
                    uVar30 = 0;
                    uVar27 = 0;
                    uVar33 = 0;
                    if (0x3e < uVar9) {
                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x3e);
                      uVar30 = 0;
                      if (uVar11 != 0) {
                        uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                      }
                      if (uVar9 < 0x41) {
                        uVar32 = 0;
                        uVar27 = 0;
                        uVar33 = 0;
                      }
                      else {
                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x40);
                        uVar27 = 0;
                        if (uVar11 != 0) {
                          uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                        }
                        if (uVar9 < 0x43) {
                          uVar32 = 0;
                        }
                        else {
                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x42);
                          uVar32 = 0;
                          if (uVar11 != 0) {
                            uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                          }
                          if ((0x44 < uVar9) &&
                             (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x44), uVar11 != 0
                             )) {
                            uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                            goto LAB_01f17efc;
                          }
                        }
                        uVar33 = 0;
                      }
                    }
LAB_01f17efc:
                    local_c0 = CONCAT44(uVar27,uVar30);
                    local_b8 = CONCAT44(uVar33,uVar32);
                    FUN_01f1f4c8(param_1 + 0x7c6b0,&local_108);
                    lVar21 = -(long)*piVar2;
                    uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                  }
                  if (0x46 < uVar9) {
                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x46);
                    if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                      uVar32 = 0;
                      uVar30 = 0;
                      uVar27 = 0;
                      uVar33 = 0;
                      if (0x48 < uVar9) {
                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x48);
                        uVar30 = 0;
                        if (uVar11 != 0) {
                          uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                        }
                        if (uVar9 < 0x4b) {
                          uVar32 = 0;
                          uVar27 = 0;
                          uVar33 = 0;
                        }
                        else {
                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x4a);
                          uVar27 = 0;
                          if (uVar11 != 0) {
                            uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                          }
                          if (uVar9 < 0x4d) {
                            uVar32 = 0;
                          }
                          else {
                            uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x4c);
                            uVar32 = 0;
                            if (uVar11 != 0) {
                              uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                            }
                            if ((0x4e < uVar9) &&
                               (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x4e),
                               uVar11 != 0)) {
                              uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                              goto LAB_01f17274;
                            }
                          }
                          uVar33 = 0;
                        }
                      }
LAB_01f17274:
                      local_c0 = CONCAT44(uVar27,uVar30);
                      local_b8 = CONCAT44(uVar33,uVar32);
                      FUN_01f1f4c8(param_1 + 0x826b8,&local_108);
                      lVar21 = -(long)*piVar2;
                      uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                    }
                    if (0x50 < uVar9) {
                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x50);
                      if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                        uVar32 = 0;
                        uVar30 = 0;
                        uVar27 = 0;
                        uVar33 = 0;
                        if (0x52 < uVar9) {
                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x52);
                          uVar30 = 0;
                          if (uVar11 != 0) {
                            uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                          }
                          if (uVar9 < 0x55) {
                            uVar32 = 0;
                            uVar27 = 0;
                            uVar33 = 0;
                          }
                          else {
                            uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x54);
                            uVar27 = 0;
                            if (uVar11 != 0) {
                              uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                            }
                            if (uVar9 < 0x57) {
                              uVar32 = 0;
                            }
                            else {
                              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x56);
                              uVar32 = 0;
                              if (uVar11 != 0) {
                                uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                              }
                              if ((0x58 < uVar9) &&
                                 (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x58),
                                 uVar11 != 0)) {
                                uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                goto LAB_01f17320;
                              }
                            }
                            uVar33 = 0;
                          }
                        }
LAB_01f17320:
                        local_c0 = CONCAT44(uVar27,uVar30);
                        local_b8 = CONCAT44(uVar33,uVar32);
                        FUN_01f1f4c8(param_1 + 0x886c0,&local_108);
                        lVar21 = -(long)*piVar2;
                        uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                      }
                      if (0x5a < uVar9) {
                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x5a);
                        if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                          uVar32 = 0;
                          uVar30 = 0;
                          uVar27 = 0;
                          uVar33 = 0;
                          if (0x5c < uVar9) {
                            uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x5c);
                            uVar30 = 0;
                            if (uVar11 != 0) {
                              uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                            }
                            if (uVar9 < 0x5f) {
                              uVar32 = 0;
                              uVar27 = 0;
                              uVar33 = 0;
                            }
                            else {
                              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x5e);
                              uVar27 = 0;
                              if (uVar11 != 0) {
                                uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                              }
                              if (uVar9 < 0x61) {
                                uVar32 = 0;
                              }
                              else {
                                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x60);
                                uVar32 = 0;
                                if (uVar11 != 0) {
                                  uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                }
                                if ((0x62 < uVar9) &&
                                   (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x62),
                                   uVar11 != 0)) {
                                  uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                  goto LAB_01f17bf0;
                                }
                              }
                              uVar33 = 0;
                            }
                          }
LAB_01f17bf0:
                          local_c0 = CONCAT44(uVar27,uVar30);
                          local_b8 = CONCAT44(uVar33,uVar32);
                          FUN_01f1f4c8(param_1 + 0x8e6c8,&local_108);
                          lVar21 = -(long)*piVar2;
                          uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                        }
                        if (100 < uVar9) {
                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 100);
                          if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                            uVar32 = 0;
                            uVar30 = 0;
                            uVar27 = 0;
                            uVar33 = 0;
                            if (0x66 < uVar9) {
                              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x66);
                              uVar30 = 0;
                              if (uVar11 != 0) {
                                uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                              }
                              if (uVar9 < 0x69) {
                                uVar32 = 0;
                                uVar27 = 0;
                                uVar33 = 0;
                              }
                              else {
                                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x68);
                                uVar27 = 0;
                                if (uVar11 != 0) {
                                  uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                }
                                if (uVar9 < 0x6b) {
                                  uVar32 = 0;
                                }
                                else {
                                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x6a);
                                  uVar32 = 0;
                                  if (uVar11 != 0) {
                                    uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                  }
                                  if ((0x6c < uVar9) &&
                                     (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x6c),
                                     uVar11 != 0)) {
                                    uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                    goto LAB_01f17a04;
                                  }
                                }
                                uVar33 = 0;
                              }
                            }
LAB_01f17a04:
                            local_c0 = CONCAT44(uVar27,uVar30);
                            local_b8 = CONCAT44(uVar33,uVar32);
                            FUN_01f1f4c8(param_1 + 0x946d0,&local_108);
                            lVar21 = -(long)*piVar2;
                            uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                          }
                          if (0x6e < uVar9) {
                            uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x6e);
                            if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                              uVar32 = 0;
                              uVar30 = 0;
                              uVar27 = 0;
                              uVar33 = 0;
                              if (0x70 < uVar9) {
                                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x70);
                                uVar30 = 0;
                                if (uVar11 != 0) {
                                  uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                }
                                if (uVar9 < 0x73) {
                                  uVar32 = 0;
                                  uVar27 = 0;
                                  uVar33 = 0;
                                }
                                else {
                                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x72);
                                  uVar27 = 0;
                                  if (uVar11 != 0) {
                                    uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                  }
                                  if (uVar9 < 0x75) {
                                    uVar32 = 0;
                                  }
                                  else {
                                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x74);
                                    uVar32 = 0;
                                    if (uVar11 != 0) {
                                      uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                    }
                                    if ((0x76 < uVar9) &&
                                       (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x76),
                                       uVar11 != 0)) {
                                      uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                      goto LAB_01f17aa0;
                                    }
                                  }
                                  uVar33 = 0;
                                }
                              }
LAB_01f17aa0:
                              local_c0 = CONCAT44(uVar27,uVar30);
                              local_b8 = CONCAT44(uVar33,uVar32);
                              FUN_01f1f4c8(param_1 + 0x9a6d8,&local_108);
                              lVar21 = -(long)*piVar2;
                              uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                            }
                            if (0x78 < uVar9) {
                              uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x78);
                              if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                uVar32 = 0;
                                uVar30 = 0;
                                uVar27 = 0;
                                uVar33 = 0;
                                if (0x7a < uVar9) {
                                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x7a);
                                  uVar30 = 0;
                                  if (uVar11 != 0) {
                                    uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                  }
                                  if (uVar9 < 0x7d) {
                                    uVar32 = 0;
                                    uVar27 = 0;
                                    uVar33 = 0;
                                  }
                                  else {
                                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x7c);
                                    uVar27 = 0;
                                    if (uVar11 != 0) {
                                      uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                    }
                                    if (uVar9 < 0x7f) {
                                      uVar32 = 0;
                                    }
                                    else {
                                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x7e);
                                      uVar32 = 0;
                                      if (uVar11 != 0) {
                                        uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                      }
                                      if ((0x80 < uVar9) &&
                                         (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x80),
                                         uVar11 != 0)) {
                                        uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                        goto LAB_01f17b3c;
                                      }
                                    }
                                    uVar33 = 0;
                                  }
                                }
LAB_01f17b3c:
                                local_c0 = CONCAT44(uVar27,uVar30);
                                local_b8 = CONCAT44(uVar33,uVar32);
                                FUN_01f1f4c8(param_1 + 0xa06e0,&local_108);
                                lVar21 = -(long)*piVar2;
                                uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                              }
                              if (0x82 < uVar9) {
                                uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x82);
                                if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                  uVar32 = 0;
                                  uVar30 = 0;
                                  uVar27 = 0;
                                  uVar33 = 0;
                                  if (0x84 < uVar9) {
                                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x84);
                                    uVar30 = 0;
                                    if (uVar11 != 0) {
                                      uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                    }
                                    if (uVar9 < 0x87) {
                                      uVar32 = 0;
                                      uVar27 = 0;
                                      uVar33 = 0;
                                    }
                                    else {
                                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x86);
                                      uVar27 = 0;
                                      if (uVar11 != 0) {
                                        uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                      }
                                      if (uVar9 < 0x89) {
                                        uVar32 = 0;
                                      }
                                      else {
                                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x88);
                                        uVar32 = 0;
                                        if (uVar11 != 0) {
                                          uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                        }
                                        if ((0x8a < uVar9) &&
                                           (uVar11 = (ulong)*(ushort *)
                                                             ((long)piVar2 + lVar21 + 0x8a),
                                           uVar11 != 0)) {
                                          uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                          goto LAB_01f17d28;
                                        }
                                      }
                                      uVar33 = 0;
                                    }
                                  }
LAB_01f17d28:
                                  local_c0 = CONCAT44(uVar27,uVar30);
                                  local_b8 = CONCAT44(uVar33,uVar32);
                                  FUN_01f1f4c8(param_1 + 0xa66e8,&local_108);
                                  lVar21 = -(long)*piVar2;
                                  uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                }
                                if (0x8c < uVar9) {
                                  uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x8c);
                                  if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                    uVar32 = 0;
                                    uVar30 = 0;
                                    uVar27 = 0;
                                    uVar33 = 0;
                                    if (0x8e < uVar9) {
                                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x8e);
                                      uVar30 = 0;
                                      if (uVar11 != 0) {
                                        uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                      }
                                      if (uVar9 < 0x91) {
                                        uVar32 = 0;
                                        uVar27 = 0;
                                        uVar33 = 0;
                                      }
                                      else {
                                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x90);
                                        uVar27 = 0;
                                        if (uVar11 != 0) {
                                          uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                        }
                                        if (uVar9 < 0x93) {
                                          uVar32 = 0;
                                        }
                                        else {
                                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x92);
                                          uVar32 = 0;
                                          if (uVar11 != 0) {
                                            uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                          }
                                          if ((0x94 < uVar9) &&
                                             (uVar11 = (ulong)*(ushort *)
                                                               ((long)piVar2 + lVar21 + 0x94),
                                             uVar11 != 0)) {
                                            uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                            goto LAB_01f1766c;
                                          }
                                        }
                                        uVar33 = 0;
                                      }
                                    }
LAB_01f1766c:
                                    local_c0 = CONCAT44(uVar27,uVar30);
                                    local_b8 = CONCAT44(uVar33,uVar32);
                                    FUN_01f1f4c8(param_1 + 0xac6f0,&local_108);
                                    lVar21 = -(long)*piVar2;
                                    uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                  }
                                  if (0x96 < uVar9) {
                                    uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x96);
                                    if ((uVar11 != 0) && (*(char *)((long)piVar2 + uVar11) != '\0'))
                                    {
                                      uVar32 = 0;
                                      uVar30 = 0;
                                      uVar27 = 0;
                                      uVar33 = 0;
                                      if (0x98 < uVar9) {
                                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x98);
                                        uVar30 = 0;
                                        if (uVar11 != 0) {
                                          uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                        }
                                        if (uVar9 < 0x9b) {
                                          uVar32 = 0;
                                          uVar27 = 0;
                                          uVar33 = 0;
                                        }
                                        else {
                                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0x9a);
                                          uVar27 = 0;
                                          if (uVar11 != 0) {
                                            uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                          }
                                          if (uVar9 < 0x9d) {
                                            uVar32 = 0;
                                          }
                                          else {
                                            uVar11 = (ulong)*(ushort *)
                                                             ((long)piVar2 + lVar21 + 0x9c);
                                            uVar32 = 0;
                                            if (uVar11 != 0) {
                                              uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                            }
                                            if ((0x9e < uVar9) &&
                                               (uVar11 = (ulong)*(ushort *)
                                                                 ((long)piVar2 + lVar21 + 0x9e),
                                               uVar11 != 0)) {
                                              uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                              goto LAB_01f17708;
                                            }
                                          }
                                          uVar33 = 0;
                                        }
                                      }
LAB_01f17708:
                                      local_c0 = CONCAT44(uVar27,uVar30);
                                      local_b8 = CONCAT44(uVar33,uVar32);
                                      FUN_01f1f4c8(param_1 + 0xb26f8,&local_108);
                                      lVar21 = -(long)*piVar2;
                                      uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                    }
                                    if (0xa0 < uVar9) {
                                      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0xa0);
                                      if ((uVar11 != 0) &&
                                         (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                        uVar32 = 0;
                                        uVar30 = 0;
                                        uVar27 = 0;
                                        uVar33 = 0;
                                        if (0xa2 < uVar9) {
                                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0xa2);
                                          uVar30 = 0;
                                          if (uVar11 != 0) {
                                            uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                          }
                                          if (uVar9 < 0xa5) {
                                            uVar32 = 0;
                                            uVar27 = 0;
                                            uVar33 = 0;
                                          }
                                          else {
                                            uVar11 = (ulong)*(ushort *)
                                                             ((long)piVar2 + lVar21 + 0xa4);
                                            uVar27 = 0;
                                            if (uVar11 != 0) {
                                              uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                            }
                                            if (uVar9 < 0xa7) {
                                              uVar32 = 0;
                                            }
                                            else {
                                              uVar11 = (ulong)*(ushort *)
                                                               ((long)piVar2 + lVar21 + 0xa6);
                                              uVar32 = 0;
                                              if (uVar11 != 0) {
                                                uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                              }
                                              if ((0xa8 < uVar9) &&
                                                 (uVar11 = (ulong)*(ushort *)
                                                                   ((long)piVar2 + lVar21 + 0xa8),
                                                 uVar11 != 0)) {
                                                uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                                goto LAB_01f17968;
                                              }
                                            }
                                            uVar33 = 0;
                                          }
                                        }
LAB_01f17968:
                                        local_c0 = CONCAT44(uVar27,uVar30);
                                        local_b8 = CONCAT44(uVar33,uVar32);
                                        FUN_01f1f4c8(param_1 + 0xb8700,&local_108);
                                        lVar21 = -(long)*piVar2;
                                        uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                      }
                                      if (0xaa < uVar9) {
                                        uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0xaa);
                                        if ((uVar11 != 0) &&
                                           (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                          uVar32 = 0;
                                          uVar30 = 0;
                                          uVar27 = 0;
                                          uVar33 = 0;
                                          if (0xac < uVar9) {
                                            uVar11 = (ulong)*(ushort *)
                                                             ((long)piVar2 + lVar21 + 0xac);
                                            uVar30 = 0;
                                            if (uVar11 != 0) {
                                              uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                            }
                                            if (uVar9 < 0xaf) {
                                              uVar32 = 0;
                                              uVar27 = 0;
                                              uVar33 = 0;
                                            }
                                            else {
                                              uVar11 = (ulong)*(ushort *)
                                                               ((long)piVar2 + lVar21 + 0xae);
                                              uVar27 = 0;
                                              if (uVar11 != 0) {
                                                uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                              }
                                              if (uVar9 < 0xb1) {
                                                uVar32 = 0;
                                              }
                                              else {
                                                uVar11 = (ulong)*(ushort *)
                                                                 ((long)piVar2 + lVar21 + 0xb0);
                                                uVar32 = 0;
                                                if (uVar11 != 0) {
                                                  uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                                }
                                                if ((0xb2 < uVar9) &&
                                                   (uVar11 = (ulong)*(ushort *)
                                                                     ((long)piVar2 + lVar21 + 0xb2),
                                                   uVar11 != 0)) {
                                                  uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                                  goto LAB_01f174ac;
                                                }
                                              }
                                              uVar33 = 0;
                                            }
                                          }
LAB_01f174ac:
                                          local_c0 = CONCAT44(uVar27,uVar30);
                                          local_b8 = CONCAT44(uVar33,uVar32);
                                          FUN_01f1f4c8(param_1 + 0xbe708,&local_108);
                                          lVar21 = -(long)*piVar2;
                                          uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                        }
                                        if (0xb4 < uVar9) {
                                          uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar21 + 0xb4);
                                          if ((uVar11 != 0) &&
                                             (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                            uVar32 = 0;
                                            uVar30 = 0;
                                            uVar27 = 0;
                                            uVar33 = 0;
                                            if (0xb6 < uVar9) {
                                              uVar11 = (ulong)*(ushort *)
                                                               ((long)piVar2 + lVar21 + 0xb6);
                                              uVar30 = 0;
                                              if (uVar11 != 0) {
                                                uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                              }
                                              if (uVar9 < 0xb9) {
                                                uVar32 = 0;
                                                uVar27 = 0;
                                                uVar33 = 0;
                                              }
                                              else {
                                                uVar11 = (ulong)*(ushort *)
                                                                 ((long)piVar2 + lVar21 + 0xb8);
                                                uVar27 = 0;
                                                if (uVar11 != 0) {
                                                  uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                                }
                                                if (uVar9 < 0xbb) {
                                                  uVar32 = 0;
                                                }
                                                else {
                                                  uVar11 = (ulong)*(ushort *)
                                                                   ((long)piVar2 + lVar21 + 0xba);
                                                  uVar32 = 0;
                                                  if (uVar11 != 0) {
                                                    uVar32 = *(undefined4 *)((long)piVar2 + uVar11);
                                                  }
                                                  if ((0xbc < uVar9) &&
                                                     (uVar11 = (ulong)*(ushort *)
                                                                       ((long)piVar2 + lVar21 + 0xbc
                                                                       ), uVar11 != 0)) {
                                                    uVar33 = *(undefined4 *)((long)piVar2 + uVar11);
                                                    goto LAB_01f17f98;
                                                  }
                                                }
                                                uVar33 = 0;
                                              }
                                            }
LAB_01f17f98:
                                            local_c0 = CONCAT44(uVar27,uVar30);
                                            local_b8 = CONCAT44(uVar33,uVar32);
                                            FUN_01f1f4c8(param_1 + 0xc4710,&local_108);
                                            lVar21 = -(long)*piVar2;
                                            uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                          }
                                          if (0xbe < uVar9) {
                                            uVar11 = (ulong)*(ushort *)
                                                             ((long)piVar2 + lVar21 + 0xbe);
                                            if ((uVar11 != 0) &&
                                               (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                              uVar32 = 0;
                                              uVar30 = 0;
                                              uVar27 = 0;
                                              uVar33 = 0;
                                              if (0xc0 < uVar9) {
                                                uVar11 = (ulong)*(ushort *)
                                                                 ((long)piVar2 + lVar21 + 0xc0);
                                                uVar30 = 0;
                                                if (uVar11 != 0) {
                                                  uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                                }
                                                if (uVar9 < 0xc3) {
                                                  uVar32 = 0;
                                                  uVar27 = 0;
                                                  uVar33 = 0;
                                                }
                                                else {
                                                  uVar11 = (ulong)*(ushort *)
                                                                   ((long)piVar2 + lVar21 + 0xc2);
                                                  uVar27 = 0;
                                                  if (uVar11 != 0) {
                                                    uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                                  }
                                                  if (uVar9 < 0xc5) {
                                                    uVar32 = 0;
                                                  }
                                                  else {
                                                    uVar11 = (ulong)*(ushort *)
                                                                     ((long)piVar2 + lVar21 + 0xc4);
                                                    uVar32 = 0;
                                                    if (uVar11 != 0) {
                                                      uVar32 = *(undefined4 *)
                                                                ((long)piVar2 + uVar11);
                                                    }
                                                    if ((0xc6 < uVar9) &&
                                                       (uVar11 = (ulong)*(ushort *)
                                                                         ((long)piVar2 +
                                                                         lVar21 + 0xc6), uVar11 != 0
                                                       )) {
                                                      uVar33 = *(undefined4 *)
                                                                ((long)piVar2 + uVar11);
                                                      goto LAB_01f17574;
                                                    }
                                                  }
                                                  uVar33 = 0;
                                                }
                                              }
LAB_01f17574:
                                              local_c0 = CONCAT44(uVar27,uVar30);
                                              local_b8 = CONCAT44(uVar33,uVar32);
                                              FUN_01f1f4c8(param_1 + 0xca718,&local_108);
                                              lVar21 = -(long)*piVar2;
                                              uVar9 = *(ushort *)((long)piVar2 - (long)*piVar2);
                                            }
                                            if (((200 < uVar9) &&
                                                (uVar11 = (ulong)*(ushort *)
                                                                  ((long)piVar2 + lVar21 + 200),
                                                uVar11 != 0)) &&
                                               (*(char *)((long)piVar2 + uVar11) != '\0')) {
                                              uVar32 = 0;
                                              uVar30 = 0;
                                              uVar27 = 0;
                                              uVar33 = 0;
                                              if (0xca < uVar9) {
                                                uVar11 = (ulong)*(ushort *)
                                                                 ((long)piVar2 + lVar21 + 0xca);
                                                uVar30 = 0;
                                                if (uVar11 != 0) {
                                                  uVar30 = *(undefined4 *)((long)piVar2 + uVar11);
                                                }
                                                if (uVar9 < 0xcd) {
                                                  uVar32 = 0;
                                                  uVar27 = 0;
                                                  uVar33 = 0;
                                                }
                                                else {
                                                  uVar11 = (ulong)*(ushort *)
                                                                   ((long)piVar2 + lVar21 + 0xcc);
                                                  uVar27 = 0;
                                                  if (uVar11 != 0) {
                                                    uVar27 = *(undefined4 *)((long)piVar2 + uVar11);
                                                  }
                                                  if (uVar9 < 0xcf) {
                                                    uVar32 = 0;
                                                  }
                                                  else {
                                                    uVar11 = (ulong)*(ushort *)
                                                                     ((long)piVar2 + lVar21 + 0xce);
                                                    uVar32 = 0;
                                                    if (uVar11 != 0) {
                                                      uVar32 = *(undefined4 *)
                                                                ((long)piVar2 + uVar11);
                                                    }
                                                    if ((0xd0 < uVar9) &&
                                                       (uVar11 = (ulong)*(ushort *)
                                                                         ((long)piVar2 +
                                                                         lVar21 + 0xd0), uVar11 != 0
                                                       )) {
                                                      uVar33 = *(undefined4 *)
                                                                ((long)piVar2 + uVar11);
                                                      goto LAB_01f178dc;
                                                    }
                                                  }
                                                  uVar33 = 0;
                                                }
                                              }
LAB_01f178dc:
                                              local_c0 = CONCAT44(uVar27,uVar30);
                                              local_b8 = CONCAT44(uVar33,uVar32);
                                              FUN_01f1f4c8(param_1 + 0xd0720,&local_108);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  local_108 = (undefined1 *)0x99736eaaf7fe189b;
  local_100 = &DAT_0391f489;
  param_1 = param_1 + 0xd6728;
  local_f8 = 4;
  local_f0 = (long *)0x0;
  local_148 = 0xff;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_148 = 0;
  local_108 = (undefined1 *)0xa5f79714d6b6d8bb;
  local_100 = (byte *)0x393c7a4;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xf84d34e3e5608ebe;
  local_100 = (byte *)0x392a33f;
  local_f8 = 0x16;
  local_f0 = (long *)0x0;
  local_148 = 1;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x7d90b20c72233d08;
  local_100 = (byte *)0x399c20b;
  local_f8 = 0x19;
  local_f0 = (long *)0x0;
  local_148 = 2;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xcc7f60011a66478;
  local_100 = (byte *)0x396c7c8;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  local_148 = 3;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xfeb1c5cec2dee1a3;
  local_100 = (byte *)0x38f5c3e;
  local_f8 = 0x1a;
  local_f0 = (long *)0x0;
  local_148 = 4;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x5778d83a0e9fa5d9;
  local_100 = (byte *)0x38e07d2;
  local_f8 = 0x1a;
  local_f0 = (long *)0x0;
  local_148 = 5;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x433a3fdaf1620778;
  local_100 = (byte *)0x398938d;
  local_f8 = 0x15;
  local_f0 = (long *)0x0;
  local_148 = 6;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x23e30f534d626a45;
  local_100 = (byte *)0x39b668e;
  local_f8 = 0xe;
  local_f0 = (long *)0x0;
  local_148 = 7;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x6b7a3b6822908da5;
  local_100 = (byte *)0x38afdb2;
  local_f8 = 0x10;
  local_f0 = (long *)0x0;
  local_148 = 8;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x6ede41246828cb57;
  local_100 = (byte *)0x38d6238;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  local_148 = 9;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x50a1b73fa55f0a09;
  local_100 = (byte *)0x38d624b;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  local_148 = 10;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x2aad30dc0af26a2;
  local_100 = (byte *)0x38eb77b;
  local_f8 = 0xf;
  local_f0 = (long *)0x0;
  local_148 = 0xb;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x658f4f26713b1035;
  local_100 = (byte *)0x3914af8;
  local_f8 = 0xb;
  local_f0 = (long *)0x0;
  local_148 = 0xc;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xdacc656485833c5b;
  local_100 = (byte *)0x38afdc3;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  local_148 = 0xd;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xdacc646485833aa8;
  local_100 = (byte *)0x38b9b35;
  local_f8 = 0x12;
  local_f0 = (long *)0x0;
  local_148 = 0xe;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0x4f80515d5169d246;
  local_100 = (byte *)0x389c33d;
  local_f8 = 0xe;
  local_f0 = (long *)0x0;
  local_148 = 0xf;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_108 = (undefined1 *)0xa0e7844a0b32c9b;
  local_100 = (byte *)0x3976000;
  local_f8 = 0x13;
  local_f0 = (long *)0x0;
  local_148 = 0x10;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_f8 = 0xc;
  local_f0 = (long *)0x0;
  local_108 = (undefined1 *)0xc98cffab1e82a3fc;
  local_100 = (byte *)0x394f52f;
  local_148 = 0x11;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_f8 = 0xc;
  local_f0 = (long *)0x0;
  local_108 = (undefined1 *)0xc98cffab1e82a3fc;
  local_100 = (byte *)0x394f52f;
  local_148 = 0x12;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_f8 = 0xc;
  local_f0 = (long *)0x0;
  local_108 = (undefined1 *)0xc98cffab1e82a3fc;
  local_100 = (byte *)0x394f52f;
  local_148 = 0x13;
  FUN_01f1f600(param_1,&local_108,&local_148);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  return;
}


