/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a00c54; name: FUN_01a00c54
 */


/* WARNING: Removing unreachable block (ram,0x01a01654) */

void FUN_01a00c54(long param_1)

{
  long ***ppplVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long ***ppplVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long ***local_a0;
  undefined8 uStack_98;
  long **local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long ****local_70;
  long ****local_68;
  
  if (*(long *)(param_1 + 0x300) != 0) {
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_00ae8374(&local_b0,param_1 + 0x390);
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
    FUN_00af7e30(&local_c0,param_1 + 0x3a0);
    local_78 = (long *)0x0;
    local_70 = (long ****)0x0;
    FUN_00ae8374(&local_78,&local_b0);
    local_a0 = (long ***)0x0;
    uStack_98 = 0;
    FUN_00af7e30(&local_a0,&local_c0);
    (**(code **)(param_1 + 0x300))(param_1 + 800,&local_78,&local_a0);
    ppplVar13 = local_a0;
    if (local_a0 != (long ***)0x0) {
      ppplVar1 = local_a0 + 1;
      do {
        iVar15 = *(int *)ppplVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
        if (bVar6) {
          *(int *)ppplVar1 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        local_a0[2] = (long **)0x0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = (long ****)*ppplVar13;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    plVar25 = local_78;
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 1;
      do {
        iVar15 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = (long ****)*plVar25;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    puVar23 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar3 = (int *)(local_c0 + 1);
      do {
        iVar15 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_78 = (long *)*puVar23;
        FUN_02a44274(lVar17 + 0xd8,&local_78);
      }
    }
    puVar23 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      piVar3 = (int *)(local_b0 + 1);
      do {
        iVar15 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_78 = (long *)*puVar23;
        FUN_02a44274(lVar17 + 0xd8,&local_78);
      }
    }
  }
  puVar11 = PTR_DAT_0437a558;
  puVar10 = PTR_DAT_0437a550;
  lVar17 = *(long *)(param_1 + 0x3a0);
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0xc) == 0)) {
LAB_01a00e5c:
    lVar17 = *(long *)(param_1 + 0x390);
    pbVar9 = PTR_DAT_04379e78;
    puVar23 = (undefined8 *)PTR_DAT_04379e80;
joined_r0x01a011ac:
    PTR_DAT_04379e78 = pbVar9;
    PTR_DAT_04379e80 = (undefined *)puVar23;
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
      piVar3 = (int *)(lVar17 + 0xc);
      iVar15 = *(int *)(lVar17 + 0xc);
      do {
        plVar25 = *(long **)(lVar17 + 0x10);
        if (((*pbVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar9), iVar14 != 0)) {
          uVar22 = FUN_0095a420();
          *puVar23 = uVar22;
          __cxa_guard_release(pbVar9);
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_01a00e64;
          if (plVar25 == puVar23) break;
          plVar25 = (long *)*plVar25;
        }
        iVar14 = *piVar3;
        if (iVar14 == iVar15) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01a017ec;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar25 = (long *)(lVar17 + -0x50);
            if ((*(long *)(lVar17 + 0x1a0) == 0) || (*(int *)(*(long *)(lVar17 + 0x1a0) + 0xc) == 0)
               ) {
              uVar22 = *(undefined8 *)(lVar17 + 0x1b8);
              FUN_00aae1c0(&local_78,plVar25);
              FUN_0135c614(uVar22,&local_78);
              plVar2 = local_78;
              if (local_78 != (long *)0x0) {
                plVar24 = local_78 + 1;
                do {
                  iVar15 = (int)*plVar24 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar6) {
                    *(int *)plVar24 = iVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar15 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_a0 = (long ***)*plVar2;
                  FUN_02a44274(lVar19 + 0xd8,&local_a0);
                }
              }
            }
            else {
              uVar22 = *(undefined8 *)(lVar17 + 0x1b8);
              FUN_00aae1c0(&local_78,plVar25);
              FUN_0135c614(uVar22,&local_78);
              plVar2 = local_78;
              if (local_78 != (long *)0x0) {
                plVar24 = local_78 + 1;
                do {
                  iVar15 = (int)*plVar24 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar6) {
                    *(int *)plVar24 = iVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar15 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_a0 = (long ***)*plVar2;
                  FUN_02a44274(lVar19 + 0xd8,&local_a0);
                }
              }
              puVar23 = *(undefined8 **)(lVar17 + 0x1a0);
              *(undefined8 *)(lVar17 + 0x1a0) = 0;
              if (puVar23 != (undefined8 *)0x0) {
                piVar3 = (int *)(puVar23 + 1);
                do {
                  iVar15 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = iVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar15 + -1 == 0) {
                  puVar23[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_78 = (long *)*puVar23;
                  FUN_02a44274(lVar19 + 0xd8,&local_78);
                }
              }
              *(undefined8 *)(lVar17 + 0x1a8) = 0;
            }
            lVar17 = *(long *)(lVar17 + 8);
            piVar3 = (int *)(lVar17 + 0xc);
            do {
              iVar15 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 != 0) break;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar25 + 0x20))(plVar25);
            if (*(char *)(param_1 + 0x294) != '\0') {
              return;
            }
            goto LAB_01a00e6c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a017ec:
        iVar15 = iVar14;
      } while (iVar14 != 0);
    }
