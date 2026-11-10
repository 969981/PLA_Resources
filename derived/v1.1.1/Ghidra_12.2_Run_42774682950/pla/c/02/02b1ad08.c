/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1ad08; name: FUN_02b1ad08
 */


long FUN_02b1ad08(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  FUN_00987fd4(local_60,uVar10);
  puVar6 = local_60[0];
  if ((local_60[0] != (undefined8 *)0x0) && (*(int *)((long)local_60[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_60[0] + 0xc);
    iVar7 = *(int *)((long)local_60[0] + 0xc);
    do {
      plVar8 = (long *)puVar6[2];
      lVar9 = FUN_013d8b30();
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_02b1ad48;
        if (plVar8 == (long *)lVar9) break;
        plVar8 = (long *)*plVar8;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02b1af40;
        lVar9 = puVar6[3];
        if (lVar9 != 0) {
          plVar8 = *(long **)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          if (plVar8 != (long *)0x0) {
            lVar11 = plVar8[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar8 + 0x20))();
            }
          }
          *(long *)(param_1 + 8) = lVar9 + -0x50;
          goto LAB_02b1ad78;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_02b1af40:
      iVar7 = iVar3;
    } while (iVar3 != 0);
  }
LAB_02b1ad48:
  plVar8 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 1) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  uVar10 = 0;
LAB_02b1ad78:
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *local_60[0];
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar9;
  if (plVar8 == (long *)0x0) {
LAB_02b1ae0c:
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 != 0) goto LAB_02b1ae0c;
    (**(code **)(*plVar8 + 0x10))();
    lVar9 = *(long *)(param_2 + 0x20);
  }
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar9;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      lVar9 = *(long *)(param_2 + 0x28);
      goto joined_r0x02b1ae3c;
    }
  }
  lVar9 = *(long *)(param_2 + 0x28);
joined_r0x02b1ae3c:
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar9;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  return param_1;
}


