/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01262bb4; name: FUN_01262bb4
 */


void FUN_01262bb4(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  long *plVar20;
  bool bVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *local_a0;
  ulong local_98;
  void *local_90;
  long *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_78;
  long *local_70;
  undefined1 *local_68;
  
  puVar6 = PTR_DAT_0437a780;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar8 = PTR_DAT_0437a790;
  puVar7 = PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(&local_80);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    uVar10 = FUN_02a43a8c();
    if (CONCAT44(uStack_7c,local_80) != 0) {
      FUN_02a43934();
    }
    if ((uVar10 & 1) == 0) {
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a780);
      }
      *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
      FUN_01e656d0(&local_80);
      if (CONCAT44(uStack_7c,local_80) == 0) {
        plVar20 = (long *)0x0;
      }
      else {
        FUN_00b1e8cc(&local_a0);
        plVar20 = local_a0;
        if (CONCAT44(uStack_7c,local_80) != 0) {
          FUN_02a43934();
        }
      }
      if (param_2 == 0) {
        piVar11 = (int *)FUN_00b1e13c(plVar20);
      }
      else {
        piVar11 = (int *)FUN_00b1e15c();
      }
      if (((piVar11 != (int *)0x0) && (4 < *(ushort *)((long)piVar11 - (long)*piVar11))) &&
         (uVar10 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar10 != 0)) {
        uVar15 = (ulong)*(uint *)((long)piVar11 + uVar10);
        uVar17 = (ulong)*(uint *)((long)((long)piVar11 + uVar10) + uVar15);
        if (uVar17 != 0) {
          pvVar18 = (void *)((ulong)&local_a0 | 1);
          lVar1 = uVar15 + uVar10;
          lVar22 = 0;
          lVar5 = lVar1 + 4;
          do {
            plVar24 = DAT_043f1798;
            uVar10 = (ulong)*(uint *)((long)piVar11 + lVar22 + lVar1 + 4);
            local_78 = (long *)0x0;
            local_70 = (long *)0x0;
            local_68 = &DAT_cbf29ce484222645;
            lVar4 = lVar22 + uVar10 + lVar1;
            lVar13 = lVar22 + (uVar10 - (long)*(int *)((long)piVar11 + lVar4 + 4)) + lVar1;
            if (*(ushort *)((long)piVar11 + lVar13 + 4) < 0x15) {
              local_80 = 0;
            }
            else {
              uVar15 = (ulong)*(ushort *)((long)piVar11 + lVar13 + 0x18);
              local_80 = 0;
              if (uVar15 != 0) {
                local_80 = *(undefined4 *)((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
              }
            }
            lVar13 = (long)*(int *)((long)piVar11 + lVar4 + 4);
            lVar16 = lVar22 + (uVar10 - lVar13) + lVar1;
            uVar3 = *(ushort *)((long)piVar11 + lVar16 + 4);
            if (uVar3 < 5) {
              plVar25 = (long *)0x0;
              plVar24 = (long *)0x0;
              local_68 = (undefined1 *)0x0;
            }
            else {
              uVar15 = (ulong)*(ushort *)((long)piVar11 + lVar16 + 8);
              if (uVar15 == 0) {
LAB_012638c0:
                plVar24 = (long *)0x0;
                plVar25 = DAT_043f1798;
              }
              else {
                uVar19 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
                if ((long)piVar11 + lVar22 + uVar10 + uVar19 + uVar15 + lVar5 == 0)
                goto LAB_012638c0;
                lVar13 = lVar22 + uVar10 + uVar15 + uVar19 + lVar1;
                uVar2 = *(uint *)((long)piVar11 + lVar13 + 4);
                uVar15 = (ulong)uVar2;
                local_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = (long *)0x0;
                if (uVar2 < 0x17) {
                  local_a0 = (long *)(ulong)(byte)(uVar2 << 1);
                  pvVar12 = pvVar18;
                  if (uVar2 != 0) goto LAB_01262e8c;
                }
                else {
                  uVar19 = uVar15 + 0x10 & 0x1fffffff0;
                  lVar16 = tpidr_el0;
                  plVar25 = *(long **)(lVar16 + 0x20);
                  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
                    *(long **)(lVar16 + 0x20) = DAT_043f1798;
                    plVar25 = plVar24;
                  }
                  pvVar12 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar19,8);
                  local_a0 = (long *)(uVar19 | 1);
                  local_98 = uVar15;
                  local_90 = pvVar12;
LAB_01262e8c:
                  memcpy(pvVar12,(void *)((long)piVar11 + lVar13 + 8),uVar15);
                }
                *(undefined1 *)((long)pvVar12 + uVar15) = 0;
                FUN_01263910(&local_88,&local_a0);
                plVar24 = local_88;
                pvVar12 = local_90;
                plVar25 = DAT_043f1798;
                local_88 = (long *)0x0;
                local_78 = plVar24;
                if ((((ulong)local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
                  lVar13 = tpidr_el0;
                  plVar26 = *(long **)(lVar13 + 0x20);
                  if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
                    *(long **)(lVar13 + 0x20) = DAT_043f1798;
                    plVar26 = plVar25;
                  }
                  uVar15 = (**(code **)(*plVar26 + 0xc0))(plVar26);
                  if ((uVar15 & 1) != 0) {
                    if (*(char *)(lVar13 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar13 + 0x38d488) = 1;
                      *(undefined8 *)(lVar13 + 0x38d478) = 0;
                      *(undefined8 *)(lVar13 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar13 + 0x38d480)) {
                      FUN_02bcc824(plVar26,pvVar12,0,8);
                      goto LAB_01262f70;
                    }
                  }
                  (**(code **)(*plVar26 + 0x18))(plVar26,pvVar12,0,8);
                }
LAB_01262f70:
                lVar13 = (long)*(int *)((long)piVar11 + lVar4 + 4);
                uVar3 = *(ushort *)((long)piVar11 + lVar22 + (uVar10 - lVar13) + lVar1 + 4);
                plVar25 = DAT_043f1798;
              }
              DAT_043f1798 = plVar25;
              if (uVar3 < 9) {
                plVar25 = (long *)0x0;
                local_68 = (undefined1 *)0x0;
              }
              else {
                lVar13 = -lVar13;
                uVar15 = (ulong)*(ushort *)((long)piVar11 + lVar22 + lVar13 + uVar10 + lVar1 + 0xc);
                if (uVar15 == 0) {
LAB_012638d8:
                  plVar25 = (long *)0x0;
                }
                else {
                  uVar19 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
                  if ((long)piVar11 + lVar22 + uVar10 + uVar19 + uVar15 + lVar5 == 0)
                  goto LAB_012638d8;
                  lVar13 = lVar22 + uVar10 + uVar15 + uVar19 + lVar1;
                  uVar2 = *(uint *)((long)piVar11 + lVar13 + 4);
                  uVar15 = (ulong)uVar2;
                  local_98 = 0;
                  local_90 = (void *)0x0;
                  local_a0 = (long *)0x0;
                  if (uVar2 < 0x17) {
                    local_a0 = (long *)(ulong)(byte)(uVar2 << 1);
                    pvVar12 = pvVar18;
                    if (uVar2 != 0) goto LAB_01262ffc;
                  }
                  else {
                    uVar19 = uVar15 + 0x10 & 0x1fffffff0;
                    lVar16 = tpidr_el0;
                    plVar26 = *(long **)(lVar16 + 0x20);
                    if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
                      *(long **)(lVar16 + 0x20) = plVar25;
                      plVar26 = plVar25;
                    }
                    pvVar12 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar19,8);
                    local_a0 = (long *)(uVar19 | 1);
                    local_98 = uVar15;
                    local_90 = pvVar12;
LAB_01262ffc:
                    memcpy(pvVar12,(void *)((long)piVar11 + lVar13 + 8),uVar15);
                  }
                  *(undefined1 *)((long)pvVar12 + uVar15) = 0;
                  FUN_01263910(&local_88,&local_a0);
                  plVar25 = local_88;
                  pvVar12 = local_90;
                  plVar26 = DAT_043f1798;
                  local_88 = (long *)0x0;
                  local_70 = plVar25;
                  if ((((ulong)local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
                    lVar13 = tpidr_el0;
                    plVar27 = *(long **)(lVar13 + 0x20);
                    if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
                      *(long **)(lVar13 + 0x20) = DAT_043f1798;
                      plVar27 = plVar26;
                    }
                    uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
                    if ((uVar15 & 1) != 0) {
                      if (*(char *)(lVar13 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar13 + 0x38d488) = 1;
                        *(undefined8 *)(lVar13 + 0x38d478) = 0;
                        *(undefined8 *)(lVar13 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar13 + 0x38d480)) {
                        FUN_02bcc824(plVar27,pvVar12,0,8);
                        goto LAB_012630e0;
                      }
                    }
                    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar12,0,8);
                  }
LAB_012630e0:
                  lVar16 = (long)*(int *)((long)piVar11 + lVar4 + 4);
                  lVar13 = -lVar16;
                  uVar3 = *(ushort *)((long)piVar11 + lVar22 + (uVar10 - lVar16) + lVar1 + 4);
                }
                if (uVar3 < 0xb) {
                  local_68 = (undefined1 *)0x0;
                }
                else {
                  uVar15 = (ulong)*(ushort *)
                                   ((long)piVar11 + lVar22 + lVar13 + uVar10 + lVar1 + 0xe);
                  local_68 = (undefined1 *)0x0;
                  if (uVar15 != 0) {
                    local_68 = *(undefined1 **)
                                ((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
                  }
                }
              }
            }
            plVar26 = DAT_043f1798;
            lVar13 = (long)*(int *)((long)piVar11 + lVar4 + 4);
            lVar16 = lVar22 + (uVar10 - lVar13) + lVar1;
            uVar3 = *(ushort *)((long)piVar11 + lVar16 + 4);
            if (0x3a < uVar3) {
              uVar15 = (ulong)*(ushort *)((long)piVar11 + lVar16 + 0x3e);
              if (uVar15 == 0) {
LAB_012638ec:
                plVar26 = (long *)0x0;
                if (uVar3 < 0x3f) goto LAB_012638f8;
LAB_012632a8:
                plVar27 = DAT_043f1798;
                uVar15 = (ulong)*(ushort *)
                                 ((long)piVar11 + lVar22 + (uVar10 - lVar13) + lVar1 + 0x42);
                if (uVar15 == 0) goto LAB_012638f8;
                uVar19 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
                if ((long)piVar11 + lVar22 + uVar10 + uVar19 + uVar15 + lVar5 == 0)
                goto LAB_012638f8;
                lVar4 = lVar22 + uVar10 + uVar15 + uVar19 + lVar1;
                uVar2 = *(uint *)((long)piVar11 + lVar4 + 4);
                uVar10 = (ulong)uVar2;
                local_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = (long *)0x0;
                if (uVar2 < 0x17) {
                  local_a0 = (long *)(ulong)(byte)(uVar2 << 1);
                  pvVar12 = pvVar18;
                  if (uVar2 != 0) goto LAB_01263314;
                }
                else {
                  uVar15 = uVar10 + 0x10 & 0x1fffffff0;
                  lVar13 = tpidr_el0;
                  plVar14 = *(long **)(lVar13 + 0x20);
                  if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
                    *(long **)(lVar13 + 0x20) = DAT_043f1798;
                    plVar14 = plVar27;
                  }
                  pvVar12 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar15,8);
                  local_a0 = (long *)(uVar15 | 1);
                  local_98 = uVar10;
                  local_90 = pvVar12;
LAB_01263314:
                  memcpy(pvVar12,(void *)((long)piVar11 + lVar4 + 8),uVar10);
                }
                *(undefined1 *)((long)pvVar12 + uVar10) = 0;
                FUN_01263910(&local_88,&local_a0);
                plVar27 = local_88;
                pvVar12 = local_90;
                plVar14 = DAT_043f1798;
                local_88 = (long *)0x0;
                if ((((ulong)local_a0 & 1) == 0) || (local_90 == (void *)0x0))
                goto joined_r0x012633f4;
                lVar4 = tpidr_el0;
                plVar23 = *(long **)(lVar4 + 0x20);
                if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
                  *(long **)(lVar4 + 0x20) = DAT_043f1798;
                  plVar23 = plVar14;
                }
                uVar10 = (**(code **)(*plVar23 + 0xc0))(plVar23);
                if ((uVar10 & 1) == 0) {
LAB_012633d8:
                  (**(code **)(*plVar23 + 0x18))(plVar23,pvVar12,0,8);
                  goto joined_r0x012633f4;
                }
                if (*(char *)(lVar4 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar4 + 0x38d488) = 1;
                  *(undefined8 *)(lVar4 + 0x38d478) = 0;
                  *(undefined8 *)(lVar4 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_012633d8;
                FUN_02bcc824(plVar23,pvVar12,0,8);
                if (plVar26 != (long *)0x0) goto LAB_012633f8;
LAB_01263900:
                bVar21 = true;
                plVar23 = (long *)0x0;
                plVar14 = plVar26;
joined_r0x0126340c:
                plVar26 = plVar23;
                if (plVar27 != (long *)0x0) {
                  if (1 < (ulong)plVar27[0xd]) {
                    if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48)) {
                      FUN_01263d64(param_1 + 0x38,&local_80);
                    }
                    else {
                      FUN_01263e44(param_1 + 0x50,*(long *)(param_1 + 0x40),&local_80);
                      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 0x20;
                    }
                  }
LAB_0126341c:
                  (**(code **)(*plVar27 + 0x20))(plVar27);
                }
                if (bVar21) goto LAB_01263440;
              }
              else {
                uVar19 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar10 + uVar15 + lVar1 + 4);
                if ((long)piVar11 + lVar22 + uVar10 + uVar19 + uVar15 + lVar5 == 0)
                goto LAB_012638ec;
                lVar13 = lVar22 + uVar10 + uVar15 + uVar19 + lVar1;
                uVar2 = *(uint *)((long)piVar11 + lVar13 + 4);
                uVar15 = (ulong)uVar2;
                local_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = (long *)0x0;
                if (uVar2 < 0x17) {
                  local_a0 = (long *)(ulong)(byte)(uVar2 << 1);
                  pvVar12 = pvVar18;
                  if (uVar2 != 0) goto LAB_012631a8;
                }
                else {
                  uVar19 = uVar15 + 0x10 & 0x1fffffff0;
                  lVar16 = tpidr_el0;
                  plVar27 = *(long **)(lVar16 + 0x20);
                  if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
                    *(long **)(lVar16 + 0x20) = DAT_043f1798;
                    plVar27 = plVar26;
                  }
                  pvVar12 = (void *)(**(code **)(*plVar27 + 0x10))(plVar27,uVar19,8);
                  local_a0 = (long *)(uVar19 | 1);
                  local_98 = uVar15;
                  local_90 = pvVar12;
LAB_012631a8:
                  memcpy(pvVar12,(void *)((long)piVar11 + lVar13 + 8),uVar15);
                }
                *(undefined1 *)((long)pvVar12 + uVar15) = 0;
                FUN_01263910(&local_88,&local_a0);
                plVar26 = local_88;
                pvVar12 = local_90;
                plVar27 = DAT_043f1798;
                local_88 = (long *)0x0;
                if ((((ulong)local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
                  lVar13 = tpidr_el0;
                  plVar14 = *(long **)(lVar13 + 0x20);
                  if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
                    *(long **)(lVar13 + 0x20) = DAT_043f1798;
                    plVar14 = plVar27;
                  }
                  uVar15 = (**(code **)(*plVar14 + 0xc0))(plVar14);
                  if ((uVar15 & 1) != 0) {
                    if (*(char *)(lVar13 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar13 + 0x38d488) = 1;
                      *(undefined8 *)(lVar13 + 0x38d478) = 0;
                      *(undefined8 *)(lVar13 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar13 + 0x38d480)) {
                      FUN_02bcc824(plVar14,pvVar12,0,8);
                      goto LAB_01263288;
                    }
                  }
                  (**(code **)(*plVar14 + 0x18))(plVar14,pvVar12,0,8);
                }
LAB_01263288:
                lVar13 = (long)*(int *)((long)piVar11 + lVar4 + 4);
                if (0x3e < *(ushort *)((long)piVar11 + lVar22 + (uVar10 - lVar13) + lVar1 + 4))
                goto LAB_012632a8;
LAB_012638f8:
                plVar27 = (long *)0x0;
joined_r0x012633f4:
                if (plVar26 == (long *)0x0) goto LAB_01263900;
LAB_012633f8:
                plVar14 = plVar26;
                if ((ulong)plVar26[0xd] < 2) {
                  bVar21 = false;
                  plVar23 = plVar26;
                  goto joined_r0x0126340c;
                }
                if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
                  FUN_01263d64(param_1,&local_80);
                  if (plVar27 == (long *)0x0) goto LAB_01263430;
LAB_0126349c:
                  bVar21 = false;
                  goto LAB_0126341c;
                }
                FUN_01263e44(param_1 + 0x18,*(long *)(param_1 + 8),&local_80);
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
                if (plVar27 != (long *)0x0) goto LAB_0126349c;
              }
LAB_01263430:
              (**(code **)(*plVar26 + 0x20))(plVar14);
            }
LAB_01263440:
            if (plVar25 != (long *)0x0) {
              (**(code **)(*plVar25 + 0x20))(plVar25);
            }
            if (plVar24 != (long *)0x0) {
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
            lVar22 = lVar22 + 4;
          } while (uVar17 << 2 != lVar22);
        }
      }
      if ((plVar20 != (long *)0x0) && (uVar10 = FUN_02a43a5c(plVar20[0xb]), (uVar10 & 1) != 0)) {
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


