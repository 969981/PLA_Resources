/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d31824; name: FUN_01d31824
 */


void FUN_01d31824(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *local_80 [2];
  undefined8 local_70;
  long *local_68;
  
  lVar13 = FUN_019005f0(*param_2,*(undefined8 *)(*param_2 + 8));
  local_70 = *param_3;
  FUN_02beaee0(local_80,lVar13,&local_70);
  puVar9 = local_80[0];
  puVar8 = PTR_DAT_0437a590;
  puVar7 = PTR_DAT_0437a588;
  puVar6 = PTR_DAT_0437a580;
  if ((local_80[0] != (undefined8 *)0x0) && (*(int *)((long)local_80[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_80[0] + 0xc);
    iVar10 = *(int *)((long)local_80[0] + 0xc);
    do {
      plVar15 = (long *)puVar9[2];
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar8 = puVar7;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01d31878;
        if (plVar15 == (long *)puVar8) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d319a0;
        lVar16 = puVar9[3];
        if (lVar16 != 0) {
          lVar17 = *(long *)(lVar16 + 8);
          if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
            plVar15 = (long *)(lVar16 + -0x50);
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            *(undefined4 *)(lVar16 + 0x230) = *(undefined4 *)(param_3 + 3);
            lVar17 = *(long *)(lVar16 + 8);
            local_68 = plVar15;
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d31b58;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            (**(code **)param_3[2])(param_3 + 2,&local_68);
            if (local_68 != (long *)0x0) {
              lVar17 = local_68[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
            lVar17 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
              cVar4 = *(char *)(param_3 + 0x14);
            }
            else {
              cVar4 = *(char *)(param_3 + 0x14);
            }
            if (cVar4 != '\0') {
              *(undefined4 *)(lVar16 + 0x2d4) = *(undefined4 *)((long)param_3 + 0xa4);
            }
            if (*(char *)(param_3 + 0x15) == '\0') {
              *(undefined4 *)(lVar16 + 0x2d8) = 0;
              cVar4 = *(char *)(param_3 + 0x10);
            }
            else {
              *(undefined4 *)(lVar16 + 0x2d8) = *(undefined4 *)((long)param_3 + 0xac);
              cVar4 = *(char *)(param_3 + 0x10);
            }
            if (cVar4 != '\0') {
              *(undefined8 *)(lVar16 + 0x2c8) = param_3[0x13];
              *(undefined8 *)(lVar16 + 0x2c0) = param_3[0x12];
              *(undefined1 *)(lVar16 + 0x2d1) = 1;
            }
            *(undefined1 *)(lVar16 + 0x2d0) = *(undefined1 *)(param_3 + 0xe);
            uVar2 = *(undefined4 *)((long)param_3 + 100);
            uVar12 = *(undefined4 *)(param_3 + 0xd);
            uVar3 = *(undefined4 *)((long)param_3 + 0x6c);
            *(undefined4 *)(lVar16 + 0x60) = *(undefined4 *)(param_3 + 0xc);
            *(undefined4 *)(lVar16 + 100) = uVar2;
            *(undefined4 *)(lVar16 + 0x68) = uVar12;
            *(undefined4 *)(lVar16 + 0x6c) = uVar3;
            if (*(int *)(lVar16 + 0x2c) == 2) {
              uVar12 = FUN_02be578c();
              if (*(long *)(lVar16 + 0x80) != 0) {
                FUN_02be49bc(*(long *)(lVar16 + 0x80),uVar12);
              }
            }
            *(undefined1 *)(lVar16 + 0x29) = 0;
            if (*(int *)(lVar16 + 0x2c) == 0) {
              *(undefined4 *)(lVar16 + 0x2c) = 1;
            }
            lVar16 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 != 0) break;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            *param_1 = lVar13;
            if (lVar13 == 0) goto LAB_01d318b8;
            goto LAB_01d31880;
          }
          goto LAB_01d31b58;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01d319a0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01d31878:
  *param_1 = lVar13;
  if (lVar13 != 0) {
LAB_01d31880:
    lVar13 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01d31b58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_01d318b8:
  if (local_80[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80[0] + 1);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = (long *)*local_80[0];
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  return;
}


