/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9eb5c; name: FUN_01e9eb5c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01e9eb5c(long *param_1,long param_2,long param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *local_118;
  undefined8 uStack_110;
  long *local_f8;
  undefined8 *local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (**(char **)(param_3 + 8) == '\0') goto LAB_01e9ebc0;
  lVar16 = *(long *)(param_2 + 0x220);
  if (lVar16 == 0) {
LAB_01e9eb98:
    bVar5 = false;
  }
  else {
    if (*(int *)(lVar16 + 0xc) != 0) {
      piVar1 = (int *)(lVar16 + 0xc);
      iVar11 = *(int *)(lVar16 + 0xc);
      do {
        puVar20 = *(undefined8 **)(lVar16 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar18;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_01e9ed58;
        while (puVar20 != (undefined8 *)puVar9) {
          puVar20 = (undefined8 *)*puVar20;
          if (puVar20 == (undefined8 *)0x0) goto LAB_01e9eb98;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01e9ec38;
          lVar16 = *(long *)(lVar16 + 0x18);
          plVar13 = (long *)(lVar16 + -0x50);
          if (lVar16 == 0) goto LAB_01e9ed58;
          FUN_0199c5b0(&local_e8,plVar13);
          if (local_e8 == (undefined8 *)0x0) {
            local_78 = (long *)0x0;
            goto LAB_01e9ed00;
          }
          FUN_009cd8d4(&local_78);
          puVar20 = local_e8;
          if (local_e8 == (undefined8 *)0x0) goto LAB_01e9ed00;
          piVar1 = (int *)(local_e8 + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
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
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_118 = (long *)*puVar20;
            FUN_02a44274(lVar14 + 0xd8,&local_118);
            if (local_78 != (long *)0x0) goto LAB_01e9ed08;
LAB_01e9ed1c:
            bVar5 = false;
            if (local_78 == (long *)0x0) goto LAB_01e9ed44;
LAB_01e9ed28:
            lVar14 = local_78[0xb];
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
            if (iVar11 + -1 != 0) goto LAB_01e9ed44;
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
            if (!bVar5) goto LAB_01e9ed7c;
LAB_01e9ed48:
            bVar5 = true;
          }
          else {
LAB_01e9ed00:
            if (local_78 == (long *)0x0) goto LAB_01e9ed1c;
LAB_01e9ed08:
            FUN_0199c220(&local_e8,plVar13);
            puVar20 = local_e8;
            puVar9 = PTR_DAT_0437a0f0;
            puVar8 = PTR_DAT_0437a0e8;
            if (local_e8 == (undefined8 *)0x0) goto LAB_01e9ed1c;
            if (*(int *)((long)local_e8 + 0xc) == 0) {
LAB_01e9eeac:
              plVar21 = (long *)0x0;
              puVar20 = local_e8;
            }
            else {
              piVar1 = (int *)((long)local_e8 + 0xc);
              iVar11 = *(int *)((long)local_e8 + 0xc);
              while( true ) {
                plVar21 = (long *)puVar20[2];
                if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                    uVar18 = FUN_0087f8f0();
                    *(undefined8 *)puVar7 = uVar18;
                    __cxa_guard_release(puVar6);
                  }
                  *(undefined **)puVar9 = puVar7;
                  __cxa_guard_release(puVar8);
                  if (plVar21 != (long *)0x0) goto LAB_01e9ee3c;
                  goto LAB_01e9eeac;
                }
                while( true ) {
                  if (plVar21 == (long *)0x0) goto LAB_01e9eeac;
LAB_01e9ee3c:
                  if (plVar21 == (long *)puVar9) break;
                  plVar21 = (long *)*plVar21;
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) break;
                ClearExclusiveLocal();
LAB_01e9ee24:
                iVar11 = iVar10;
                if (iVar10 == 0) goto LAB_01e9eeac;
              }
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01e9ee24;
              lVar14 = puVar20[3];
              plVar21 = (long *)0x0;
              puVar20 = local_e8;
              if (lVar14 != 0) {
                plVar21 = (long *)(lVar14 + -0x50);
              }
            }
            local_e8 = puVar20;
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_118 = (long *)*puVar20;
                FUN_02a44274(lVar14 + 0xd8,&local_118);
              }
            }
            if (plVar21 == (long *)0x0) goto LAB_01e9ed1c;
            FUN_01e9e530(&local_80,param_2);
            if (local_80 == (long *)0x0) {
              bVar5 = false;
            }
            else {
              uVar18 = *(undefined8 *)(param_2 + 8);
              if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar11 != 0)) {
                local_e8 = (undefined8 *)FUN_00938550();
                puVar8 = PTR_DAT_0437a7d0;
                FUN_00b0fde8(PTR_DAT_0437a7d0,&local_e8);
                FUN_00100250(PTR_LAB_0437a8d8,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a7c0);
              }
              plVar17 = *(long **)PTR_DAT_0437a7d0;
              if (plVar17 == (long *)0x0) {
                local_a8 = *(long *)PTR_DAT_04379c88;
LAB_01e9f4b4:
                lStack_a0 = *(long *)PTR_PTR_04379d00;
                if (plVar17 != (long *)0x0) goto LAB_01e9ef84;
LAB_01e9f4c4:
                local_98 = 0;
              }
              else {
                local_a8 = plVar17[0xb];
                if (plVar17 == (long *)0x0) goto LAB_01e9f4b4;
                lStack_a0 = plVar17[0xc];
                if (plVar17 == (long *)0x0) goto LAB_01e9f4c4;
LAB_01e9ef84:
                local_98 = plVar17[0xd];
              }
              local_90 = (long *)0x0;
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 0x18))(plVar17);
              }
              local_90 = plVar17;
              FUN_01845684(&local_88,plVar21,uVar18,&local_a8);
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x20))();
              }
              if (*param_4 != 0) {
                local_e8 = (undefined8 *)local_80[0x12];
                lStack_e0 = local_80[0x13];
                plVar17 = (long *)FUN_00bd8988(local_88,local_88[1],&local_e8);
                (**(code **)(*plVar17 + 0x10))(&local_e8);
                local_118 = (long *)0x0;
                uStack_110 = 0;
                FUN_00bd84b0(&local_118,&local_e8);
                puVar20 = local_e8;
                if (local_e8 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_e8 + 1);
                  do {
                    iVar11 = *piVar1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar11 + -1;
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
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_70[0] = (long *)*puVar20;
                    FUN_02a44274(lVar14 + 0xd8,local_70);
                  }
                }
                FUN_01e9e820(param_2 + 0x2b0,&local_118);
                plVar19 = local_118;
                if (local_118 != (long *)0x0) {
                  plVar2 = local_118 + 1;
                  do {
                    iVar11 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *(int *)plVar2 = iVar11;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 == 0) {
                    local_118[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_e8 = (undefined8 *)*plVar19;
                    FUN_02a44274(lVar14 + 0xd8,&local_e8);
                  }
                }
                (**(code **)(*(long *)*param_4 + 0x18))(&local_e8);
                local_b8 = (long *)0x0;
                uStack_b0 = 0;
                FUN_0087f944(&local_b8,&local_e8);
                puVar20 = local_e8;
                if (local_e8 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_e8 + 1);
                  do {
                    iVar11 = *piVar1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar11 + -1;
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
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_118 = (long *)*puVar20;
                    FUN_02a44274(lVar14 + 0xd8,&local_118);
                  }
                }
                FUN_00d804f8(plVar17,&local_b8,1);
                plVar17 = local_b8;
                if (local_b8 != (long *)0x0) {
                  plVar19 = local_b8 + 1;
                  do {
                    iVar11 = (int)*plVar19 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar5) {
                      *(int *)plVar19 = iVar11;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 == 0) {
                    local_b8[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_e8 = (undefined8 *)*plVar17;
                    FUN_02a44274(lVar14 + 0xd8,&local_e8);
                  }
                }
              }
              plVar17 = local_88;
              FUN_01f07da0(&local_e8,local_78,0);
              puVar20 = local_e8;
              puVar8 = PTR_DAT_0437a740;
              if ((local_e8 == (undefined8 *)0x0) || (*(int *)((long)local_e8 + 0xc) == 0)) {
LAB_01e9f1e8:
                local_70[0] = (long *)0x0;
              }
              else {
                piVar1 = (int *)((long)local_e8 + 0xc);
                iVar11 = *(int *)((long)local_e8 + 0xc);
                while( true ) {
                  plVar19 = (long *)puVar20[2];
                  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0))
                    {
                      uVar18 = FUN_0087f8f0();
                      *(undefined8 *)puVar7 = uVar18;
                      __cxa_guard_release(puVar6);
                    }
                    *(undefined **)PTR_DAT_0437a748 = puVar7;
                    __cxa_guard_release(puVar8);
                  }
                  while( true ) {
                    if (plVar19 == (long *)0x0) goto LAB_01e9f1e8;
                    if (plVar19 == (long *)PTR_DAT_0437a748) break;
                    plVar19 = (long *)*plVar19;
                  }
                  iVar10 = *piVar1;
                  if (iVar10 == iVar11) break;
                  ClearExclusiveLocal();
