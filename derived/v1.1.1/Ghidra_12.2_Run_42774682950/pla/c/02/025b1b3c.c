/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b1b3c; name: FUN_025b1b3c
 */


void FUN_025b1b3c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 local_a0 [4];
  undefined8 local_9c;
  undefined8 local_94;
  long *local_88 [3];
  
  if (*(char *)(param_1 + 0x234) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    local_88[0] = (long *)0x0;
    lVar18 = *(long *)(param_1 + 0x200);
    if (lVar18 == 0) goto LAB_025b1b88;
LAB_025b1c08:
    puVar7 = PTR_DAT_0437a558;
    puVar6 = PTR_DAT_0437a550;
    if (*(int *)(lVar18 + 0xc) != 0) {
      piVar1 = (int *)(lVar18 + 0xc);
      iVar17 = *(int *)(lVar18 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar11 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_025b2a64;
        while (puVar19 != (undefined8 *)puVar7) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) goto LAB_025b1b88;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar17) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar16 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar16 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            cVar3 = *(char *)(param_1 + 0x218);
            goto joined_r0x025b1cb0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar17 = iVar10;
      } while (iVar10 != 0);
      goto LAB_025b1b88;
    }
LAB_025b2a64:
    plVar16 = (long *)0x0;
    if (*(char *)(param_1 + 0x218) == '\0') goto LAB_025b1cb4;
LAB_025b1b90:
    if (plVar16 == (long *)0x0) goto joined_r0x025b1c54;
  }
  else {
    FUN_009bd898(local_88);
    lVar18 = *(long *)(param_1 + 0x200);
    if (lVar18 != 0) goto LAB_025b1c08;
LAB_025b1b88:
    plVar16 = (long *)0x0;
    cVar3 = *(char *)(param_1 + 0x218);
joined_r0x025b1cb0:
    if (cVar3 != '\0') goto LAB_025b1b90;
LAB_025b1cb4:
    if (local_88[0] == (long *)0x0) goto LAB_025b1b90;
    if (plVar16 == (long *)0x0) goto joined_r0x025b1c54;
    if (1.1920929e-07 <= *(float *)((long)param_2 + 4)) {
      *(undefined8 *)(param_1 + 0x21c) = *param_2;
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x230);
      uVar20 = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined4 *)(param_1 + 0x240) = uVar20;
      puVar6 = PTR_DAT_04379660;
      local_160 = 0xed862e5465112298;
      local_158 = (code *)0x38d847c;
      local_150 = 0x15;
      local_148 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar8 = PTR_DAT_04379670;
      puVar7 = PTR_DAT_04379668;
      lVar18 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar18;
      uVar12 = *(ulong *)(lVar18 + 0x60);
      uVar20 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
        }
        else {
          uVar14 = 0xf1546034b1dfb31c;
          if (uVar12 < 0xf1546034b1dfb31d) {
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = 0xf1546034b1dfb31c / uVar12;
            }
            uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
          }
        }
        plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar15[1] == 0xf1546034b1dfb31c) {
                if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b1de0;
              }
              else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar15[1];
              if (uVar13 == 0xf1546034b1dfb31c) {
                if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b1de0;
              }
              else {
                if (uVar12 <= uVar13) {
                  uVar5 = 0;
                  if (uVar12 != 0) {
                    uVar5 = uVar13 / uVar12;
                  }
                  uVar13 = uVar13 - uVar5 * uVar12;
                }
                if (uVar13 != uVar14) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      goto LAB_025b1e20;
    }
  }
  goto LAB_025b1b94;
LAB_025b1de0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_025b1e20:
  *(undefined4 *)(param_1 + 0x244) = uVar20;
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_9c = &DAT_3f0000003f000000;
  local_94 = 0;
  local_a0[0] = 1;
  local_160 = 0x17d80d085b579aa5;
  local_158 = (code *)0x396ed92;
  local_150 = 0x18;
  local_148 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar12 = *(ulong *)(lVar18 + 0x60);
  uVar20 = 0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
    }
    else {
      uVar14 = 0xf1546034b1dfb31c;
      if (uVar12 < 0xf1546034b1dfb31d) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xf1546034b1dfb31c / uVar12;
        }
        uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b1f10;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b1f10;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_025b1f50;
LAB_025b2028:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  goto LAB_025b2068;
LAB_025b2140:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  goto LAB_025b2180;
LAB_025b2258:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  goto LAB_025b2298;
LAB_025b236c:
  plVar15 = (long *)plVar15[3];
  iVar17 = 0;
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar21 = (float)FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    iVar17 = (int)(fVar21 * 30.0);
  }
  goto joined_r0x025b261c;
