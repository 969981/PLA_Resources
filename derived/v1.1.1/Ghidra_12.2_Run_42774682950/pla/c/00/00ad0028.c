/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad0028; name: FUN_00ad0028
 */


void FUN_00ad0028(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_68;
  
  FUN_009c69bc(&local_68);
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar12 = *(long *)(param_1 + 0x330);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar14 = *(int *)(lVar12 + 0xc);
    do {
      plVar15 = *(long **)(lVar12 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar10;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_00ad005c;
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_00ad00f0;
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 != 0) {
          plVar15 = (long *)(lVar12 + -0x50);
          local_b0 = *(undefined8 *)PTR_DAT_0437a518;
          uStack_a8 = *(undefined8 *)(PTR_DAT_0437a518 + 8);
          local_a0 = *(undefined8 *)(PTR_DAT_0437a518 + 0x10);
          uStack_98 = *(undefined8 *)(PTR_DAT_0437a518 + 0x18);
          local_80 = *(undefined8 *)(PTR_DAT_0437a518 + 0x30);
          uStack_78 = *(undefined8 *)(PTR_DAT_0437a518 + 0x38);
          local_90 = *(undefined8 *)(PTR_DAT_0437a518 + 0x20);
          uStack_88 = *(undefined8 *)(PTR_DAT_0437a518 + 0x28);
          if (*(int *)(param_1 + 0x360) == -1) {
            lVar13 = *(long *)(lVar12 + 8);
            local_c0 = plVar15;
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00ad03fc;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar10;
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
            FUN_00aa8f0c(&local_c0,param_1 + 0x340,&local_b0,1);
            if (local_c0 != (long *)0x0) {
              lVar13 = local_c0[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar14 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar14;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                plVar11 = local_c0;
              } while (cVar2 != '\0');
LAB_00ad0250:
              if (iVar14 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))();
              }
            }
          }
          else {
            lVar13 = *(long *)(lVar12 + 8);
            local_b8 = plVar15;
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00ad03fc;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar10;
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
            FUN_00aa8338(&local_b8,*(undefined4 *)(param_1 + 0x360),&local_b0);
            if (local_b8 != (long *)0x0) {
              lVar13 = local_b8[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar14 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar14;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                plVar11 = local_b8;
              } while (cVar2 != '\0');
              goto LAB_00ad0250;
            }
          }
          local_c8 = local_68;
          if (local_68 != (long *)0x0) {
            lVar13 = local_68[0xb];
            if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00ad03fc;
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar10;
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
          lVar13 = *(long *)(lVar12 + 8);
          local_d0 = plVar15;
          if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar13 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
              *(undefined8 *)(lVar13 + 0x10) = uVar10;
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
            FUN_00aac240(&local_c8,&local_d0,&local_b0,param_1 + 0x370,param_1 + 0x380,
                         *(undefined1 *)(param_1 + 0x390),*(undefined1 *)(param_1 + 0x391),
                         *(undefined1 *)(param_1 + 0x392));
            if (local_d0 != (long *)0x0) {
              lVar13 = local_d0[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar14 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_d0 + 0x20))();
              }
            }
            if (local_c8 != (long *)0x0) {
              lVar13 = local_c8[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar14 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_c8 + 0x20))();
              }
            }
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar14 + -1 != 0) break;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            if (local_68 == (long *)0x0) {
              return;
            }
            goto LAB_00ad0064;
          }
LAB_00ad03fc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00ad00f0:
      iVar14 = iVar9;
    } while (iVar9 != 0);
  }
LAB_00ad005c:
  if (local_68 != (long *)0x0) {
LAB_00ad0064:
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


