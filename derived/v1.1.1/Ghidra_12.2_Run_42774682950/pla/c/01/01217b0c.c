/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01217b0c; name: FUN_01217b0c
 */


void FUN_01217b0c(long param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  undefined1 uVar33;
  float fVar34;
  long *local_e8;
  long *local_e0;
  long local_d8;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  char *local_90;
  long local_88;
  long *local_80;
  
  plVar32 = *(long **)(param_1 + 0x2c8);
  if (plVar32 != (long *)0x0) {
    plVar28 = plVar32 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar28 = (long *)plVar32[0x37];
  if (plVar28 != (long *)0x0) {
    lVar26 = plVar28[0xb];
    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_0121aa14;
    if (*(long *)(lVar26 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
      *(undefined8 *)(lVar26 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar26 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = *piVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar26 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar26;
  plVar31 = *(long **)(lVar26 + 0x248);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[0xb];
    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) {
LAB_0121aa14:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar26 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
      *(undefined8 *)(lVar26 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar26 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = *piVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar20 = (long *)(param_1 + 0x2c8);
  lVar26 = FUN_0121fbdc(param_1,param_2,*(undefined1 *)((long)plVar31 + 0x4a9),param_3);
  if ((lVar26 != 0) && ((param_4 & 1) == 0)) {
    plVar29 = (long *)(lVar26 + 0x98);
    iVar9 = FUN_02c6849c(*plVar29);
    if (iVar9 != 0) {
      FUN_01217724(param_1,param_2,param_3,0);
      local_d8 = -0x3367ff61ecf23f5a;
      local_d0 = "pane_T_nn_00";
      local_c8 = 0xc;
      local_c0 = (long *)0x0;
      FUN_0121ac84(param_1,0xf3a3439af010602,&local_d8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      uVar14 = *(undefined8 *)(param_1 + 0x4c8);
      uVar10 = FUN_02c73a80(*plVar29);
      FUN_0284e6a0(uVar14,uVar10,0);
      local_d8 = -0x34057ada9df3b31d;
      local_d0 = "pane_L_icon_sick_00_P_sick_00";
      local_c8 = 0x1d;
      local_c0 = (long *)0x0;
      plVar30 = *(long **)(param_1 + 0x508);
      if (plVar30 != (long *)0x0) {
        plVar21 = plVar30 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = (int)*plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (s_pane_L_icon_sick_00_P_sick_00_038b79e3[0] == '\0') {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_00d63240(*plVar20,&local_d8);
      }
      bVar6 = FUN_0284c170(plVar30,lVar26,uVar14,1,0,0,0);
      if (plVar30 == (long *)0x0) {
LAB_01217d54:
        if ((bVar6 & 1) == 0) goto LAB_01217d5c;
LAB_01219d14:
        lVar24 = *plVar20;
        if (lVar24 != 0) {
          plVar30 = *(long **)(lVar24 + 0x1a0);
          lVar15 = *(long *)(lVar24 + 0x1a8);
          if ((lVar15 == 0) || (*plVar30 == -0x5a12e4023b391115)) {
            plVar21 = plVar30;
          }
          else {
            lVar23 = lVar15 * 0x30;
            plVar22 = plVar30;
            do {
              lVar23 = lVar23 + -0x30;
              if (lVar23 == 0) goto LAB_01219f4c;
              plVar27 = plVar22 + 6;
              plVar21 = plVar22 + 6;
              plVar22 = plVar22 + 6;
            } while (*plVar27 != -0x5a12e4023b391115);
          }
          if (plVar21 != plVar30 + lVar15 * 6) {
            lVar15 = plVar21[4];
            uVar11 = *(uint *)(plVar21 + 4 + 1);
            uVar16 = (ulong)uVar11;
            if (((uVar11 < *(uint *)(lVar15 + 0x278)) &&
                (lVar15 = *(long *)(lVar15 + 600), *(char *)(lVar15 + uVar16 * 0x48 + 8) != '\0'))
               && (*(char *)(lVar15 + uVar16 * 0x48 + 0xb) != '\0')) {
              plVar30 = (long *)(lVar15 + uVar16 * 0x48 + 0x10);
              lVar24 = *plVar30;
              if ((lVar24 != 0) && (*(char *)(lVar15 + uVar16 * 0x48 + 9) == '\0')) {
                fVar34 = *(float *)(lVar24 + 0x20);
                uVar7 = FUN_00227728();
                uVar16 = FUN_00227744(*plVar30);
                if (((float)uVar7 <= fVar34) && ((uVar16 & 1) == 0)) {
                  lVar24 = *plVar20;
                  goto LAB_01219f4c;
                }
              }
              goto LAB_01217d5c;
            }
          }
        }
LAB_01219f4c:
        local_98 = (long *)0xa5ed1bfdc4c6eeeb;
        local_90 = "anime_L_icon_sick_00_flashing";
        local_88 = 0x1d;
        local_80 = (long *)0x0;
        if (lVar24 == 0) goto LAB_01217d5c;
        FUN_0283b1e8(lVar24,&local_98);
        plVar30 = (long *)plVar32[0x29];
        lVar24 = plVar32[0x2a];
        if (lVar24 != 0) goto LAB_01217d64;
      }
      else {
        plVar21 = plVar30 + 10;
        do {
          iVar9 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != 0) goto LAB_01217d54;
        (**(code **)(*plVar30 + 0x10))(plVar30);
        if ((bVar6 & 1) != 0) goto LAB_01219d14;
LAB_01217d5c:
        plVar30 = (long *)plVar32[0x29];
        lVar24 = plVar32[0x2a];
        if (lVar24 != 0) {
LAB_01217d64:
          if (*plVar30 != -0x74e00ea18ea43178) {
            plVar21 = plVar30 + lVar24 * 6;
            lVar24 = lVar24 * 0x30;
            do {
              lVar24 = lVar24 + -0x30;
              if (lVar24 == 0) {
                plVar30 = plVar21;
                break;
              }
              plVar27 = plVar30 + 6;
              plVar22 = plVar30 + 6;
              plVar30 = plVar27;
            } while (*plVar22 != -0x74e00ea18ea43178);
          }
        }
      }
      *(byte *)(plVar30[4] + 0x58) = *(byte *)(plVar30[4] + 0x58) & 0xfe | bVar6 & 1;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      FUN_0121af58(param_1,lVar26);
      if (((DAT_043bf148 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043bf148), iVar9 != 0)) {
        DAT_043bf028 = 0xb9864089ead9ee32;
        DAT_043bf030 = "anime_L_icon_generation_00_generation_02";
        DAT_043bf048 = 0xb9864189ead9efe5;
        DAT_043bf050 = "anime_L_icon_generation_00_generation_03";
        DAT_043bf038 = 0x28;
        DAT_043bf040 = 0;
        DAT_043bf068 = 0xb9863f89ead9ec7f;
        DAT_043bf070 = "anime_L_icon_generation_00_generation_01";
        DAT_043bf058 = 0x28;
        DAT_043bf060 = 0;
        DAT_043bf088 = 0xb9863e89ead9eacc;
        DAT_043bf090 = "anime_L_icon_generation_00_generation_00";
        DAT_043bf078 = 0x28;
        DAT_043bf080 = 0;
        DAT_043bf0a8 = 0xb9863c89ead9e766;
        DAT_043bf0b0 = "anime_L_icon_generation_00_generation_06";
        DAT_043bf098 = 0x28;
        DAT_043bf0a0 = 0;
        DAT_043bf0c8 = 0xb9863b89ead9e5b3;
        DAT_043bf0d0 = "anime_L_icon_generation_00_generation_05";
        DAT_043bf0b8 = 0x28;
        DAT_043bf0c0 = 0;
        DAT_043bf0e8 = 0xb9863a89ead9e400;
        DAT_043bf0f0 = "anime_L_icon_generation_00_generation_04";
        DAT_043bf0d8 = 0x28;
        DAT_043bf0e0 = 0;
        DAT_043bf108 = 0xb9863d89ead9e919;
        DAT_043bf110 = "anime_L_icon_generation_00_generation_07";
        DAT_043bf0f8 = 0x28;
        DAT_043bf100 = 0;
        DAT_043bf118 = 0x28;
        DAT_043bf120 = 0;
        DAT_043bf128 = 0xb9864689ead9f864;
        DAT_043bf130 = "anime_L_icon_generation_00_generation_08";
        DAT_043bf138 = 0x28;
        DAT_043bf140 = 0;
        FUN_00100250(&LAB_0121b110,0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043bf148);
        lVar24 = *plVar20;
      }
      else {
        lVar24 = *plVar20;
      }
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf028);
        if (*plVar20 != 0) {
          FUN_0283b430(*plVar20,&DAT_043bf048);
          if (*plVar20 != 0) {
            FUN_0283b430(*plVar20,&DAT_043bf068);
            if (*plVar20 != 0) {
              FUN_0283b430(*plVar20,&DAT_043bf088);
              if (*plVar20 != 0) {
                FUN_0283b430(*plVar20,&DAT_043bf0a8);
                if (*plVar20 != 0) {
                  FUN_0283b430(*plVar20,&DAT_043bf0c8);
                  if (*plVar20 != 0) {
                    FUN_0283b430(*plVar20,&DAT_043bf0e8);
                    if (*plVar20 != 0) {
                      FUN_0283b430(*plVar20,&DAT_043bf108);
                      if (*plVar20 != 0) {
                        FUN_0283b430(*plVar20,&DAT_043bf128);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar6 = FUN_02c71158(*plVar29);
      if ((byte)(bVar6 - 0x18) < 6) {
        lVar24 = 0;
        lVar15 = *plVar20;
      }
      else if ((byte)(bVar6 - 0x1e) < 4) {
        lVar24 = 1;
        lVar15 = *plVar20;
      }
      else if (bVar6 == 0x22) {
        lVar24 = 4;
        lVar15 = *plVar20;
      }
      else if ((byte)(bVar6 - 0x23) < 7) {
        lVar24 = 3;
        lVar15 = *plVar20;
      }
      else if ((bVar6 & 0xfe) == 0x2c) {
        lVar24 = 6;
        lVar15 = *plVar20;
      }
      else if ((bVar6 & 0xfe) == 0x2a) {
        lVar24 = 5;
        lVar15 = *plVar20;
      }
      else if (bVar6 == 0x2f) {
        lVar24 = 7;
        lVar15 = *plVar20;
      }
      else {
        lVar24 = 8;
        if ((bVar6 & 0xfe) != 0x30) {
          lVar24 = 2;
        }
        lVar15 = *plVar20;
      }
      if (lVar15 != 0) {
        FUN_0283b1e8(lVar15,&DAT_043bf028 + lVar24 * 4);
      }
      uVar16 = FUN_02c6cf3c(*plVar29);
      if (((uVar16 & 1) == 0) && ((*(ushort *)(*(long *)(*plVar29 + 0x10) + 4) >> 2 & 1) == 0)) {
        local_d8 = 0x5c36232cbae1c540;
        local_d0 = "anime_status_default";
        local_c8 = 0x14;
        local_c0 = (long *)0x0;
        lVar24 = 0;
        if (*plVar20 != 0) {
          FUN_0283b1e8(*plVar20,&local_d8);
          lVar24 = *plVar20;
        }
        local_d8 = 0x22ba2a9568592528;
        local_d0 = "anime_L_icon_seibetu_00_switch";
        local_c8 = 0x1e;
        local_c0 = (long *)0x0;
        if (lVar24 != 0) {
          FUN_0283b1e8(lVar24,&local_d8);
        }
        local_d8 = 0x22ba2a9568592528;
        local_d0 = "anime_L_icon_seibetu_00_switch";
        local_c8 = 0x1e;
        local_c0 = (long *)0x0;
        iVar9 = FUN_01090c00(lVar26);
        lVar24 = *plVar20;
        if (lVar24 != 0) {
          plVar30 = *(long **)(lVar24 + 0x1a0);
          lVar15 = *(long *)(lVar24 + 0x1a8);
          if ((lVar15 == 0) || (*plVar30 == 0x22ba2a9568592528)) {
            plVar21 = plVar30;
          }
          else {
            lVar23 = lVar15 * 0x30;
            plVar22 = plVar30;
            do {
              lVar23 = lVar23 + -0x30;
              if (lVar23 == 0) goto LAB_01218140;
              plVar27 = plVar22 + 6;
              plVar21 = plVar22 + 6;
              plVar22 = plVar22 + 6;
            } while (*plVar27 != 0x22ba2a9568592528);
          }
          plVar30 = plVar30 + lVar15 * 6;
          if (plVar21 == plVar30) {
            plVar22 = (long *)0x0;
            if (plVar21 != plVar30) goto LAB_012180c0;
LAB_01218140:
            if (lVar24 == 0) goto LAB_0121815c;
            FUN_0283b1e8(lVar24,&local_d8);
          }
          else {
            plVar22 = plVar21 + 4;
            if (plVar21 == plVar30) goto LAB_01218140;
LAB_012180c0:
            uVar16 = (ulong)*(uint *)(plVar22 + 1);
            if (((*(uint *)(*plVar22 + 0x278) <= *(uint *)(plVar22 + 1)) ||
                (lVar15 = *(long *)(*plVar22 + 600), *(char *)(lVar15 + uVar16 * 0x48 + 8) == '\0'))
               || (*(char *)(lVar15 + uVar16 * 0x48 + 0xb) == '\0')) goto LAB_01218140;
            plVar30 = (long *)(lVar15 + uVar16 * 0x48 + 0x10);
            lVar24 = *plVar30;
            if ((lVar24 != 0) && (*(char *)(lVar15 + uVar16 * 0x48 + 9) == '\0')) {
              fVar34 = *(float *)(lVar24 + 0x20);
              uVar7 = FUN_00227728();
              uVar16 = FUN_00227744(*plVar30);
              if (((float)uVar7 <= fVar34) && ((uVar16 & 1) == 0)) {
                lVar24 = *plVar20;
                goto LAB_01218140;
              }
            }
          }
          FUN_0283b748((float)iVar9,*plVar20,&local_d8);
        }
LAB_0121815c:
        uVar11 = FUN_02c68b0c(*plVar29);
        uVar12 = FUN_02c70958(*plVar29);
        plVar30 = (long *)plVar32[0x29];
        lVar24 = plVar32[0x2a];
        if ((lVar24 != 0) && (*plVar30 != -0x7b58b78759316a2f)) {
          plVar21 = plVar30 + lVar24 * 6;
          lVar24 = lVar24 * 0x30;
          do {
            lVar24 = lVar24 + -0x30;
            if (lVar24 == 0) {
              plVar30 = plVar21;
              break;
            }
            plVar27 = plVar30 + 6;
            plVar22 = plVar30 + 6;
            plVar30 = plVar27;
          } while (*plVar22 != -0x7b58b78759316a2f);
        }
        *(byte *)(plVar30[4] + 0x58) =
             *(byte *)(plVar30[4] + 0x58) & 0xfe |
             (uVar11 & 0xfff0 ^ uVar11 >> 0x10 ^ uVar12 >> 0x10 ^ uVar12 & 0xfff0) < 0x10;
        uVar10 = FUN_02c5fb2c(lVar26);
        FUN_02c395d0(plVar28,0,uVar10,3,0,1);
        local_d8 = -0xe69b3a86cecf858;
        local_d0 = "pane_T_lv_00";
        local_c8 = 0xc;
        local_c0 = (long *)0x0;
        FUN_0121ac84(param_1,0xc8f858d01388e617,&local_d8);
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        uVar11 = FUN_02c6849c(*plVar29);
        local_b0 = 0;
        uStack_a8 = 0;
        local_d8 = 0;
        local_c0 = (long *)0x0;
        uStack_b8 = 0;
        local_d0 = (char *)0x0;
        local_c8 = 0;
        if ((int)uVar11 < 0x38a) {
          plVar30 = *(long **)(&DAT_043f23a0)[(ulong)uVar11 * 4];
          lVar24 = ((long *)(&DAT_043f23a0)[(ulong)uVar11 * 4])[1] - (long)plVar30;
          if (lVar24 != 0) {
            bVar6 = 0;
            bVar25 = 0;
            uVar16 = 0;
            lVar15 = *plVar30;
            while( true ) {
              if (lVar15 != 0) {
                bVar6 = bVar6 + 1;
                *(short *)((long)&local_d8 + (ulong)bVar25 * 2) = (short)uVar16;
                bVar25 = bVar6;
              }
              uVar16 = uVar16 + 1;
              if ((ulong)(lVar24 >> 3) <= uVar16) break;
              lVar15 = plVar30[uVar16];
            }
            if (bVar6 != 0) {
              uVar16 = (ulong)bVar6;
              plVar30 = &local_d8;
              do {
                piVar17 = (int *)FUN_02c53064(uVar11,(short)*plVar30);
                if (((0x66 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
                    (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x33], uVar19 != 0
                    )) && (sVar3 = *(short *)((long)piVar17 + uVar19), sVar3 != 0)) {
                  FUN_02c395d0(plVar28,0,sVar3,3,2,1);
                  local_d8 = 0x4866ede6e9c029fb;
                  local_d0 = "pane_T_pokedex_num_00";
                  local_c8 = 0x15;
                  local_c0 = (long *)0x0;
                  FUN_0121ac84(param_1,0x79f5e800afa0ae87,&local_d8);
                  if (local_c0 != (long *)0x0) {
                    (**(code **)(*local_c0 + 0x20))();
                  }
                  plVar30 = (long *)plVar32[0x29];
                  lVar24 = plVar32[0x2a];
                  if ((lVar24 == 0) || (*plVar30 == 0x4866ede6e9c029fb)) goto LAB_01219b24;
                  plVar21 = plVar30 + lVar24 * 6;
                  lVar24 = lVar24 * 0x30;
                  goto LAB_01219b08;
                }
                uVar16 = uVar16 - 1;
                plVar30 = (long *)((long)plVar30 + 2);
              } while (uVar16 != 0);
            }
          }
        }
        plVar30 = (long *)plVar32[0x29];
        lVar24 = plVar32[0x2a];
        if ((lVar24 != 0) && (*plVar30 != 0x4866ede6e9c029fb)) {
          plVar21 = plVar30 + lVar24 * 6;
          lVar24 = lVar24 * 0x30;
          do {
            lVar24 = lVar24 + -0x30;
            if (lVar24 == 0) {
              plVar30 = plVar21;
              break;
            }
            plVar27 = plVar30 + 6;
            plVar22 = plVar30 + 6;
            plVar30 = plVar27;
          } while (*plVar22 != 0x4866ede6e9c029fb);
        }
        lVar24 = plVar30[4];
        bVar6 = *(byte *)(lVar24 + 0x58) & 0xfe;
        goto LAB_01218314;
      }
      local_d8 = -0x46128ace91d23714;
      local_d0 = "anime_status_egg";
      local_c8 = 0x10;
      local_c0 = (long *)0x0;
      lVar26 = 0;
      if (*plVar20 != 0) {
        FUN_0283b1e8(*plVar20,&local_d8);
        lVar26 = *plVar20;
      }
      local_d8 = 0x22ba2a9568592528;
      local_d0 = "anime_L_icon_seibetu_00_switch";
      local_c8 = 0x1e;
      local_c0 = (long *)0x0;
      lVar24 = 0;
      if (lVar26 != 0) {
        FUN_0283b1e8(lVar26,&local_d8);
        lVar24 = *plVar20;
      }
      local_d8 = 0x22ba2a9568592528;
      local_d0 = "anime_L_icon_seibetu_00_switch";
      local_c8 = 0x1e;
      local_c0 = (long *)0x0;
      if (lVar24 != 0) {
        plVar29 = *(long **)(lVar24 + 0x1a0);
        lVar26 = *(long *)(lVar24 + 0x1a8);
        if ((lVar26 == 0) || (*plVar29 == 0x22ba2a9568592528)) {
          plVar30 = plVar29;
        }
        else {
          lVar15 = lVar26 * 0x30;
          plVar21 = plVar29;
          do {
            lVar15 = lVar15 + -0x30;
            if (lVar15 == 0) goto LAB_0121a3b4;
            plVar22 = plVar21 + 6;
            plVar30 = plVar21 + 6;
            plVar21 = plVar21 + 6;
          } while (*plVar22 != 0x22ba2a9568592528);
        }
        plVar29 = plVar29 + lVar26 * 6;
        if (plVar30 == plVar29) {
          plVar21 = (long *)0x0;
          if (plVar30 != plVar29) goto LAB_0121a334;
LAB_0121a3b4:
          if (lVar24 == 0) goto LAB_0121961c;
          FUN_0283b1e8(lVar24,&local_d8);
        }
        else {
          plVar21 = plVar30 + 4;
          if (plVar30 == plVar29) goto LAB_0121a3b4;
LAB_0121a334:
          uVar16 = (ulong)*(uint *)(plVar21 + 1);
          if (((*(uint *)(*plVar21 + 0x278) <= *(uint *)(plVar21 + 1)) ||
              (lVar26 = *(long *)(*plVar21 + 600), *(char *)(lVar26 + uVar16 * 0x48 + 8) == '\0'))
             || (*(char *)(lVar26 + uVar16 * 0x48 + 0xb) == '\0')) goto LAB_0121a3b4;
          plVar29 = (long *)(lVar26 + uVar16 * 0x48 + 0x10);
          lVar24 = *plVar29;
          if ((lVar24 != 0) && (*(char *)(lVar26 + uVar16 * 0x48 + 9) == '\0')) {
            fVar34 = *(float *)(lVar24 + 0x20);
            uVar7 = FUN_00227728();
            uVar16 = FUN_00227744(*plVar29);
            if (((float)uVar7 <= fVar34) && ((uVar16 & 1) == 0)) {
              lVar24 = *plVar20;
              goto LAB_0121a3b4;
            }
          }
        }
        FUN_0283b748(0x40000000,*plVar20,&local_d8);
      }
      goto LAB_0121961c;
    }
  }
  if (*(char *)(param_1 + 0x1670) != '\0') {
    local_d8 = 0x54e74f6cfcda42fc;
    local_d0 = "anime_status_in";
    local_c8 = 0xf;
    local_c0 = (long *)0x0;
    lVar26 = 0;
    if (*plVar20 != 0) {
      FUN_0283b430(*plVar20,&local_d8);
      lVar26 = *plVar20;
    }
    local_d8 = -0x137481ce75891b77;
    local_d0 = "anime_status_out";
    local_c8 = 0x10;
    local_c0 = (long *)0x0;
    if (lVar26 != 0) {
      FUN_0283b1e8(lVar26,&local_d8);
    }
    *(char *)(param_1 + 0x1670) = '\0';
  }
  goto joined_r0x01219cc0;
  while (plVar27 = plVar30 + 6, plVar22 = plVar30 + 6, plVar30 = plVar27,
        *plVar22 != 0x4866ede6e9c029fb) {
LAB_01219b08:
    lVar24 = lVar24 + -0x30;
    if (lVar24 == 0) {
      plVar30 = plVar21;
      break;
    }
  }
LAB_01219b24:
  lVar24 = plVar30[4];
  bVar6 = *(byte *)(lVar24 + 0x58) | 1;
LAB_01218314:
  *(byte *)(lVar24 + 0x58) = bVar6;
  uVar10 = FUN_02c6849c(*plVar29);
  uVar16 = (**(code **)(*plVar28 + 0x50))(plVar28,plVar28[0xd],uVar10);
  if ((int)plVar28[0x12] != 0) {
    lVar24 = plVar28[0xd];
    *(ulong *)(plVar28[0x13] + 8) = uVar16 & 0xffff | 0x20000;
    plVar30 = (long *)plVar28[0x13];
    lVar15 = *plVar30;
    if (*(char *)(lVar15 + 0x7c) != '\0') {
      uVar8 = FUN_02c30580(*(undefined8 *)(lVar15 + 0x58),*(undefined8 *)(lVar24 + 0x58),
                           *(undefined2 *)(lVar15 + 0x78));
      *(undefined2 *)(lVar15 + 0x7a) = uVar8;
      plVar30 = (long *)plVar28[0x13];
    }
    *(undefined2 *)(plVar30 + 2) = 0;
    *(ushort *)(plVar28[0x13] + 0x12) = *(ushort *)(plVar28[0x13] + 0x12) & 0xfffe;
  }
  local_d8 = 0x2b42d5b6c65f6572;
  local_d0 = "pane_T_pokerace_00";
  local_c8 = 0x12;
  local_c0 = (long *)0x0;
  FUN_0121ac84(param_1,0x738145784feacf19,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  FUN_010c6694(plVar28,0,lVar26);
  local_d8 = 0x75f3e38249bccdc4;
  local_d0 = "pane_T_name_parent_00";
  local_c8 = 0x15;
  local_c0 = (long *)0x0;
  FUN_0121ac84(param_1,0xc02118d97bf81d7b,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  bVar6 = FUN_02c6d5b0(*plVar29);
  plVar30 = (long *)plVar32[0x29];
  lVar24 = plVar32[0x2a];
  if ((lVar24 != 0) && (*plVar30 != -0x522cbcb91dd3166)) {
    plVar21 = plVar30 + lVar24 * 6;
    lVar24 = lVar24 * 0x30;
    do {
      lVar24 = lVar24 + -0x30;
      if (lVar24 == 0) {
        plVar30 = plVar21;
        break;
      }
      plVar27 = plVar30 + 6;
      plVar22 = plVar30 + 6;
      plVar30 = plVar27;
    } while (*plVar22 != -0x522cbcb91dd3166);
  }
  *(byte *)(plVar30[4] + 0x58) = *(byte *)(plVar30[4] + 0x58) & 0xfe | bVar6 & 1;
  lVar15 = *plVar29;
  lVar24 = nn::os::GetCurrentThread();
  plVar30 = (long *)(lVar15 + 0x30);
  do {
    if (*plVar30 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x24));
        while (*plVar30 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar5) {
            *plVar30 = lVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01218500;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar5) {
      *plVar30 = lVar24;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01218500:
  uVar11 = FUN_02c69ba8(lVar15);
  *(undefined8 *)(lVar15 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x24));
  local_d8 = 0x5ad1608d3ced1d6a;
  local_d0 = "pane_P_icon_lang_00";
  local_c8 = 0x13;
  local_c0 = (long *)0x0;
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  plVar21 = local_c0;
  lVar15 = local_d8;
  lVar23 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar23;
  plVar30 = (long *)plVar32[0x29];
  lVar24 = plVar32[0x2a];
  plVar22 = plVar30 + lVar24 * 6;
  if (uVar11 == *(byte *)(lVar23 + 0x50)) {
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
    }
    plVar27 = plVar30;
    if ((lVar24 != 0) && (*plVar30 != lVar15)) {
      lVar24 = lVar24 * 0x30;
      do {
        lVar24 = lVar24 + -0x30;
        plVar27 = plVar22;
        if (lVar24 == 0) break;
        plVar18 = plVar30 + 6;
        plVar30 = plVar30 + 6;
        plVar27 = plVar30;
      } while (*plVar18 != lVar15);
    }
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
  }
  else {
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
    }
    plVar27 = plVar30;
    if ((lVar24 != 0) && (*plVar30 != lVar15)) {
      lVar24 = lVar24 * 0x30;
      do {
        lVar24 = lVar24 + -0x30;
        plVar27 = plVar22;
        if (lVar24 == 0) break;
        plVar18 = plVar30 + 6;
        plVar30 = plVar30 + 6;
        plVar27 = plVar30;
      } while (*plVar18 != lVar15);
    }
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) | 1;
    if ((*local_d0 != '\0') && (lVar24 = FUN_00d63240(*plVar20,&local_d8), lVar24 != 0)) {
      plVar30 = *(long **)(param_1 + 0x518);
      if (plVar30 == (long *)0x0) {
        FUN_02838ee0(0,uVar11,lVar24,0,0);
      }
      else {
        plVar21 = plVar30 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = (int)*plVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_02838ee0(plVar30,uVar11,lVar24,0,0);
        do {
          iVar9 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
    }
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  uVar11 = FUN_02c63ba8(lVar26);
  uVar12 = FUN_02c63ce0(lVar26);
  plVar30 = *(long **)(param_1 + 0x510);
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d8 = 0x18ff3c0202efea8a;
  local_d0 = "pane_P_icon_type_00";
  local_c8 = 0x13;
  local_c0 = (long *)0x0;
  lVar24 = FUN_00d63240(*plVar20,&local_d8);
  if (lVar24 != 0) {
    FUN_0284fbb0(plVar30,uVar11,1,lVar24,0,0);
    plVar22 = local_c0;
    lVar15 = local_d8;
    plVar21 = (long *)plVar32[0x29];
    lVar24 = plVar32[0x2a];
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
    }
    plVar27 = plVar21;
    if ((lVar24 != 0) && (*plVar21 != lVar15)) {
      lVar23 = lVar24 * 0x30;
      plVar18 = plVar21 + lVar24 * 6;
      do {
        lVar23 = lVar23 + -0x30;
        plVar27 = plVar18;
        if (lVar23 == 0) break;
        plVar1 = plVar21 + 6;
        plVar21 = plVar21 + 6;
        plVar27 = plVar21;
      } while (*plVar1 != lVar15);
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) | 1;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  local_d8 = 0x18ff3d0202efec3d;
  local_d0 = "pane_P_icon_type_01";
  local_c8 = 0x13;
  local_c0 = (long *)0x0;
  lVar15 = FUN_00d63240(*plVar20,&local_d8);
  plVar21 = local_c0;
  lVar24 = local_d8;
  if (lVar15 != 0) {
    if ((uVar11 & 0xff) == (uVar12 & 0xff)) {
      plVar22 = (long *)plVar32[0x29];
      lVar15 = plVar32[0x2a];
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      plVar27 = plVar22;
      if ((lVar15 != 0) && (*plVar22 != lVar24)) {
        lVar23 = lVar15 * 0x30;
        plVar18 = plVar22 + lVar15 * 6;
        do {
          lVar23 = lVar23 + -0x30;
          plVar27 = plVar18;
          if (lVar23 == 0) break;
          plVar1 = plVar22 + 6;
          plVar22 = plVar22 + 6;
          plVar27 = plVar22;
        } while (*plVar1 != lVar24);
      }
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      lVar24 = plVar27[4];
      bVar6 = *(byte *)(lVar24 + 0x58) & 0xfe;
    }
    else {
      FUN_0284fbb0(plVar30,uVar12,1,lVar15,0,0);
      plVar22 = local_c0;
      lVar15 = local_d8;
      plVar21 = (long *)plVar32[0x29];
      lVar24 = plVar32[0x2a];
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      plVar27 = plVar21;
      if ((lVar24 != 0) && (*plVar21 != lVar15)) {
        lVar23 = lVar24 * 0x30;
        plVar18 = plVar21 + lVar24 * 6;
        do {
          lVar23 = lVar23 + -0x30;
          plVar27 = plVar18;
          if (lVar23 == 0) break;
          plVar1 = plVar21 + 6;
          plVar21 = plVar21 + 6;
          plVar27 = plVar21;
        } while (*plVar1 != lVar15);
      }
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      lVar24 = plVar27[4];
      bVar6 = *(byte *)(lVar24 + 0x58) | 1;
    }
    *(byte *)(lVar24 + 0x58) = bVar6;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 10;
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  if (*(long *)(*plVar29 + 8) == 0) {
    uVar11 = FUN_02c5e31c(lVar26);
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar11 = FUN_02c66b3c();
  }
  FUN_02c395d0(plVar28,0,uVar11,3,0,1);
  if (*(long *)(*plVar29 + 8) == 0) {
    uVar11 = FUN_02c5e31c(lVar26);
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar11 = FUN_02c66e84();
  }
  FUN_02c395d0(plVar28,1,uVar11,3,0,1);
  local_d8 = 0x49d9d79909c653e8;
  local_d0 = "pane_T_param_hp_00";
  local_c8 = 0x12;
  local_c0 = (long *)0x0;
  FUN_0121ac84(param_1,0x2cca9368e16718be,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (((DAT_043bf218 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043bf218), iVar9 != 0)) {
    DAT_043bf150 = 1;
    DAT_043bf158 = 0x1f87ae65a8f2bd9c;
    DAT_043bf160 = "pane_T_param_atk_00";
    DAT_043bf178 = 2;
    DAT_043bf180 = 0x9359da64974d3293;
    DAT_043bf188 = "pane_T_param_def_00";
    DAT_043bf1a0 = 3;
    DAT_043bf168 = 0x13;
    DAT_043bf170 = 0;
    DAT_043bf190 = 0x13;
    DAT_043bf198 = 0;
    DAT_043bf1a8 = 0x7887b8487798f06b;
    DAT_043bf1b0 = "pane_T_param_spatk_00";
    DAT_043bf1c8 = 4;
    DAT_043bf1b8 = 0x15;
    DAT_043bf1c0 = 0;
    DAT_043bf1e0 = 0x15;
    DAT_043bf1e8 = 0;
    DAT_043bf1f0 = 5;
    DAT_043bf1d0 = 0xbdcb5678f7d8a19c;
    DAT_043bf1d8 = "pane_T_param_spdef_00";
    DAT_043bf1f8 = 0x8fd95e0bd7fd387f;
    DAT_043bf200 = "pane_T_param_agi_00";
    DAT_043bf208 = 0x13;
    DAT_043bf210 = 0;
    FUN_00100250(0x121b200,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bf218);
  }
  uVar10 = FUN_02c5e1ec(lVar26,DAT_043bf150);
  FUN_02c395d0(plVar28,0,uVar10,3,0,1);
  FUN_0121ac84(param_1,0x6e318271e06fbe,&DAT_043bf158);
  uVar10 = FUN_02c5e1ec(lVar26,DAT_043bf178);
  FUN_02c395d0(plVar28,0,uVar10,3,0,1);
  FUN_0121ac84(param_1,0x6e318271e06fbe,&DAT_043bf180);
  uVar10 = FUN_02c5e1ec(lVar26,DAT_043bf1a0);
  FUN_02c395d0(plVar28,0,uVar10,3,0,1);
  FUN_0121ac84(param_1,0x6e318271e06fbe,&DAT_043bf1a8);
  uVar10 = FUN_02c5e1ec(lVar26,DAT_043bf1c8);
  FUN_02c395d0(plVar28,0,uVar10,3,0,1);
  FUN_0121ac84(param_1,0x6e318271e06fbe,&DAT_043bf1d0);
  uVar10 = FUN_02c5e1ec(lVar26,DAT_043bf1f0);
  FUN_02c395d0(plVar28,0,uVar10,3,0,1);
  FUN_0121ac84(param_1,0x6e318271e06fbe,&DAT_043bf1f8);
  uVar16 = FUN_0121b6ac();
  if ((uVar16 & 1) == 0) {
LAB_012190b8:
    plVar30 = *(long **)(param_1 + 0x510);
  }
  else {
    if (((DAT_043bf460 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043bf460), iVar9 != 0)) {
      DAT_043bf438 = 0;
      DAT_043bf458 = 0;
      DAT_043bf220 = 0xa59fcfd023f1ca90;
      DAT_043bf228 = "pane_L_glv_hp_00_T_param_glv_00";
      DAT_043bf230 = 0x1f;
      DAT_043bf238 = 0;
      DAT_043bf240 = 0xac18441876f33bc6;
      DAT_043bf248 = "anime_L_glv_hp_00_gauge";
      DAT_043bf250 = 0x17;
      DAT_043bf258 = 0;
      DAT_043bf260 = 0x6f005656500eed17;
      DAT_043bf268 = "anime_L_glv_hp_00_max";
      DAT_043bf270 = 0x15;
      DAT_043bf278 = 0;
      DAT_043bf280 = 0xca436090218abf74;
      DAT_043bf288 = "pane_L_glv_atk_00_T_param_glv_00";
      DAT_043bf2a0 = 0x5c868178cdd48af2;
      DAT_043bf2a8 = "anime_L_glv_atk_00_gauge";
      DAT_043bf2c0 = 0x7ae35c66c5afffbb;
      DAT_043bf2c8 = "anime_L_glv_atk_00_max";
      DAT_043bf2e0 = 0x935a2c6a58c7fd89;
      DAT_043bf2e8 = "pane_L_glv_def_00_T_param_glv_00";
      DAT_043bf300 = 0xf635eca7d8e9e04d;
      DAT_043bf308 = "anime_L_glv_def_00_gauge";
      DAT_043bf320 = 0xcf1c9902095ace38;
      DAT_043bf328 = "anime_L_glv_def_00_max";
      DAT_043bf340 = 0x7fb82bba9de520a5;
      DAT_043bf348 = "pane_L_glv_spatk_00_T_param_glv_00";
      DAT_043bf360 = 0x1df04745211ad9e1;
      DAT_043bf368 = "anime_L_glv_spatk_00_gauge";
      DAT_043bf380 = 0xed2b9c748893e9f4;
      DAT_043bf388 = "anime_L_glv_spatk_00_max";
      DAT_043bf290 = 0x20;
      DAT_043bf298 = 0;
      DAT_043bf2f0 = 0x20;
      DAT_043bf2f8 = 0;
      DAT_043bf410 = 0x20;
      DAT_043bf418 = 0;
      DAT_043bf3a0 = 0x17228fe9419597f8;
      DAT_043bf3a8 = "pane_L_glv_spdef_00_T_param_glv_00";
      DAT_043bf350 = 0x22;
      DAT_043bf358 = 0;
      DAT_043bf3b0 = 0x22;
      DAT_043bf3b8 = 0;
      DAT_043bf3c0 = 0x984681b79e76ca0e;
      DAT_043bf3c8 = "anime_L_glv_spdef_00_gauge";
      DAT_043bf420 = 0x130a72700764f101;
      DAT_043bf370 = 0x1a;
      DAT_043bf378 = 0;
      DAT_043bf428 = "anime_L_glv_agi_00_gauge";
      DAT_043bf3d0 = 0x1a;
      DAT_043bf3d8 = 0;
      DAT_043bf3e0 = 0x5a6f6dc89194bddf;
      DAT_043bf3e8 = "anime_L_glv_spdef_00_max";
      DAT_043bf440 = 0xadc00ca519dc2f14;
      DAT_043bf430 = 0x18;
      DAT_043bf450 = 0x16;
      DAT_043bf2b0 = 0x18;
      DAT_043bf2b8 = 0;
      DAT_043bf448 = "anime_L_glv_agi_00_max";
      DAT_043bf2d0 = 0x16;
      DAT_043bf2d8 = 0;
      DAT_043bf310 = 0x18;
      DAT_043bf318 = 0;
      DAT_043bf330 = 0x16;
      DAT_043bf338 = 0;
      DAT_043bf390 = 0x18;
      DAT_043bf398 = 0;
      DAT_043bf3f0 = 0x18;
      DAT_043bf3f8 = 0;
      DAT_043bf400 = 0xeb09dea72148dfa5;
      DAT_043bf408 = "pane_L_glv_agi_00_T_param_glv_00";
      FUN_00100250(0x121b290,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043bf460);
    }
    uVar11 = FUN_02c6df60(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar16 = FUN_02c8b05c(*plVar29);
    if (((uVar16 & 1) == 0) && (uVar12 = FUN_02c6bbd4(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf220);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf240);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf240);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf240);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01218af8;
        FUN_0283b1e8(*plVar20,&DAT_043bf240);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf240);
    }
LAB_01218af8:
    uVar11 = FUN_02c6df60(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar16 = FUN_02c8b05c(*plVar29);
    if (((uVar16 & 1) == 0) && (uVar12 = FUN_02c6bbd4(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf260);
      }
    }
    else if (lVar24 != 0) {
      FUN_0283b1e8(lVar24,&DAT_043bf260);
    }
    uVar11 = FUN_02c6e298(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 1 & 1) == 0) && (uVar12 = FUN_02c6bf10(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf280);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf2a0);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf2a0);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf2a0);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01218c10;
        FUN_0283b1e8(*plVar20,&DAT_043bf2a0);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf2a0);
    }
LAB_01218c10:
    uVar11 = FUN_02c6e298(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 1 & 1) == 0) && (uVar12 = FUN_02c6bf10(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf2c0);
      }
    }
    else if (lVar24 != 0) {
      FUN_0283b1e8(lVar24,&DAT_043bf2c0);
    }
    uVar11 = FUN_02c6e5d0(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 2 & 1) == 0) && (uVar12 = FUN_02c6c24c(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf2e0);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf300);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf300);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf300);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01218d28;
        FUN_0283b1e8(*plVar20,&DAT_043bf300);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf300);
    }
LAB_01218d28:
    uVar11 = FUN_02c6e5d0(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 2 & 1) == 0) && (uVar12 = FUN_02c6c24c(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf320);
      }
    }
    else if (lVar24 != 0) {
      FUN_0283b1e8(lVar24,&DAT_043bf320);
    }
    uVar11 = FUN_02c6ec40(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 3 & 1) == 0) && (uVar12 = FUN_02c6c588(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf340);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf360);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf360);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf360);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01218e40;
        FUN_0283b1e8(*plVar20,&DAT_043bf360);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf360);
    }
LAB_01218e40:
    uVar11 = FUN_02c6ec40(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 3 & 1) == 0) && (uVar12 = FUN_02c6c588(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf380);
      }
    }
    else if (lVar24 != 0) {
      FUN_0283b1e8(lVar24,&DAT_043bf380);
    }
    uVar11 = FUN_02c6ef78(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 4 & 1) == 0) && (uVar12 = FUN_02c6c8c4(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf3a0);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf3c0);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf3c0);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf3c0);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01218f58;
        FUN_0283b1e8(*plVar20,&DAT_043bf3c0);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf3c0);
    }
