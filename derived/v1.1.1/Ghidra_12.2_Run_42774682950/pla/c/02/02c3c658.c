/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3c658; name: FUN_02c3c658
 */


long FUN_02c3c658(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  FUN_00d24010(local_48,uVar13);
  puVar6 = local_48[0];
  puVar5 = PTR_DAT_0437b210;
  if ((local_48[0] != (undefined8 *)0x0) && (*(int *)((long)local_48[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_48[0] + 0xc);
    pbVar12 = PTR_DAT_0437b208;
    iVar8 = *(int *)((long)local_48[0] + 0xc);
    do {
      plVar9 = (long *)puVar6[2];
      if (((*pbVar12 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b208), pbVar12 = PTR_DAT_0437b208, iVar7 != 0)) {
        uVar10 = FUN_00987804();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(PTR_DAT_0437b208);
        pbVar12 = PTR_DAT_0437b208;
      }
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_02c3c690;
        if (plVar9 == (long *)puVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02c3c8a8;
        lVar11 = puVar6[3];
        if (lVar11 != 0) {
          plVar9 = *(long **)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          if (plVar9 != (long *)0x0) {
            lVar14 = plVar9[0xb];
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
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          *(long *)(param_1 + 8) = lVar11 + -0x50;
          goto LAB_02c3c6c0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_02c3c8a8:
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_02c3c690:
  plVar9 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  uVar13 = 0;
LAB_02c3c6c0:
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
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
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *local_48[0];
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  lVar11 = *(long *)(param_2 + 0x18);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar11;
  if (plVar9 == (long *)0x0) {
LAB_02c3c754:
    lVar11 = *(long *)(param_2 + 0x20);
  }
  else {
    plVar2 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_02c3c754;
    (**(code **)(*plVar9 + 0x10))();
    lVar11 = *(long *)(param_2 + 0x20);
  }
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar11;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
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
      (**(code **)(*plVar9 + 0x10))();
      lVar11 = *(long *)(param_2 + 0x28);
      goto joined_r0x02c3c784;
    }
  }
  lVar11 = *(long *)(param_2 + 0x28);
joined_r0x02c3c784:
  if (lVar11 != 0) {
    lVar14 = *(long *)(lVar11 + 0x58);
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
  plVar9 = *(long **)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar11;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  return param_1;
}


