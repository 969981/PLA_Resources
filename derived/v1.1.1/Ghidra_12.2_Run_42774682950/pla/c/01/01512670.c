/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01512670; name: FUN_01512670
 */


void FUN_01512670(long *param_1,long param_2,int param_3)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int local_64;
  
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_2 + 0x98);
  local_64 = param_3;
  if (param_3 < 0) {
    if (lVar11 == 0) {
      plVar12 = (long *)0x0;
    }
    else if (*(int *)(lVar11 + 0xc) == 0) {
LAB_01512900:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar14 = *(int *)(lVar11 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_01512900;
        while (puVar13 != (undefined8 *)puVar7) {
          puVar13 = (undefined8 *)*puVar13;
          plVar12 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_015126a8;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar14) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar12 = (long *)0x0;
        iVar14 = iVar8;
      } while (iVar8 != 0);
    }
LAB_015126a8:
    plVar9 = (long *)FUN_01510d68(plVar12 + 0x25,param_2 + 0x68);
    lVar11 = *plVar9;
    *param_1 = lVar11;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01512860;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x015127f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x20))(plVar12);
        return;
      }
    }
  }
  else {
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
LAB_01512740:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar14 = *(int *)(lVar11 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_01512740;
        while (puVar13 != (undefined8 *)puVar7) {
          puVar13 = (undefined8 *)*puVar13;
          plVar12 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_01512744;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar14) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar12 = (long *)0x0;
        iVar14 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01512744:
    plVar9 = (long *)FUN_01510d68(plVar12 + 0x25,&local_64);
    lVar11 = *plVar9;
    *param_1 = lVar11;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01512860:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
  }
  return;
}


