/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f19078; name: FUN_01f19078
 */


void FUN_01f19078(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined4 local_120;
  undefined4 local_110;
  undefined4 local_100;
  undefined4 local_f0;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_58;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  FUN_019bf828(&local_58);
  if (local_58 == (long *)0x0) {
    return;
  }
  FUN_01f0abf0(0,local_58,0,*(undefined8 *)(param_1 + 0x100));
  FUN_01f0abf0(0,local_58,1,*(undefined8 *)(param_1 + 0x108));
  local_80 = 0x5e1ea0fd9adda1e;
  pcStack_78 = "GILightCommon";
  local_70 = 0xd;
  local_68 = (long *)0x0;
  local_a0 = 0x5e1ea0fd9adda1e;
  pcStack_98 = "GILightCommon";
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_02b1f85c(DAT_043ef5b0,&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar6 = PTR_DAT_04379660;
  local_80 = 0x497af00a750aa112;
  pcStack_78 = "cascadeShadowSplit1";
  local_70 = 0x13;
  local_68 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  local_f0 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0xccd835295e407a41;
    }
    else {
      uVar15 = 0xccd835295e407a41;
      if (uVar13 < 0xccd835295e407a42) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xccd835295e407a41 / uVar13;
        }
        uVar15 = 0xccd835295e407a41 - uVar15 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19260;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19260;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_01f192a0:
  local_a0 = 0x497aef0a750a9f5f;
  pcStack_98 = "cascadeShadowSplit2";
  local_90 = 0x13;
  local_88 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  local_100 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0xccd835295e407a41;
    }
    else {
      uVar15 = 0xccd835295e407a41;
      if (uVar13 < 0xccd835295e407a42) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xccd835295e407a41 / uVar13;
        }
        uVar15 = 0xccd835295e407a41 - uVar15 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19364;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19364;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_01f193a4:
  local_c0 = 0x497aee0a750a9dac;
  pcStack_b8 = "cascadeShadowSplit3";
  local_b0 = 0x13;
  local_a8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  local_110 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0xccd835295e407a41;
    }
    else {
      uVar15 = 0xccd835295e407a41;
      if (uVar13 < 0xccd835295e407a42) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xccd835295e407a41 / uVar13;
        }
        uVar15 = 0xccd835295e407a41 - uVar15 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19468;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19468;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_01f194a8:
  local_e0 = 0x497aed0a750a9bf9;
  pcStack_d8 = "cascadeShadowSplit4";
  local_d0 = 0x13;
  local_c8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  local_120 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0xccd835295e407a41;
    }
    else {
      uVar15 = 0xccd835295e407a41;
      if (uVar13 < 0xccd835295e407a42) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xccd835295e407a41 / uVar13;
        }
        uVar15 = 0xccd835295e407a41 - uVar15 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f1956c;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f1956c;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