LAB_01a00e64:
    if (*(char *)(param_1 + 0x294) == '\0') {
LAB_01a00e6c:
      if (*(undefined1 **)(param_1 + 0x420) != &DAT_cbf29ce484222645) {
        FUN_01e65d58(&local_78);
        plVar25 = local_78;
        if (local_78 != (long *)0x0) {
          FUN_01cd2014(local_78,param_1 + 0x420);
          lVar17 = plVar25[0xb];
          piVar3 = (int *)(lVar17 + 0xc);
          do {
            iVar15 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
        }
      }
    }
    return;
  }
  piVar3 = (int *)(lVar17 + 0xc);
  iVar15 = *(int *)(lVar17 + 0xc);
  while( true ) {
    plVar25 = *(long **)(lVar17 + 0x10);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      uVar22 = FUN_00aa0310();
      *(undefined8 *)puVar11 = uVar22;
      __cxa_guard_release(puVar10);
    }
    while( true ) {
      if (plVar25 == (long *)0x0) goto LAB_01a00e5c;
      if (plVar25 == (long *)puVar11) break;
      plVar25 = (long *)*plVar25;
    }
    iVar14 = *piVar3;
    if (iVar14 == iVar15) break;
    ClearExclusiveLocal();
LAB_01a0100c:
    iVar15 = iVar14;
    if (iVar14 == 0) goto LAB_01a00e5c;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
  if (bVar6) {
    *piVar3 = iVar15 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_01a0100c;
  lVar17 = *(long *)(lVar17 + 0x18);
  if (lVar17 == 0) goto LAB_01a00e5c;
  plVar25 = (long *)(lVar17 + -0x50);
  if ((*(long *)(lVar17 + 0x1a0) == 0) || (*(int *)(*(long *)(lVar17 + 0x1a0) + 0xc) == 0)) {
    uVar22 = *(undefined8 *)(lVar17 + 0x1b8);
    FUN_00a9ecd4(&local_78,plVar25);
    FUN_0135cd08(uVar22,&local_78);
    plVar2 = local_78;
    if (local_78 != (long *)0x0) {
      plVar24 = local_78 + 1;
      do {
        iVar15 = (int)*plVar24 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_a0 = (long ***)*plVar2;
        FUN_02a44274(lVar19 + 0xd8,&local_a0);
      }
    }
    goto LAB_01a01178;
  }
  uVar22 = *(undefined8 *)(lVar17 + 0x1b8);
  FUN_00a9ecd4(&local_78,plVar25);
  FUN_0135cd08(uVar22,&local_78);
  plVar2 = local_78;
  if (local_78 != (long *)0x0) {
    plVar24 = local_78 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(int *)plVar24 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_a0 = (long ***)*plVar2;
      FUN_02a44274(lVar19 + 0xd8,&local_a0);
    }
  }
  FUN_00a9ecd4(&local_78,plVar25);
  plVar2 = local_78;
  puVar12 = PTR_DAT_0437a130;
  puVar11 = PTR_DAT_0437a128;
  puVar10 = PTR_DAT_043794d0;
  if (local_78 == (long *)0x0) {
    local_80 = (long *)0x0;
    goto LAB_01a01178;
  }
  if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_01a0137c:
    local_80 = (long *)0x0;
  }
  else {
    piVar3 = (int *)((long)local_78 + 0xc);
    iVar15 = *(int *)((long)local_78 + 0xc);
    while( true ) {
      plVar24 = (long *)plVar2[2];
      if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
            uVar22 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar22;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar12 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar11);
        if (plVar24 != (long *)0x0) goto LAB_01a012bc;
        goto LAB_01a0137c;
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto LAB_01a0137c;
LAB_01a012bc:
        if (plVar24 == (long *)puVar12) break;
        plVar24 = (long *)*plVar24;
      }
      iVar14 = *piVar3;
      if (iVar14 == iVar15) break;
      ClearExclusiveLocal();
