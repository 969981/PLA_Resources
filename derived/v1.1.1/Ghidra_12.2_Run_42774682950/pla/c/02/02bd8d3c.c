/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd8d3c; name: FUN_02bd8d3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd8d3c(long *param_1,long param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  byte bVar3;
  undefined8 *puVar4;
  ushort uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  undefined8 *puVar32;
  long *plVar33;
  uint uVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  int iVar46;
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  float fVar53;
  int iVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fStack_10900;
  float fStack_108fc;
  float fStack_108f8;
  float fStack_108f4;
  byte bStack_108f0;
  byte bStack_108ec;
  byte bStack_108e9;
  byte bStack_108e8;
  byte bStack_108e7;
  byte bStack_108e6;
  byte bStack_108e5;
  byte bStack_108e4;
  byte bStack_108e3;
  byte bStack_108e2;
  byte bStack_108e1;
  long *plStack_108b0;
  undefined8 *puStack_108a8;
  int iStack_108a0;
  undefined4 uStack_1089c;
  undefined1 uStack_10898;
  undefined2 uStack_10897;
  undefined4 uStack_10894;
  undefined8 uStack_10890;
  long **pplStack_10888;
  long *plStack_10880;
  long *plStack_10878;
  long *plStack_10080;
  long *plStack_10078;
  undefined8 auStack_10070 [2];
  float afStack_10060 [3];
  byte abStack_10052 [2];
  float afStack_10050 [4];
  long alStack_10040 [8186];
  undefined8 auStack_70 [2];
  
  uVar14 = DAT_03aae468;
  uVar16 = DAT_03aae460;
  uVar39 = NEON_fmov(0x3f800000,4);
  puVar28 = auStack_10070;
  puVar32 = auStack_70;
  *param_1 = 0;
  uVar13 = _UNK_0388a138;
  uVar12 = _DAT_0388a130;
  uVar11 = _UNK_03889708;
  uVar18 = _DAT_03889700;
  do {
    *puVar28 = uVar16;
    puVar28[1] = uVar14;
    puVar28[4] = uVar39;
    puVar28[7] = 0;
    puVar28[2] = 0;
    puVar28[3] = 0x40ffff00000000;
    puVar28[5] = 0xffffffff3f800000;
    puVar28[6] = 0;
    puVar28 = puVar28 + 8;
  } while (puVar28 != puVar32);
  puVar28 = *(undefined8 **)(param_2 + 0x160);
  puVar4 = *(undefined8 **)(param_2 + 0x168);
  if (puVar28 != puVar4) {
    plVar21 = (long *)(param_2 + 400);
    bVar10 = 0;
    iVar30 = 0;
    fVar38 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    plVar19 = (long *)(param_2 + 0x1b8);
    auVar42 = NEON_fmov(0x3f800000,4);
LAB_02bd8e0c:
    plVar35 = (long *)*puVar28;
    if (plVar35 != (long *)0x0) {
      lVar29 = plVar35[0xb];
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_02bd9e10;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    uVar22 = *(ulong *)(param_2 + 0x110);
    if (uVar22 != 0) {
      uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar20 = plVar35[0xe];
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar25 = uVar22 - 1 & uVar20;
      }
      else {
        uVar25 = uVar20;
        if (uVar22 <= uVar20) {
          uVar25 = 0;
          if (uVar22 != 0) {
            uVar25 = uVar20 / uVar22;
          }
          uVar25 = uVar20 - uVar25 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(param_2 + 0x108) + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (1 < uVar24) {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == uVar20) {
              if (plVar26[2] == uVar20) goto LAB_02bd8f3c;
            }
            else {
              if (uVar22 <= uVar24) {
                uVar9 = 0;
                if (uVar22 != 0) {
                  uVar9 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar9 * uVar22;
              }
              if (uVar24 != uVar25) goto LAB_02bd9e0c;
            }
            plVar26 = (long *)*plVar26;
            if (plVar26 == (long *)0x0) goto LAB_02bd9e0c;
          } while( true );
        }
        do {
          if (plVar26[1] == uVar20) {
            if (plVar26[2] == uVar20) goto LAB_02bd8f3c;
          }
          else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) break;
        } while( true );
      }
    }
LAB_02bd9e0c:
                    /* WARNING: Subroutine does not return */
    FUN_02be1d40();
  }
  bVar10 = 0;
  iVar30 = 0;
