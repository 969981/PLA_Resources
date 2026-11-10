/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d97c44; name: FUN_01d97c44
 */


long FUN_01d97c44(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  long *local_160;
  long *local_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined **local_140;
  undefined4 local_138;
  undefined **local_130;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  char local_e0;
  char local_d0;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  long *local_a0;
  int local_98;
  undefined8 local_94;
  undefined8 *local_88 [3];
  undefined8 local_68;
  
  local_98 = 0;
  local_94 = 0;
  FUN_01d98a18(param_1,&local_98);
  if (local_98 == 3) {
    local_150 = (undefined8 *)0x0;
    local_120 = 0;
    local_140 = (undefined **)(PTR_DAT_04382978 + 0x10);
    local_130 = &PTR_FUN_04287c30;
    local_138 = 3;
    uVar12 = *(undefined8 *)PTR_DAT_04379570;
    uVar13 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    uStack_118 = 0;
    local_d0 = '\0';
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = '\0';
    local_b0 = 0;
    local_a8 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (local_110 = uVar12, uStack_108 = uVar13, iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648),
       iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar14 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar14;
    local_120 = (ulong)(uint)((float)local_94 + local_94._4_4_ * 0.5) << 0x20;
    local_150 = *(undefined8 **)(lVar14 + 0x230);
    local_100 = local_94;
    uStack_118 = 0;
    local_f0 = *(ulong *)(param_1 + 0x800);
    local_e8 = *(undefined8 *)(param_1 + 0x808);
    local_110 = uVar12;
    uStack_108 = uVar13;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    uVar22 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x32b64a2075e1e63f;
      }
      else if (uVar16 < 0x32b64a2075e1e640) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x32b64a2075e1e63f / uVar16;
        }
        uVar18 = 0x32b64a2075e1e63f - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x32b64a2075e1e63f;
      }
      plVar19 = *(long **)(*(long *)(lVar14 + 0x58) + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x32b64a2075e1e63f) {
              if (plVar19[2] == 0x32b64a2075e1e63f) goto LAB_01d97e18;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x32b64a2075e1e63f) {
              if (plVar19[2] == 0x32b64a2075e1e63f) goto LAB_01d97e18;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01d97f74;
  }
  if (local_98 == 1) {
    local_e0 = '\0';
    local_140 = &PTR_LAB_04250428;
    local_138 = 1;
    local_150 = (undefined8 *)0x0;
    local_130 = &PTR_FUN_04287c08;
    local_f0 = local_f0 & 0xffffffffffffff00;
    local_120 = 0;
    uStack_118 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar14 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar14;
    local_150 = *(undefined8 **)(lVar14 + 0x230);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = CONCAT44(local_110._4_4_,(float)local_94);
    local_100 = *(undefined8 *)(param_1 + 0x800);
    local_f8 = *(undefined8 *)(param_1 + 0x808);
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar16 = *(ulong *)(lVar14 + 0x60);
    uVar22 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x32b64a2075e1e63f;
      }
      else if (uVar16 < 0x32b64a2075e1e640) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x32b64a2075e1e63f / uVar16;
        }
        uVar18 = 0x32b64a2075e1e63f - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x32b64a2075e1e63f;
      }
      plVar19 = *(long **)(*(long *)(lVar14 + 0x58) + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x32b64a2075e1e63f) {
              if (plVar19[2] == 0x32b64a2075e1e63f) goto LAB_01d983b4;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x32b64a2075e1e63f) {
              if (plVar19[2] == 0x32b64a2075e1e63f) goto LAB_01d983b4;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01d98510;
  }
  goto LAB_01d9803c;
LAB_01d97e18:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar19[0x21];
    uVar22 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar16 < 0xad7e35c8f769703f) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xad7e35c8f769703e / uVar16;
        }
        uVar18 = 0xad7e35c8f769703e - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xad7e35c8f769703e;
      }
      plVar20 = *(long **)(plVar19[0x20] + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xad7e35c8f769703e) {
              if (plVar20[2] == -0x5281ca3708968fc2) goto LAB_01d97f5c;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xad7e35c8f769703e) {
              if (plVar20[2] == -0x5281ca3708968fc2) goto LAB_01d97f5c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01d97f60;
  }
  goto LAB_01d97f74;
LAB_01d97f5c:
  uVar22 = (undefined4)plVar20[6];
LAB_01d97f60:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
LAB_01d97f74:
  local_b0 = 1;
  local_158 = *(long **)(param_1 + 0x68);
  local_ac = uVar22;
  if (local_158 != (long *)0x0) {
    lVar14 = local_158[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01d98794;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01d266e0(local_88,param_1,&local_158,&local_150);
  plVar19 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (plVar19 != (long *)0x0) {
    lVar14 = plVar19[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))();
    }
  }
  puVar7 = local_88[0];
  local_88[0] = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x160) = puVar7;
  if (local_158 != (long *)0x0) {
    lVar14 = local_158[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_158 + 0x20))();
    }
  }
  if (local_d0 != '\0') {
    local_d0 = '\0';
  }
  goto LAB_01d9803c;