LAB_025b1f10:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar15,&local_160);
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_025b1f50:
  local_9c = (undefined1 *)CONCAT44(local_9c._4_4_,uVar20);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_160 = 0x17d80c085b5798f2;
  local_158 = (code *)0x3902530;
  local_150 = 0x18;
  local_148 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar12 = *(ulong *)(lVar18 + 0x60);
  uVar20 = 0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
    }
    else {
      uVar14 = 0xf1546034b1dfb31c;
      if (uVar12 < 0xf1546034b1dfb31d) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xf1546034b1dfb31c / uVar12;
        }
        uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2028;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2028;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_025b2068:
  local_9c = (undefined1 *)CONCAT44(uVar20,(undefined4)local_9c);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_160 = 0x6db77408bd9409d5;
  local_158 = (code *)0x398b5c9;
  local_150 = 0x21;
  local_148 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar12 = *(ulong *)(lVar18 + 0x60);
  uVar20 = 0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
    }
    else {
      uVar14 = 0xf1546034b1dfb31c;
      if (uVar12 < 0xf1546034b1dfb31d) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xf1546034b1dfb31c / uVar12;
        }
        uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2140;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2140;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_025b2180:
  local_94 = CONCAT44(local_94._4_4_,uVar20);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_160 = 0xe47ec326123461d6;
  local_158 = (code *)0x392be72;
  local_150 = 0x1f;
  local_148 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar12 = *(ulong *)(lVar18 + 0x60);
  uVar20 = 0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
    }
    else {
      uVar14 = 0xf1546034b1dfb31c;
      if (uVar12 < 0xf1546034b1dfb31d) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xf1546034b1dfb31c / uVar12;
        }
        uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2258;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b2258;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_025b2298:
  local_94 = CONCAT44(uVar20,(undefined4)local_94);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_160 = 0xcbf711345593eb3;
  local_158 = (code *)0x3994cf5;
  local_150 = 0x21;
  local_148 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar12 = *(ulong *)(lVar18 + 0x60);
  if (uVar12 == 0) {
LAB_025b2614:
    iVar17 = 0;
  }
  else {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf1546034b1dfb31c;
    }
    else {
      uVar14 = 0xf1546034b1dfb31c;
      if (uVar12 < 0xf1546034b1dfb31d) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xf1546034b1dfb31c / uVar12;
        }
        uVar14 = 0xf1546034b1dfb31c - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
    if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
    goto LAB_025b2614;
    if (1 < uVar13) {
      do {
        uVar13 = plVar15[1];
        if (uVar13 == 0xf1546034b1dfb31c) {
          if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b236c;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar5 = 0;
            if (uVar12 != 0) {
              uVar5 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar5 * uVar12;
          }
          if (uVar13 != uVar14) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      goto LAB_025b2614;
    }
    do {
      if (plVar15[1] == 0xf1546034b1dfb31c) {
        if (plVar15[2] == -0xeab9fcb4e204ce4) goto LAB_025b236c;
      }
      else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_025b2614;
      plVar15 = (long *)*plVar15;
      iVar17 = 0;
    } while (plVar15 != (long *)0x0);
  }
joined_r0x025b261c:
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0xf1546034b1dfb31c;
  local_158 = (code *)0x389e2fd;
  local_c0 = 0x4400541bb182b4d4;
  pcStack_b8 = "airthrow_pfx_radialBlurEaseFuncIn";
  local_b0 = 0x21;
  local_a8 = (long *)0x0;
  uVar20 = FUN_00ea3f80(&local_160,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (((*PTR_DAT_0437a158 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  uVar11 = *(undefined8 *)PTR_DAT_0437a160;
  *(undefined8 *)PTR_DAT_0437a168 = uVar11;
  FUN_0192c050(uVar11,0,local_a0,iVar17,uVar20);
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar18 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar18;
  if (lVar18 != 0) {
    local_d8 = 0xfd77b72dba4f1db7;
    local_d0 = "PLAY_PM_RIDE_SURFING_SLOW_IN";
    uStack_c8 = 0x1c;
    FUN_02a4754c(&local_c0,&local_d8);
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (long *)0x0;
    local_160 = 0;
    local_158 = (code *)0x0;
    FUN_02913338(lVar18,&local_c0,&local_160,0,0,0);
    pcVar9 = local_158;
    if (local_158 == (code *)0x0) {
      local_158 = (code *)0x0;
    }
    else {
      local_150 = 0;
      local_148 = (long *)0x0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar9)(&local_140);
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0x218) = 1;
  *(undefined1 *)(param_1 + 0x24c) = 1;
LAB_025b1b94:
  lVar18 = plVar16[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar17 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar17 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar17 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
joined_r0x025b1c54:
  if (local_88[0] != (long *)0x0) {
    lVar18 = local_88[0][0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_88[0] + 0x20))();
    }
  }
  return;
}