LAB_02bd96fc:
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar29 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar29;
  pMVar2 = (MutexType *)(*(long *)(lVar29 + 0x230) + 0x128);
  nn::os::LockMutex(pMVar2);
  if ((0 < iVar30) && ((bool)(bVar10 ^ 1))) {
    if (*(long *)(param_2 + 0x100) == 0) {
      puStack_108a8 = auStack_10070;
      uStack_10894 = 2;
      pplStack_10888 = &plStack_10880;
      uStack_10897 = 0;
      uStack_10890 = 0;
      uStack_10898 = 1;
      uStack_1089c = 0x400;
      iStack_108a0 = iVar30;
      FUN_02f6ce18(&plStack_108b0,&puStack_108a8);
      plVar21 = plStack_108b0;
      plStack_108b0 = (long *)0x0;
      plVar19 = *(long **)(param_2 + 0x100);
      *(long **)(param_2 + 0x100) = plVar21;
      if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
        plVar21 = plVar19 + 2;
        do {
          lVar29 = *plVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (((lVar29 + -1 == 0) && ((**(code **)(*plVar19 + 0x18))(), plStack_108b0 != (long *)0x0))
           && (plStack_108b0[1] != 0)) {
          plVar21 = plStack_108b0 + 2;
          do {
            lVar29 = *plVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = lVar29 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar29 + -1 == 0) {
            (**(code **)(*plStack_108b0 + 0x18))();
          }
        }
      }
    }
    else {
      FUN_02f7013c(*(long *)(param_2 + 0x100),auStack_10070,iVar30,&plStack_10880);
    }
    plVar21 = *(long **)(param_2 + 0x160);
    plVar19 = *(long **)(param_2 + 0x168);
    if (plVar21 != plVar19) {
      lVar29 = 0;
      plVar35 = (long *)(param_2 + 400);
      plVar26 = (long *)(param_2 + 0x1b8);
      plVar33 = (long *)*plVar21;
      do {
        if (plVar33 != (long *)0x0) {
          lVar31 = plVar33[0xb];
          if (*(undefined8 **)(lVar31 + 0x18) == (undefined8 *)0x0) {
LAB_02bd9e10:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar31 + 0x10) == 0) {
            uVar18 = (**(code **)**(undefined8 **)(lVar31 + 0x18))();
            *(undefined8 *)(lVar31 + 0x10) = uVar18;
          }
          piVar1 = (int *)(lVar31 + 0xc);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uVar5 = *(ushort *)((long)&plStack_10880 + lVar29 * 2);
        uVar34 = (uint)uVar5;
        plVar17 = (long *)(**(code **)(**(long **)(param_2 + 0x1c0) + 0x10))
                                    (*(long **)(param_2 + 0x1c0),0x20,8);
        if (plVar17 == (long *)0x0) {
          (**(code **)(**(long **)(param_2 + 0x1c0) + 0xb8))();
        }
        *(uint *)(plVar17 + 2) = (uint)uVar5;
        plVar17[3] = (long)plVar33;
        if (plVar33 != (long *)0x0) {
          lVar31 = plVar33[0xb];
          if (*(undefined8 **)(lVar31 + 0x18) == (undefined8 *)0x0) goto LAB_02bd9e10;
          if (*(long *)(lVar31 + 0x10) == 0) {
            uVar18 = (**(code **)**(undefined8 **)(lVar31 + 0x18))();
            *(undefined8 *)(lVar31 + 0x10) = uVar18;
          }
          piVar1 = (int *)(lVar31 + 0xc);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uVar34 = *(uint *)(plVar17 + 2);
        }
        uVar24 = (ulong)(int)uVar34;
        *plVar17 = 0;
        plVar17[1] = uVar24;
        uVar22 = *(ulong *)(param_2 + 0x198);
        if (uVar22 == 0) {
LAB_02bd99d8:
          fVar38 = (float)(*(long *)(param_2 + 0x1d8) + 1);
          if ((uVar22 == 0) || (*(float *)(param_2 + 0x1e0) * (float)uVar22 < fVar38)) {
            uVar22 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
            uVar24 = (ulong)(fVar38 / *(float *)(param_2 + 0x1e0));
            if (uVar24 <= uVar22) {
              uVar24 = uVar22;
            }
            FUN_02be1d4c(plVar35,uVar24);
            uVar22 = *(ulong *)(param_2 + 0x198);
            uVar24 = plVar17[1];
          }
          uVar20 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            uVar24 = uVar22 - 1 & uVar24;
          }
          else if (uVar22 <= uVar24) {
            uVar25 = 0;
            if (uVar22 != 0) {
              uVar25 = uVar24 / uVar22;
            }
            uVar24 = uVar24 - uVar25 * uVar22;
          }
          plVar27 = *(long **)(*plVar35 + uVar24 * 8);
          if (plVar27 == (long *)0x0) {
            *plVar17 = *plVar26;
            *plVar26 = (long)plVar17;
            *(long **)(*plVar35 + uVar24 * 8) = plVar26;
            if (*plVar17 != 0) {
              uVar24 = *(ulong *)(*plVar17 + 8);
              if (uVar20 < 2) {
                uVar24 = uVar24 & uVar22 - 1;
              }
              else if (uVar22 <= uVar24) {
                uVar20 = 0;
                if (uVar22 != 0) {
                  uVar20 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar20 * uVar22;
              }
              plVar27 = (long *)(*plVar35 + uVar24 * 8);
              goto LAB_02bd9af4;
            }
          }
          else {
            *plVar17 = *plVar27;
LAB_02bd9af4:
            *plVar27 = (long)plVar17;
          }
          *(long *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + 1;
        }
        else {
          uVar20 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            uVar25 = uVar22 - 1 & uVar24;
          }
          else {
            uVar25 = uVar24;
            if (uVar22 <= uVar24) {
              uVar25 = 0;
              if (uVar22 != 0) {
                uVar25 = uVar24 / uVar22;
              }
              uVar25 = uVar24 - uVar25 * uVar22;
            }
          }
          plVar27 = *(long **)(*plVar35 + uVar25 * 8);
          if (plVar27 == (long *)0x0) goto LAB_02bd99d8;
          if (uVar20 < 2) {
            do {
              plVar27 = (long *)*plVar27;
              if ((plVar27 == (long *)0x0) || ((plVar27[1] & uVar22 - 1) != uVar25))
              goto LAB_02bd99d8;
            } while (*(uint *)(plVar27 + 2) != uVar34);
          }
          else {
            do {
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_02bd99d8;
              uVar20 = plVar27[1];
              if (uVar22 <= uVar20) {
                uVar9 = 0;
                if (uVar22 != 0) {
                  uVar9 = uVar20 / uVar22;
                }
                uVar20 = uVar20 - uVar9 * uVar22;
              }
              if (uVar20 != uVar25) goto LAB_02bd99d8;
            } while (*(uint *)(plVar27 + 2) != uVar34);
          }
          if (plVar17 != (long *)0x0) {
            plVar27 = (long *)plVar17[3];
            if (plVar27 != (long *)0x0) {
              lVar31 = plVar27[0xb];
              piVar1 = (int *)(lVar31 + 0xc);
              do {
                iVar30 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar30 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar30 + -1 == 0) {
                *(undefined8 *)(lVar31 + 0x18) = 0;
                (**(code **)(*plVar27 + 0x20))();
              }
            }
            plVar27 = *(long **)(param_2 + 0x1c0);
            uVar22 = (**(code **)(*plVar27 + 0xc0))(plVar27);
            if ((uVar22 & 1) != 0) {
              lVar31 = tpidr_el0;
              if (*(char *)(lVar31 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar31 + 0x38d488) = 1;
                *(undefined8 *)(lVar31 + 0x38d478) = 0;
                *(undefined8 *)(lVar31 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar31 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar31 + 0x38d480)) {
                FUN_02bcc824(plVar27,plVar17,0x20,8);
                goto LAB_02bd9b04;
              }
            }
            (**(code **)(*plVar27 + 0x18))(plVar27,plVar17,0x20,8);
          }
        }
LAB_02bd9b04:
        lVar31 = lVar29 * 2;
        lVar29 = lVar29 + 1;
        *(undefined2 *)((long)plVar33 + 0xb2) = *(undefined2 *)((long)&plStack_10880 + lVar31);
        if (plVar33 != (long *)0x0) {
          lVar31 = plVar33[0xb];
          piVar1 = (int *)(lVar31 + 0xc);
          do {
            iVar30 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar30 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar30 + -1 == 0) {
            *(undefined8 *)(lVar31 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))(plVar33);
          }
        }
        plVar21 = plVar21 + 1;
        if (plVar21 == plVar19) break;
        plVar33 = (long *)*plVar21;
      } while( true );
    }
    plVar19 = (long *)*param_1;
    plVar21 = *(long **)(param_2 + 0x100);
    if (plVar19 != plVar21) {
      if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
        plVar21 = plVar21 + 2;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = *plVar21 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar21 = *(long **)(param_2 + 0x100);
      }
      *param_1 = (long)plVar21;
      if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
        plVar21 = plVar19 + 2;
        do {
          lVar29 = *plVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar29 + -1 == 0) {
          (**(code **)(*plVar19 + 0x18))();
        }
      }
    }
  }
  plVar21 = *(long **)(param_2 + 0x160);
  plVar19 = *(long **)(param_2 + 0x168);
  while (plVar19 != plVar21) {
    plVar19 = plVar19 + -1;
    plVar35 = (long *)*plVar19;
    if (plVar35 != (long *)0x0) {
      lVar29 = plVar35[0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        iVar30 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar30 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar30 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*plVar35 + 0x20))();
      }
    }
  }
  *(long **)(param_2 + 0x168) = plVar21;
  *(undefined1 *)(param_2 + 0x260) = 0;
  nn::os::UnlockMutex(pMVar2);
  do {
    plVar21 = puVar32 + -2;
    puVar32 = puVar32 + -8;
    if ((*plVar21 != 0) && (plVar19 = (long *)(*plVar21 + (long)plVar21), plVar19 != (long *)0x0)) {
      if (plVar19[1] != 0) {
        plVar35 = plVar19 + 2;
        do {
          lVar29 = *plVar35;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar8) {
            *plVar35 = lVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar29 + -1 == 0) {
          (**(code **)(*plVar19 + 0x18))();
        }
      }
      *plVar21 = 0;
    }
  } while (puVar32 != auStack_10070);
  return;
