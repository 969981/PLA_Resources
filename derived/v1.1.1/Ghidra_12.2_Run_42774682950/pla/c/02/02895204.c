/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02895204; name: FUN_02895204
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02895204(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar47;
  float fVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar18 = *(long **)(param_2 + 0x14);
  plVar22 = (long *)*plVar18;
  uVar50 = 0x3d088889;
  if (*(char *)(param_2 + 0x54) != '\0') {
    uVar50 = param_1;
  }
  if (plVar22 != (long *)plVar18[1]) {
    do {
      lVar14 = *plVar22;
      if (*(int *)(lVar14 + 0x68) == 3) {
        local_68 = *(long **)(param_2 + 4);
        if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
          plVar18 = local_68 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = *plVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_028980a8(lVar14,&local_68,param_2 + 0x1c);
        if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
          plVar18 = local_68 + 2;
          do {
            lVar14 = *plVar18;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*local_68 + 0x18))();
          }
        }
        lVar14 = *(long *)(param_2 + 0x14);
        plVar18 = plVar22 + 1;
        plVar24 = *(long **)(lVar14 + 8);
        plVar16 = plVar22;
        plVar15 = plVar22;
        if (plVar18 != plVar24) {
          do {
            plVar15 = (long *)*plVar16;
            *plVar16 = 0;
            if (plVar15 != (long *)0x0) {
              lVar19 = plVar15[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))();
              }
            }
            lVar19 = *plVar18;
            plVar23 = plVar18 + 1;
            *plVar18 = 0;
            plVar15 = plVar16 + 1;
            *plVar16 = lVar19;
            plVar18 = plVar23;
            plVar16 = plVar15;
          } while (plVar23 != plVar24);
          plVar18 = *(long **)(lVar14 + 8);
          goto LAB_02895354;
        }
        do {
          plVar18 = plVar18 + -1;
          plVar16 = (long *)*plVar18;
          if (plVar16 != (long *)0x0) {
            lVar19 = plVar16[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))();
            }
          }
LAB_02895354:
        } while (plVar18 != plVar15);
        *(long **)(lVar14 + 8) = plVar15;
        plVar18 = *(long **)(param_2 + 0x14);
      }
      else {
        plVar22 = plVar22 + 1;
      }
    } while (plVar22 != (long *)plVar18[1]);
  }
  puVar21 = *(undefined8 **)(param_2 + 0x4c);
  puVar20 = puVar21 + 1;
  plVar16 = (long *)*puVar20;
  plVar22 = (long *)*puVar21;
  if ((long *)*puVar21 != plVar16) {
    do {
      plVar18 = plVar22 + 1;
      if (*(int *)(*plVar22 + 0x68) == 4) {
        plVar15 = plVar22;
        plVar24 = plVar22;
        if (plVar18 != plVar16) {
          do {
            plVar24 = (long *)*plVar15;
            *plVar15 = 0;
            if (plVar24 != (long *)0x0) {
              lVar14 = plVar24[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar24 + 0x20))();
              }
            }
            lVar14 = *plVar18;
            plVar23 = plVar18 + 1;
            *plVar18 = 0;
            plVar24 = plVar15 + 1;
            *plVar15 = lVar14;
            plVar15 = plVar24;
            plVar18 = plVar23;
          } while (plVar23 != plVar16);
          plVar16 = (long *)*puVar20;
          goto LAB_02895454;
        }
        do {
          plVar16 = plVar16 + -1;
          plVar18 = (long *)*plVar16;
          if (plVar18 != (long *)0x0) {
            lVar14 = plVar18[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))();
            }
          }