LAB_01d983b4:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar19[0x21];
    uVar22 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar16 < 0xad7e35c8f769703f) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xad7e35c8f769703e / uVar16;
        }
        uVar18 = 0xad7e35c8f769703e - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xad7e35c8f769703e;
      }
      plVar20 = *(long **)(plVar19[0x20] + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xad7e35c8f769703e) {
              if (plVar20[2] == -0x5281ca3708968fc2) goto LAB_01d984f8;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xad7e35c8f769703e) {
              if (plVar20[2] == -0x5281ca3708968fc2) goto LAB_01d984f8;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01d984fc;
  }
  goto LAB_01d98510;
LAB_01d984f8:
  uVar22 = (undefined4)plVar20[6];
LAB_01d984fc:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
LAB_01d98510:
  local_c0 = 1;
  local_a0 = *(long **)(param_1 + 0x68);
  local_bc = uVar22;
  if (local_a0 != (long *)0x0) {
    lVar14 = local_a0[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01d98794;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01d98bc4(local_88,param_1,&local_a0,&local_150);
  plVar19 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (plVar19 != (long *)0x0) {
    lVar14 = plVar19[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))();
    }
  }
  puVar7 = local_88[0];
  local_88[0] = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x160) = puVar7;
  if (local_a0 == (long *)0x0) {
LAB_01d985cc:
    if (local_e0 == '\0') goto LAB_01d9803c;
LAB_01d985d4:
    local_e0 = '\0';
    lVar14 = *(long *)(param_1 + 0x90);
    pbVar6 = PTR_DAT_043794d0;
    puVar7 = (undefined8 *)PTR_DAT_043794d8;
    pbVar8 = PTR_DAT_043796e0;
    puVar9 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    lVar14 = local_a0[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) goto LAB_01d985cc;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*local_a0 + 0x20))();
    if (local_e0 != '\0') goto LAB_01d985d4;
LAB_01d9803c:
    lVar14 = *(long *)(param_1 + 0x90);
    pbVar6 = PTR_DAT_043794d0;
    puVar7 = (undefined8 *)PTR_DAT_043794d8;
    pbVar8 = PTR_DAT_043796e0;
    puVar9 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar6;
  PTR_DAT_043794d8 = (undefined *)puVar7;
  PTR_DAT_043796e0 = pbVar8;
  PTR_DAT_043796e8 = (undefined *)puVar9;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar2 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      puVar21 = *(undefined8 **)(lVar14 + 0x10);
      if (((*pbVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar8), iVar11 != 0)) {
        if (((*pbVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar6), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *puVar7 = uVar12;
          __cxa_guard_release(pbVar6);
        }
        *puVar9 = puVar7;
        __cxa_guard_release(pbVar8);
      }
      while( true ) {
        if (puVar21 == (undefined8 *)0x0) goto LAB_01d98044;
        if (puVar21 == puVar9) break;
        puVar21 = (undefined8 *)*puVar21;
      }
      iVar11 = *piVar2;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar19 = (long *)(lVar14 + -0x50);
          if (lVar14 != 0) {
            FUN_0199ce28(&local_150,plVar19);
            (**(code **)(*(long *)(param_1 + 0x120) + 0x40))(param_1 + 0x120,&local_150);
            puVar7 = local_150;
            if (local_150 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_150 + 1);
              do {
                iVar10 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                local_150[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_88[0] = (undefined8 *)*puVar7;
                FUN_02a44274(lVar15 + 0xd8,local_88);
              }
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01d98044:
  uVar12 = *(undefined8 *)(param_1 + 400);
  local_160 = *(long **)(param_1 + 0x160);
  if (local_160 != (long *)0x0) {
    lVar14 = local_160[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01d98794:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01a71028(uVar12,&local_160);
  if (local_160 != (long *)0x0) {
    lVar14 = local_160[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_160 + 0x20))();
    }
  }
  lVar14 = *(long *)(param_1 + 400);
  plVar19 = (long *)0x0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    plVar19 = (long *)(*(long *)(param_1 + 0x1a8) + 0x210);
  }
  (**(code **)(*plVar19 + 0x20))(local_88,plVar19);
  local_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  FUN_01800100(&local_150,local_88);
  puVar7 = local_88[0];
  if (local_88[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88[0] + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar7;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  local_140 = (undefined **)plVar19;
  FUN_0095aa3c(lVar14 + 0x560,&local_150);
  puVar7 = local_150;
  *(undefined ***)(lVar14 + 0x570) = local_140;
  if (local_150 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_150 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_88[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_88);
    }
  }
  return param_1 + 0x120;
}


