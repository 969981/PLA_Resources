/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119047c; name: FUN_0119047c
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0119047c(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *local_80 [2];
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar16 = *(long **)(lVar15 + 0xc0);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_011908a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = plVar16[0x18];
  local_70 = local_68 + plVar16[0x19] * 8;
  FUN_01191200(local_80,&local_68,&local_70);
  if (local_80[0] != (long *)(plVar16[0x18] + plVar16[0x19] * 8)) {
    plVar18 = (long *)*local_80[0];
    puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_01190570:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_011906b8;
      lVar15 = plVar18[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_011908a4;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar17 = plVar18;
      } while (cVar4 != '\0');
LAB_011905b4:
      if (plVar17 != (long *)0x0) {
        FUN_01e564f8(local_80,plVar17);
        plVar18 = local_80[0];
        puVar9 = PTR_DAT_0437c670;
        puVar8 = PTR_DAT_0437c668;
        puVar7 = PTR_DAT_043794d0;
        if (local_80[0] == (long *)0x0) {
LAB_011905cc:
          bVar5 = false;
        }
        else {
          if (*(int *)((long)local_80[0] + 0xc) == 0) {
LAB_0119091c:
            plVar18 = (long *)0x0;
            plVar19 = local_80[0];
          }
          else {
            piVar1 = (int *)((long)local_80[0] + 0xc);
            iVar11 = *(int *)((long)local_80[0] + 0xc);
            while( true ) {
              plVar19 = (long *)plVar18[2];
              if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                  __cxa_guard_release(puVar7);
                }
                *(undefined **)puVar9 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar8);
              }
              while( true ) {
                if (plVar19 == (long *)0x0) goto LAB_0119091c;
                if (plVar19 == (long *)puVar9) break;
                plVar19 = (long *)*plVar19;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) break;
              ClearExclusiveLocal();
LAB_0119076c:
              iVar11 = iVar10;
              if (iVar10 == 0) goto LAB_0119091c;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0119076c;
            lVar15 = plVar18[3];
            plVar18 = (long *)0x0;
            plVar19 = local_80[0];
            if (lVar15 != 0) {
              plVar18 = (long *)(lVar15 + -0x50);
            }
          }
          local_80[0] = plVar19;
          if (plVar19 != (long *)0x0) {
            plVar2 = plVar19 + 1;
            do {
              iVar11 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 == 0) {
              plVar19[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_68 = *plVar19;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
          if (plVar18 == (long *)0x0) goto LAB_011905cc;
          plVar19 = (long *)plVar18[0xe];
          if (plVar19 == (long *)0x0) {
LAB_0119086c:
            bVar5 = false;
            if (plVar19 == (long *)0x0) goto LAB_01190890;
LAB_01190874:
            lVar15 = plVar19[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 != 0) goto LAB_01190890;
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
            if (bVar5) goto LAB_01190894;
LAB_011908d4:
            bVar5 = false;
          }
          else {
            lVar15 = plVar19[0xb];
            if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_011908a4;
            if (*(long *)(lVar15 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
              *(undefined8 *)(lVar15 + 0x10) = uVar12;
            }
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_0199cf64(local_80,plVar19);
            plVar2 = local_80[0];
            if (local_80[0] == (long *)0x0) goto LAB_0119086c;
            if (*(int *)((long)local_80[0] + 0xc) == 0) {
LAB_01190b24:
              plVar2 = (long *)0x0;
              plVar20 = local_80[0];
            }
            else {
              piVar1 = (int *)((long)local_80[0] + 0xc);
              iVar11 = *(int *)((long)local_80[0] + 0xc);
              while( true ) {
                plVar20 = (long *)plVar2[2];
                if (((*PTR_DAT_0437a110 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a110), iVar10 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)PTR_DAT_0437a108 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a110);
                }
                while( true ) {
                  if (plVar20 == (long *)0x0) goto LAB_01190b24;
                  if (plVar20 == (long *)PTR_DAT_0437a108) break;
                  plVar20 = (long *)*plVar20;
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) break;
                ClearExclusiveLocal();
LAB_011909a4:
                iVar11 = iVar10;
                if (iVar10 == 0) goto LAB_01190b24;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_011909a4;
              lVar15 = plVar2[3];
              plVar2 = (long *)0x0;
              plVar20 = local_80[0];
              if (lVar15 != 0) {
                plVar2 = (long *)(lVar15 + -0x50);
              }
            }
            if (plVar20 != (long *)0x0) {
              plVar3 = plVar20 + 1;
              do {
                iVar11 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                plVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_68 = *plVar20;
                FUN_02a44274(lVar15 + 0xd8,&local_68);
              }
            }
            if (plVar2 == (long *)0x0) goto LAB_0119086c;
            uVar14 = FUN_017e61dc(plVar2,param_2);
            lVar15 = plVar2[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar2 + 0x20))(plVar2);
            }
            if ((uVar14 & 1) != 0) goto LAB_0119086c;
            bVar5 = true;
            if (plVar19 != (long *)0x0) goto LAB_01190874;
LAB_01190890:
            if (!bVar5) goto LAB_011908d4;
LAB_01190894:
            bVar5 = true;
          }
          if (plVar18 != (long *)0x0) {
            lVar15 = plVar18[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))();
            }
          }
        }
        if (bVar5) {
          bVar5 = true;
          goto joined_r0x011905fc;
        }
      }
      goto LAB_011906ac;
    }
  }
  plVar17 = (long *)0x0;
LAB_011906ac:
  bVar5 = false;
joined_r0x011905fc:
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return !bVar5;
LAB_011906b8:
  puVar13 = (undefined8 *)*puVar13;
  plVar17 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_011905b4;
  goto LAB_01190570;
}


