/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d90978; name: FUN_01d90978
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d90978(long *param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  int *piVar31;
  long *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  long *local_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined4 local_84;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  lVar23 = param_1[0x36];
  local_c0 = (long *)*param_2;
  if (local_c0 != (long *)0x0) {
    lVar24 = local_c0[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar24 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01c35ac0(lVar23,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar23 = local_c0[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  *(undefined4 *)(*param_2 + 0x220) = 3;
  lVar23 = *param_2;
  (**(code **)(*(long *)param_1[0x37] + 0x10))(&local_80);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_009cc414(&local_d0,&local_80);
  plVar30 = local_80;
  if (local_80 != (long *)0x0) {
    plVar25 = local_80 + 1;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *(int *)plVar25 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_b0 = (long *)*plVar30;
      FUN_02a44274(lVar24 + 0xd8,&local_b0);
    }
  }
  FUN_009ab200(lVar23 + 0x248,&local_d0);
  puVar15 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar31 = (int *)(local_d0 + 1);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_80 = (long *)*puVar15;
      FUN_02a44274(lVar23 + 0xd8,&local_80);
    }
  }
  puVar10 = PTR_DAT_0437a0f0;
  puVar9 = PTR_DAT_0437a0e8;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar23 = param_1[0x10];
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar31 = (int *)(lVar23 + 0xc);
    iVar11 = *(int *)(lVar23 + 0xc);
    do {
      plVar30 = *(long **)(lVar23 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar30 == (long *)0x0) goto LAB_01d90b20;
        if (plVar30 == (long *)puVar10) break;
        plVar30 = (long *)*plVar30;
      }
      iVar12 = *piVar31;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar4) {
          *piVar31 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01d912f4;
        lVar23 = *(long *)(lVar23 + 0x18);
        if (lVar23 != 0) {
          plVar30 = *(long **)(lVar23 + 0x1d8);
          if (plVar30 == (long *)0x0) goto LAB_01d91374;
          lVar24 = plVar30[0xb];
          if (*(undefined8 **)(lVar24 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar24 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
              *(undefined8 *)(lVar24 + 0x10) = uVar13;
            }
            piVar31 = (int *)(lVar24 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar4) {
                *piVar31 = *piVar31 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_01d91374:
            lVar24 = *(long *)(lVar23 + 8);
            piVar31 = (int *)(lVar24 + 0xc);
            do {
              iVar11 = *piVar31;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
              if (bVar4) {
                *piVar31 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))();
            }
            goto LAB_01d90b64;
          }
          goto LAB_01d922f4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01d912f4:
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01d90b20:
  plVar30 = _DAT_00000228;
  if (_DAT_00000228 != (long *)0x0) {
    lVar23 = _DAT_00000228[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_01d90b64:
  local_d8 = (long *)param_1[0x37];
  if (local_d8 != (long *)0x0) {
    lVar23 = local_d8[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_008802f0(&local_80,*param_2 + 0x58);
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  FUN_00b5f91c(&local_e8,&local_80);
  plVar25 = local_80;
  if (local_80 != (long *)0x0) {
    plVar21 = local_80 + 1;
    do {
      iVar11 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(int *)plVar21 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_b0 = (long *)*plVar25;
      FUN_02a44274(lVar23 + 0xd8,&local_b0);
    }
  }
  FUN_01d236dc(plVar30,1,&local_d8,&local_e8);
  puVar15 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    piVar31 = (int *)(local_e8 + 1);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_80 = (long *)*puVar15;
      FUN_02a44274(lVar23 + 0xd8,&local_80);
    }
  }
  if (local_d8 == (long *)0x0) {
LAB_01d90cc4:
    plVar25 = (long *)param_1[0x37];
  }
  else {
    lVar23 = local_d8[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01d90cc4;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*local_d8 + 0x20))();
    plVar25 = (long *)param_1[0x37];
  }
  if (plVar25 != (long *)0x0) {
    lVar23 = plVar25[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_008802f0(&local_80,*param_2 + 0x58);
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  FUN_00b5f91c(&local_f8,&local_80);
  plVar21 = local_80;
  if (local_80 != (long *)0x0) {
    plVar28 = local_80 + 1;
    do {
      iVar11 = (int)*plVar28 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar4) {
        *(int *)plVar28 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_b0 = (long *)*plVar21;
      FUN_02a44274(lVar23 + 0xd8,&local_b0);
    }
  }
  if (local_f8 != (long *)0x0) {
    plVar21 = local_f8;
    if (*(int *)((long)local_f8 + 0xc) != 0) {
      piVar31 = (int *)((long)local_f8 + 0xc);
      pbVar26 = PTR_DAT_0437a250;
      plVar28 = (long *)PTR_DAT_0437a258;
      plVar29 = local_f8;
      iVar11 = *(int *)((long)local_f8 + 0xc);
      do {
        plVar27 = (long *)plVar29[2];
        if (((*pbVar26 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar26), iVar12 != 0)) {
          if ((*PTR_DAT_043795d8 & 1) == 0) goto LAB_01d92324;
          goto LAB_01d91de0;
        }
joined_r0x01d91414:
        while( true ) {
          plVar21 = local_f8;
          if (plVar27 == (long *)0x0) goto joined_r0x01d91d58;
          if (plVar27 == plVar28) break;
          plVar27 = (long *)*plVar27;
        }
        iVar12 = *piVar31;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar4) {
            *piVar31 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = plVar29[3];
            if (lVar23 == 0) break;
            plVar27 = (long *)FUN_0183680c();
            local_84 = 4;
            uVar14 = FUN_01833e7c(plVar30);
            uVar16 = plVar30[0x28];
            piVar31 = (int *)(uVar14 & 0xffffffff);
            plVar28 = plVar30 + 0x27;
            if (uVar16 != 0) {
              uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
              uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar19 < 2) {
                uVar20 = (ulong)((uint)uVar16 - 1) & 4;
              }
              else {
                uVar20 = 4;
                if (uVar16 < 5) {
                  uVar2 = (uint)uVar16 & 0xff;
                  uVar5 = 0;
                  if ((uVar16 & 0xff) != 0) {
                    uVar5 = 4 / uVar2;
                  }
                  uVar20 = (ulong)(4 - uVar5 * uVar2);
                }
              }
              plVar21 = *(long **)(*plVar28 + uVar20 * 8);
              if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0))
              {
                if (uVar19 < 2) {
                  do {
                    if (plVar21[1] == 4) {
                      if ((int)plVar21[2] == 4) goto LAB_01d91510;
                    }
                    else if ((plVar21[1] & uVar16 - 1) != uVar20) goto LAB_01d91fe0;
                    plVar21 = (long *)*plVar21;
                    if (plVar21 == (long *)0x0) goto LAB_01d91fe0;
                  } while( true );
                }
                do {
                  uVar19 = plVar21[1];
                  if (uVar19 == 4) {
                    if ((int)plVar21[2] == 4) goto LAB_01d91510;
                  }
                  else {
                    if (uVar16 <= uVar19) {
                      uVar6 = 0;
                      if (uVar16 != 0) {
                        uVar6 = uVar19 / uVar16;
                      }
                      uVar19 = uVar19 - uVar6 * uVar16;
                    }
                    if (uVar19 != uVar20) break;
                  }
                  plVar21 = (long *)*plVar21;
                  if (plVar21 == (long *)0x0) break;
                } while( true );
              }
            }
LAB_01d91fe0:
            lVar24 = plVar30[1];
            local_90 = (long *)FUN_018731bc(&local_80,lVar24);
            if (local_90 == (long *)0x0) goto LAB_01d92030;
            lVar18 = local_90[0xb];
            if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar18 + 0x10) == 0) {
                uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                *(undefined8 *)(lVar18 + 0x10) = uVar13;
              }
              piVar31 = (int *)(lVar18 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                if (bVar4) {
                  *piVar31 = *piVar31 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
LAB_01d92030:
              local_98 = (long *)FUN_01873e98(&local_80,lVar24);
              if (local_98 != (long *)0x0) {
                lVar24 = local_98[0xb];
                if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
                if (*(long *)(lVar24 + 0x10) == 0) {
                  uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
                  *(undefined8 *)(lVar24 + 0x10) = uVar13;
                }
                piVar31 = (int *)(lVar24 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                  if (bVar4) {
                    *piVar31 = *piVar31 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              plVar21 = local_90;
              if ((uVar14 & 1) != 0) {
                local_a0 = plVar25;
                if (plVar25 == (long *)0x0) {
                  FUN_01da48dc(local_90,plVar27,&local_a0);
                }
                else {
                  lVar24 = plVar25[0xb];
                  if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
                  if (*(long *)(lVar24 + 0x10) == 0) {
                    uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
                    *(undefined8 *)(lVar24 + 0x10) = uVar13;
                  }
                  plVar29 = local_a0;
                  piVar31 = (int *)(lVar24 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                    if (bVar4) {
                      *piVar31 = *piVar31 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  FUN_01da48dc(plVar21,plVar27,&local_a0);
                  if (plVar29 != (long *)0x0) {
                    lVar24 = plVar29[0xb];
                    piVar31 = (int *)(lVar24 + 0xc);
                    do {
                      iVar11 = *piVar31;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                      if (bVar4) {
                        *piVar31 = iVar11 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar11 + -1 == 0) {
                      *(undefined8 *)(lVar24 + 0x18) = 0;
                      (**(code **)(*plVar29 + 0x20))(plVar29);
                    }
                  }
                }
                FUN_01da585c(plVar30 + 0xd,&local_84,&local_90);
              }
              FUN_009c69bc(&local_b8,plVar25);
              (**(code **)(*local_b8 + 0x10))(&local_80);
              local_b0 = (long *)0x0;
              uStack_a8 = 0;
              FUN_0087f944(&local_b0,&local_80);
              plVar21 = local_80;
              if (local_80 != (long *)0x0) {
                plVar29 = local_80 + 1;
                do {
                  iVar11 = (int)*plVar29 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar24 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar24;
                  local_70[0] = *plVar21;
                  FUN_02a44274(lVar24 + 0xd8,local_70);
                }
              }
              plVar21 = local_b0;
              if (local_b0 == (long *)0x0) {
                lVar24 = 0;
              }
              else {
                plVar29 = local_b0 + 1;
                lVar24 = *local_b0;
                do {
                  iVar11 = (int)*plVar29 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_b0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_80 = (long *)*plVar21;
                  FUN_02a44274(lVar18 + 0xd8,&local_80);
                }
              }
              if (local_b8 != (long *)0x0) {
                lVar18 = local_b8[0xb];
                piVar31 = (int *)(lVar18 + 0xc);
                do {
                  iVar11 = *piVar31;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                  if (bVar4) {
                    *piVar31 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_b8 + 0x20))();
                }
              }
              plVar21 = local_98;
              if (plVar25 == (long *)0x0) {
                local_80 = plVar25;
                FUN_01da4d10(local_98,lVar24,&local_80);
              }
              else {
                lVar18 = plVar25[0xb];
                local_80 = plVar25;
                if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
                if (*(long *)(lVar18 + 0x10) == 0) {
                  uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                  *(undefined8 *)(lVar18 + 0x10) = uVar13;
                }
                plVar29 = local_80;
                piVar31 = (int *)(lVar18 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                  if (bVar4) {
                    *piVar31 = *piVar31 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                FUN_01da4d10(plVar21,lVar24,&local_80);
                if (plVar29 != (long *)0x0) {
                  lVar24 = plVar29[0xb];
                  piVar31 = (int *)(lVar24 + 0xc);
                  do {
                    iVar11 = *piVar31;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                    if (bVar4) {
                      *piVar31 = iVar11 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 + -1 == 0) {
                    *(undefined8 *)(lVar24 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))(plVar29);
                  }
                }
                plVar21 = local_98;
              }
              FUN_01da5f04(plVar28,&local_84,&local_98);
              if (plVar21 == (long *)0x0) {
LAB_01d922cc:
                if (local_90 == (long *)0x0) goto LAB_01d91bb0;
LAB_01d922d4:
                lVar24 = local_90[0xb];
                piVar31 = (int *)(lVar24 + 0xc);
                do {
                  iVar11 = *piVar31;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                  if (bVar4) {
                    *piVar31 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                plVar21 = local_90;
                if (iVar11 + -1 != 0) goto LAB_01d91bb0;
                goto LAB_01d91d2c;
              }
              lVar24 = plVar21[0xb];
              piVar31 = (int *)(lVar24 + 0xc);
              do {
                iVar11 = *piVar31;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                if (bVar4) {
                  *piVar31 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 != 0) goto LAB_01d922cc;
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))(plVar21);
              if (local_90 != (long *)0x0) goto LAB_01d922d4;
              goto LAB_01d91bb0;
            }
            goto LAB_01d922f4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
    goto joined_r0x01d91d58;
  }
  goto LAB_01d90df0;
LAB_01d91510:
  uVar16 = plVar30[0xe];
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 4;
    }
    else {
      uVar20 = 4;
      if (uVar16 < 5) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 4 / uVar2;
        }
        uVar20 = (ulong)(4 - uVar5 * uVar2);
      }
    }
    plVar21 = *(long **)(plVar30[0xd] + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == 4) {
            if ((int)plVar21[2] == 4) goto LAB_01d9159c;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 4) {
            if ((int)plVar21[2] == 4) goto LAB_01d9159c;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar6 * uVar16;
            }
            if (uVar19 != uVar20) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01d92320;
LAB_01d9159c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    pbVar26 = (byte *)plVar21[0xb];
    if (*(undefined8 **)(pbVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(pbVar26 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(pbVar26 + 0x18))();
      *(undefined8 *)(pbVar26 + 0x10) = uVar13;
    }
    pbVar1 = pbVar26 + 0xc;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar16 = plVar30[0x1b];
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 4;
    }
    else {
      uVar20 = 4;
      if (uVar16 < 5) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 4 / uVar2;
        }
        uVar20 = (ulong)(4 - uVar5 * uVar2);
      }
    }
    plVar22 = *(long **)(plVar30[0x1a] + uVar20 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar22[1] == 4) {
            if ((int)plVar22[2] == 4) goto LAB_01d91670;
          }
          else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar22[1];
          if (uVar19 == 4) {
            if ((int)plVar22[2] == 4) goto LAB_01d91670;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar6 * uVar16;
            }
            if (uVar19 != uVar20) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_01d92320;
LAB_01d91670:
  plVar29 = (long *)plVar22[3];
  if (plVar29 != (long *)0x0) {
    pbVar26 = (byte *)plVar29[0xb];
    if (*(undefined8 **)(pbVar26 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(pbVar26 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(pbVar26 + 0x18))();
      *(undefined8 *)(pbVar26 + 0x10) = uVar13;
    }
    pbVar1 = pbVar26 + 0xc;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar16 = plVar30[0x28];
  if (uVar16 != 0) {
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = (ulong)((uint)uVar16 - 1) & 4;
    }
    else {
      uVar20 = 4;
      if (uVar16 < 5) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 4 / uVar2;
        }
        uVar20 = (ulong)(4 - uVar5 * uVar2);
      }
    }
    plVar22 = *(long **)(*plVar28 + uVar20 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar22[1] == 4) {
            if ((int)plVar22[2] == 4) goto LAB_01d9173c;
          }
          else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar22[1];
          if (uVar19 == 4) {
            if ((int)plVar22[2] == 4) goto LAB_01d9173c;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar6 * uVar16;
            }
            if (uVar19 != uVar20) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
LAB_01d92320:
  FUN_01da48d0();
LAB_01d92324:
  iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8);
  if (iVar12 != 0) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
      uVar13 = FUN_0087f8f0();
      *(undefined8 *)PTR_DAT_043794d8 = uVar13;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
    __cxa_guard_release(PTR_DAT_043795d8);
  }
LAB_01d91de0:
  *plVar28 = (long)PTR_DAT_043795e0;
  __cxa_guard_release(pbVar26);
  goto joined_r0x01d91414;
LAB_01d9173c:
  plVar28 = (long *)plVar22[3];
  if (plVar28 == (long *)0x0) goto LAB_01d9177c;
  lVar24 = plVar28[0xb];
  if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
  if (*(long *)(lVar24 + 0x10) == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
    *(undefined8 *)(lVar24 + 0x10) = uVar13;
  }
  piVar31 = (int *)(lVar24 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
    if (bVar4) {
      *piVar31 = *piVar31 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01d9177c:
  if ((uVar14 & 1) != 0) {
    puVar15 = (undefined8 *)(**(code **)plVar21[10])(plVar21 + 10);
    FUN_01da5144();
    if (puVar15 == (undefined8 *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      do {
        plVar22 = plVar21;
        if (puVar15 == (undefined8 *)PTR_DAT_04381b00) break;
        puVar15 = (undefined8 *)*puVar15;
        plVar22 = (long *)0x0;
      } while (puVar15 != (undefined8 *)0x0);
    }
    local_90 = plVar25;
    if (plVar25 == (long *)0x0) {
      FUN_01da48dc(plVar22,plVar27,&local_90);
    }
    else {
      lVar24 = plVar25[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar13;
      }
      plVar17 = local_90;
      piVar31 = (int *)(lVar24 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar4) {
          *piVar31 = *piVar31 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_01da48dc(plVar22,plVar27,&local_90);
      if (plVar17 != (long *)0x0) {
        lVar24 = plVar17[0xb];
        piVar31 = (int *)(lVar24 + 0xc);
        do {
          iVar11 = *piVar31;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar4) {
            *piVar31 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
  }
  puVar15 = (undefined8 *)(**(code **)plVar28[10])(plVar28 + 10);
  FUN_01da5328();
  if (puVar15 == (undefined8 *)0x0) {
    plVar27 = (long *)0x0;
  }
  else {
    do {
      if (puVar15 == (undefined8 *)PTR_DAT_04381b10) {
        plVar27 = plVar28;
        break;
      }
      puVar15 = (undefined8 *)*puVar15;
      plVar27 = (long *)0x0;
    } while (puVar15 != (undefined8 *)0x0);
  }
  FUN_009c69bc(&local_98,plVar25);
  (**(code **)(*local_98 + 0x10))(&local_80);
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_0087f944(&local_b0,&local_80);
  plVar22 = local_80;
  if (local_80 != (long *)0x0) {
    plVar17 = local_80 + 1;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_70[0] = *plVar22;
      FUN_02a44274(lVar24 + 0xd8,local_70);
    }
  }
  plVar22 = local_b0;
  if (local_b0 == (long *)0x0) {
    lVar24 = 0;
    if (local_98 != (long *)0x0) goto LAB_01d91958;
LAB_01d91974:
    if (plVar25 != (long *)0x0) goto LAB_01d9197c;
LAB_01d91cd8:
    local_80 = plVar25;
    FUN_01da4d10(plVar27,lVar24,&local_80);
  }
  else {
    plVar17 = local_b0 + 1;
    lVar24 = *local_b0;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_80 = (long *)*plVar22;
      FUN_02a44274(lVar18 + 0xd8,&local_80);
    }
    if (local_98 == (long *)0x0) goto LAB_01d91974;
LAB_01d91958:
    lVar18 = local_98[0xb];
    piVar31 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01d91974;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*local_98 + 0x20))();
    if (plVar25 == (long *)0x0) goto LAB_01d91cd8;
LAB_01d9197c:
    lVar18 = plVar25[0xb];
    local_80 = plVar25;
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar13;
    }
    plVar22 = local_80;
    piVar31 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01da4d10(plVar27,lVar24,&local_80);
    if (plVar22 != (long *)0x0) {
      lVar24 = plVar22[0xb];
      piVar31 = (int *)(lVar24 + 0xc);
      do {
        iVar11 = *piVar31;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar4) {
          *piVar31 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
    }
  }
  uVar14 = FUN_01836804((long *)(lVar23 + -0x50));
  uVar16 = FUN_01833e7c(plVar30,uVar14);
  if ((uVar16 & 1) != 0) {
    puVar15 = (undefined8 *)(**(code **)plVar29[10])(plVar29 + 10);
    FUN_01da5144();
    if (puVar15 == (undefined8 *)0x0) {
      plVar27 = (long *)0x0;
      uVar16 = _DAT_00000070;
    }
    else {
      do {
        if (puVar15 == (undefined8 *)PTR_DAT_04381b00) {
          plVar27 = plVar29;
          break;
        }
        puVar15 = (undefined8 *)*puVar15;
        plVar27 = (long *)0x0;
      } while (puVar15 != (undefined8 *)0x0);
      uVar16 = plVar27[0xe];
    }
    if (uVar16 != 0) {
      uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar16 - 1 & uVar14;
      }
      else {
        uVar20 = uVar14;
        if (uVar16 <= uVar14) {
          uVar20 = 0;
          if (uVar16 != 0) {
            uVar20 = uVar14 / uVar16;
          }
          uVar20 = uVar14 - uVar20 * uVar16;
        }
      }
      plVar22 = *(long **)(plVar27[0xd] + uVar20 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar22[1] == uVar14) {
              if (plVar22[2] == uVar14) goto joined_r0x01d91b48;
            }
            else if ((plVar22[1] & uVar16 - 1) != uVar20) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar22[1];
            if (uVar19 == uVar14) {
              if (plVar22[2] == uVar14) goto joined_r0x01d91b48;
            }
            else {
              if (uVar16 <= uVar19) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar19 / uVar16;
                }
                uVar19 = uVar19 - uVar6 * uVar16;
              }
              if (uVar19 != uVar20) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    local_b0 = plVar25;
    if (plVar25 == (long *)0x0) {
      FUN_01da48dc(plVar27,uVar14,&local_b0);
    }
    else {
      lVar24 = plVar25[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar13;
      }
      plVar22 = local_b0;
      piVar31 = (int *)(lVar24 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar4) {
          *piVar31 = *piVar31 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_01da48dc(plVar27,uVar14,&local_b0);
      if (plVar22 != (long *)0x0) {
        lVar24 = plVar22[0xb];
        piVar31 = (int *)(lVar24 + 0xc);
        do {
          iVar11 = *piVar31;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar4) {
            *piVar31 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
      }
    }
  }
joined_r0x01d91b48:
  if (plVar28 != (long *)0x0) {
    lVar24 = plVar28[0xb];
    piVar31 = (int *)(lVar24 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (plVar29 != (long *)0x0) {
    lVar24 = plVar29[0xb];
    piVar31 = (int *)(lVar24 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))(plVar29);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    piVar31 = (int *)(lVar24 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
LAB_01d91d2c:
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))();
    }
  }
LAB_01d91bb0:
  lVar24 = *(long *)(lVar23 + 8);
  piVar31 = (int *)(lVar24 + 0xc);
  do {
    iVar11 = *piVar31;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
    if (bVar4) {
      *piVar31 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar21 = local_f8;
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))();
    plVar21 = local_f8;
  }
joined_r0x01d91d58:
  local_f8 = plVar21;
  if (plVar21 != (long *)0x0) {
    plVar28 = plVar21 + 1;
    do {
      iVar11 = (int)*plVar28 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar4) {
        *(int *)plVar28 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      plVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_80 = (long *)*plVar21;
      FUN_02a44274(lVar23 + 0xd8,&local_80);
    }
  }
LAB_01d90df0:
  if (plVar25 != (long *)0x0) {
    lVar23 = plVar25[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  local_100 = (long *)*param_2;
  if (local_100 != (long *)0x0) {
    lVar23 = local_100[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d922f4;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01ccf9b4(param_1 + 0x24,&local_100);
  if (local_100 != (long *)0x0) {
    lVar23 = local_100[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  lVar23 = param_1[0x37];
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_008802f0(&local_80,*param_2 + 0x58);
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  FUN_00b5f91c(&local_110,&local_80);
  plVar25 = local_80;
  if (local_80 != (long *)0x0) {
    plVar21 = local_80 + 1;
    do {
      iVar11 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(int *)plVar21 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar24;
      local_b0 = (long *)*plVar25;
      FUN_02a44274(lVar24 + 0xd8,&local_b0);
    }
  }
  FUN_00b63974(lVar23 + 0x600,&local_110);
  puVar15 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar31 = (int *)(local_110 + 1);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_80 = (long *)*puVar15;
      FUN_02a44274(lVar23 + 0xd8,&local_80);
    }
  }
  local_118 = (long *)*param_2;
  if (local_118 != (long *)0x0) {
    lVar23 = local_118[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_01d922f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = *piVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_1 + 0x80))(param_1,&local_118);
  if (local_118 != (long *)0x0) {
    lVar23 = local_118[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (plVar30 != (long *)0x0) {
    lVar23 = plVar30[0xb];
    piVar31 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar31;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar4) {
        *piVar31 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  return;
}