LAB_02bd8f3c:
  plVar26 = (long *)plVar26[3];
  if (plVar26 != (long *)0x0) {
    lVar29 = plVar26[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_02bd9e10;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plStack_10078 = *(long **)(param_2 + 0xd0);
  if ((plStack_10078 != (long *)0x0) && (plStack_10078[1] != 0)) {
    plVar33 = plStack_10078 + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar8) {
        *plVar33 = *plVar33 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  (**(code **)(*plVar26 + 0x40))(&plStack_10880,plVar26,&plStack_10078);
  plVar33 = plStack_10880;
  plVar17 = plStack_10878;
  if ((plStack_10078 != (long *)0x0) && (plStack_10078[1] != 0)) {
    plVar27 = plStack_10078 + 2;
    do {
      lVar29 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar29 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar29 + -1 == 0) {
      (**(code **)(*plStack_10078 + 0x18))();
      plVar33 = plStack_10880;
      plVar17 = plStack_10878;
    }
  }
  plStack_10880 = plVar33;
  plStack_10878 = plVar17;
  if (plVar33 != (long *)0x0) {
    if (plVar33[1] != 0) {
      plVar27 = plVar33 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = *plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if ((plVar17 != (long *)0x0) && (*(char *)(param_2 + 0xf4) == '\0')) {
      lVar29 = plVar17[1];
      if (lVar29 != 0) {
        plVar27 = plVar17 + 2;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar8) {
            *plVar27 = *plVar27 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if ((int)plVar17[5] != 0) {
        if (((*PTR_DAT_0437a648 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a648);
        }
        lVar29 = *(long *)PTR_DAT_0437a650;
        *(long *)PTR_DAT_0437a658 = lVar29;
        lVar29 = *(long *)(lVar29 + 0x230);
        if (plVar17[1] != 0) {
          plVar27 = plVar17 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar8) {
              *plVar27 = *plVar27 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_02bf3010(lVar29,&plStack_10080);
        if (plVar17[1] != 0) {
          plVar27 = plVar17 + 2;
          do {
            lVar31 = *plVar27;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar8) {
              *plVar27 = lVar31 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar31 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
        nn::os::LockMutex((MutexType *)(lVar29 + 0x128));
        FUN_02febde0(*(undefined8 *)(lVar29 + 0x20),plVar33,plVar17);
        nn::os::UnlockMutex((MutexType *)(lVar29 + 0x128));
        plVar35[0x17] = (long)plVar33;
        lVar29 = plVar17[1];
      }
      if (lVar29 != 0) {
        plVar27 = plVar17 + 2;
        do {
          lVar29 = *plVar27;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar8) {
            *plVar27 = lVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar29 + -1 == 0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
      }
    }
    *(undefined1 *)(plVar35 + 0x16) = 1;
    if (*(int *)(param_2 + 0xfc) == 5) {
      plVar17 = (long *)*param_1;
      if (plVar17 != plVar33) {
        if (plVar33[1] != 0) {
          plVar27 = plVar33 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar8) {
              *plVar27 = *plVar27 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        *param_1 = (long)plVar33;
        if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
          plVar27 = plVar17 + 2;
          do {
            lVar29 = *plVar27;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar8) {
              *plVar27 = lVar29 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar29 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))();
          }
        }
      }
      uVar22 = *(ulong *)(param_2 + 0x198);
      if ((uVar22 != 0) && (plVar17 = *(long **)*plVar21, plVar17 != (long *)0x0)) {
        if ((uVar22 & uVar22 - 1) == 0) {
          do {
            plVar17 = (long *)*plVar17;
            if ((plVar17 == (long *)0x0) || ((plVar17[1] & uVar22 - 1) != 0)) goto LAB_02bd9370;
          } while (*(int *)(plVar17 + 2) != 0);
        }
        else {
          do {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_02bd9370;
            uVar24 = plVar17[1];
            if (uVar24 != 0) {
              if (uVar24 < uVar22) goto LAB_02bd9370;
              uVar20 = 0;
              if (uVar22 != 0) {
                uVar20 = uVar24 / uVar22;
              }
              if (uVar24 != uVar20 * uVar22) goto LAB_02bd9370;
            }
          } while ((int)plVar17[2] != 0);
        }
        bVar8 = true;
        bVar10 = 1;
        goto joined_r0x02bd9680;
      }
LAB_02bd9370:
      plVar17 = (long *)(**(code **)(**(long **)(param_2 + 0x1c0) + 0x10))
                                  (*(long **)(param_2 + 0x1c0),0x20,8);
      if (plVar17 == (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 0x1c0) + 0xb8))();
      }
      *(undefined4 *)(plVar17 + 2) = 0;
      plVar17[3] = (long)plVar35;
      if (plVar35 != (long *)0x0) {
        lVar29 = plVar35[0xb];
        if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_02bd9e10;
        if (*(long *)(lVar29 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
          *(undefined8 *)(lVar29 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      *plVar17 = 0;
      plVar17[1] = 0;
      fVar37 = (float)(*(long *)(param_2 + 0x1d8) + 1);
      if ((uVar22 == 0) || (*(float *)(param_2 + 0x1e0) * (float)uVar22 < fVar37)) {
        uVar22 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
        uVar24 = (ulong)(fVar37 / *(float *)(param_2 + 0x1e0));
        if (uVar24 <= uVar22) {
          uVar24 = uVar22;
        }
        FUN_02be1d4c(plVar21,uVar24);
        uVar22 = *(ulong *)(param_2 + 0x198);
      }
      plVar27 = *(long **)*plVar21;
      if (plVar27 == (long *)0x0) {
        *plVar17 = *plVar19;
        *plVar19 = (long)plVar17;
        *(long **)*plVar21 = plVar19;
        if (*plVar17 != 0) {
          uVar24 = *(ulong *)(*plVar17 + 8);
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar24 = uVar24 & uVar22 - 1;
          }
          else if (uVar22 <= uVar24) {
            uVar20 = 0;
            if (uVar22 != 0) {
              uVar20 = uVar24 / uVar22;
            }
            uVar24 = uVar24 - uVar20 * uVar22;
          }
          plVar27 = (long *)(*plVar21 + uVar24 * 8);
          goto LAB_02bd9664;
        }
      }
      else {
        *plVar17 = *plVar27;
LAB_02bd9664:
        *plVar27 = (long)plVar17;
      }
      *(long *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + 1;
      bVar10 = 1;
      bVar8 = true;
      goto joined_r0x02bd9680;
    }
    lVar31 = (long)iVar30;
    lVar29 = lVar31 * 0x40;
    plVar27 = alStack_10040 + lVar31 * 8;
    lVar23 = *plVar27;
    *plVar27 = (long)plVar33 - (long)plVar27;
    plVar17 = (long *)0x0;
    if (lVar23 != 0) {
      plVar17 = (long *)(lVar23 + (long)plVar27);
    }
    if (plVar33[1] != 0) {
      plVar27 = plVar33 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = *plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar27 = plVar17 + 2;
      do {
        lVar23 = *plVar27;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = lVar23 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
    fVar37 = *(float *)(plVar35 + 0x10);
    fVar45 = *(float *)((long)plVar35 + 0x84);
    fVar47 = *(float *)(plVar35 + 0x11);
    bStack_108f0 = (byte)uVar18;
    bStack_108ec = (byte)((ulong)uVar18 >> 0x20);
    bStack_108e9 = (byte)((ulong)uVar18 >> 0x38);
    bStack_108e8 = (byte)uVar11;
    bStack_108e7 = (byte)((ulong)uVar11 >> 8);
    bStack_108e6 = (byte)((ulong)uVar11 >> 0x10);
    bStack_108e5 = (byte)((ulong)uVar11 >> 0x18);
    bStack_108e4 = (byte)((ulong)uVar11 >> 0x20);
    bStack_108e3 = (byte)((ulong)uVar11 >> 0x28);
    bStack_108e2 = (byte)((ulong)uVar11 >> 0x30);
    bStack_108e1 = (byte)((ulong)uVar11 >> 0x38);
    afStack_10060[lVar31 * 0x10] = fVar37;
    afStack_10060[lVar31 * 0x10 + 1] = fVar45;
    afStack_10060[lVar31 * 0x10 + 2] = fVar47;
    iVar15 = -(uint)(fVar45 == 0.0);
    iVar46 = -(uint)(fVar47 == 0.0);
    uVar34 = (uint)(~-(fVar37 == 0.0) & bStack_108f0);
    auVar40._0_8_ =
         CONCAT17(~(byte)((uint)iVar15 >> 0x18) & bStack_108e9,
                  (uint7)CONCAT14(~(byte)iVar15 & bStack_108ec,uVar34));
    auVar40[8] = ~(byte)iVar46 & bStack_108e8;
    auVar40[9] = ~(byte)((uint)iVar46 >> 8) & bStack_108e7;
    auVar40[10] = ~(byte)((uint)iVar46 >> 0x10) & bStack_108e6;
    auVar40[0xb] = ~(byte)((uint)iVar46 >> 0x18) & bStack_108e5;
    bVar57 = abStack_10052[lVar29] & 0xfd;
    if ((uVar34 + (int)((ulong)auVar40._0_8_ >> 0x20) + auVar40._8_4_ & 7) != 0) {
      bVar57 = abStack_10052[lVar29] | 2;
    }
    abStack_10052[lVar29] = bVar57;
    fVar37 = *(float *)(plVar35 + 0x12);
    fVar45 = *(float *)((long)plVar35 + 0x94);
    fVar47 = *(float *)(plVar35 + 0x13);
    fStack_10900 = auVar42._0_4_;
    fStack_108fc = auVar42._4_4_;
    fStack_108f8 = auVar42._8_4_;
    fStack_108f4 = auVar42._12_4_;
    iVar15 = -(uint)(fVar45 == fStack_108fc);
    iVar46 = -(uint)(fVar47 == fStack_108f8);
    iVar54 = -(uint)(fStack_108f4 == 0.0);
    afStack_10050[lVar31 * 0x10] = fVar37;
    afStack_10050[lVar31 * 0x10 + 1] = fVar45;
    afStack_10050[lVar31 * 0x10 + 2] = fVar47;
    uVar34 = (uint)(~-(fVar37 == fStack_10900) & bStack_108f0);
    auVar41._0_8_ =
         CONCAT17(~(byte)((uint)iVar15 >> 0x18) & bStack_108e9,
                  (uint7)CONCAT14(~(byte)iVar15 & bStack_108ec,uVar34));
    auVar41[8] = ~(byte)iVar46 & bStack_108e8;
    auVar41[9] = ~(byte)((uint)iVar46 >> 8) & bStack_108e7;
    auVar41[10] = ~(byte)((uint)iVar46 >> 0x10) & bStack_108e6;
    auVar41[0xb] = ~(byte)((uint)iVar46 >> 0x18) & bStack_108e5;
    auVar55[0xc] = ~(byte)iVar54 & bStack_108e4;
    auVar55._0_12_ = auVar41;
    auVar55[0xd] = ~(byte)((uint)iVar54 >> 8) & bStack_108e3;
    auVar55[0xe] = ~(byte)((uint)iVar54 >> 0x10) & bStack_108e2;
    auVar55[0xf] = ~(byte)((uint)iVar54 >> 0x18) & bStack_108e1;
    bVar3 = bVar57 & 0xd7;
    if ((uVar34 + (int)((ulong)auVar41._0_8_ >> 0x20) + auVar41._8_4_ + auVar55._12_4_ & 7) != 0) {
      bVar3 = bVar57 | 8;
    }
    abStack_10052[lVar29] = bVar3 & 0xdf;
    fVar37 = *(float *)(plVar35 + 0x14);
    fVar45 = *(float *)((long)plVar35 + 0xa4);
    fVar47 = *(float *)(plVar35 + 0x15);
    fVar48 = *(float *)((long)plVar35 + 0xac);
    auVar50._0_4_ = fVar37 * fVar37;
    auVar50._4_4_ = fVar45 * fVar45;
    auVar50._8_4_ = fVar47 * fVar47;
    auVar50._12_4_ = fVar48 * fVar48;
    auVar55 = NEON_ext(auVar50,auVar50,8,1);
    fVar49 = auVar55._0_4_ + auVar50._0_4_;
    fVar53 = auVar55._4_4_ + auVar50._4_4_;
    fVar36 = fVar49 + fVar53;
    fVar49 = fVar49 + fVar53;
    auVar51._8_8_ = CONCAT44(fVar49,fVar36);
    auVar51._0_8_ = CONCAT44(fVar49,fVar36);
    auVar55 = NEON_frsqrte(auVar51,4);
    auVar61._0_4_ = auVar55._0_4_ * fVar36;
    auVar61._4_4_ = auVar55._4_4_ * fVar49;
    auVar61._8_4_ = auVar55._8_4_ * fVar36;
    auVar61._12_4_ = auVar55._12_4_ * fVar49;
    auVar62 = NEON_frsqrts(auVar55,auVar61,4);
    auVar56._0_4_ = auVar55._0_4_ * auVar62._0_4_;
    auVar56._4_4_ = auVar55._4_4_ * auVar62._4_4_;
    auVar56._8_4_ = auVar55._8_4_ * auVar62._8_4_;
    auVar56._12_4_ = auVar55._12_4_ * auVar62._12_4_;
    auVar63._0_4_ = fVar36 * auVar56._0_4_;
    auVar63._4_4_ = fVar49 * auVar56._4_4_;
    auVar63._8_4_ = fVar36 * auVar56._8_4_;
    auVar63._12_4_ = fVar49 * auVar56._12_4_;
    auVar55 = NEON_frsqrts(auVar56,auVar63,4);
    fVar37 = fVar37 * auVar56._0_4_ * auVar55._0_4_;
    fVar45 = fVar45 * auVar56._4_4_ * auVar55._4_4_;
    fVar47 = fVar47 * auVar56._8_4_ * auVar55._8_4_;
    fVar48 = fVar48 * auVar56._12_4_ * auVar55._12_4_;
    iVar15 = -(uint)(fVar36 < fVar38);
    iVar46 = -(uint)(fVar49 < fVar38);
    iVar54 = -(uint)(fVar36 < fVar38);
    iVar60 = -(uint)(fVar49 < fVar38);
    bVar57 = (byte)((uint)iVar15 >> 8);
    bVar58 = (byte)((uint)iVar15 >> 0x10);
    bVar59 = (byte)((uint)iVar15 >> 0x18);
    auVar43[0] = SUB41(fVar37,0) & ~(byte)iVar15;
    auVar43[1] = (byte)((uint)fVar37 >> 8) & ~bVar57;
    auVar43[2] = (byte)((uint)fVar37 >> 0x10) & ~bVar58;
    auVar43[3] = (byte)((uint)fVar37 >> 0x18) & ~bVar59;
    auVar43[4] = SUB41(fVar45,0) & ~(byte)iVar46;
    auVar43[5] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar43[6] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar43[7] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    auVar43[8] = SUB41(fVar47,0) & ~(byte)iVar54;
    auVar43[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar54 >> 8);
    auVar43[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
    auVar43[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
    auVar43[0xc] = SUB41(fVar48,0) & ~(byte)iVar60;
    auVar43[0xd] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar60 >> 8);
    auVar43[0xe] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
    auVar43[0xf] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
    iVar15 = -(uint)((float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar59,
                                     CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar58,
                                              CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar57,
                                                       SUB41(fVar36,0) & ~(byte)iVar15))) == 0.0);
    auVar62._8_8_ = uVar13;
    auVar62._0_8_ = uVar12;
    auVar52._0_4_ =
         CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15)));
    auVar52._4_4_ = auVar52._0_4_;
    auVar52._8_4_ = auVar52._0_4_;
    auVar52._12_4_ = auVar52._0_4_;
    auVar62 = auVar62 ^ (auVar62 ^ auVar43) & auVar52;
    auVar44._0_4_ = auVar62._0_4_ * auVar62._0_4_;
    auVar44._4_4_ = auVar62._4_4_ * auVar62._4_4_;
    auVar44._8_4_ = auVar62._8_4_ * auVar62._8_4_;
    auVar44._12_4_ = auVar62._12_4_ * auVar62._12_4_;
    auStack_10070[lVar31 * 8 + 1] = auVar62._8_8_;
    auStack_10070[lVar31 * 8] = auVar62._0_8_;
    auVar55 = NEON_ext(auVar44,auVar44,8,1);
    bVar57 = bVar3 & 0xdf | 4;
    if (auVar44._0_4_ + auVar44._4_4_ + auVar55._0_4_ <= 7.6154333e-07) {
      bVar57 = bVar3 & 0xdb;
    }
    abStack_10052[lVar29] = bVar57;
  }
  bVar8 = 0x3fe < iVar30;
  iVar30 = iVar30 + 1;
joined_r0x02bd9680:
  if ((plVar33 != (long *)0x0) && (plVar33[1] != 0)) {
    plVar17 = plVar33 + 2;
    do {
      lVar29 = *plVar17;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar29 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar29 + -1 == 0) {
      (**(code **)(*plVar33 + 0x18))(plVar33);
    }
  }
  if ((plStack_10878 != (long *)0x0) && (plStack_10878[1] != 0)) {
    plVar33 = plStack_10878 + 2;
    do {
      lVar29 = *plVar33;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar29 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar29 + -1 == 0) {
      (**(code **)(*plStack_10878 + 0x18))();
    }
  }
  if ((plStack_10880 != (long *)0x0) && (plStack_10880[1] != 0)) {
    plVar33 = plStack_10880 + 2;
    do {
      lVar29 = *plVar33;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar6) {
        *plVar33 = lVar29 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar29 + -1 == 0) {
      (**(code **)(*plStack_10880 + 0x18))();
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar29 = plVar26[0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (plVar35 != (long *)0x0) {
    lVar29 = plVar35[0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar35 + 0x20))(plVar35);
    }
  }
  puVar28 = puVar28 + 1;
  if ((puVar28 == puVar4) || (bVar8)) goto LAB_02bd96fc;
  goto LAB_02bd8e0c;
}


