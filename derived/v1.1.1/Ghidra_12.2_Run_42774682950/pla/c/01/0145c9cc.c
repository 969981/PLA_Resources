/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145c9cc; name: FUN_0145c9cc
 */


void FUN_0145c9cc(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  int param3;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined1 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  int *piVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  long *plVar33;
  byte *pbVar34;
  float fVar35;
  float fVar36;
  ulong local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  undefined1 *local_a8;
  ulong *puStack_a0;
  size_t local_98;
  long *local_90;
  
  if (*(char *)(param_1 + 0x242) != '\0') {
    return;
  }
  *(uint *)(param_1 + 0x248) = param_2;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar22 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar22;
  puVar13 = *(undefined1 **)(lVar22 + 0x60);
  if (puVar13 != (undefined1 *)0x0) {
    uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar18 = (undefined1 *)((ulong)(puVar13 + -1) & 0x12f480e8b0aebe7d);
    }
    else if (&DAT_12f480e8b0aebe7d < puVar13) {
      puVar18 = &DAT_12f480e8b0aebe7d;
    }
    else {
      uVar24 = 0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar24 = 0x12f480e8b0aebe7d / (ulong)puVar13;
      }
      puVar18 = &DAT_12f480e8b0aebe7d + -(uVar24 * (long)puVar13);
    }
    plVar23 = *(long **)(*(long *)(lVar22 + 0x58) + (long)puVar18 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar23[1] == &DAT_12f480e8b0aebe7d) {
            if ((undefined1 *)plVar23[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145cac4;
          }
          else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar13 + -1)) != puVar18)
          goto LAB_0145cbc0;
          plVar23 = (long *)*plVar23;
          uVar31 = 0;
        } while (plVar23 != (long *)0x0);
        goto LAB_0145cc28;
      }
      do {
        puVar27 = (undefined1 *)plVar23[1];
        if (puVar27 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar23[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145cac4;
        }
        else {
          if (puVar13 <= puVar27) {
            uVar17 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar27 / (ulong)puVar13;
            }
            puVar27 = puVar27 + -(uVar17 * (long)puVar13);
          }
          if (puVar27 != puVar18) break;
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
  }
LAB_0145cbc0:
  uVar31 = 0;
LAB_0145cc28:
  lVar2 = param_1 + (ulong)param_2 * 0x40;
  piVar30 = (int *)(lVar2 + 0x78);
  lVar22 = 0;
  *(undefined4 *)(param_1 + 0x244) = uVar31;
  pbVar34 = (byte *)((ulong)&local_128 | 1);
  do {
    iVar11 = *piVar30;
    param3 = (int)lVar22;
    snprintf((char *)&local_128,0x80,"pane_L_guide_%02d",param3);
    puVar13 = &DAT_cbf29ce484222645;
    if ((byte)local_128 != 0) {
      puVar13 = &DAT_cbf29ce484222645;
      pbVar15 = pbVar34;
      bVar4 = (byte)local_128;
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar4 != 0);
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    puVar16 = *(undefined8 **)(lVar19 + 0x148);
    lVar19 = *(long *)(lVar19 + 0x150);
    if ((lVar19 == 0) || ((undefined1 *)*puVar16 == puVar13)) {
      puVar21 = puVar16;
    }
    else {
      lVar26 = lVar19 * 0x30;
      puVar29 = puVar16;
      do {
        lVar26 = lVar26 + -0x30;
        if (lVar26 == 0) goto LAB_0145d274;
        puVar1 = puVar29 + 6;
        puVar21 = puVar29 + 6;
        puVar29 = puVar29 + 6;
      } while ((undefined1 *)*puVar1 != puVar13);
    }
    if (puVar21 == puVar16 + lVar19 * 6) {
LAB_0145d274:
      lVar19 = 0;
    }
    else {
      lVar19 = puVar21[4];
    }
    snprintf((char *)&local_128,0x80,"pane_L_guide_%02d_A_alignment_00",param3);
    uVar32 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148);
    local_98 = strlen((char *)&local_128);
    local_a8 = &DAT_cbf29ce484222645;
    if ((byte)local_128 != 0) {
      local_a8 = &DAT_cbf29ce484222645;
      pbVar15 = pbVar34;
      bVar4 = (byte)local_128;
      do {
        local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar4 != 0);
    }
    puStack_a0 = &local_128;
    local_90 = (long *)0x0;
    uVar32 = FUN_00d648b4(uVar32,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (iVar11 < 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    else {
      snprintf((char *)&local_128,0x80,"pane_L_guide_%02d",param3);
      if ((byte)local_128 != 0) {
        local_a8 = &DAT_cbf29ce484222645;
        pbVar15 = pbVar34;
        bVar4 = (byte)local_128;
        do {
          local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar4 != 0);
        puStack_a0 = &local_128;
        local_98 = 0x7f;
        local_90 = (long *)0x0;
        lVar26 = FUN_011da5dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_a8);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0xe8), lVar26 != 0)) {
          FUN_00235780(lVar26);
          FUN_002350e8(lVar26,"T_hud_guide_00");
        }
      }
      bVar4 = *(byte *)(lVar2 + 0x78 + lVar22 + 0x10);
      lVar26 = *(long *)(lVar2 + 0x78 + lVar22 * 8 + 0x18);
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
      snprintf((char *)&local_128,0x80,"pane_L_guide_%02d_T_hud_guide_00",param3);
      puVar9 = PTR_DAT_04379c88;
      local_a8 = &DAT_cbf29ce484222645;
      if ((byte)local_128 != 0) {
        local_a8 = &DAT_cbf29ce484222645;
        pbVar15 = pbVar34;
        bVar5 = (byte)local_128;
        do {
          local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar5 != 0);
      }
      puStack_a0 = &local_128;
      local_98 = 0x7f;
      local_90 = (long *)0x0;
      plVar23 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
      if (plVar23 != (long *)0x0) {
        plVar33 = plVar23 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar7) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar19 = *(long *)(param_1 + 0x200);
      plVar33 = (long *)plVar23[0x38];
      if (plVar33 == (long *)0x0) {
        lVar14 = *(long *)(lVar19 + 0xb0);
        if (lVar14 != 0) {
          plVar33 = *(long **)(lVar14 + 0x270);
          if (plVar33 != *(long **)(lVar14 + 0x278)) {
            iVar11 = 0;
            do {
              plVar28 = (long *)PTR_DAT_04379c88;
              if (*plVar33 != 0) {
                plVar28 = (long *)(*plVar33 + 0x58);
              }
              if (*plVar28 == lVar26) goto LAB_0145d3ec;
              plVar33 = plVar33 + 1;
              iVar11 = iVar11 + 1;
            } while (*(long **)(lVar14 + 0x278) != plVar33);
          }
        }
        iVar11 = 0;
LAB_0145d3ec:
        FUN_02c2e33c(lVar19,iVar11,0);
      }
      else {
        plVar28 = plVar33 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar7) {
            *(int *)plVar28 = (int)*plVar28 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar14 = *(long *)(lVar19 + 0xb0);
        if (lVar14 != 0) {
          plVar12 = *(long **)(lVar14 + 0x270);
          if (plVar12 != *(long **)(lVar14 + 0x278)) {
            iVar11 = 0;
            do {
              plVar3 = (long *)puVar9;
              if (*plVar12 != 0) {
                plVar3 = (long *)(*plVar12 + 0x58);
              }
              if (*plVar3 == lVar26) goto LAB_0145cf58;
              plVar12 = plVar12 + 1;
              iVar11 = iVar11 + 1;
            } while (*(long **)(lVar14 + 0x278) != plVar12);
          }
        }
        iVar11 = 0;
LAB_0145cf58:
        FUN_02c2e33c(lVar19,iVar11,plVar33);
        do {
          iVar11 = (int)*plVar28 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar7) {
            *(int *)plVar28 = iVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
      lVar19 = plVar23[0x38];
      lVar26 = plVar23[0x39];
      lVar14 = plVar23[0x37];
      *(undefined4 *)(lVar14 + 0x124) = 0;
      *(undefined2 *)(lVar14 + 0x128) = 0;
      *(undefined4 *)(lVar14 + 300) = 0;
      *(undefined4 *)(lVar14 + 0x134) = 0;
      FUN_02c33414(lVar14,lVar19);
      if (*(char *)(lVar26 + 0x7c) != '\0') {
        **(undefined2 **)(lVar26 + 0x58) = 0;
        *(undefined2 *)(lVar26 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar14,lVar26,lVar19,0,0);
      FUN_0283ce7c(plVar23,&local_a8,plVar23[0x39],10);
      plVar33 = plVar23 + 10;
      do {
        iVar11 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      snprintf((char *)&local_128,0x80,"anime_L_guide_%02d_L_btn_00_change",param3);
      local_a8 = &DAT_cbf29ce484222645;
      if ((byte)local_128 != 0) {
        uVar17 = (ulong)(uint)(byte)local_128;
        local_a8 = &DAT_cbf29ce484222645;
        pbVar15 = pbVar34;
        do {
          local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar17) * 0x100000001b3);
          bVar5 = *pbVar15;
          uVar17 = (ulong)bVar5;
          pbVar15 = pbVar15 + 1;
        } while (bVar5 != 0);
      }
      puStack_a0 = &local_128;
      local_98 = 0x7f;
      local_90 = (long *)0x0;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
      if (lVar19 != 0) {
        FUN_0283b1e8(lVar19,&local_a8);
      }
      uVar17 = local_128 & 0xff;
      puVar13 = &DAT_cbf29ce484222645;
      if ((int)uVar17 != 0) {
        puVar13 = &DAT_cbf29ce484222645;
        pbVar15 = pbVar34;
        do {
          puVar13 = (undefined1 *)(((ulong)puVar13 ^ uVar17) * 0x100000001b3);
          bVar5 = *pbVar15;
          uVar17 = (ulong)bVar5;
          pbVar15 = pbVar15 + 1;
        } while (bVar5 != 0);
      }
      puStack_a0 = &local_128;
      local_98 = 0x7f;
      local_90 = (long *)0x0;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
      local_a8 = puVar13;
      if (lVar19 != 0) {
        fVar36 = (float)bVar4;
        fVar35 = (float)FUN_0283b914(lVar19,&local_a8);
        lVar19 = *(long *)(param_1 + 0x10);
        if (fVar36 <= fVar35) {
          fVar35 = fVar36;
        }
        lVar26 = *(long *)(lVar19 + 0x148);
        if (lVar26 != 0) {
          puVar16 = *(undefined8 **)(lVar26 + 0x1a0);
          lVar14 = *(long *)(lVar26 + 0x1a8);
          if ((lVar14 == 0) || ((undefined1 *)*puVar16 == puVar13)) {
            puVar21 = puVar16;
          }
          else {
            lVar20 = lVar14 * 0x30;
            puVar29 = puVar16;
            do {
              lVar20 = lVar20 + -0x30;
              if (lVar20 == 0) goto LAB_0145d1b4;
              puVar1 = puVar29 + 6;
              puVar21 = puVar29 + 6;
              puVar29 = puVar29 + 6;
            } while ((undefined1 *)*puVar1 != puVar13);
          }
          if (puVar21 == puVar16 + lVar14 * 6) {
LAB_0145d1b4:
            if (lVar26 == 0) goto LAB_0145d1d0;
            FUN_0283b1e8(lVar26,&local_a8);
          }
          else {
            uVar17 = (ulong)*(uint *)(puVar21 + 5);
            if (((*(uint *)(puVar21[4] + 0x278) <= *(uint *)(puVar21 + 5)) ||
                (lVar14 = *(long *)(puVar21[4] + 600), *(char *)(lVar14 + uVar17 * 0x48 + 8) == '\0'
                )) || (*(char *)(lVar14 + uVar17 * 0x48 + 0xb) == '\0')) goto LAB_0145d1b4;
            plVar23 = (long *)(lVar14 + uVar17 * 0x48 + 0x10);
            lVar26 = *plVar23;
            if ((lVar26 != 0) && (*(char *)(lVar14 + uVar17 * 0x48 + 9) == '\0')) {
              fVar36 = *(float *)(lVar26 + 0x20);
              uVar10 = FUN_00227728();
              uVar17 = FUN_00227744(*plVar23);
              if (((float)uVar10 <= fVar36) && ((uVar17 & 1) == 0)) {
                lVar26 = *(long *)(lVar19 + 0x148);
                goto LAB_0145d1b4;
              }
            }
          }
          FUN_0283b748(fVar35,*(undefined8 *)(lVar19 + 0x148),&local_a8);
        }
      }
LAB_0145d1d0:
      snprintf((char *)&local_128,0x80,"pane_L_guide_%02d_L_btn_01",param3);
      puVar13 = &DAT_cbf29ce484222645;
      if ((byte)local_128 != 0) {
        puVar13 = &DAT_cbf29ce484222645;
        pbVar15 = pbVar34;
        bVar4 = (byte)local_128;
        do {
          puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar4 != 0);
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
      puVar16 = *(undefined8 **)(lVar19 + 0x148);
      lVar19 = *(long *)(lVar19 + 0x150);
      if ((lVar19 != 0) && ((undefined1 *)*puVar16 != puVar13)) {
        puVar21 = puVar16 + lVar19 * 6;
        lVar19 = lVar19 * 0x30;
        do {
          lVar19 = lVar19 + -0x30;
          if (lVar19 == 0) {
            puVar16 = puVar21;
            break;
          }
          puVar1 = puVar16 + 6;
          puVar29 = puVar16 + 6;
          puVar16 = puVar1;
        } while ((undefined1 *)*puVar29 != puVar13);
      }
      *(byte *)(puVar16[4] + 0x58) = *(byte *)(puVar16[4] + 0x58) & 0xfe;
      FUN_00256608(uVar32);
    }
    piVar30 = piVar30 + 1;
    lVar22 = lVar22 + 1;
    if (piVar30 == (int *)(lVar2 + 0x88)) {
      local_128 = 0xaa9746b0d29093b6;
      pcStack_120 = "pane_A_alignment_00";
      local_118 = 0x13;
      local_110 = (long *)0x0;
      uVar32 = FUN_00d648b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_128);
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      FUN_00256608(uVar32);
      *(ulong *)(param_1 + 0x250) = *(ulong *)(param_1 + 0x250) | 1;
      *(undefined1 *)(param_1 + 0x240) = 1;
      return;
    }
  } while( true );
