/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01410c60; name: FUN_01410c60
 */


void FUN_01410c60(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar9 = PTR_DAT_0437b2b0;
  puVar8 = PTR_DAT_0437b2a8;
  puVar7 = PTR_DAT_0437b2a0;
  puVar6 = PTR_DAT_0437b290;
  puVar5 = PTR_DAT_0437b288;
  puVar4 = PTR_DAT_043794d0;
  param_2 = param_2 & 0xffffffff;
  do {
    plVar11 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      if (((*PTR_DAT_0437b298 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b298), iVar10 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar7 = puVar9;
        __cxa_guard_release(PTR_DAT_0437b298);
      }
      *(undefined **)puVar6 = puVar7;
      __cxa_guard_release(puVar5);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar6) {
        *(undefined1 *)(param_1 + 0x2aa) = 0;
        plVar11 = *(long **)(param_1 + 0x98);
        goto joined_r0x01410db8;
      }
    }
    plVar11 = *(long **)(param_1 + 0x98);
joined_r0x01410db8:
    if (plVar11 != (long *)0x0) {
      lVar13 = plVar11[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01410f80;
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
      lVar13 = plVar11[0xb];
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
        (**(code **)(*plVar11 + 0x20))(plVar11);
        plVar11 = *(long **)(param_1 + 0x98);
      }
      else {
        plVar11 = *(long **)(param_1 + 0x98);
      }
      if (plVar11 == (long *)0x0) {
        FUN_01410c60(0,1);
      }
      else {
        lVar13 = plVar11[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01410f80;
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
        FUN_01410c60(plVar11,1);
        lVar13 = plVar11[0xb];
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
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
    }
    if ((param_2 & 1) == 0) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0x90);
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar13 = plVar11[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01410f80;
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
    lVar13 = plVar11[0xb];
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
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    plVar11 = *(long **)(param_1 + 0x90);
    param_2 = 1;
    param_1 = 0;
  } while (plVar11 == (long *)0x0);
  lVar13 = plVar11[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
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
    FUN_01410c60(plVar11,1);
    lVar13 = plVar11[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x01410f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return;
    }
    return;
  }
LAB_01410f80:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


