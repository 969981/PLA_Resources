/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d804f8; name: FUN_00d804f8
 */


void FUN_00d804f8(long param_1,long *param_2,uint param_3)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar12 = *param_2;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar15 = *(int *)(lVar12 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar11;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (puVar16 == (undefined8 *)0x0) goto LAB_00d80520;
        if (puVar16 == (undefined8 *)puVar5) break;
        puVar16 = (undefined8 *)*puVar16;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar15) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar13 = (long *)(lVar12 + -0x50);
          if (lVar12 != 0) {
            plVar10 = (long *)FUN_00b13c20(lVar12 + 0xa0,auStack_68);
            if ((plVar10 == (long *)0x0) &&
               (plVar10 = (long *)FUN_00aeb4a0(plVar13,*(undefined8 *)(lVar12 + -0x48),
                                               param_1 + 0x260), plVar10 == (long *)0x0))
            goto LAB_00d8066c;
            lVar14 = plVar10[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
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
LAB_00d8066c:
              lVar12 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar15 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              local_70 = plVar10;
              if (plVar10 == (long *)0x0) goto LAB_00d80524;
              lVar12 = plVar10[0xb];
              if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
                if (*(long *)(lVar12 + 0x10) == 0) {
                  uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                  *(undefined8 *)(lVar12 + 0x10) = uVar11;
                }
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                FUN_00d7e99c(param_1,&local_70,param_3 & 1);
                lVar12 = plVar10[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar15 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar10 + 0x20))(plVar10);
                }
                lVar12 = plVar10[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar15 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar10 + 0x20))(plVar10);
                  return;
                }
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar9;
    } while (iVar9 != 0);
  }
LAB_00d80520:
  local_70 = (long *)0x0;
LAB_00d80524:
  FUN_00d7e99c(param_1,&local_70,param_3 & 1);
  return;
}


