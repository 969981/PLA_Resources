/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9ea08; name: FUN_01b9ea08
 */


void FUN_01b9ea08(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 in_d3;
  undefined8 local_90 [3];
  long *local_78;
  undefined8 local_70 [2];
  
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  if ((((long *)param_1[0xcc] != (long *)param_1[0xcb]) &&
      (lVar14 = *(long *)param_1[0xcb], lVar14 != 0)) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar9 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        if (plVar16 == (long *)puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar16 = (long *)(lVar14 + -0x50);
          if (lVar14 == 0) {
            return;
          }
          FUN_009c69bc(&local_78,param_1);
          (**(code **)(*local_78 + 0x40))();
          local_70[0] = in_d3;
          (**(code **)(*plVar16 + 0x40))(plVar16);
          local_90[0] = in_d3;
          uVar10 = FUN_0177ef4c(0x41f00000,param_1 + 0xc9,local_70,local_90);
          if (local_78 != (long *)0x0) {
            lVar12 = local_78[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          if ((uVar10 & 1) == 0) {
            plVar15 = (long *)param_1[0xcb];
            *(undefined4 *)(param_1 + 0xca) = 0;
            plVar17 = (long *)param_1[0xcc];
            if (plVar17 != plVar15) {
              puVar13 = (undefined8 *)plVar17[-2];
              if (puVar13 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar13 + 1);
                do {
                  iVar9 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_70[0] = *puVar13;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              if (plVar17 + -2 != plVar15) {
                puVar13 = (undefined8 *)plVar17[-4];
                if (puVar13 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar13 + 1);
                  do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar9 + -1 == 0) {
                    puVar13[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar12;
                    local_70[0] = *puVar13;
                    FUN_02a44274(lVar12 + 0xd8,local_70);
                  }
                }
                puVar7 = PTR_LAB_04379590;
                puVar6 = PTR_DAT_043794a8;
                puVar5 = PTR_DAT_043794a0;
                puVar4 = PTR_DAT_04379498;
                if (plVar17 + -4 != plVar15) {
                  plVar17 = plVar17 + -6;
                  puVar13 = (undefined8 *)*plVar17;
                  while( true ) {
                    if (puVar13 != (undefined8 *)0x0) {
                      piVar1 = (int *)(puVar13 + 1);
                      do {
                        iVar9 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar9 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar9 + -1 == 0) {
                        puVar13[2] = 0;
                        if (((*puVar4 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
                          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                          __cxa_guard_release(puVar4);
                        }
                        lVar12 = *(long *)puVar5;
                        *(long *)puVar6 = lVar12;
                        local_70[0] = *puVar13;
                        FUN_02a44274(lVar12 + 0xd8,local_70);
                      }
                    }
                    if (plVar17 == plVar15) break;
                    plVar17 = plVar17 + -2;
                    puVar13 = (undefined8 *)*plVar17;
                  }
                }
              }
            }
            param_1[0xcc] = (long)plVar15;
            if (*(char *)((long)param_1 + 0x8d2) != '\0') {
              (**(code **)(*param_1 + 0x140))(param_1);
              *(undefined1 *)((long)param_1 + 0x8d2) = 0;
            }
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


