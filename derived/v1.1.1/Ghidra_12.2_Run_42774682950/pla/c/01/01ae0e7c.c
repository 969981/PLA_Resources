/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae0e7c; name: FUN_01ae0e7c
 */


void FUN_01ae0e7c(undefined4 param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [12];
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined4 uVar25;
  undefined4 local_e0;
  long *local_b8;
  long *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  if (*(uint *)(param_2 + 0xbb0) == param_3) {
    return;
  }
  *(uint *)(param_2 + 0xbb0) = param_3;
  plVar17 = (long *)FUN_01ae1afc();
  if (*plVar17 != 0) {
    FUN_009cdd5c(&local_90);
    plVar17 = local_90;
    if (local_90 == (long *)0x0) goto LAB_01ae0eec;
    local_90 = (long *)0x1eb774d1eef8fbe2;
    pcStack_88 = "OverrideRimColor";
    local_80 = 0x1f;
    local_78 = (long *)0x0;
    FUN_00af00ac(plVar17,&local_90,param_2 + 0xb70);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (long *)&DAT_c48fa98e41e54f54;
    pcStack_88 = "OverrideRimPower";
    local_80 = 0x1f;
    local_78 = (long *)0x0;
    FUN_00aeff8c(plVar17,&local_90,param_2 + 0xb80);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (param_3 == 2) {
      local_90 = (long *)0x3f5f5d513f08bd74;
      pcStack_88 = "battle_vsns";
      local_80 = 0xb;
      local_78 = (long *)0x0;
      local_b0 = (long *)0xf1bb259a444aa3d1;
      pcStack_a8 = "ArseusModeB_RimColor_rgb";
      local_a0 = 0x18;
      local_98 = (long *)0x0;
      auVar11 = FUN_00aee408(&local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar12 = PTR_DAT_04379660;
      local_90 = (long *)0xb6598cb21581691d;
      pcStack_88 = "ArseusModeB_RimColor_a";
      local_80 = 0x16;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar14 = PTR_DAT_04379670;
      puVar13 = PTR_DAT_04379668;
      lVar24 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar24;
      uVar19 = *(ulong *)(lVar24 + 0x60);
      local_e0 = 0;
      if (uVar19 != 0) {
        uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar21 = uVar19 - 1 & 0x3f5f5d513f08bd74;
        }
        else {
          uVar21 = 0x3f5f5d513f08bd74;
          if (uVar19 < 0x3f5f5d513f08bd75) {
            uVar21 = 0;
            if (uVar19 != 0) {
              uVar21 = 0x3f5f5d513f08bd74 / uVar19;
            }
            uVar21 = 0x3f5f5d513f08bd74 - uVar21 * uVar19;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar20 < 2) {
            do {
              if (plVar22[1] == 0x3f5f5d513f08bd74) {
                if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae151c;
              }
              else if ((plVar22[1] & uVar19 - 1) != uVar21) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar20 = plVar22[1];
              if (uVar20 == 0x3f5f5d513f08bd74) {
                if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae151c;
              }
              else {
                if (uVar19 <= uVar20) {
                  uVar5 = 0;
                  if (uVar19 != 0) {
                    uVar5 = uVar20 / uVar19;
                  }
                  uVar20 = uVar20 - uVar5 * uVar19;
                }
                if (uVar20 != uVar21) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      goto LAB_01ae155c;
    }
    if (param_3 == 1) {
      local_90 = (long *)0x3f5f5d513f08bd74;
      pcStack_88 = "battle_vsns";
      local_80 = 0xb;
      local_78 = (long *)0x0;
      local_b0 = (long *)0xd8d1b9c090e9769e;
      pcStack_a8 = "ArseusModeA_RimColor_rgb";
      local_a0 = 0x18;
      local_98 = (long *)0x0;
      auVar11 = FUN_00aee408(&local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar12 = PTR_DAT_04379660;
      local_90 = (long *)0xa8e869944c364722;
      pcStack_88 = "ArseusModeA_RimColor_a";
      local_80 = 0x16;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar14 = PTR_DAT_04379670;
      puVar13 = PTR_DAT_04379668;
      lVar24 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar24;
      uVar19 = *(ulong *)(lVar24 + 0x60);
      local_e0 = 0;
      if (uVar19 != 0) {
        uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar21 = uVar19 - 1 & 0x3f5f5d513f08bd74;
        }
        else {
          uVar21 = 0x3f5f5d513f08bd74;
          if (uVar19 < 0x3f5f5d513f08bd75) {
            uVar21 = 0;
            if (uVar19 != 0) {
              uVar21 = 0x3f5f5d513f08bd74 / uVar19;
            }
            uVar21 = 0x3f5f5d513f08bd74 - uVar21 * uVar19;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar20 < 2) {
            do {
              if (plVar22[1] == 0x3f5f5d513f08bd74) {
                if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae124c;
              }
              else if ((plVar22[1] & uVar19 - 1) != uVar21) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar20 = plVar22[1];
              if (uVar20 == 0x3f5f5d513f08bd74) {
                if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae124c;
              }
              else {
                if (uVar19 <= uVar20) {
                  uVar5 = 0;
                  if (uVar19 != 0) {
                    uVar5 = uVar20 / uVar19;
                  }
                  uVar20 = uVar20 - uVar5 * uVar19;
                }
                if (uVar20 != uVar21) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      goto LAB_01ae128c;
    }
    if (param_3 == 0) {
      *(undefined8 *)(param_2 + 0xb98) = 0;
      *(undefined8 *)(param_2 + 0xb90) = 0;
      *(undefined4 *)(param_2 + 0xba0) = *(undefined4 *)(param_2 + 0xb80);
    }
    goto LAB_01ae169c;
  }
  goto LAB_01ae0eec;
LAB_01ae1644:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar22,&local_90);
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01ae1680;
  }
  goto LAB_01ae1684;
LAB_01ae124c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_e0 = FUN_00d7905c(plVar22,&local_90);
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
LAB_01ae128c:
  *(ulong *)(param_2 + 0xb98) = CONCAT44(local_e0,auVar11._8_4_);
  *(long *)(param_2 + 0xb90) = auVar11._0_8_;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0x14fec31d604c33e4;
  pcStack_88 = "ArseusModeA_RimPower";
  local_80 = 0x14;
  local_78 = (long *)0x0;
  if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar24 = *(long *)puVar13;
  *(long *)puVar14 = lVar24;
  uVar19 = *(ulong *)(lVar24 + 0x60);
  uVar25 = 0;
  if (uVar19 != 0) {
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar19 - 1 & 0x3f5f5d513f08bd74;
    }
    else {
      uVar21 = 0x3f5f5d513f08bd74;
      if (uVar19 < 0x3f5f5d513f08bd75) {
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = 0x3f5f5d513f08bd74 / uVar19;
        }
        uVar21 = 0x3f5f5d513f08bd74 - uVar21 * uVar19;
      }
    }
    plVar22 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar22[1] == 0x3f5f5d513f08bd74) {
            if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae1374;
          }
          else if ((plVar22[1] & uVar19 - 1) != uVar21) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == 0x3f5f5d513f08bd74) {
            if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae1374;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar5 = 0;
              if (uVar19 != 0) {
                uVar5 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar5 * uVar19;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_01ae1684;
LAB_01ae1374:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar22,&local_90);
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ae1680:
    if (iVar15 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  goto LAB_01ae1684;
LAB_01ae151c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_e0 = FUN_00d7905c(plVar22,&local_90);
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
LAB_01ae155c:
  *(ulong *)(param_2 + 0xb98) = CONCAT44(local_e0,auVar11._8_4_);
  *(long *)(param_2 + 0xb90) = auVar11._0_8_;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0x469b28b8035f84a3;
  pcStack_88 = "ArseusModeB_RimPower";
  local_80 = 0x14;
  local_78 = (long *)0x0;
  if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar24 = *(long *)puVar13;
  *(long *)puVar14 = lVar24;
  uVar19 = *(ulong *)(lVar24 + 0x60);
  uVar25 = 0;
  if (uVar19 != 0) {
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar19 - 1 & 0x3f5f5d513f08bd74;
    }
    else {
      uVar21 = 0x3f5f5d513f08bd74;
      if (uVar19 < 0x3f5f5d513f08bd75) {
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = 0x3f5f5d513f08bd74 / uVar19;
        }
        uVar21 = 0x3f5f5d513f08bd74 - uVar21 * uVar19;
      }
    }
    plVar22 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar22[1] == 0x3f5f5d513f08bd74) {
            if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae1644;
          }
          else if ((plVar22[1] & uVar19 - 1) != uVar21) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar22[1];
          if (uVar20 == 0x3f5f5d513f08bd74) {
            if (plVar22[2] == 0x3f5f5d513f08bd74) goto LAB_01ae1644;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar5 = 0;
              if (uVar19 != 0) {
                uVar5 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar5 * uVar19;
            }
            if (uVar20 != uVar21) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
LAB_01ae1684:
  *(undefined4 *)(param_2 + 0xba0) = uVar25;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
LAB_01ae169c:
  *(undefined4 *)(param_2 + 0xb64) = 0;
  *(undefined4 *)(param_2 + 0xb60) = param_1;
  *(undefined1 *)(param_2 + 0xba4) = 1;
  lVar24 = plVar17[0xb];
  piVar1 = (int *)(lVar24 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
    lVar24 = *(long *)(param_2 + 0x1a8);
    pbVar6 = PTR_DAT_043794b0;
    puVar7 = (undefined8 *)PTR_DAT_043794b8;
    puVar8 = (undefined8 *)PTR_DAT_043794c8;
    pbVar9 = PTR_DAT_043794d0;
    puVar10 = (undefined8 *)PTR_DAT_043794d8;
  }
  else {
LAB_01ae0eec:
    lVar24 = *(long *)(param_2 + 0x1a8);
    pbVar6 = PTR_DAT_043794b0;
    puVar7 = (undefined8 *)PTR_DAT_043794b8;
    puVar8 = (undefined8 *)PTR_DAT_043794c8;
    pbVar9 = PTR_DAT_043794d0;
    puVar10 = (undefined8 *)PTR_DAT_043794d8;
  }
  PTR_DAT_043794b0 = pbVar6;
  PTR_DAT_043794b8 = (undefined *)puVar7;
  PTR_DAT_043794c8 = (undefined *)puVar8;
  PTR_DAT_043794d0 = pbVar9;
  PTR_DAT_043794d8 = (undefined *)puVar10;
  if ((lVar24 != 0) && (*(int *)(lVar24 + 0xc) != 0)) {
    piVar1 = (int *)(lVar24 + 0xc);
    iVar15 = *(int *)(lVar24 + 0xc);
    do {
      puVar23 = *(undefined8 **)(lVar24 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar6), iVar16 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar16 != 0)) {
          if (((*pbVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar9), iVar16 != 0)) {
            uVar18 = FUN_0087f8f0();
            *puVar10 = uVar18;
            __cxa_guard_release(pbVar9);
          }
          *puVar8 = puVar10;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *puVar7 = puVar8;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (puVar23 == (undefined8 *)0x0) goto LAB_01ae0ef4;
        if (puVar23 == puVar7) break;
        puVar23 = (undefined8 *)*puVar23;
      }
      iVar16 = *piVar1;
      if (iVar16 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          local_b8 = (long *)0x0;
          if (*(long *)(lVar24 + 0x18) != 0) {
            local_b8 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
          }
          goto LAB_01ae0ef8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar16;
    } while (iVar16 != 0);
  }
LAB_01ae0ef4:
  local_b8 = (long *)0x0;
LAB_01ae0ef8:
  FUN_00aaf430(&local_90,&local_b8,1);
  if (local_90 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    FUN_009b17f0(&local_b0);
    plVar22 = local_90;
    plVar17 = local_b0;
    if (local_90 != (long *)0x0) {
      plVar2 = local_90 + 1;
      do {
        iVar15 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar24 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar24;
        local_b0 = (long *)*plVar22;
        FUN_02a44274(lVar24 + 0xd8,&local_b0);
      }
    }
  }
  if (local_b8 != (long *)0x0) {
    lVar24 = local_b8[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  if (plVar17 != (long *)0x0) {
    if (param_3 < 3) {
      FUN_01c0d5c4(plVar17,*(undefined4 *)(&DAT_03a7c9e0 + (long)(int)param_3 * 4));
    }
    lVar24 = plVar17[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return;
}


