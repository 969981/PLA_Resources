/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018efc50; name: FUN_018efc50
 */


void FUN_018efc50(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  undefined1 auStack_d8 [24];
  long *local_c0;
  long *local_b8;
  long local_b0 [3];
  undefined8 local_98 [5];
  
  puVar7 = PTR_DAT_0437a0f0;
  puVar6 = PTR_DAT_0437a0e8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_2 + 0x80);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar12;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 == 0) {
            return;
          }
          plVar14 = (long *)(lVar13 + -0x50);
          if (*(long *)(param_2 + 0xb0) == 0) {
            local_b0[0] = 0;
          }
          else {
            FUN_017e9e98(local_b0);
            if (local_b0[0] != 0) {
              plVar11 = (long *)FUN_017d1b40(local_b0[0],0);
              if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar10 != 0)) {
                local_1e0 = (undefined8 *)FUN_00938550();
                puVar4 = PTR_DAT_0437a7d0;
                FUN_00b0fde8(PTR_DAT_0437a7d0,&local_1e0);
                FUN_00100250(PTR_LAB_0437a8d8,puVar4,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a7c0);
              }
              FUN_02a47560(auStack_d8,PTR_DAT_0437a7d0);
              FUN_01845684(&local_b8,plVar14,plVar11,auStack_d8);
              if (local_c0 != (long *)0x0) {
                (**(code **)(*local_c0 + 0x20))();
              }
              local_e8 = local_b8;
              if (local_b8 == (long *)0x0) goto LAB_018efe48;
              lVar13 = local_b8[0xb];
              if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_018f52fc;
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                *(undefined8 *)(lVar13 + 0x10) = uVar12;
              }
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB_018efe48:
              FUN_018457a0(&local_e0,plVar14,&local_e8,plVar11);
              if (local_e8 != (long *)0x0) {
                lVar13 = local_e8[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_e8 + 0x20))();
                }
              }
              FUN_01838b4c(local_e0,0x11);
              FUN_01836b0c(local_e0);
              local_f0 = local_e0;
              if (local_e0 != (long *)0x0) {
                lVar13 = local_e0[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_018f52fc:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_01845ac4(plVar14,&local_f0);
              if (local_f0 != (long *)0x0) {
                lVar13 = local_f0[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_f0 + 0x20))();
                }
              }
              (**(code **)(*local_b8 + 0x10))(&local_1e0);
              local_248 = (undefined8 *)0x0;
              uStack_240 = 0;
              FUN_0087f944(&local_248,&local_1e0);
              puVar8 = local_1e0;
              if (local_1e0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_1e0 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_1e0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_98[0] = *puVar8;
                  FUN_02a44274(lVar13 + 0xd8,local_98);
                }
              }
              FUN_0087fcf0(param_1 + 0x90,&local_248);
              puVar8 = local_248;
              if (local_248 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_248 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_248[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_1e0 = (undefined8 *)*puVar8;
                  FUN_02a44274(lVar13 + 0xd8,&local_1e0);
                }
              }
              local_1e0 = (undefined8 *)0x0;
              uStack_1d8 = 0;
              FUN_008802f0(&local_1e0,local_e0 + 0xb);
              local_248 = (undefined8 *)0x0;
              uStack_240 = 0;
              FUN_00b5f91c(&local_248,&local_1e0);
              puVar8 = local_1e0;
              if (local_1e0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_1e0 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_1e0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_98[0] = *puVar8;
                  FUN_02a44274(lVar13 + 0xd8,local_98);
                }
              }
              FUN_00b5fc1c(param_1 + 0xa0,&local_248);
              puVar8 = local_248;
              if (local_248 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_248 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_248[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_1e0 = (undefined8 *)*puVar8;
                  FUN_02a44274(lVar13 + 0xd8,&local_1e0);
                }
              }
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528,
                 iVar10 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar11;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              lVar13 = (**(code **)(*plVar11 + 0x10))(plVar11,0x3f0,0x10);
              if (lVar13 == 0) {
                (**(code **)(*plVar11 + 0xb8))();
                    /* WARNING: Subroutine does not return */
                FUN_02a4c0f4(0,0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_02a4c0f4(lVar13,0);
            }
          }
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


