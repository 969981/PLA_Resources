/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3caec; name: FUN_01b3caec
 */


void FUN_01b3caec(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar24;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  code *local_e0;
  code *pcStack_d8;
  code *local_d0;
  long lStack_c8;
  long alStack_c0 [12];
  long *local_60;
  long lStack_58;
  long *local_48;
  
  lVar8 = param_4._8_8_;
  pcVar9 = param_4._0_8_;
  iVar7 = *(int *)(param_5 + 0xbf8);
  if (iVar7 == 0) {
    return;
  }
  if (iVar7 == 4) {
    FUN_00956dac(&local_60,param_5 + 0x1a8);
    plVar12 = local_60;
    FUN_01b42a24(&local_e0,param_5);
    if ((char)local_e0 == '\0') {
      FUN_00956dac(&local_e0,param_5 + 0x1a8);
      (**(code **)(*(long *)local_e0 + 0x40))();
      if (local_e0 != (code *)0x0) {
        lVar10 = *(long *)(local_e0 + 0x58);
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*(long *)local_e0 + 0x20))();
        }
      }
    }
    else {
      pcVar9 = local_d0;
      lVar8 = lStack_c8;
    }
    *(undefined1 *)(plVar12 + 0x1c) = 1;
    plVar12[0x1b] = lVar8;
    plVar12[0x1a] = (long)pcVar9;
    if (local_60 == (long *)0x0) {
      return;
    }
    lVar8 = local_60[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar8 + 0x18) = 0;
    pcVar9 = *(code **)(*local_60 + 0x20);
    plVar12 = local_60;
    goto LAB_01b3cebc;
  }
  fVar17 = *(float *)(param_5 + 0xc00);
  if (fVar17 <= 0.0) {
    return;
  }
  param_1 = *(float *)(param_5 + 0xbfc) + param_1;
  fVar18 = fVar17;
  if (param_1 < fVar17) {
    fVar18 = param_1;
  }
  *(float *)(param_5 + 0xbfc) = fVar18;
  if (iVar7 == 2) {
    FUN_01b42a24(&local_e0,param_5);
    if ((char)local_e0 == '\0') {
      FUN_00956dac(&local_e0,param_5 + 0x1a8);
      (**(code **)(*(long *)local_e0 + 0x40))();
      pcStack_d8 = (code *)lVar8;
      if (local_e0 != (code *)0x0) {
        lVar8 = *(long *)(local_e0 + 0x58);
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*(long *)local_e0 + 0x20))();
        }
      }
    }
    else {
      pcVar9 = local_d0;
      pcStack_d8 = (code *)lStack_c8;
    }
    local_e0 = pcVar9;
    fVar17 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_5 + 0xdb4) * 8))
                              (*(float *)(param_5 + 0xbfc) / *(float *)(param_5 + 0xc00));
    fVar17 = fVar17 + 0.0;
    fVar18 = SUB84(local_e0,0);
    fVar33 = (float)((ulong)local_e0 >> 0x20);
    fVar21 = SUB84(pcStack_d8,0);
    fVar24 = (float)((ulong)pcStack_d8 >> 0x20);
    if (*(char *)(param_5 + 0xd82) == '\0') {
      uVar22 = *(undefined8 *)(param_5 + 0xc28);
      uVar19 = *(undefined8 *)(param_5 + 0xc20);
      FUN_00956dac(&local_60,param_5 + 0x1a8);
      uVar23 = *(undefined8 *)(param_5 + 0xc28);
      uVar20 = *(undefined8 *)(param_5 + 0xc20);
      *(undefined1 *)(local_60 + 0x1c) = 1;
      local_60[0x1b] =
           CONCAT44((fVar24 - (float)((ulong)uVar22 >> 0x20)) * fVar17 +
                    (float)((ulong)uVar23 >> 0x20),(fVar21 - (float)uVar22) * fVar17 + (float)uVar23
                   );
      local_60[0x1a] =
           CONCAT44((fVar33 - (float)((ulong)uVar19 >> 0x20)) * fVar17 +
                    (float)((ulong)uVar20 >> 0x20),(fVar18 - (float)uVar19) * fVar17 + (float)uVar20
                   );
      if (local_60 != (long *)0x0) {
        lVar8 = local_60[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto joined_r0x01b3d1a4;
      }
    }
    else {
      fVar29 = (float)*(undefined8 *)(param_5 + 0xc20);
      fVar13 = fVar29 + (float)*(undefined8 *)(param_5 + 0xd90);
      fVar30 = (float)((ulong)*(undefined8 *)(param_5 + 0xc20) >> 0x20);
      fVar14 = fVar30 + (float)((ulong)*(undefined8 *)(param_5 + 0xd90) >> 0x20);
      fVar31 = (float)*(undefined8 *)(param_5 + 0xc28);
      fVar15 = fVar31 + (float)*(undefined8 *)(param_5 + 0xd98);
      fVar32 = (float)((ulong)*(undefined8 *)(param_5 + 0xc28) >> 0x20);
      fVar16 = fVar32 + (float)((ulong)*(undefined8 *)(param_5 + 0xd98) >> 0x20);
      fVar25 = fVar18 + (float)*(undefined8 *)(param_5 + 0xda0);
      fVar26 = fVar33 + (float)((ulong)*(undefined8 *)(param_5 + 0xda0) >> 0x20);
      fVar27 = fVar21 + (float)*(undefined8 *)(param_5 + 0xda8);
      fVar28 = fVar24 + (float)((ulong)*(undefined8 *)(param_5 + 0xda8) >> 0x20);
      fVar29 = fVar29 + (fVar13 - fVar29) * fVar17;
      fVar30 = fVar30 + (fVar14 - fVar30) * fVar17;
      fVar31 = fVar31 + (fVar15 - fVar31) * fVar17;
      fVar32 = fVar32 + (fVar16 - fVar32) * fVar17;
      fVar13 = fVar13 + (fVar25 - fVar13) * fVar17;
      fVar14 = fVar14 + (fVar26 - fVar14) * fVar17;
      fVar15 = fVar15 + (fVar27 - fVar15) * fVar17;
      fVar16 = fVar16 + (fVar28 - fVar16) * fVar17;
      fVar29 = fVar29 + (fVar13 - fVar29) * fVar17;
      fVar30 = fVar30 + (fVar14 - fVar30) * fVar17;
      fVar31 = fVar31 + (fVar15 - fVar31) * fVar17;
      fVar32 = fVar32 + (fVar16 - fVar32) * fVar17;
      FUN_00956dac(&local_60,param_5 + 0x1a8);
      *(undefined1 *)(local_60 + 0x1c) = 1;
      local_60[0x1b] =
           CONCAT44(fVar32 + ((fVar16 + ((fVar28 + (fVar24 - fVar28) * fVar17) - fVar16) * fVar17) -
                             fVar32) * fVar17,
                    fVar31 + ((fVar15 + ((fVar27 + (fVar21 - fVar27) * fVar17) - fVar15) * fVar17) -
                             fVar31) * fVar17);
      local_60[0x1a] =
           CONCAT44(fVar30 + ((fVar14 + ((fVar26 + (fVar33 - fVar26) * fVar17) - fVar14) * fVar17) -
                             fVar30) * fVar17,
                    fVar29 + ((fVar13 + ((fVar25 + (fVar18 - fVar25) * fVar17) - fVar13) * fVar17) -
                             fVar29) * fVar17);
      if (local_60 != (long *)0x0) {
        lVar8 = local_60[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
joined_r0x01b3d1a4:
        if (iVar7 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
      }
    }
    if (*(float *)(param_5 + 0xbfc) != *(float *)(param_5 + 0xc00)) {
      return;
    }
    *(undefined4 *)(param_5 + 0xc00) = *(undefined4 *)(param_5 + 0xbf0);
    *(undefined4 *)(param_5 + 0xbfc) = 0;
    FUN_00956dac(&local_48,param_5 + 0x1a8);
    lStack_58 = local_48[0x19];
    local_60 = (long *)local_48[0x18];
    FUN_01a83770(param_5,&local_e0,&local_60);
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    *(undefined8 *)(param_5 + 0x6b0) = 0;
    *(undefined8 *)(param_5 + 0x6b8) = 0;
    if (*(char *)(param_5 + 0x6a0) == '\0') {
      *(undefined1 *)(param_5 + 0x6a0) = 1;
    }
    if (*(int *)(param_5 + 0xd40) != 1) {
      FUN_01a9b528(0,param_5);
      FUN_01a8b7b8(param_5);
      if (*(code **)(param_5 + 0xae0) != (code *)0x0) {
        local_60 = (long *)CONCAT71(local_60._1_7_,1);
        (**(code **)(param_5 + 0xae0))(param_5 + 0xb00,&local_60);
      }
      FUN_01a9b270(param_5,1,4);
      *(undefined4 *)(param_5 + 0xbf8) = 3;
      local_60 = (long *)0x0;
      lStack_58 = 0;
      FUN_01a6a07c(&local_60,param_5 + 0x5f8);
      plVar12 = local_60;
      if (local_60 != (long *)0x0) {
        if (*(int *)((long)local_60 + 0xc) != 0) {
          piVar1 = (int *)((long)local_60 + 0xc);
          iVar7 = *(int *)((long)local_60 + 0xc);
          do {
            plVar11 = (long *)plVar12[2];
            lVar8 = FUN_018e43a0();
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_01b3d5ac;
              if (plVar11 == (long *)lVar8) break;
              plVar11 = (long *)*plVar11;
            }
            iVar4 = *piVar1;
            if (iVar4 == iVar7) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar8 = plVar12[3];
                plVar12 = (long *)0x0;
                plVar11 = local_60;
                if (lVar8 != 0) {
                  plVar12 = (long *)(lVar8 + -0x50);
                }
                goto joined_r0x01b3d4e4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = iVar4;
          } while (iVar4 != 0);
        }
LAB_01b3d5ac:
        plVar12 = (long *)0x0;
        plVar11 = local_60;
joined_r0x01b3d4e4:
        local_60 = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar3 = plVar11 + 1;
          do {
            iVar7 = (int)*plVar3 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *(int *)plVar3 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            plVar11[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_48 = (long *)*plVar11;
            FUN_02a44274(lVar8 + 0xd8,&local_48);
          }
        }
        if (plVar12 != (long *)0x0) {
          FUN_0260fb28(plVar12,0);
          FUN_0260fc44(plVar12,1,*(int *)(param_5 + 0x918) == 1);
          lVar8 = plVar12[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            pcVar9 = *(code **)(param_5 + 0xcc0);
            goto joined_r0x01b3d59c;
          }
        }
      }
      pcVar9 = *(code **)(param_5 + 0xcc0);
joined_r0x01b3d59c:
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(param_5 + 0xce0);
        pcVar9 = *(code **)(param_5 + 0xcc8);
        if (pcVar9 != (code *)0x0) {
          *(undefined8 *)(param_5 + 0xcd0) = 0;
          *(undefined8 *)(param_5 + 0xcd8) = 0;
          *(undefined8 *)(param_5 + 0xcc0) = 0;
          *(undefined8 *)(param_5 + 0xcc8) = 0;
          (*pcVar9)(param_5 + 0xce0);
        }
      }
      FUN_01b45464(param_5);
      return;
    }
    *(undefined4 *)(param_5 + 0xbf8) = 4;
    local_60 = (long *)0x0;
    lStack_58 = 0;
    FUN_01a6a07c(&local_60,param_5 + 0x5f8);
    plVar12 = local_60;
    if (local_60 == (long *)0x0) {
LAB_01b3ce90:
      pcVar9 = *(code **)(param_5 + 0xc40);
    }
    else {
      if (*(int *)((long)local_60 + 0xc) != 0) {
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar7 = *(int *)((long)local_60 + 0xc);
        do {
          plVar11 = (long *)plVar12[2];
          lVar8 = FUN_018e43a0();
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_01b3d44c;
            if (plVar11 == (long *)lVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar7) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar7 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar8 = plVar12[3];
              plVar12 = (long *)0x0;
              plVar11 = local_60;
              if (lVar8 != 0) {
                plVar12 = (long *)(lVar8 + -0x50);
              }
              goto joined_r0x01b3d39c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar4;
        } while (iVar4 != 0);
      }
LAB_01b3d44c:
      plVar12 = (long *)0x0;
      plVar11 = local_60;
joined_r0x01b3d39c:
      local_60 = plVar11;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 1;
        do {
          iVar7 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          plVar11[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = (long *)*plVar11;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
      if (plVar12 == (long *)0x0) goto LAB_01b3ce90;
      FUN_0260fb28(plVar12,1);
      lVar8 = plVar12[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 != 0) goto LAB_01b3ce90;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      pcVar9 = *(code **)(param_5 + 0xc40);
    }
    if (pcVar9 == (code *)0x0) {
      return;
    }
    (*pcVar9)((long *)(param_5 + 0xc60));
    pcVar9 = *(code **)(param_5 + 0xc48);
    if (pcVar9 == (code *)0x0) {
      return;
    }
    *(undefined8 *)(param_5 + 0xc50) = 0;
    *(undefined8 *)(param_5 + 0xc58) = 0;
    *(undefined8 *)(param_5 + 0xc40) = 0;
    *(undefined8 *)(param_5 + 0xc48) = 0;
    plVar12 = (long *)(param_5 + 0xc60);
    goto LAB_01b3cebc;
  }
  if (iVar7 != 3) {
    if (iVar7 != 1) {
      return;
    }
    fVar33 = *(float *)(param_5 + 0xc10);
    fVar17 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_5 + 0xdb0) * 8))
                              (fVar18 / fVar17);
    fVar33 = fVar33 + (0.1 - fVar33) * fVar17;
    FUN_00956dac(&local_e0,param_5 + 0x1a8);
    local_e0[0xe0] = (code)0x1;
    *(ulong *)(local_e0 + 0xb8) = (ulong)(uint)fVar33;
    *(long *)(local_e0 + 0xb0) = CONCAT44(fVar33,fVar33);
    if (local_e0 != (code *)0x0) {
      lVar8 = *(long *)(local_e0 + 0x58);
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*(long *)local_e0 + 0x20))();
      }
    }
    if (*(float *)(param_5 + 0xbfc) != *(float *)(param_5 + 0xc00)) {
      return;
    }
    *(undefined4 *)(param_5 + 0xbfc) = 0;
    *(undefined4 *)(param_5 + 0xc00) = *(undefined4 *)(param_5 + 0xbf4);
    FUN_01a9b270(param_5,0,4);
    *(undefined4 *)(param_5 + 0xbf8) = 2;
    local_e0 = (code *)0x0;
    pcStack_d8 = (code *)0x0;
    FUN_01a6a07c(&local_e0,param_5 + 0x5f8);
    pcVar9 = local_e0;
    if (local_e0 != (code *)0x0) {
      if (*(int *)(local_e0 + 0xc) != 0) {
        pcVar2 = local_e0 + 0xc;
        iVar7 = *(int *)(local_e0 + 0xc);
        do {
          plVar12 = *(long **)(pcVar9 + 0x10);
          lVar8 = FUN_018e43a0();
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_01b3d304;
            if (plVar12 == (long *)lVar8) break;
            plVar12 = (long *)*plVar12;
          }
          iVar4 = *(int *)pcVar2;
          if (iVar4 == iVar7) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar6) {
              *(int *)pcVar2 = iVar7 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar8 = *(long *)(pcVar9 + 0x18);
              plVar12 = (long *)0x0;
              pcVar9 = local_e0;
              if (lVar8 != 0) {
                plVar12 = (long *)(lVar8 + -0x50);
              }
              goto joined_r0x01b3d25c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar4;
        } while (iVar4 != 0);
      }