LAB_01218f58:
    uVar11 = FUN_02c6ef78(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 4 & 1) == 0) && (uVar12 = FUN_02c6c8c4(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf3e0);
      }
    }
    else if (lVar24 != 0) {
      FUN_0283b1e8(lVar24,&DAT_043bf3e0);
    }
    uVar11 = FUN_02c6e908(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 5 & 1) == 0) && (uVar12 = FUN_02c6cc00(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    if (9 < uVar11) {
      uVar11 = 10;
    }
    FUN_02c395d0(plVar28,0,uVar11,2,0,1);
    FUN_0121ac84(param_1,0xeb70d633820da4b,&DAT_043bf400);
    fVar34 = 0.0;
    lVar24 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043bf420);
      lVar24 = 0;
      if (*plVar20 != 0) {
        fVar34 = (float)FUN_0283b914(*plVar20,&DAT_043bf420);
        lVar24 = *plVar20;
      }
    }
    iVar9 = (int)fVar34 + uVar11 * -10;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if (lVar24 != 0) {
      uVar16 = FUN_0283b5c4(lVar24,&DAT_043bf420);
      if ((uVar16 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_01219070;
        FUN_0283b1e8(*plVar20,&DAT_043bf420);
      }
      FUN_0283b748((float)iVar9,*plVar20,&DAT_043bf420);
    }
LAB_01219070:
    uVar11 = FUN_02c6e908(*plVar29);
    uVar11 = uVar11 & 0xff;
    uVar12 = FUN_02c8b05c(*plVar29);
    if (((uVar12 >> 5 & 1) == 0) && (uVar12 = FUN_02c6cc00(*plVar29), uVar12 < 0x1f)) {
      if (uVar12 < 0x1a) {
        if (0x13 < uVar12) {
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    else {
      uVar11 = uVar11 + 3;
    }
    lVar24 = *plVar20;
    if (uVar11 < 10) {
      if (lVar24 != 0) {
        FUN_0283b430(lVar24,&DAT_043bf440);
      }
      goto LAB_012190b8;
    }
    if (lVar24 == 0) goto LAB_012190b8;
    FUN_0283b1e8(lVar24,&DAT_043bf440);
    plVar30 = *(long **)(param_1 + 0x510);
  }
  if (plVar30 != (long *)0x0) {
    plVar21 = plVar30 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar9 = FUN_02c6b1c0(*plVar29,0);
  iVar13 = FUN_02c6b1c0(*plVar29,1);
  uVar11 = 2;
  if (iVar9 == 0) {
    uVar11 = 1;
  }
  uVar12 = (uint)(iVar9 != 0);
  if (iVar13 != 0) {
    uVar12 = uVar11;
  }
  iVar9 = FUN_02c6b1c0(*plVar29,2);
  if (iVar9 != 0) {
    uVar12 = uVar12 + 1;
  }
  iVar9 = FUN_02c6b1c0(*plVar29,3);
  if (uVar12 == -(uint)(iVar9 != 0)) {
    uVar11 = 0;
    plVar29 = (long *)PTR_DAT_04379c88;
LAB_012198c8:
    do {
      snprintf((char *)&local_d8,0x40,"pane_L_skill_%02d",uVar11);
      local_e0 = &local_d8;
      FUN_009313e8(&local_98,&local_e0);
      plVar22 = local_98;
      plVar21 = plVar29;
      if (local_98 != (long *)0x0) {
        plVar21 = local_98 + 0xb;
      }
      lVar26 = *plVar21;
      if (local_98 == (long *)0x0) {
        plVar21 = (long *)plVar32[0x29];
        bVar5 = true;
        plVar27 = plVar21 + plVar32[0x2a] * 6;
        if (plVar32[0x2a] != 0) goto LAB_0121993c;
LAB_0121a2e8:
        plVar27 = plVar21;
      }
      else {
        (**(code **)(*local_98 + 0x18))(local_98);
        plVar21 = (long *)plVar32[0x29];
        lVar24 = plVar32[0x2a];
        plVar27 = plVar21 + lVar24 * 6;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        bVar5 = false;
        if (lVar24 == 0) goto LAB_0121a2e8;
LAB_0121993c:
        if (*plVar21 == lVar26) goto LAB_0121a2e8;
        do {
          plVar21 = plVar21 + 6;
          if (plVar27 == plVar21) goto LAB_01219968;
        } while (*plVar21 != lVar26);
        plVar27 = plVar21;
      }
LAB_01219968:
      if (bVar5) {
        *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
      }
      else {
        (**(code **)(*plVar22 + 0x20))(plVar22);
        *(byte *)(plVar27[4] + 0x58) = *(byte *)(plVar27[4] + 0x58) & 0xfe;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 4);
  }
  else {
    uVar11 = 0;
    do {
      uVar12 = FUN_02c6b1c0(*plVar29,uVar11);
      lVar24 = (&DAT_0428af30)[(ulong)uVar12 * 6];
      if (lVar24 == 0) {
        plVar21 = &DAT_0428af30;
      }
      else {
        plVar21 = &DAT_0428af30;
        if (*(char *)(lVar24 + 0x1e1) != '\0') {
          plVar21 = &DAT_0428af30 + (ulong)uVar12 * 6;
        }
      }
      piVar17 = (int *)((long)*(uint **)(*plVar21 + 0x250) + (ulong)**(uint **)(*plVar21 + 0x250));
      if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 9) ||
         (uVar16 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[4], uVar16 == 0)) {
        uVar33 = 0;
      }
      else {
        uVar33 = *(undefined1 *)((long)piVar17 + uVar16);
      }
      snprintf((char *)&local_d8,0x40,"pane_L_skill_%02d_T_name_skill_00",uVar11);
      FUN_010c5d94(plVar28,0,uVar12);
      local_e8 = &local_d8;
      FUN_009313e8(&local_e0,&local_e8);
      plVar21 = local_e0;
      if (local_e0 == (long *)0x0) {
        local_98 = *(long **)PTR_DAT_04379c88;
LAB_0121a978:
        local_90 = *(char **)PTR_PTR_04379d00;
        if (local_e0 != (long *)0x0) goto LAB_01219210;
LAB_0121a988:
        local_88 = 0;
        local_80 = (long *)0x0;
      }
      else {
        local_98 = (long *)local_e0[0xb];
        if (local_e0 == (long *)0x0) goto LAB_0121a978;
        local_90 = (char *)local_e0[0xc];
        if (local_e0 == (long *)0x0) goto LAB_0121a988;
LAB_01219210:
        local_88 = local_e0[0xd];
        local_80 = (long *)0x0;
        (**(code **)(*local_e0 + 0x18))(local_e0);
        plVar22 = local_80;
        local_80 = plVar21;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x20))();
        }
      }
      FUN_0121ac84(param_1,0x9b6466d279c134ae,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      snprintf((char *)&local_d8,0x40,"pane_L_skill_%02d_P_icon_type_00",uVar11);
      local_e8 = &local_d8;
      FUN_009313e8(&local_e0,&local_e8);
      plVar21 = local_e0;
      if (local_e0 == (long *)0x0) {
        local_98 = *(long **)PTR_DAT_04379c88;
LAB_0121a9a8:
        local_90 = *(char **)PTR_PTR_04379d00;
        if (local_e0 != (long *)0x0) goto LAB_012192d0;
LAB_0121a9b8:
        local_88 = 0;
        local_80 = (long *)0x0;
      }
      else {
        local_98 = (long *)local_e0[0xb];
        if (local_e0 == (long *)0x0) goto LAB_0121a9a8;
        local_90 = (char *)local_e0[0xc];
        if (local_e0 == (long *)0x0) goto LAB_0121a9b8;
LAB_012192d0:
        local_88 = local_e0[0xd];
        local_80 = (long *)0x0;
        (**(code **)(*local_e0 + 0x18))(local_e0);
        plVar22 = local_80;
        local_80 = plVar21;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x20))();
        }
      }
      if (*local_90 == '\0') {
        lVar24 = 0;
      }
      else {
        lVar24 = FUN_00d63240(*plVar20,&local_98);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (lVar24 != 0) {
        FUN_0284fbb0(plVar30,uVar33,1,lVar24,0,0);
      }
      snprintf((char *)&local_d8,0x40,"pane_L_skill_%02d_N_icon_master_00",uVar11);
      local_e0 = &local_d8;
      FUN_009313e8(&local_98,&local_e0);
      plVar21 = local_98;
      if (local_98 == (long *)0x0) {
        lVar24 = *(long *)PTR_DAT_04379c88;
      }
      else {
        lVar24 = local_98[0xb];
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))(local_98);
        }
      }
      bVar6 = FUN_02c618d4(lVar26,uVar12);
      plVar22 = (long *)plVar32[0x29];
      lVar15 = plVar32[0x2a];
      if (plVar21 == (long *)0x0) {
        if (lVar15 != 0) goto LAB_012193d4;
LAB_01219b48:
        if (plVar21 == (long *)0x0) goto LAB_01219514;
LAB_0121940c:
        (**(code **)(*plVar21 + 0x20))(plVar21);
        *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar6 & 1;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      else {
        (**(code **)(*plVar21 + 0x18))(plVar21);
        if (lVar15 == 0) goto LAB_01219b48;
LAB_012193d4:
        if (*plVar22 == lVar24) goto LAB_01219b48;
        lVar23 = lVar15 * 0x30;
        plVar27 = plVar22 + lVar15 * 6;
        do {
          lVar23 = lVar23 + -0x30;
          plVar18 = plVar27;
          if (lVar23 == 0) break;
          plVar1 = plVar22 + 6;
          plVar22 = plVar22 + 6;
          plVar18 = plVar22;
        } while (*plVar1 != lVar24);
        plVar22 = plVar18;
        if (plVar21 != (long *)0x0) goto LAB_0121940c;
LAB_01219514:
        *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar6 & 1;
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      snprintf((char *)&local_d8,0x40,"pane_L_skill_%02d",uVar11);
      local_e0 = &local_d8;
      FUN_009313e8(&local_98,&local_e0);
      plVar21 = local_98;
      if (local_98 == (long *)0x0) {
        lVar24 = *(long *)PTR_DAT_04379c88;
LAB_0121a9ec:
        plVar22 = (long *)plVar32[0x29];
        lVar15 = plVar32[0x2a];
        bVar5 = true;
        plVar27 = plVar22 + lVar15 * 6;
      }
      else {
        lVar24 = local_98[0xb];
        if (local_98 == (long *)0x0) goto LAB_0121a9ec;
        (**(code **)(*local_98 + 0x18))(local_98);
        plVar22 = (long *)plVar32[0x29];
        lVar15 = plVar32[0x2a];
        plVar27 = plVar22 + lVar15 * 6;
        (**(code **)(*plVar21 + 0x18))(plVar21);
        bVar5 = false;
      }
      if (lVar15 != 0) {
        lVar15 = *plVar22;
        while (lVar15 != lVar24) {
          plVar18 = plVar22 + 6;
          plVar22 = plVar27;
          if (plVar27 == plVar18) break;
          plVar22 = plVar18;
          lVar15 = *plVar18;
        }
      }
      if (bVar5) {
        *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) | 1;
      }
      else {
        (**(code **)(*plVar21 + 0x20))(plVar21);
        *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) | 1;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      uVar11 = uVar11 + 1;
      iVar9 = FUN_02c6b1c0(*plVar29,0);
      iVar13 = FUN_02c6b1c0(*plVar29,1);
      uVar12 = 2;
      if (iVar9 == 0) {
        uVar12 = 1;
      }
      uVar2 = (uint)(iVar9 != 0);
      if (iVar13 != 0) {
        uVar2 = uVar12;
      }
      iVar9 = FUN_02c6b1c0(*plVar29,2);
      if (iVar9 != 0) {
        uVar2 = uVar2 + 1;
      }
      iVar9 = FUN_02c6b1c0(*plVar29,3);
      if (iVar9 != 0) {
        uVar2 = uVar2 + 1;
      }
    } while (uVar11 < uVar2);
    plVar29 = (long *)PTR_DAT_04379c88;
    if (uVar11 < 4) goto LAB_012198c8;
  }
  if (plVar30 != (long *)0x0) {
    plVar29 = plVar30 + 10;
    do {
      iVar9 = (int)*plVar29 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar5) {
        *(int *)plVar29 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
LAB_0121961c:
  if (*(char *)(param_1 + 0x1670) == '\0') {
    local_d8 = -0x137481ce75891b77;
    local_d0 = "anime_status_out";
    local_c8 = 0x10;
    local_c0 = (long *)0x0;
    lVar26 = 0;
    if (*plVar20 != 0) {
      FUN_0283b430(*plVar20,&local_d8);
      lVar26 = *plVar20;
    }
    local_d8 = 0x54e74f6cfcda42fc;
    local_d0 = "anime_status_in";
    local_c8 = 0xf;
    local_c0 = (long *)0x0;
    if (lVar26 != 0) {
      FUN_0283b1e8(lVar26,&local_d8);
    }
    plVar20 = (long *)plVar32[0x29];
    lVar26 = plVar32[0x2a];
    if ((lVar26 != 0) && (*plVar20 != 0x24b0e07613967372)) {
      plVar29 = plVar20 + lVar26 * 6;
      lVar26 = lVar26 * 0x30;
      do {
        lVar26 = lVar26 + -0x30;
        if (lVar26 == 0) {
          plVar20 = plVar29;
          break;
        }
        plVar21 = plVar20 + 6;
        plVar30 = plVar20 + 6;
        plVar20 = plVar21;
      } while (*plVar30 != 0x24b0e07613967372);
    }
    *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) | 1;
    *(char *)(param_1 + 0x1670) = '\x01';
  }
joined_r0x01219cc0:
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[0xb];
    piVar17 = (int *)(lVar26 + 0xc);
    do {
      iVar9 = *piVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar26 = plVar28[0xb];
    piVar17 = (int *)(lVar26 + 0xc);
    do {
      iVar9 = *piVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (plVar32 != (long *)0x0) {
    plVar28 = plVar32 + 10;
    do {
      iVar9 = (int)*plVar28 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
    }
  }
  return;
}


