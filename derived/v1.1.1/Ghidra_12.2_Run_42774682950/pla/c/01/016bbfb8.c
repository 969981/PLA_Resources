/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bbfb8; name: FUN_016bbfb8
 */


void FUN_016bbfb8(char *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *local_50;
  undefined1 *local_48;
  
  if (param_1[1] == '\0') {
    FUN_0165bb64(*param_1 == '\0',*(undefined4 *)(param_1 + 4));
    if (param_1[3] == '\0') goto LAB_016bbff8;
LAB_016bc024:
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar7 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar7;
    plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x30);
    if (plVar8 == (long *)0x0) goto LAB_016bbff8;
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_016bc3d0;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*param_1 == '\0') {
      local_48 = (undefined1 *)((ulong)local_48._1_7_ << 8);
      FUN_01465418(plVar8,&local_48);
    }
    else {
      plVar8[0xd1] = plVar8[0xd1] & 0xfffffffffffffffd;
      local_48 = (undefined1 *)((ulong)local_48._1_7_ << 8);
      FUN_01464ab8(plVar8,&local_48);
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar7 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar7;
      plVar10 = *(long **)(lVar7 + 0x100);
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar11 = (long *)plVar10[0x20];
      if (plVar11 != (long *)0x0) {
        plVar9 = plVar11 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = (int)*plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)plVar11[0xf];
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[0xb];
        if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_016bc3d0;
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar6;
        }
        piVar2 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar1 = plVar11 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      plVar11 = plVar10 + 10;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      local_48 = (undefined1 *)plVar9[0x2d];
      if (local_48 != &DAT_cbf29ce484222645) {
        FUN_01469ba0(plVar8);
        FUN_01469a70(plVar8,&local_48);
        local_50 = &DAT_cbf29ce484222645;
        FUN_01661e34(plVar9,&local_50);
      }
      lVar7 = plVar9[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    lVar7 = plVar8[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_016bbff8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    cVar3 = param_1[2];
  }
  else {
    FUN_0165bf34(*param_1 == '\0');
    if (param_1[3] != '\0') goto LAB_016bc024;
LAB_016bbff8:
    cVar3 = param_1[2];
  }
  if (cVar3 != '\0') {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar7 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar7;
    plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x30);
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_016bc3d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0146633c(plVar8,1);
      lVar7 = plVar8[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  return;
}


