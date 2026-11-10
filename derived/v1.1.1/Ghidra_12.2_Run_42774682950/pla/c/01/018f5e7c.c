/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f5e7c; name: FUN_018f5e7c
 */


void FUN_018f5e7c(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_80 [2];
  undefined8 local_70;
  long *local_68;
  
  lVar10 = FUN_019005f0(*param_2,*(undefined8 *)(*param_2 + 8));
  local_70 = *param_3;
  FUN_02bea704(local_80,lVar10,&local_70);
  puVar7 = local_80[0];
  puVar6 = PTR_DAT_0437a678;
  puVar5 = PTR_DAT_0437a670;
  puVar4 = PTR_DAT_0437a588;
  if ((local_80[0] != (undefined8 *)0x0) && (*(int *)((long)local_80[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_80[0] + 0xc);
    iVar8 = *(int *)((long)local_80[0] + 0xc);
    do {
      plVar12 = (long *)puVar7[2];
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar4 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar6 = puVar4;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_018f5ed0;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_018f5ff8;
        lVar13 = puVar7[3];
        if (lVar13 != 0) {
          lVar14 = *(long *)(lVar13 + 8);
          if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
            plVar12 = (long *)(lVar13 + -0x50);
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            *(undefined4 *)(lVar13 + 0xac) = *(undefined4 *)(param_3 + 3);
            lVar14 = *(long *)(lVar13 + 8);
            local_68 = plVar12;
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_018f61b0;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            (**(code **)param_3[2])(param_3 + 2,&local_68);
            if (local_68 != (long *)0x0) {
              lVar14 = local_68[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
            lVar14 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
            *(undefined4 *)(lVar13 + 0x94) = *(undefined4 *)(param_3 + 0x14);
            *(undefined1 *)(lVar13 + 0xa4) = *(undefined1 *)(param_3 + 0x16);
            *(undefined1 *)(lVar13 + 0xa5) = *(undefined1 *)((long)param_3 + 0xb1);
            uVar11 = *(undefined8 *)((long)param_3 + 0xa4);
            *(undefined4 *)(lVar13 + 0xa0) = *(undefined4 *)((long)param_3 + 0xac);
            *(undefined8 *)(lVar13 + 0x98) = uVar11;
            if (*(char *)(param_3 + 0x10) != '\0') {
              *(undefined8 *)(lVar13 + 0x228) = param_3[0x13];
              *(undefined8 *)(lVar13 + 0x220) = param_3[0x12];
              *(undefined1 *)(lVar13 + 0x232) = 1;
            }
            *(undefined1 *)(lVar13 + 0x231) = *(undefined1 *)(param_3 + 0xe);
            FUN_02bdb158(plVar12,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)((long)param_3 + 100)
                         ,*(undefined4 *)(param_3 + 0xd),*(undefined4 *)((long)param_3 + 0x6c));
            *(undefined1 *)(lVar13 + 0x29) = 0;
            if (*(int *)(lVar13 + 0x2c) == 0) {
              *(undefined4 *)(lVar13 + 0x2c) = 1;
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 != 0) break;
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            *param_1 = lVar10;
            if (lVar10 == 0) goto LAB_018f5f10;
            goto LAB_018f5ed8;
          }
          goto LAB_018f61b0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018f5ff8:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_018f5ed0:
  *param_1 = lVar10;
  if (lVar10 != 0) {
LAB_018f5ed8:
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_018f61b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_018f5f10:
  if (local_80[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80[0] + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*local_80[0];
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  return;
}


