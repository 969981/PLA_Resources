/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b2ea4; name: FUN_025b2ea4
 */


void FUN_025b2ea4(long param_1)

{
  long *plVar1;
  int *piVar2;
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
  long lVar15;
  long *plVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined8 local_74;
  long *local_68;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    local_68 = (long *)0x0;
    cVar3 = *(char *)(param_1 + 0x218);
  }
  else {
    FUN_009bd898(&local_68);
    cVar3 = *(char *)(param_1 + 0x218);
  }
  if ((cVar3 == '\0') || (local_68 == (long *)0x0)) goto LAB_025b3734;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x248) = 0;
  puVar6 = PTR_DAT_04379660;
  local_140 = 0xed862e5465112298;
  local_138 = (code *)0x38d847c;
  local_130 = 0x15;
  local_128 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar15 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b2fe0;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b2fe0;
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
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_025b3020;
LAB_025b310c:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  goto LAB_025b314c;
LAB_025b3224:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  goto LAB_025b3264;
LAB_025b333c:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  goto LAB_025b337c;
LAB_025b3454:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  goto LAB_025b3494;
LAB_025b3568:
  plVar16 = (long *)plVar16[3];
  iVar17 = 0;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar19 = (float)FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    iVar17 = (int)(fVar19 * 30.0);
  }
  goto joined_r0x025b3854;
LAB_025b2fe0:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar16,&local_140);
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
LAB_025b3020:
  *(undefined4 *)(param_1 + 0x244) = uVar18;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_7c = &DAT_3f0000003f000000;
  local_74 = 0;
  local_140 = 0x17d80d085b579aa5;
  local_138 = (code *)0x396ed92;
  local_80[0] = 0;
  local_130 = 0x18;
  local_128 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar7;
  *(long *)puVar8 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b310c;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b310c;
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
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025b314c:
  local_7c = (undefined1 *)CONCAT44(local_7c._4_4_,uVar18);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_140 = 0x17d80c085b5798f2;
  local_138 = (code *)0x3902530;
  local_130 = 0x18;
  local_128 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar7;
  *(long *)puVar8 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3224;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3224;
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
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025b3264:
  local_7c = (undefined1 *)CONCAT44(uVar18,(undefined4)local_7c);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_140 = 0x14b02fda2cdf219e;
  local_138 = (code *)0x39aef36;
  local_130 = 0x22;
  local_128 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar7;
  *(long *)puVar8 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b333c;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b333c;
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
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025b337c:
  local_74 = CONCAT44(local_74._4_4_,uVar18);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_140 = 0x657bf7b0e45ec317;
  local_138 = (code *)0x39b7618;
  local_130 = 0x20;
  local_128 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar7;
  *(long *)puVar8 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3454;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xf1546034b1dfb31c) {
            if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3454;
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
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025b3494:
  local_74 = CONCAT44(uVar18,(undefined4)local_74);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_140 = 0xf43592becf5f4840;
  local_138 = (code *)0x389e308;
  local_130 = 0x22;
  local_128 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar7;
  *(long *)puVar8 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  if (uVar12 == 0) {
LAB_025b384c:
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
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
    goto LAB_025b384c;
    if (1 < uVar13) {
      do {
        uVar13 = plVar16[1];
        if (uVar13 == 0xf1546034b1dfb31c) {
          if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3568;
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
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      goto LAB_025b384c;
    }
    do {
      if (plVar16[1] == 0xf1546034b1dfb31c) {
        if (plVar16[2] == -0xeab9fcb4e204ce4) goto LAB_025b3568;
      }
      else if ((plVar16[1] & uVar12 - 1) != uVar14) goto LAB_025b384c;
      plVar16 = (long *)*plVar16;
      iVar17 = 0;
    } while (plVar16 != (long *)0x0);
  }
joined_r0x025b3854:
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_130 = 10;
  local_128 = (long *)0x0;
  local_140 = 0xf1546034b1dfb31c;
  local_138 = (code *)0x389e2fd;
  local_a0 = 0xdc49ab0e8481b741;
  pcStack_98 = "airthrow_pfx_radialBlurEaseFuncOut";
  local_90 = 0x22;
  local_88 = (long *)0x0;
  uVar18 = FUN_00ea3f80(&local_140,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (((*PTR_DAT_0437a158 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  uVar11 = *(undefined8 *)PTR_DAT_0437a160;
  *(undefined8 *)PTR_DAT_0437a168 = uVar11;
  FUN_0192c050(uVar11,0,local_80,iVar17,uVar18);
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar15 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar15;
  if (lVar15 != 0) {
    local_b8 = 0x3366d5b3b014ee3c;
    local_b0 = "PLAY_PM_RIDE_SURFING_SLOW_OUT";
    uStack_a8 = 0x1d;
    FUN_02a4754c(&local_a0,&local_b8);
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (long *)0x0;
    local_140 = 0;
    local_138 = (code *)0x0;
    FUN_02913338(lVar15,&local_a0,&local_140,0,0,0);
    pcVar9 = local_138;
    if (local_138 == (code *)0x0) {
      local_138 = (code *)0x0;
    }
    else {
      local_130 = 0;
      local_128 = (long *)0x0;
      local_140 = 0;
      local_138 = (code *)0x0;
      (*pcVar9)(&local_120);
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x24c) = 0;
LAB_025b3734:
  if (local_68 != (long *)0x0) {
    lVar15 = local_68[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar17 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


