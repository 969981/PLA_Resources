/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01da7318; name: FUN_01da7318
 */


void FUN_01da7318(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
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
  puVar10 = local_80[0];
  puVar9 = PTR_DAT_0437a590;
  puVar8 = PTR_DAT_0437a588;
  puVar7 = PTR_DAT_0437a580;
  if ((local_80[0] != (undefined8 *)0x0) && (*(int *)((long)local_80[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_80[0] + 0xc);
    iVar11 = *(int *)((long)local_80[0] + 0xc);
    do {
      plVar15 = (long *)puVar10[2];
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01da736c;
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01da7494;
        lVar16 = puVar10[3];
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
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            *(undefined4 *)(lVar16 + 0x230) = *(undefined4 *)(param_3 + 3);
            lVar17 = *(long *)(lVar16 + 8);
            local_68 = plVar15;
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01da7640;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            (**(code **)param_3[2])(param_3 + 2,&local_68);
            if (local_68 != (long *)0x0) {
              lVar17 = local_68[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
            lVar17 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
              if (*(char *)(param_3 + 0x12) == '\0') goto LAB_01da75bc;
LAB_01da7680:
              *(undefined4 *)(lVar16 + 0x2d4) = *(undefined4 *)((long)param_3 + 0x94);
              if (*(char *)(param_3 + 0x13) == '\0') goto LAB_01da75c4;
LAB_01da7690:
              *(undefined4 *)(lVar16 + 0x2d8) = *(undefined4 *)((long)param_3 + 0x9c);
              cVar5 = *(char *)(param_3 + 0xe);
            }
            else {
              if (*(char *)(param_3 + 0x12) != '\0') goto LAB_01da7680;
LAB_01da75bc:
              if (*(char *)(param_3 + 0x13) != '\0') goto LAB_01da7690;
LAB_01da75c4:
              *(undefined4 *)(lVar16 + 0x2d8) = 0;
              cVar5 = *(char *)(param_3 + 0xe);
            }
            if (cVar5 != '\0') {
              *(undefined8 *)(lVar16 + 0x2c8) = param_3[0x11];
              *(undefined8 *)(lVar16 + 0x2c0) = param_3[0x10];
              *(undefined1 *)(lVar16 + 0x2d1) = 1;
            }
            *(undefined1 *)(lVar16 + 0x2d0) = *(undefined1 *)(param_3 + 0xc);
            iVar4 = *(int *)(lVar16 + 0x2c);
            uVar2 = *(uint *)(param_3 + 10);
            iVar12 = *(int *)((long)param_3 + 0x54);
            iVar11 = *(int *)(param_3 + 0xb);
            iVar3 = *(int *)((long)param_3 + 0x5c);
            *(uint *)(lVar16 + 0x60) = uVar2;
            *(int *)(lVar16 + 100) = iVar12;
            *(int *)(lVar16 + 0x68) = iVar11;
            *(int *)(lVar16 + 0x6c) = iVar3;
            if (iVar4 == 2) {
              if (*(long *)(lVar16 + 0x80) != 0) {
                FUN_02be49bc(*(long *)(lVar16 + 0x80),
                             uVar2 | iVar12 << 0x10 | iVar11 << 6 | iVar3 << 0xb);
                iVar4 = *(int *)(lVar16 + 0x2c);
                *(undefined1 *)(lVar16 + 0x29) = 0;
                goto joined_r0x01da7720;
              }
              *(undefined1 *)(lVar16 + 0x29) = 0;
            }
            else {
              *(undefined1 *)(lVar16 + 0x29) = 0;
joined_r0x01da7720:
              if (iVar4 == 0) {
                *(undefined4 *)(lVar16 + 0x2c) = 1;
              }
            }
            lVar16 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            *param_1 = lVar13;
            if (lVar13 == 0) goto LAB_01da73ac;
            goto LAB_01da7374;
          }
          goto LAB_01da7640;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01da7494:
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01da736c:
  *param_1 = lVar13;
  if (lVar13 != 0) {
LAB_01da7374:
    lVar13 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01da7640:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_01da73ac:
  if (local_80[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80[0] + 1);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
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