LAB_0145cac4:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar33 = plVar23 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar7) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar17 = plVar23[0x14];
    if (uVar17 == 0) {
      uVar31 = 0;
    }
    else {
      uVar24 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar17 - 1 & 0x966c3e0d71121d8f;
      }
      else if (uVar17 < 0x966c3e0d71121d90) {
        uVar25 = 0;
        if (uVar17 != 0) {
          uVar25 = 0x966c3e0d71121d8f / uVar17;
        }
        uVar25 = 0x966c3e0d71121d8f - uVar25 * uVar17;
      }
      else {
        uVar25 = 0x966c3e0d71121d8f;
      }
      plVar28 = *(long **)(plVar23[0x13] + uVar25 * 8);
      if (plVar28 == (long *)0x0) {
        uVar31 = 0;
      }
      else {
        plVar28 = (long *)*plVar28;
        if (plVar28 == (long *)0x0) {
          uVar31 = 0;
        }
        else if (uVar24 < 2) {
          do {
            if (plVar28[1] == 0x966c3e0d71121d8f) {
              if (plVar28[2] == -0x6993c1f28eede271) goto LAB_0145cc10;
            }
            else if ((plVar28[1] & uVar17 - 1) != uVar25) {
              uVar31 = 0;
              break;
            }
            plVar28 = (long *)*plVar28;
            uVar31 = 0;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar28[1];
            if (uVar24 == 0x966c3e0d71121d8f) {
              if (plVar28[2] == -0x6993c1f28eede271) goto LAB_0145cc10;
            }
            else {
              if (uVar17 <= uVar24) {
                uVar8 = 0;
                if (uVar17 != 0) {
                  uVar8 = uVar24 / uVar17;
                }
                uVar24 = uVar24 - uVar8 * uVar17;
              }
              if (uVar24 != uVar25) {
                uVar31 = 0;
                goto LAB_0145cc14;
              }
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
          uVar31 = 0;
        }
      }
    }
    goto LAB_0145cc14;
  }
  goto LAB_0145cbc0;
LAB_0145cc10:
  uVar31 = (undefined4)plVar28[6];
LAB_0145cc14:
  do {
    iVar11 = (int)*plVar33 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar7) {
      *(int *)plVar33 = iVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar23 + 0x10))();
  }
  goto LAB_0145cc28;
}