LAB_01b3d304:
      plVar12 = (long *)0x0;
      pcVar9 = local_e0;
joined_r0x01b3d25c:
      local_e0 = pcVar9;
      if (pcVar9 != (code *)0x0) {
        pcVar2 = pcVar9 + 8;
        do {
          iVar7 = *(int *)pcVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar6) {
            *(int *)pcVar2 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(long *)(pcVar9 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_60 = *(long **)pcVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_60);
        }
      }
      if (plVar12 != (long *)0x0) {
        FUN_0260f998(plVar12,0);
        lVar8 = plVar12[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
    }
    if (*(int *)(param_5 + 0xd40) != 1) {
      return;
    }
    if (*(char *)(param_5 + 0xd80) == '\0') {
      return;
    }
    FUN_01b426d8(param_5);
    return;
  }
  fVar33 = *(float *)(param_5 + 0xc10);
  fVar17 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_5 + 0xdb8) * 8))
                            (fVar18 / fVar17);
  fVar17 = (fVar33 + -0.1) * fVar17 + 0.1;
  FUN_00956dac(&local_e0,param_5 + 0x1a8);
  local_e0[0xe0] = (code)0x1;
  *(ulong *)(local_e0 + 0xb8) = (ulong)(uint)fVar17;
  *(long *)(local_e0 + 0xb0) = CONCAT44(fVar17,fVar17);
  if (local_e0 != (code *)0x0) {
    lVar8 = *(long *)(local_e0 + 0x58);
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*(long *)local_e0 + 0x20))();
    }
  }
  if (*(float *)(param_5 + 0xbfc) != *(float *)(param_5 + 0xc00)) {
    return;
  }
  *(undefined8 *)(param_5 + 0xbf8) = 0;
  *(undefined4 *)(param_5 + 0xc00) = *(undefined4 *)(param_5 + 0xbf4);
  local_e0 = (code *)0x0;
  pcStack_d8 = (code *)0x0;
  FUN_01a6a07c(&local_e0,param_5 + 0x5f8);
  pcVar9 = local_e0;
  if (local_e0 == (code *)0x0) {
LAB_01b3cca0:
    lVar8 = *(long *)(param_5 + 0xc40);
  }
  else {
    if (*(int *)(local_e0 + 0xc) != 0) {
      pcVar2 = local_e0 + 0xc;
      iVar7 = *(int *)(local_e0 + 0xc);
      do {
        plVar12 = *(long **)(pcVar9 + 0x10);
        lVar8 = FUN_018e43a0();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01b3d6f4;
          if (plVar12 == (long *)lVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar4 = *(int *)pcVar2;
        if (iVar4 == iVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar6) {
            *(int *)pcVar2 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar8 = *(long *)(pcVar9 + 0x18);
            plVar12 = (long *)0x0;
            pcVar9 = local_e0;
            if (lVar8 != 0) {
              plVar12 = (long *)(lVar8 + -0x50);
            }
            goto joined_r0x01b3d644;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar4;
      } while (iVar4 != 0);
    }
LAB_01b3d6f4:
    plVar12 = (long *)0x0;
    pcVar9 = local_e0;
joined_r0x01b3d644:
    local_e0 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      pcVar2 = pcVar9 + 8;
      do {
        iVar7 = *(int *)pcVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar6) {
          *(int *)pcVar2 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(long *)(pcVar9 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_60 = *(long **)pcVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_60);
      }
    }
    if (plVar12 == (long *)0x0) goto LAB_01b3cca0;
    FUN_0260f1a4(plVar12,*(undefined1 *)(param_5 + 0xd81));
    lVar8 = plVar12[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01b3cca0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    lVar8 = *(long *)(param_5 + 0xc40);
  }
  if (lVar8 == 0) {
    return;
  }
  local_d0 = (code *)0x0;
  lStack_c8 = 0;
  local_e0 = (code *)0x0;
  pcStack_d8 = (code *)0x0;
  if (*(code **)(param_5 + 0xc50) != (code *)0x0) {
    (**(code **)(param_5 + 0xc50))(param_5 + 0xc60,alStack_c0);
    local_e0 = *(code **)(param_5 + 0xc40);
    pcStack_d8 = *(code **)(param_5 + 0xc48);
    local_d0 = *(code **)(param_5 + 0xc50);
    lStack_c8 = *(undefined8 *)(param_5 + 0xc58);
  }
  pcVar9 = *(code **)(param_5 + 0xc48);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_5 + 0xc50) = 0;
    *(undefined8 *)(param_5 + 0xc58) = 0;
    *(undefined8 *)(param_5 + 0xc40) = 0;
    *(undefined8 *)(param_5 + 0xc48) = 0;
    (*pcVar9)(param_5 + 0xc60);
  }
  (*local_e0)(alStack_c0);
  pcVar9 = pcStack_d8;
  if (pcStack_d8 == (code *)0x0) {
    return;
  }
  local_d0 = (code *)0x0;
  lStack_c8 = 0;
  local_e0 = (code *)0x0;
  pcStack_d8 = (code *)0x0;
  plVar12 = alStack_c0;
LAB_01b3cebc:
  (*pcVar9)(plVar12);
  return;
}