joined_r0x01f19bd4:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  fVar21 = 0.0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0xccd835295e407a41;
    }
    else {
      uVar15 = 0xccd835295e407a41;
      if (uVar13 < 0xccd835295e407a42) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xccd835295e407a41 / uVar13;
        }
        uVar15 = 0xccd835295e407a41 - uVar15 * uVar13;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19698;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xccd835295e407a41) {
            if (plVar17[2] == -0x3327cad6a1bf85bf) goto LAB_01f19698;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_01f19888;
LAB_01f19260:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_f0 = FUN_00d7905c(plVar17,&local_80);
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto LAB_01f192a0;
LAB_01f19364:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_100 = FUN_00d7905c(plVar17,&local_a0);
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto LAB_01f193a4;
LAB_01f19468:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_110 = FUN_00d7905c(plVar17,&local_c0);
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto LAB_01f194a8;
LAB_01f1956c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_120 = FUN_00d7905c(plVar17,&local_e0);
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto joined_r0x01f19bd4;
LAB_01f19698:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_01f19888;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar17[0x14];
  fVar21 = 0.0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & 0x39f98b371c7b2df0;
    }
    else if (uVar13 < 0x39f98b371c7b2df1) {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = 0x39f98b371c7b2df0 / uVar13;
      }
      uVar15 = 0x39f98b371c7b2df0 - uVar15 * uVar13;
    }
    else {
      uVar15 = 0x39f98b371c7b2df0;
    }
    plVar18 = *(long **)(plVar17[0x13] + uVar15 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar18[1] == 0x39f98b371c7b2df0) {
            if (plVar18[2] == 0x39f98b371c7b2df0) goto LAB_01f1986c;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar15) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar18[1];
          if (uVar14 == 0x39f98b371c7b2df0) {
            if (plVar18[2] == 0x39f98b371c7b2df0) goto LAB_01f1986c;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_01f19874;
LAB_01f1986c:
  fVar21 = (float)(int)plVar18[6];
LAB_01f19874:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_01f19888:
  local_80 = 0x12ee93efcc18b5c6;
  pcStack_78 = "DirectionalMain";
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_a0 = 0xd4c8aa246d9f2c41;
  pcStack_98 = "ShadowCascadeLevel";
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  lVar16 = FUN_02b1f8b0(DAT_043ef5b0,&local_80);
  local_c0 = lVar16;
  uVar13 = FUN_02b21278(DAT_043ef5b0,&local_c0);
  if ((uVar13 & 1) != 0) {
    uVar13 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar19 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar13 / 0x12) * 8);
    lVar20 = (uVar13 % 0x12) * 0xd8;
    lVar16 = (lVar16 >> 0x20) * 0x1b0;
    puVar10 = (undefined4 *)FUN_00aef474(*(long *)(lVar19 + lVar20) + lVar16 + 0x70,&local_a0);
    *puVar10 = 0x40000000;
    *(undefined1 *)(*(long *)(lVar19 + lVar20) + lVar16 + 0x1a9) = 1;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_80 = 0x12ee93efcc18b5c6;
  pcStack_78 = "DirectionalMain";
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_a0 = 0x357152db8e0fe284;
  pcStack_98 = "ShadowCascadeSplits";
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  lVar16 = FUN_02b1f8b0(DAT_043ef5b0,&local_80);
  local_c0 = lVar16;
  uVar13 = FUN_02b21278(DAT_043ef5b0,&local_c0);
  if ((uVar13 & 1) != 0) {
    uVar13 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar19 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar13 / 0x12) * 8);
    lVar20 = (uVar13 % 0x12) * 0xd8;
    lVar16 = (lVar16 >> 0x20) * 0x1b0;
    puVar11 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar19 + lVar20) + lVar16 + 0xd8,&local_a0);
    puVar11[1] = CONCAT44(local_120,local_110);
    *puVar11 = CONCAT44(local_100,local_f0);
    *(undefined1 *)(*(long *)(lVar19 + lVar20) + lVar16 + 0x1a9) = 1;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_80 = 0x12ee93efcc18b5c6;
  pcStack_78 = "DirectionalMain";
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_a0 = 0x15905d512fcd4350;
  pcStack_98 = "ShadowNearPlaneOffset";
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  lVar16 = FUN_02b1f8b0(DAT_043ef5b0,&local_80);
  local_c0 = lVar16;
  uVar13 = FUN_02b21278(DAT_043ef5b0,&local_c0);
  if ((uVar13 & 1) != 0) {
    uVar13 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar19 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar13 / 0x12) * 8);
    lVar20 = (uVar13 % 0x12) * 0xd8;
    lVar16 = (lVar16 >> 0x20) * 0x1b0;
    pfVar12 = (float *)FUN_00aef474(*(long *)(lVar19 + lVar20) + lVar16 + 0x70,&local_a0);
    *pfVar12 = fVar21;
    *(undefined1 *)(*(long *)(lVar19 + lVar20) + lVar16 + 0x1a9) = 1;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar16 = local_58[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


