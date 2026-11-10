/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01619180; name: FUN_01619180
 */


void FUN_01619180(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  FUN_0165a7a0(&local_78);
  puVar5 = local_78;
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar12 = *(int *)((long)local_78 + 0xc);
      do {
        plVar16 = (long *)puVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar14;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_0161937c;
          if (plVar16 == (long *)puVar9) break;
          plVar16 = (long *)*plVar16;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar15 = puVar5[3];
            plVar16 = (long *)0x0;
            puVar5 = local_78;
            if (lVar15 != 0) {
              plVar16 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x01619254;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0161937c:
    plVar16 = (long *)0x0;
    puVar5 = local_78;
joined_r0x01619254:
    local_78 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = (long *)*puVar5;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    if (plVar16 != (long *)0x0) {
      FUN_0199c304(&local_78,plVar16);
      if (local_78 == (undefined8 *)0x0) {
        local_80 = (long *)0x0;
      }
      else {
        FUN_009acf14(&local_80);
        puVar5 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = (long *)*puVar5;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
      }
      if (local_80 != (long *)0x0) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00b645bc(&local_78,local_80 + 0xd);
        puVar5 = local_78;
        puVar9 = PTR_DAT_0437a0f0;
        puVar8 = PTR_DAT_0437a0e8;
        if (local_78 != (undefined8 *)0x0) {
          if (*(int *)((long)local_78 + 0xc) != 0) {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar12 = *(int *)((long)local_78 + 0xc);
            do {
              plVar17 = (long *)puVar5[2];
              if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)puVar7 = uVar14;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)puVar9 = puVar7;
                __cxa_guard_release(puVar8);
              }
              while( true ) {
                if (plVar17 == (long *)0x0) goto LAB_01619734;
                if (plVar17 == (long *)puVar9) break;
                plVar17 = (long *)*plVar17;
              }
              iVar11 = *piVar1;
              if (iVar11 == iVar12) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar15 = puVar5[3];
                  plVar17 = (long *)0x0;
                  puVar5 = local_78;
                  if (lVar15 != 0) {
                    plVar17 = (long *)(lVar15 + -0x50);
                  }
                  goto joined_r0x01619514;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = iVar11;
            } while (iVar11 != 0);
          }
LAB_01619734:
          plVar17 = (long *)0x0;
          puVar5 = local_78;
joined_r0x01619514:
          local_78 = puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              puVar5[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_68 = (long *)*puVar5;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
          if (plVar17 != (long *)0x0) {
            uVar13 = FUN_01845504(plVar17,param_2);
            if ((uVar13 & 1) != 0) {
              FUN_01847290(&local_68,plVar17);
              if ((local_68 != (long *)0x0) &&
                 (FUN_016197bc(&local_88,local_68,5,param_2), plVar10 = local_88,
                 local_88 != (long *)0x0)) {
                local_98 = (long *)0x0;
                uStack_90 = 0;
                FUN_00b645bc(&local_98,local_80 + 0xd);
                FUN_01add6ec(plVar10,&local_98);
                plVar10 = local_98;
                if (local_98 != (long *)0x0) {
                  plVar2 = local_98 + 1;
                  do {
                    iVar12 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *(int *)plVar2 = iVar12;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 == 0) {
                    local_98[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_78 = (undefined8 *)*plVar10;
                    FUN_02a44274(lVar15 + 0xd8,&local_78);
                  }
                }
                if (local_88 != (long *)0x0) {
                  lVar15 = local_88[0xb];
                  piVar1 = (int *)(lVar15 + 0xc);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    (**(code **)(*local_88 + 0x20))();
                  }
                }
              }
              FUN_01847304(plVar17,param_2);
              if (local_68 != (long *)0x0) {
                lVar15 = local_68[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
            }
            lVar15 = plVar17[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar15 = local_80[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
      lVar15 = plVar16[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
  return;
}


