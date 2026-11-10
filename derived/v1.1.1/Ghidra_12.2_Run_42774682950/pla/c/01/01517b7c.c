/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01517b7c; name: FUN_01517b7c
 */


void FUN_01517b7c(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined1 auStack_68 [8];
  
  puVar6 = PTR_DAT_0437f890;
  puVar5 = PTR_DAT_0437f888;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *(long *)(param_2 + 0x98);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01517bac:
    plVar12 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar13 = *(int *)(lVar10 + 0xc);
    do {
      puVar8 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_01517bac;
      while (puVar8 != (undefined8 *)puVar6) {
        puVar8 = (undefined8 *)*puVar8;
        plVar12 = (long *)0x0;
        if (puVar8 == (undefined8 *)0x0) goto LAB_01517bb0;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar12 = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            plVar12 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar12 = (long *)0x0;
      iVar13 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01517bb0:
  puVar8 = (undefined8 *)FUN_01510d68(plVar12 + 0x25,param_2 + 0x68);
  plVar11 = (long *)*puVar8;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01517d0c;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
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
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar11 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar10 = FUN_00a3e9dc(plVar11 + 0x1e,auStack_68);
    *param_1 = lVar10;
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x58);
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_01517d0c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
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
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return;
}


