/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0154a158; name: FUN_0154a158
 */


void FUN_0154a158(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  undefined8 *puVar15;
  
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *param_1;
  lVar11 = *(long *)(lVar10 + 0x98);
  if (lVar11 == 0) {
    plVar13 = (long *)0x0;
  }
  else if (*(int *)(lVar11 + 0xc) == 0) {
LAB_0154a2d4:
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar14 = *(int *)(lVar11 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_0154a2d4;
      while (puVar15 != (undefined8 *)puVar7) {
        puVar15 = (undefined8 *)*puVar15;
        plVar13 = (long *)0x0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_0154a184;
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
          plVar13 = (long *)0x0;
          if (*(long *)(lVar11 + 0x18) != 0) {
            plVar13 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar13 = (long *)0x0;
      iVar14 = iVar8;
    } while (iVar8 != 0);
  }
LAB_0154a184:
  plVar12 = (long *)plVar13[(ulong)(*(int *)(lVar10 + 0x4b0) + 0xe2U & 0xff) + 0x60];
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
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
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  FUN_02838100(plVar12,1);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0154a280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
  }
  return;
}