LAB_02895454:
        } while (plVar16 != plVar24);
        *puVar20 = plVar24;
        puVar21 = *(undefined8 **)(param_2 + 0x4c);
        plVar18 = plVar22;
      }
      puVar20 = puVar21 + 1;
      plVar16 = (long *)*puVar20;
      plVar22 = plVar18;
    } while (plVar18 != plVar16);
    plVar18 = *(long **)(param_2 + 0x14);
  }
  plVar22 = (long *)*plVar18;
  if (plVar22 != (long *)plVar18[1]) {
    do {
      lVar14 = *plVar22;
      if (*(int *)(lVar14 + 0x68) == 1) {
        local_70 = *(long **)(param_2 + 4);
        if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
          plVar18 = local_70 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = *plVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_02897424(lVar14,&local_70,param_2 + 0x1c,*param_2);
        if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
          plVar18 = local_70 + 2;
          do {
            lVar14 = *plVar18;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*local_70 + 0x18))();
          }
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != *(long **)(*(long *)(param_2 + 0x14) + 8));
  }
  pMVar2 = (MutexType *)(param_2 + 0x5e);
  nn::os::LockMutex(pMVar2);
  puVar21 = (undefined8 *)**(long **)(param_2 + 0x4c);
  if (puVar21 != (undefined8 *)(*(long **)(param_2 + 0x4c))[1]) {
    do {
      uVar17 = *puVar21;
      local_78 = *(long **)(param_2 + 4);
      if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
        plVar22 = local_78 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = *plVar22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_80 = *(long **)(param_2 + 0x4a);
      if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
        plVar22 = local_80 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = *plVar22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0289ad50(uVar17,&local_78,&local_80,param_2 + 6);
      if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
        plVar22 = local_80 + 2;
        do {
          lVar14 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*local_80 + 0x18))();
        }
      }
      if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
        plVar22 = local_78 + 2;
        do {
          lVar14 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*local_78 + 0x18))();
        }
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != *(undefined8 **)(*(long *)(param_2 + 0x4c) + 8));
  }
  nn::os::UnlockMutex(pMVar2);
  if (0.0 <= (float)param_2[0x69]) {
    *(undefined4 *)(*(long *)(param_2 + 4) + 0x4bc) = param_2[0x69];
    param_2[0x69] = 0xbf800000;
  }
  puVar10 = PTR_DAT_0437a648;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  puVar12 = PTR_DAT_0437a658;
  puVar11 = PTR_DAT_0437a650;
  lVar19 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar19;
  lVar14 = nn::os::GetCurrentThread();
  plVar22 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar22 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028956e8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *plVar22 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028956e8:
  lVar14 = 0;
  if (*(long *)(param_2 + 0x66) != 0) {
    lVar14 = *(long *)(param_2 + 0x66) + 0x18;
  }
  FUN_03219908(uVar50,*(undefined8 *)(param_2 + 4),lVar14,1);
  *(undefined8 *)(lVar19 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  nn::os::LockMutex(pMVar2);
  uVar9 = _UNK_0388a138;
  uVar17 = _DAT_0388a130;
  plVar22 = (long *)**(long **)(param_2 + 0x4c);
  if (plVar22 != (long *)(*(long **)(param_2 + 0x4c))[1]) {
    do {
      lVar14 = *plVar22;
      plVar18 = *(long **)(param_2 + 4);
      if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
        plVar16 = plVar18 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar16 = *(long **)(param_2 + 0x4a);
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar15 = plVar16 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if ((*(char *)(lVar14 + 0x3ec) != '\0') && (*(int *)(lVar14 + 0x68) == 2)) {
        uVar49 = *(undefined8 *)(lVar14 + 0x140);
        lVar19 = *(long *)(lVar14 + 0x170);
        *(ulong *)(lVar19 + 0x38) = *(ulong *)(lVar14 + 0x148) & 0xffffffff;
        *(undefined8 *)(lVar19 + 0x30) = uVar49;
        uVar49 = *(undefined8 *)(lVar14 + 0x120);
        lVar19 = *(long *)(lVar14 + 0x170);
        *(ulong *)(lVar19 + 0x48) = *(ulong *)(lVar14 + 0x128) & 0xffffffff;
        *(undefined8 *)(lVar19 + 0x40) = uVar49;
        uVar49 = *(undefined8 *)(lVar14 + 0x130);
        lVar19 = *(long *)(lVar14 + 0x170);
        *(ulong *)(lVar19 + 0x58) = *(ulong *)(lVar14 + 0x138) & 0xffffffff;
        *(undefined8 *)(lVar19 + 0x50) = uVar49;
        lVar19 = *(long *)(lVar14 + 0x70);
        lVar14 = *(long *)(lVar14 + 0x170);
        if (*(int *)(lVar19 + 400) == 0) {
          fVar27 = (float)*(undefined8 *)(lVar19 + 0x1c8);
          fVar25 = (float)*(undefined8 *)(lVar19 + 0x1c0);
          fVar26 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1c0) >> 0x20);
          uVar8 = *(undefined8 *)(*(long *)(lVar14 + 0x100) + 0x48);
          fVar40 = (float)uVar8;
          uVar49 = *(undefined8 *)(*(long *)(lVar14 + 0x100) + 0x40);
          fVar7 = (float)uVar49;
          fVar41 = fVar25 * fVar7;
          fVar48 = (float)((ulong)uVar49 >> 0x20);
          fVar45 = fVar26 * fVar48;
          fVar46 = fVar27 * fVar40;
          fVar42 = fVar41 + fVar45 + fVar46;
          fVar46 = fVar41 + fVar45 + fVar46;
          fVar25 = fVar25 - fVar7 * fVar42;
          fVar26 = fVar26 - fVar48 * fVar46;
          fVar27 = fVar27 - fVar40 * fVar42;
          fVar42 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1c8) >> 0x20) -
                   (float)((ulong)uVar8 >> 0x20) * fVar46;
          fVar7 = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
          fVar40 = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
          uVar32 = SUB41(fVar40,0);
          uVar34 = (undefined1)((uint)fVar40 >> 8);
          uVar36 = (undefined1)((uint)fVar40 >> 0x10);
          uVar38 = (undefined1)((uint)fVar40 >> 0x18);
          uVar49 = NEON_frsqrte(CONCAT17(uVar38,CONCAT16(uVar36,CONCAT15(uVar34,CONCAT14(uVar32,
                                                  fVar7)))),4);
          fVar48 = (float)uVar49;
          fVar41 = (float)((ulong)uVar49 >> 0x20);
          uVar49 = NEON_frsqrts(CONCAT17(uVar38,CONCAT16(uVar36,CONCAT15(uVar34,CONCAT14(uVar32,
                                                  fVar7)))),
                                CONCAT44(fVar41 * fVar41,fVar48 * fVar48),4);
          fVar48 = fVar48 * (float)uVar49;
          fVar41 = fVar41 * (float)((ulong)uVar49 >> 0x20);
          auVar43._0_8_ = CONCAT44(-(uint)(0.0 < fVar40),-(uint)(0.0 < fVar7));
          iVar13 = -(uint)(fVar7 <= 0.0);
          iVar47 = -(uint)(fVar40 <= 0.0);
          auVar43._8_8_ = auVar43._0_8_;
          uVar49 = NEON_frsqrts(CONCAT17(uVar38,CONCAT16(uVar36,CONCAT15(uVar34,CONCAT14(uVar32,
                                                  fVar7)))),
                                CONCAT44(fVar41 * fVar41,fVar48 * fVar48),4);
          fVar48 = (float)uVar49 * fVar48;
          fVar41 = (float)((ulong)uVar49 >> 0x20) * fVar41;
          bVar28 = SUB41(fVar48,0) & ~(byte)iVar13;
          bVar29 = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar13 >> 8);
          bVar30 = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
          bVar31 = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
          bVar33 = SUB41(fVar41,0) & ~(byte)iVar47;
          bVar35 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar47 >> 8);
          bVar37 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
          bVar39 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
          fVar7 = (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
          fVar48 = fVar26 * (float)CONCAT13(bVar39,CONCAT12(bVar37,CONCAT11(bVar35,bVar33)));
          auVar5._4_4_ = fVar26;
          auVar5._0_4_ = fVar25;
          auVar5._8_4_ = fVar27;
          auVar5._12_4_ = fVar42;
          auVar6[4] = SUB41(fVar48,0);
          auVar6._0_4_ = fVar25 * (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
          auVar6[5] = (char)((uint)fVar48 >> 8);
          auVar6[6] = (char)((uint)fVar48 >> 0x10);
          auVar6[7] = (char)((uint)fVar48 >> 0x18);
          auVar6._8_4_ = fVar27 * fVar7;
          auVar6._12_4_ =
               fVar42 * (float)(CONCAT17(bVar39,CONCAT16(bVar37,CONCAT15(bVar35,CONCAT14(bVar33,
                                                  fVar7)))) >> 0x20);
          auVar44._4_4_ = fVar26;
          auVar44._0_4_ = fVar25;
          auVar44._8_4_ = fVar27;
          auVar44._12_4_ = fVar42;
          auVar44 = auVar44 ^ (auVar5 ^ auVar6) & auVar43;
          *(long *)(lVar14 + 0x88) = auVar44._8_8_;
          *(long *)(lVar14 + 0x80) = auVar44._0_8_;
        }
        else {
          *(undefined8 *)(lVar14 + 0x80) = 0;
          *(undefined8 *)(lVar14 + 0x88) = 0;
          *(undefined4 *)(lVar14 + 0x60) = 0x5f7ffff0;
          *(undefined8 *)(lVar14 + 0x78) = uVar9;
          *(undefined8 *)(lVar14 + 0x70) = uVar17;
        }
      }
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar15 = plVar16 + 2;
        do {
          lVar14 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))();
        }
      }
      if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
        plVar16 = plVar18 + 2;
        do {
          lVar14 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != *(long **)(*(long *)(param_2 + 0x4c) + 8));
  }
  if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar19 = *(long *)puVar11;
  *(long *)puVar12 = lVar19;
  lVar14 = nn::os::GetCurrentThread();
  plVar22 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar22 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *plVar22 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02895964;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *plVar22 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02895964:
  lVar14 = 0;
  if (*(long *)(param_2 + 0x66) != 0) {
    lVar14 = *(long *)(param_2 + 0x66) + 0x18;
  }
  FUN_0327eefc(*(undefined8 *)(param_2 + 0x4a),lVar14,param_2[0x68]);
  *(undefined8 *)(lVar19 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  puVar20 = *(undefined8 **)(param_2 + 0x4c);
  for (puVar21 = (undefined8 *)*puVar20; puVar21 != (undefined8 *)puVar20[1]; puVar21 = puVar21 + 1)
  {
    uVar17 = *puVar21;
    local_88 = *(long **)(param_2 + 4);
    if ((local_88 != (long *)0x0) && (local_88[1] != 0)) {
      plVar22 = local_88 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_90 = *(long **)(param_2 + 0x4a);
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar22 = local_90 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0289bbdc(uVar17,&local_88,&local_90);
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar22 = local_90 + 2;
      do {
        lVar14 = *plVar22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
    if ((local_88 != (long *)0x0) && (local_88[1] != 0)) {
      plVar22 = local_88 + 2;
      do {
        lVar14 = *plVar22;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*local_88 + 0x18))();
      }
    }
    puVar20 = *(undefined8 **)(param_2 + 0x4c);
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}