LAB_01a012a4:
      iVar15 = iVar14;
      if (iVar14 == 0) goto LAB_01a0137c;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01a012a4;
    lVar19 = plVar2[3];
    local_80 = (long *)0x0;
    if (lVar19 != 0) {
      local_80 = (long *)(lVar19 + -0x50);
    }
  }
  plVar2 = local_78;
  if (local_78 != (long *)0x0) {
    plVar24 = local_78 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(int *)plVar24 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_a0 = (long ***)*plVar2;
      FUN_02a44274(lVar19 + 0xd8,&local_a0);
    }
  }
  if (local_80 == (long *)0x0) goto LAB_01a01178;
  FUN_009c69bc(&local_88);
  plVar2 = local_88;
  if (local_88 != (long *)0x0) {
    local_90 = &local_80;
    local_a0 = &local_90;
    local_78 = local_88 + 0x1e;
    local_70 = &local_a0;
    plVar24 = local_88 + 0x21;
    lVar21 = *plVar24;
    local_68 = local_70;
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 == lVar21) {
      uVar16 = FUN_01a056f8(&local_78,plVar2 + 0x2d);
      if (((uVar16 & 1) == 0) && (uVar16 = FUN_01a056f8(&local_78,plVar2 + 0x34), (uVar16 & 1) == 0)
         ) {
        bVar6 = false;
LAB_01a01550:
        plVar24 = plVar2 + 0x28;
        do {
          lVar19 = *plVar24;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar19;
            plVar2[0x29] = plVar2[0x29];
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar21 = nn::os::GetCurrentThread();
        if (lVar21 == lVar19) {
          FUN_01a056f8(&local_78,plVar2 + 0x3b);
        }
        else {
          lVar19 = nn::os::GetCurrentThread();
          do {
            if (*plVar24 != 0 || plVar2[0x29] != 0) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto LAB_01a015bc;
            }
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *plVar24 = lVar19;
              plVar2[0x29] = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar7 = true;
LAB_01a015bc:
          lVar19 = nn::os::GetCurrentThread();
          plVar4 = plVar2 + 0x2c;
          do {
            if (*plVar4 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)((long)plVar2 + 0x154));
                while (*plVar4 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar8) {
                    *plVar4 = lVar19;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01a015f8;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *plVar4 = lVar19;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01a015f8:
          if (bVar7) {
            uVar16 = FUN_01a05894(&local_68);
            if ((uVar16 & 1) != 0) {
              FUN_01a05ac0(plVar2[0x3b],plVar2[0x3c]);
            }
            plVar2[0x2c] = 0;
            nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x154));
            do {
              lVar19 = *plVar24;
              lVar21 = plVar2[0x29];
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *plVar24 = lVar19;
                plVar2[0x29] = lVar21;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              lVar18 = *plVar24;
              lVar20 = plVar2[0x29];
              if (lVar18 != lVar19 || lVar20 != lVar21) {
                ClearExclusiveLocal();
                goto LAB_01a01684;
              }
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *plVar24 = 0;
                *(long *)((long)plVar2 + 0x144) = lVar21;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_01a016bc;
          }
          FUN_01a056f8(&local_78,plVar2 + 0x3b);
          plVar2[0x2c] = 0;
          nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x154));
        }
        goto joined_r0x01a015ac;
      }
    }
    else {
      lVar19 = nn::os::GetCurrentThread();
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)((long)plVar2 + 0xfc));
            while (*plVar24 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar6) {
                *plVar24 = lVar19;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01a014b4;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01a014b4:
      lVar19 = nn::os::GetCurrentThread();
      plVar24 = plVar2 + 0x24;
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)((long)plVar2 + 0x114));
            while (*plVar24 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar6) {
                *plVar24 = lVar19;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01a014f0;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01a014f0:
      uVar16 = FUN_01a05894(&local_68,plVar2 + 0x2d);
      if ((uVar16 & 1) == 0) {
        uVar16 = FUN_01a05894(&local_68,plVar2 + 0x34);
        plVar2[0x24] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x114));
        if ((uVar16 & 1) == 0) {
          bVar6 = true;
          goto LAB_01a01550;
        }
      }
      else {
        plVar2[0x24] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x114));
      }
