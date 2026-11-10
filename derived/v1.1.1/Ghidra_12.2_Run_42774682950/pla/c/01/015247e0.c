/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015247e0; name: FUN_015247e0
 */


void FUN_015247e0(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  int local_64;
  
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x98);
  local_64 = param_3;
  if (param_3 < 0) {
    if (lVar12 == 0) {
      plVar13 = (long *)0x0;
    }
    else if (*(int *)(lVar12 + 0xc) == 0) {
LAB_01524af8:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar16 = *(int *)(lVar12 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar12 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_01524af8;
        while (puVar15 != (undefined8 *)puVar7) {
          puVar15 = (undefined8 *)*puVar15;
          plVar13 = (long *)0x0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_01524818;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar16) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar16 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01524818:
    plVar9 = (long *)FUN_01510d68(plVar13 + 0x25,param_1 + 0x68);
    lVar12 = *param_2;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x58);
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01524a58;
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
    }
    plVar10 = (long *)*plVar9;
    *plVar9 = lVar12;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x015249d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return;
      }
    }
  }
  else {
    if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) {
LAB_015248dc:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar16 = *(int *)(lVar12 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar12 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_015248dc;
        while (puVar15 != (undefined8 *)puVar7) {
          puVar15 = (undefined8 *)*puVar15;
          plVar13 = (long *)0x0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_015248e0;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar16) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar16 = iVar8;
      } while (iVar8 != 0);
    }
LAB_015248e0:
    plVar9 = (long *)FUN_01510d68(plVar13 + 0x25,&local_64);
    lVar12 = *param_2;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x58);
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01524a58:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
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
    }
    plVar10 = (long *)*plVar9;
    *plVar9 = lVar12;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  return;
}


