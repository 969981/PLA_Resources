/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b342cc; name: FUN_01b342cc
 */


void FUN_01b342cc(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  FUN_00987ac8(local_70,uVar13);
  puVar7 = local_70[0];
  puVar6 = PTR_DAT_0437a0b0;
  puVar5 = PTR_DAT_0437a0a8;
  if ((local_70[0] != (undefined8 *)0x0) && (*(int *)((long)local_70[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_70[0] + 0xc);
    iVar8 = *(int *)((long)local_70[0] + 0xc);
    do {
      plVar10 = (long *)puVar7[2];
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar11 = FUN_00987804();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_01b34310;
        if (plVar10 == (long *)puVar6) break;
        plVar10 = (long *)*plVar10;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01b3459c;
        lVar12 = puVar7[3];
        if (lVar12 != 0) {
          plVar10 = *(long **)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          if (plVar10 != (long *)0x0) {
            lVar14 = plVar10[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
            }
          }
          *(long *)(param_1 + 8) = lVar12 + -0x50;
          goto LAB_01b34340;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01b3459c:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01b34310:
  plVar10 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 1) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  uVar13 = 0;
LAB_01b34340:
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_70[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *local_70[0];
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar12;
  if (plVar10 == (long *)0x0) {
LAB_01b343d4:
    lVar12 = *(long *)(param_2 + 0x20);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_01b343d4;
    (**(code **)(*plVar10 + 0x10))();
    lVar12 = *(long *)(param_2 + 0x20);
  }
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar12;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      lVar12 = *(long *)(param_2 + 0x28);
      goto joined_r0x01b34404;
    }
  }
  lVar12 = *(long *)(param_2 + 0x28);
joined_r0x01b34404:
  if (lVar12 != 0) {
    lVar14 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar12;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b344f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))();
      return;
    }
  }
  return;
}


