/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02684b70; name: FUN_02684b70
 */


void FUN_02684b70(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *local_2c0;
  long *local_2b8;
  undefined8 uStack_2b0;
  long *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  long *local_190;
  undefined8 uStack_188;
  long local_78 [3];
  
  if (*(long *)(param_1 + 0x668) == 0) {
    return;
  }
  FUN_02685ed4(&local_190);
  plVar10 = local_190;
  if (local_190 == (long *)0x0) {
    return;
  }
  local_1d0 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  local_258 = (undefined8 *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  local_238 = (undefined8 *)0x0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_19c = 0;
  uStack_198 = 0;
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_1ac = 0;
  uStack_1a8 = 0;
  local_1b4 = 0;
  uStack_1b0 = 0;
  local_1bc = 0;
  uStack_1b8 = 0;
  local_1c4 = 0;
  uStack_1c0 = 0;
  local_1cc = 0;
  uStack_1c8 = 0;
  if (local_190[0x3e] != 0) {
    FUN_026861b0(&local_190,local_190[0x3e] + 0x90);
    FUN_0268608c(&local_2a0,&local_190);
    FUN_02496ecc(&local_190);
  }
  if (*(char *)(param_1 + 0x5a0) == '\0') {
    uStack_198 = 0;
    uStack_1a8 = 0;
    local_1a4 = 0;
    uStack_1a0 = 0;
    local_19c = 0;
    uStack_1b8 = 0;
    local_1b4 = 0;
    uStack_1b0 = 0;
    local_1ac = 0;
    uStack_1c8 = 0;
    local_1c4 = 0;
    uStack_1c0 = 0;
    local_1bc = 0;
    if (*(long *)(param_1 + 0x5e8) == 0) goto LAB_02684cb4;
LAB_02684de8:
    FUN_00cfac20(&local_2a8);
    if (local_2a8 != (long *)0x0) {
      FUN_01af35a4(&local_190);
      FUN_018e5d8c(&local_258,&local_190);
      plVar5 = local_190;
      if (local_190 != (long *)0x0) {
        plVar15 = local_190 + 1;
        do {
          iVar11 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_190[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_2b8 = (long *)*plVar5;
          FUN_02a44274(lVar14 + 0xd8,&local_2b8);
        }
      }
      (**(code **)(*local_2a8 + 0x10))(&local_190);
      local_2b8 = (long *)0x0;
      uStack_2b0 = 0;
      FUN_00d07698(&local_2b8,&local_190);
      plVar5 = local_190;
      if (local_190 != (long *)0x0) {
        plVar15 = local_190 + 1;
        do {
          iVar11 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_190[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_78[0] = *plVar5;
          FUN_02a44274(lVar14 + 0xd8,local_78);
        }
      }
      FUN_00d07998(&uStack_248,&local_2b8);
      plVar5 = local_2b8;
      if (local_2b8 != (long *)0x0) {
        plVar15 = local_2b8 + 1;
        do {
          iVar11 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_2b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_190 = (long *)*plVar5;
          FUN_02a44274(lVar14 + 0xd8,&local_190);
        }
      }
      puVar9 = local_238;
      local_238 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          puVar9[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_190 = (long *)*puVar9;
          FUN_02a44274(lVar14 + 0xd8,&local_190);
        }
      }
      local_230 = 0;
      FUN_01a73640(&local_190,local_2a8);
      plVar5 = local_190;
      puVar8 = PTR_DAT_04379e90;
      puVar7 = PTR_DAT_04379e88;
      puVar6 = PTR_DAT_043794d0;
      if (local_190 != (long *)0x0) {
        if (*(int *)((long)local_190 + 0xc) != 0) {
          piVar1 = (int *)((long)local_190 + 0xc);
          iVar11 = *(int *)((long)local_190 + 0xc);
          do {
            plVar15 = (long *)plVar5[2];
            if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar8 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_0268522c;
              if (plVar15 == (long *)puVar8) break;
              plVar15 = (long *)*plVar15;
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar14 = plVar5[3];
                plVar5 = (long *)0x0;
                plVar15 = local_190;
                if (lVar14 != 0) {
                  plVar5 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x02685250;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar12;
          } while (iVar12 != 0);
        }
LAB_0268522c:
        plVar5 = (long *)0x0;
        plVar15 = local_190;
joined_r0x02685250:
        local_190 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
          do {
            iVar11 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_2b8 = (long *)*plVar15;
            FUN_02a44274(lVar14 + 0xd8,&local_2b8);
          }
        }
        if (plVar5 != (long *)0x0) {
          local_190 = (long *)0x0;
          uStack_188 = 0;
          FUN_01a2bf84(&local_190,plVar5 + 0xb9);
          if (local_190 == (long *)0x0) {
            local_2c0 = (long *)0x0;
          }
          else {
            FUN_009cf990(&local_2c0);
            plVar15 = local_190;
            if (local_190 != (long *)0x0) {
              plVar2 = local_190 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                local_190[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_2b8 = (long *)*plVar15;
                FUN_02a44274(lVar14 + 0xd8,&local_2b8);
              }
            }
            if (local_2c0 != (long *)0x0) {
              local_190 = (long *)0x0;
              uStack_188 = 0;
              FUN_008802f0(&local_190,local_2c0 + 0xb);
              local_2b8 = (long *)0x0;
              uStack_2b0 = 0;
              FUN_02623098(&local_2b8,&local_190);
              plVar15 = local_190;
              if (local_190 != (long *)0x0) {
                plVar2 = local_190 + 1;
                do {
                  iVar11 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_190[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_78[0] = *plVar15;
                  FUN_02a44274(lVar14 + 0xd8,local_78);
                }
              }
              FUN_02626558(&local_238,&local_2b8);
              plVar15 = local_2b8;
              if (local_2b8 != (long *)0x0) {
                plVar2 = local_2b8 + 1;
                do {
                  iVar11 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_2b8[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_190 = (long *)*plVar15;
                  FUN_02a44274(lVar14 + 0xd8,&local_190);
                }
              }
              if (local_2c0 != (long *)0x0) {
                lVar14 = local_2c0[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_2c0 + 0x20))();
                }
              }
            }
          }
          lVar14 = plVar5[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
        }
      }
      goto joined_r0x02684d2c;
    }
  }
  else {
    uStack_1c0 = (undefined4)*(undefined8 *)(param_1 + 0x5ac);
    local_1bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5ac) >> 0x20);
    uStack_1b8 = (undefined4)*(undefined8 *)(param_1 + 0x5b4);
    local_1b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5b4) >> 0x20);
    uStack_1c8 = (undefined4)*(undefined8 *)(param_1 + 0x5a4);
    local_1c4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5a4) >> 0x20);
    uStack_198 = *(undefined4 *)(param_1 + 0x5d4);
    uStack_1b0 = (undefined4)*(undefined8 *)(param_1 + 0x5bc);
    local_1ac = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5bc) >> 0x20);
    uStack_1a8 = (undefined4)*(undefined8 *)(param_1 + 0x5c4);
    local_1a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5c4) >> 0x20);
    uStack_1a0 = (undefined4)*(undefined8 *)(param_1 + 0x5cc);
    local_19c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5cc) >> 0x20);
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    if (*(long *)(param_1 + 0x5e8) != 0) goto LAB_02684de8;
LAB_02684cb4:
    local_2a8 = (long *)0x0;
  }
  puVar9 = local_258;
  local_258 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_190 = (long *)*puVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_190);
    }
  }
  local_250 = 0;
joined_r0x02684d2c:
  if (local_2a8 != (long *)0x0) {
    lVar14 = local_2a8[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_2a8 + 0x20))();
    }
  }
  FUN_02686344(&uStack_208,param_1 + 0x688);
  FUN_01afe0dc(&uStack_228,param_1 + 0x600);
  FUN_02650ad8(&uStack_218,param_1 + 0x610);
  FUN_008c4b3c(&local_290,param_1 + 0x5d8);
  if (plVar10[0x3e] != 0) {
    FUN_02686bbc(plVar10[0x3e] + 0x90,&local_2a0);
  }
  FUN_02496ecc(&local_2a0);
  lVar14 = plVar10[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return;
}