LAB_01e9f5ec:
                  iVar11 = iVar10;
                  if (iVar10 == 0) goto LAB_01e9f1e8;
                }
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_01e9f5ec;
                lVar14 = puVar20[3];
                local_70[0] = (long *)0x0;
                if (lVar14 != 0) {
                  local_70[0] = (long *)(lVar14 + -0x50);
                }
              }
              lVar14 = FUN_00ad6a1c(plVar17,plVar17[1],local_70);
              puVar20 = local_e8;
              if (local_70[0] != (long *)0x0) {
                lVar15 = local_70[0][0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_70[0] + 0x20))();
                  puVar20 = local_e8;
                }
              }
              if (puVar20 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar20 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar20[2] = 0;
                  local_e8 = puVar20;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_118 = (long *)*puVar20;
                  FUN_02a44274(lVar15 + 0xd8,&local_118);
                }
              }
              local_c8 = 0;
              local_c0 = (long *)0x0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = (undefined8 *)(PTR_DAT_0437a6d0 + 0x10);
              lStack_e0 = 0;
              FUN_00adcc04(&local_118,param_3);
              uVar12 = FUN_00ad3ac4(&local_e8,1,&local_118,0,*(undefined8 *)(param_2 + 8),0);
              plVar17 = local_c0;
              if (((uVar12 & 1) != 0) && (local_c0 != (long *)0x0)) {
                lVar15 = local_c0[0xb];
                if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01e9f7b4;
                if (*(long *)(lVar15 + 0x10) == 0) {
                  uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                  *(undefined8 *)(lVar15 + 0x10) = uVar18;
                }
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar15 = plVar17[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
              }
              if (local_f8 != (long *)0x0) {
                (**(code **)(*local_f8 + 0x20))();
              }
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              FUN_017d3974(lVar14 + 0x270,&local_e8);
              *(undefined1 *)(lVar14 + 0x2f1) = 1;
              *param_1 = lVar14;
              if (lVar14 != 0) {
                lVar14 = *(long *)(lVar14 + 0x58);
                if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01e9f7b4:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar14 + 0x10) == 0) {
                  uVar18 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                  *(undefined8 *)(lVar14 + 0x10) = uVar18;
                }
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_00984b00(&local_e8);
              if (local_88 != (long *)0x0) {
                lVar14 = local_88[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_88 + 0x20))();
                }
              }
              if (local_80 != (long *)0x0) {
                lVar14 = local_80[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 1) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              bVar5 = true;
            }
            lVar14 = plVar21[0xb];
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
              (**(code **)(*plVar21 + 0x20))(plVar21);
            }
            if (!bVar5) goto LAB_01e9ed1c;
            bVar5 = true;
            if (local_78 != (long *)0x0) goto LAB_01e9ed28;
LAB_01e9ed44:
            if (bVar5) goto LAB_01e9ed48;
LAB_01e9ed7c:
            bVar5 = false;
          }
          if (plVar13 != (long *)0x0) {
            lVar16 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
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
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))();
              if (bVar5) {
                return;
              }
              goto LAB_01e9ebc0;
            }
          }
          goto LAB_01e9ebbc;
        }
        ClearExclusiveLocal();
LAB_01e9ec38:
        iVar11 = iVar10;
      } while (iVar10 != 0);
      goto LAB_01e9eb98;
    }
LAB_01e9ed58:
    bVar5 = false;
  }
LAB_01e9ebbc:
  if (bVar5) {
    return;
  }
LAB_01e9ebc0:
  *param_1 = 0;
  return;
}