LAB_01a016c8:
      plVar2[0x21] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0xfc));
    }
    goto LAB_01a016d8;
  }
LAB_01a0170c:
  puVar23 = *(undefined8 **)(lVar17 + 0x1a0);
  *(undefined8 *)(lVar17 + 0x1a0) = 0;
  if (puVar23 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar23 + 1);
    do {
      iVar15 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      puVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_78 = (long *)*puVar23;
      FUN_02a44274(lVar19 + 0xd8,&local_78);
    }
  }
  *(undefined8 *)(lVar17 + 0x1a8) = 0;
  if (local_80 != (long *)0x0) {
    lVar19 = local_80[0xb];
    piVar3 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
LAB_01a01178:
  lVar17 = *(long *)(lVar17 + 8);
  piVar3 = (int *)(lVar17 + 0xc);
  do {
    iVar15 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 + -1 != 0) goto LAB_01a00e5c;
  *(undefined8 *)(lVar17 + 0x18) = 0;
  (**(code **)(*plVar25 + 0x20))(plVar25);
  lVar17 = *(long *)(param_1 + 0x390);
  pbVar9 = PTR_DAT_04379e78;
  puVar23 = (undefined8 *)PTR_DAT_04379e80;
  goto joined_r0x01a011ac;
LAB_01a01684:
  do {
    lVar19 = *plVar24;
    if (lVar19 == lVar18 && plVar2[0x29] == lVar20) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar7) {
        *plVar24 = 0;
        *(long *)((long)plVar2 + 0x144) = lVar20;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01a01684;
      bVar7 = true;
    }
    else {
      bVar7 = false;
      ClearExclusiveLocal();
    }
    lVar18 = lVar19;
    lVar20 = plVar2[0x29];
  } while (!bVar7);
LAB_01a016bc:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar2 + 0x134));
joined_r0x01a015ac:
  if (bVar6) goto LAB_01a016c8;
LAB_01a016d8:
  if (local_88 != (long *)0x0) {
    lVar19 = local_88[0xb];
    piVar3 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  goto LAB_01a0170c;
}


