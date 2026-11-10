/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cdc150; name: FUN_01cdc150
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdc150(long param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *extraout_x10;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  long *plVar31;
  long *plVar32;
  int local_21c;
  long *local_208;
  long *local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  long *local_1e0 [2];
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [112];
  long *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_74;
  long *local_70 [2];
  
  lVar26 = *(long *)(param_1 + 0x130);
  local_1f0 = (long *)0x0;
  uStack_1e8 = 0;
  FUN_008802f0(&local_1f0,*param_2 + 0x58);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00b5f91c(&local_a0,&local_1f0);
  plVar32 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar27 = local_1f0 + 1;
    do {
      iVar14 = (int)*plVar27 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *(int *)plVar27 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_90 = (long *)*plVar32;
      FUN_02a44274(lVar20 + 0xd8,&local_90);
    }
  }
  FUN_00b63974(lVar26 + 0x2a0,&local_a0);
  puVar30 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar26 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar26;
      local_1f0 = (long *)*puVar30;
      FUN_02a44274(lVar26 + 0xd8,&local_1f0);
    }
  }
  *(undefined4 *)(*param_2 + 0x220) = 0x22;
  puVar11 = PTR_DAT_0437a0f0;
  puVar10 = PTR_DAT_0437a0e8;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  lVar26 = *(long *)(param_1 + 0x80);
  if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
    piVar1 = (int *)(lVar26 + 0xc);
    iVar14 = *(int *)(lVar26 + 0xc);
    do {
      plVar32 = *(long **)(lVar26 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar32 == (long *)0x0) goto LAB_01cdc280;
        if (plVar32 == (long *)puVar11) break;
        plVar32 = (long *)*plVar32;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar14) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01cdcb78;
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 != 0) {
          plVar32 = *(long **)(lVar26 + 0x1d8);
          if (plVar32 == (long *)0x0) goto LAB_01cdcc50;
          lVar20 = plVar32[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar20 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
              *(undefined8 *)(lVar20 + 0x10) = uVar16;
            }
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_01cdcc50:
            lVar20 = *(long *)(lVar26 + 8);
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*(long *)(lVar26 + -0x50) + 0x20))();
            }
            goto LAB_01cdc2c4;
          }
          goto LAB_01cdda90;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01cdcb78:
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
LAB_01cdc280:
  plVar32 = _DAT_00000228;
  if (_DAT_00000228 != (long *)0x0) {
    lVar26 = _DAT_00000228[0xb];
    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar26 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
      *(undefined8 *)(lVar26 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_01cdc2c4:
  if (*(int *)(*(long *)(param_1 + 0x128) + 0xd8) != 0) goto LAB_01cdc41c;
  plVar27 = *(long **)(param_1 + 0x130);
  if (plVar27 != (long *)0x0) {
    lVar26 = plVar27[0xb];
    if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar26 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
      *(undefined8 *)(lVar26 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_1f0 = (long *)0x0;
  uStack_1e8 = 0;
  FUN_008802f0(&local_1f0,*param_2 + 0x58);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_00b5f91c(&local_b0,&local_1f0);
  plVar31 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar28 = local_1f0 + 1;
    do {
      iVar14 = (int)*plVar28 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar4) {
        *(int *)plVar28 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar26 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar26;
      local_90 = (long *)*plVar31;
      FUN_02a44274(lVar26 + 0xd8,&local_90);
    }
  }
  puVar30 = local_b0;
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  if (local_b0 != (undefined8 *)0x0) {
    puVar7 = local_b0;
    if (*(int *)((long)local_b0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_b0 + 0xc);
      iVar14 = *(int *)((long)local_b0 + 0xc);
      do {
        plVar31 = (long *)puVar30[2];
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar9 = PTR_DAT_043795e0;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          puVar7 = local_b0;
          if (plVar31 == (long *)0x0) goto joined_r0x01cddb80;
          if (plVar31 == (long *)puVar9) break;
          plVar31 = (long *)*plVar31;
        }
        iVar15 = *piVar1;
        if (iVar15 == iVar14) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar26 = puVar30[3];
            if (lVar26 != 0) {
              plVar18 = (long *)FUN_0183680c();
              local_74 = 9;
              uVar19 = FUN_01833e7c(plVar32,plVar18);
              uVar21 = plVar32[0x28];
              plVar28 = plVar32 + 0x27;
              if (uVar21 == 0) goto LAB_01cdcfec;
              uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
              uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar23 < 2) {
                uVar24 = (ulong)((uint)uVar21 - 1) & 9;
              }
              else {
                uVar24 = 9;
                if (uVar21 < 10) {
                  uVar2 = (uint)uVar21 & 0xff;
                  uVar5 = 0;
                  if ((uVar21 & 0xff) != 0) {
                    uVar5 = 9 / uVar2;
                  }
                  uVar24 = (ulong)(9 - uVar5 * uVar2);
                }
              }
              plVar25 = *(long **)(*plVar28 + uVar24 * 8);
              if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
              goto LAB_01cdcfec;
              if (1 < uVar23) goto LAB_01cdcf68;
              goto LAB_01cdcfbc;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar15;
      } while (iVar15 != 0);
    }
    goto joined_r0x01cddb80;
  }
  goto LAB_01cdc3fc;
LAB_01cdcf68:
  do {
    uVar23 = plVar25[1];
    if (uVar23 == 9) {
      if ((int)plVar25[2] == 9) goto LAB_01cdd300;
    }
    else {
      if (uVar21 <= uVar23) {
        uVar6 = 0;
        if (uVar21 != 0) {
          uVar6 = uVar23 / uVar21;
        }
        uVar23 = uVar23 - uVar6 * uVar21;
      }
      if (uVar23 != uVar24) break;
    }
    plVar25 = (long *)*plVar25;
  } while (plVar25 != (long *)0x0);
  goto LAB_01cdcfec;
  while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
LAB_01cdcfbc:
    if (plVar25[1] == 9) {
      if ((int)plVar25[2] == 9) goto LAB_01cdd300;
    }
    else if ((plVar25[1] & uVar21 - 1) != uVar24) break;
  }
LAB_01cdcfec:
  lVar20 = plVar32[1];
  local_200 = (long *)FUN_0187a5ec(&local_1f0,lVar20);
  if (local_200 != (long *)0x0) {
    lVar29 = local_200[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70[0] = (long *)FUN_0187b318(&local_1f0,lVar20);
  if (local_70[0] != (long *)0x0) {
    lVar20 = local_70[0][0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar31 = local_200;
  if ((uVar19 & 1) != 0) {
    local_80 = plVar27;
    if (plVar27 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      lVar20 = plVar27[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar25 = local_80;
    }
    local_1f0 = plVar18;
    FUN_01cdeeb0(plVar31 + 0xd,&local_1f0,&local_80);
    if (plVar25 != (long *)0x0) {
      lVar20 = plVar25[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
    }
    FUN_01cdf648(plVar32 + 0xd,&local_74,&local_200);
  }
  lVar20 = plVar27[0x35];
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01cdd120:
    plVar31 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar14 = *(int *)(lVar20 + 0xc);
    do {
      puVar30 = *(undefined8 **)(lVar20 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar15 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar15 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (puVar30 == (undefined8 *)0x0) goto LAB_01cdd120;
      while (puVar30 != (undefined8 *)PTR_DAT_043794b8) {
        puVar30 = (undefined8 *)*puVar30;
        plVar31 = (long *)0x0;
        if (puVar30 == (undefined8 *)0x0) goto LAB_01cdd124;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar14) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar31 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            plVar31 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar31 = (long *)0x0;
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
LAB_01cdd124:
  (**(code **)(*plVar31 + 0x10))(&local_1f0,plVar31);
  local_90 = (long *)0x0;
  local_88 = 0;
  FUN_0087f944(&local_90,&local_1f0);
  plVar18 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar25 = local_1f0 + 1;
    do {
      iVar14 = (int)*plVar25 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *(int *)plVar25 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_c0 = (long *)*plVar18;
      FUN_02a44274(lVar20 + 0xd8,&local_c0);
    }
  }
  plVar18 = local_90;
  if (local_90 == (long *)0x0) {
    lVar20 = 0;
  }
  else {
    plVar25 = local_90 + 1;
    lVar20 = *local_90;
    do {
      iVar14 = (int)*plVar25 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *(int *)plVar25 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar29 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar29;
      local_1f0 = (long *)*plVar18;
      FUN_02a44274(lVar29 + 0xd8,&local_1f0);
    }
  }
  if (plVar31 != (long *)0x0) {
    lVar29 = plVar31[0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  plVar31 = local_70[0];
  local_1f0 = plVar27;
  if (plVar27 == (long *)0x0) {
    FUN_01cde724(local_70[0],lVar20,&local_1f0);
  }
  else {
    lVar29 = plVar27[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar16;
    }
    plVar18 = local_1f0;
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01cde724(plVar31,lVar20,&local_1f0);
    if (plVar18 != (long *)0x0) {
      lVar20 = plVar18[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    plVar31 = local_70[0];
  }
  FUN_01cdfdf4(plVar28,&local_74,local_70);
  if (plVar31 == (long *)0x0) {
LAB_01cdd2d8:
    if (local_200 == (long *)0x0) goto LAB_01cdd910;
LAB_01cdd2e0:
    lVar20 = local_200[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_208 = local_200;
    if (iVar14 + -1 != 0) goto LAB_01cdd910;
    goto LAB_01cddb18;
  }
  lVar20 = plVar31[0xb];
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 + -1 != 0) goto LAB_01cdd2d8;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  (**(code **)(*plVar31 + 0x20))(plVar31);
  if (local_200 != (long *)0x0) goto LAB_01cdd2e0;
  goto LAB_01cdd910;
LAB_01cdd3fc:
  local_208 = (long *)plVar25[3];
  if (local_208 != (long *)0x0) {
    lVar20 = local_208[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar21 = plVar32[0x1b];
  if (uVar21 != 0) {
    uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = (ulong)((uint)uVar21 - 1) & 9;
    }
    else {
      uVar24 = 9;
      if (uVar21 < 10) {
        uVar2 = (uint)uVar21 & 0xff;
        uVar5 = 0;
        if ((uVar21 & 0xff) != 0) {
          uVar5 = 9 / uVar2;
        }
        uVar24 = (ulong)(9 - uVar5 * uVar2);
      }
    }
    plVar25 = *(long **)(plVar32[0x1a] + uVar24 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar25[1] == 9) {
            if ((int)plVar25[2] == 9) goto LAB_01cdd540;
          }
          else if ((plVar25[1] & uVar21 - 1) != uVar24) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar25[1];
          if (uVar23 == 9) {
            if ((int)plVar25[2] == 9) goto LAB_01cdd540;
          }
          else {
            if (uVar21 <= uVar23) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar23 / uVar21;
              }
              uVar23 = uVar23 - uVar6 * uVar21;
            }
            if (uVar23 != uVar24) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_01cdd678;
LAB_01cdd540:
  plVar31 = (long *)plVar25[3];
  if (plVar31 != (long *)0x0) {
    lVar20 = plVar31[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar21 = plVar32[0x28];
  if (uVar21 != 0) {
    uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = (ulong)((uint)uVar21 - 1) & 9;
    }
    else {
      uVar24 = 9;
      if (uVar21 < 10) {
        uVar2 = (uint)uVar21 & 0xff;
        uVar5 = 0;
        if ((uVar21 & 0xff) != 0) {
          uVar5 = 9 / uVar2;
        }
        uVar24 = (ulong)(9 - uVar5 * uVar2);
      }
    }
    plVar28 = *(long **)(*plVar28 + uVar24 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar28[1] == 9) {
            if ((int)plVar28[2] == 9) goto LAB_01cdd67c;
          }
          else if ((plVar28[1] & uVar21 - 1) != uVar24) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar28[1];
          if (uVar23 == 9) {
            if ((int)plVar28[2] == 9) goto LAB_01cdd67c;
          }
          else {
            if (uVar21 <= uVar23) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar23 / uVar21;
              }
              uVar23 = uVar23 - uVar6 * uVar21;
            }
            if (uVar23 != uVar24) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  goto LAB_01cdd678;
LAB_01cdd300:
  uVar21 = plVar32[0xe];
  if (uVar21 != 0) {
    uVar23 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = (ulong)((uint)uVar21 - 1) & 9;
    }
    else {
      uVar24 = 9;
      if (uVar21 < 10) {
        uVar2 = (uint)uVar21 & 0xff;
        uVar5 = 0;
        if ((uVar21 & 0xff) != 0) {
          uVar5 = 9 / uVar2;
        }
        uVar24 = (ulong)(9 - uVar5 * uVar2);
      }
    }
    plVar25 = *(long **)(plVar32[0xd] + uVar24 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar25[1] == 9) {
            if ((int)plVar25[2] == 9) goto LAB_01cdd3fc;
          }
          else if ((plVar25[1] & uVar21 - 1) != uVar24) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar25[1];
          if (uVar23 == 9) {
            if ((int)plVar25[2] == 9) goto LAB_01cdd3fc;
          }
          else {
            if (uVar21 <= uVar23) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar23 / uVar21;
              }
              uVar23 = uVar23 - uVar6 * uVar21;
            }
            if (uVar23 != uVar24) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
LAB_01cdd678:
  FUN_01ce0200();
  plVar28 = extraout_x10;
LAB_01cdd67c:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    lVar20 = plVar28[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((uVar19 & 1) != 0) {
    lVar20 = FUN_01cdea90(local_208 + 10);
    local_200 = plVar27;
    if (plVar27 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      lVar29 = plVar27[0xb];
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar25 = local_200;
    }
    local_1f0 = plVar18;
    FUN_01cdeeb0(lVar20 + 0x68,&local_1f0,&local_200);
    if (plVar25 != (long *)0x0) {
      lVar20 = plVar25[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
    }
  }
  puVar30 = (undefined8 *)(**(code **)plVar28[10])(plVar28 + 10);
  FUN_01cdeddc();
  if (puVar30 == (undefined8 *)0x0) {
    plVar18 = (long *)0x0;
    lVar20 = plVar27[0x35];
    if (lVar20 != 0) goto LAB_01cddbac;
LAB_01cdd70c:
    plVar25 = (long *)0x0;
  }
  else {
    do {
      if (puVar30 == (undefined8 *)PTR_DAT_04380728) {
        plVar18 = plVar28;
        break;
      }
      puVar30 = (undefined8 *)*puVar30;
      plVar18 = (long *)0x0;
    } while (puVar30 != (undefined8 *)0x0);
    lVar20 = plVar27[0x35];
    if (lVar20 == 0) goto LAB_01cdd70c;
LAB_01cddbac:
    if (*(int *)(lVar20 + 0xc) == 0) goto LAB_01cdd70c;
    piVar1 = (int *)(lVar20 + 0xc);
    local_21c = *(int *)(lVar20 + 0xc);
    do {
      puVar30 = *(undefined8 **)(lVar20 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar14 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar14 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (puVar30 == (undefined8 *)0x0) goto LAB_01cdd70c;
      while (puVar30 != (undefined8 *)PTR_DAT_043794b8) {
        puVar30 = (undefined8 *)*puVar30;
        plVar25 = (long *)0x0;
        if (puVar30 == (undefined8 *)0x0) goto LAB_01cdd710;
      }
      iVar14 = *piVar1;
      if (iVar14 == local_21c) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = local_21c + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar25 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            plVar25 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar25 = (long *)0x0;
      local_21c = iVar14;
    } while (iVar14 != 0);
  }
LAB_01cdd710:
  (**(code **)(*plVar25 + 0x10))(&local_1f0,plVar25);
  local_90 = (long *)0x0;
  local_88 = 0;
  FUN_0087f944(&local_90,&local_1f0);
  plVar12 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar22 = local_1f0 + 1;
    do {
      iVar14 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_c0 = (long *)*plVar12;
      FUN_02a44274(lVar20 + 0xd8,&local_c0);
    }
  }
  plVar12 = local_90;
  if (local_90 == (long *)0x0) {
    lVar20 = 0;
    if (plVar25 != (long *)0x0) goto LAB_01cdd7fc;
LAB_01cdd818:
    if (plVar27 != (long *)0x0) goto LAB_01cdd820;
LAB_01cddac4:
    local_90 = plVar27;
    FUN_01cde724(plVar18,lVar20,&local_90);
  }
  else {
    plVar22 = local_90 + 1;
    lVar20 = *local_90;
    do {
      iVar14 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar29 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar29;
      local_1f0 = (long *)*plVar12;
      FUN_02a44274(lVar29 + 0xd8,&local_1f0);
    }
    if (plVar25 == (long *)0x0) goto LAB_01cdd818;
LAB_01cdd7fc:
    lVar29 = plVar25[0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 != 0) goto LAB_01cdd818;
    *(undefined8 *)(lVar29 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
    if (plVar27 == (long *)0x0) goto LAB_01cddac4;
LAB_01cdd820:
    lVar29 = plVar27[0xb];
    local_90 = plVar27;
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01cdda90;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar16;
    }
    plVar25 = local_90;
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01cde724(plVar18,lVar20,&local_90);
    if (plVar25 != (long *)0x0) {
      lVar20 = plVar25[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
    }
  }
  plVar18 = (long *)FUN_01836804((long *)(lVar26 + -0x50));
  uVar19 = FUN_01833e7c(plVar32,plVar18);
  if ((uVar19 & 1) != 0) {
    lVar20 = FUN_01cdea90(plVar31 + 10);
    local_1f0 = plVar18;
    lVar29 = FUN_01ce020c(lVar20 + 0x68,&local_1f0);
    if (lVar29 == 0) {
      local_c0 = plVar27;
      if (plVar27 == (long *)0x0) {
        plVar25 = (long *)0x0;
      }
      else {
        lVar29 = plVar27[0xb];
        if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
LAB_01cdda90:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar29 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
          *(undefined8 *)(lVar29 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar25 = local_c0;
      }
      local_1f0 = plVar18;
      FUN_01cdeeb0(lVar20 + 0x68,&local_1f0,&local_c0);
      if (plVar25 != (long *)0x0) {
        lVar20 = plVar25[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar25 + 0x20))(plVar25);
        }
      }
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar20 = plVar28[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (plVar31 != (long *)0x0) {
    lVar20 = plVar31[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if (local_208 != (long *)0x0) {
    lVar20 = local_208[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
LAB_01cddb18:
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_208 + 0x20))();
    }
  }
LAB_01cdd910:
  lVar20 = *(long *)(lVar26 + 8);
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar7 = local_b0;
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*(long *)(lVar26 + -0x50) + 0x20))();
    puVar7 = local_b0;
  }
joined_r0x01cddb80:
  local_b0 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar26 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar26;
      local_1f0 = (long *)*puVar7;
      FUN_02a44274(lVar26 + 0xd8,&local_1f0);
    }
  }
LAB_01cdc3fc:
  if (plVar27 != (long *)0x0) {
    lVar26 = plVar27[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
LAB_01cdc41c:
  (**(code **)(**(long **)(param_1 + 0x130) + 0x128))();
  *(undefined1 *)(*param_2 + 0x202) = 1;
  if (*(char *)(*(long *)(param_1 + 0x128) + 0x10a) != '\0') {
    local_c0 = (long *)0x0;
    local_b8 = 0;
    if (*(long *)(*(long *)(param_1 + 0x128) + 0xb8) == 0) {
      local_70[0] = (long *)0x0;
    }
    else {
      FUN_009b3e90(local_70);
      if (local_70[0] != (long *)0x0) {
        (**(code **)(*local_70[0] + 0x10))(&local_1f0);
        local_90 = (long *)0x0;
        local_88 = 0;
        FUN_017e80a4(&local_90,&local_1f0);
        plVar27 = local_1f0;
        if (local_1f0 != (long *)0x0) {
          plVar31 = local_1f0 + 1;
          do {
            iVar14 = (int)*plVar31 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar4) {
              *(int *)plVar31 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            local_1f0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar26;
            local_200 = (long *)*plVar27;
            FUN_02a44274(lVar26 + 0xd8,&local_200);
          }
        }
        puVar8 = PTR_DAT_04379498;
        do {
          uVar16 = local_88;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(&local_88,0x10);
          if (bVar4) {
            local_88 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        puVar10 = PTR_DAT_043794a8;
        puVar9 = PTR_DAT_043794a0;
        uVar17 = *(undefined8 *)PTR_DAT_043794a0;
        *(undefined8 *)PTR_DAT_043794a8 = uVar17;
        FUN_02a44e0c(&local_200,uVar17,uVar16);
        plVar27 = local_90;
        local_90 = (long *)0x0;
        if (plVar27 != (long *)0x0) {
          plVar31 = plVar27 + 1;
          do {
            iVar14 = (int)*plVar31 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar4) {
              *(int *)plVar31 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            plVar27[2] = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)puVar9;
            *(long *)puVar10 = lVar26;
            local_1f0 = (long *)*plVar27;
            FUN_02a44274(lVar26 + 0xd8,&local_1f0);
          }
        }
        plVar27 = local_c0;
        local_c0 = (long *)0x0;
        if (local_200 == (long *)0x0) {
          if (plVar27 != (long *)0x0) {
            plVar31 = plVar27 + 1;
            do {
              lVar26 = *plVar31;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar4) {
                *(int *)plVar31 = (int)lVar26 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar26 == 1) {
              plVar27[2] = 0;
              if (((*puVar8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar9;
              *(long *)puVar10 = lVar26;
              local_1f0 = (long *)*plVar27;
              FUN_02a44274(lVar26 + 0xd8,&local_1f0);
            }
          }
          uVar16 = 0;
        }
        else {
          plVar31 = local_200;
          if (plVar27 != (long *)0x0) {
            plVar31 = plVar27 + 1;
            do {
              iVar14 = (int)*plVar31 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar4) {
                *(int *)plVar31 = iVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 == 0) {
              plVar27[2] = 0;
              if (((*puVar8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar9;
              *(long *)puVar10 = lVar26;
              local_1f0 = (long *)*plVar27;
              FUN_02a44274(lVar26 + 0xd8,&local_1f0);
            }
            plVar31 = local_200;
          }
          local_200 = (long *)0x0;
          local_c0 = plVar31;
        }
        plVar27 = local_200;
        local_b8 = uVar16;
        if (local_200 != (long *)0x0) {
          plVar31 = local_200 + 1;
          do {
            iVar14 = (int)*plVar31 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar4) {
              *(int *)plVar31 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            local_200[2] = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)puVar9;
            *(long *)puVar10 = lVar26;
            local_1f0 = (long *)*plVar27;
            FUN_02a44274(lVar26 + 0xd8,&local_1f0);
          }
        }
        plVar27 = local_90;
        if (local_90 != (long *)0x0) {
          plVar31 = local_90 + 1;
          do {
            iVar14 = (int)*plVar31 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar4) {
              *(int *)plVar31 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            local_90[2] = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar26 = *(long *)puVar9;
            *(long *)puVar10 = lVar26;
            local_1f0 = (long *)*plVar27;
            FUN_02a44274(lVar26 + 0xd8,&local_1f0);
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar26 = local_70[0][0xb];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
      }
    }
    memset(&local_1f0,0,0x130);
    FUN_008c4b3c(&local_1f0,&local_c0);
    local_90 = (long *)0x0;
    local_88 = 0;
    FUN_008802f0(&local_90,*param_2 + 0x58);
    local_200 = (long *)0x0;
    uStack_1f8 = 0;
    FUN_00b5f91c(&local_200,&local_90);
    plVar27 = local_90;
    if (local_90 != (long *)0x0) {
      plVar31 = local_90 + 1;
      do {
        iVar14 = (int)*plVar31 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar4) {
          *(int *)plVar31 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_70[0] = (long *)*plVar27;
        FUN_02a44274(lVar26 + 0xd8,local_70);
      }
    }
    FUN_00b5fc1c(local_1e0,&local_200);
    plVar27 = local_200;
    if (local_200 != (long *)0x0) {
      plVar31 = local_200 + 1;
      do {
        iVar14 = (int)*plVar31 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar4) {
          *(int *)plVar31 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_200[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_90 = (long *)*plVar27;
        FUN_02a44274(lVar26 + 0xd8,&local_90);
      }
    }
    if (((*PTR_DAT_0437b520 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b520), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_04381aa8,PTR_DAT_0437b528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b520);
    }
    lVar26 = *(long *)PTR_DAT_0437b528;
    *(long *)PTR_DAT_0437b570 = lVar26;
    if (lVar26 != 0) {
      FUN_0184cdec(lVar26,&local_1f0);
    }
    pcVar13 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar13)(auStack_130);
    }
    pcVar13 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = (code *)0x0;
      (*pcVar13)(auStack_1b0);
    }
    if (local_1e0[0] != (long *)0x0) {
      plVar27 = local_1e0[0] + 1;
      do {
        iVar14 = (int)*plVar27 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *(int *)plVar27 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_1e0[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_90 = (long *)*local_1e0[0];
        FUN_02a44274(lVar26 + 0xd8,&local_90);
      }
    }
    plVar27 = local_1f0;
    if (local_1f0 != (long *)0x0) {
      plVar31 = local_1f0 + 1;
      do {
        iVar14 = (int)*plVar31 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar4) {
          *(int *)plVar31 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_1f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_90 = (long *)*plVar27;
        FUN_02a44274(lVar26 + 0xd8,&local_90);
      }
    }
    plVar27 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar31 = local_c0 + 1;
      do {
        iVar14 = (int)*plVar31 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar4) {
          *(int *)plVar31 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar26 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar26;
        local_1f0 = (long *)*plVar27;
        FUN_02a44274(lVar26 + 0xd8,&local_1f0);
      }
    }
  }
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar32 + 0x20))(plVar32);
    }
  }
  return;
}


