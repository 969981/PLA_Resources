/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02892174; name: FUN_02892174
 */


void FUN_02892174(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_38;
  
  lVar8 = param_1[0x3e];
  *param_1 = &PTR_FUN_04271ce8;
  param_1[9] = &PTR_LAB_04271de8;
  param_1[10] = &PTR_FUN_04271ec8;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0xc) != 0) {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar5 = *(int *)(lVar8 + 0xc);
      while( true ) {
        plVar10 = *(long **)(lVar8 + 0x10);
        lVar6 = FUN_00fd7558();
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_02892308;
          if (plVar10 == (long *)lVar6) break;
          plVar10 = (long *)*plVar10;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar5) break;
        ClearExclusiveLocal();
LAB_028921f8:
        iVar5 = iVar2;
        if (iVar2 == 0) goto LAB_02892308;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_028921f8;
      lVar8 = *(long *)(lVar8 + 0x18);
      if (lVar8 == 0) goto LAB_02892308;
      lVar6 = *(long *)(lVar8 + 8);
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))();
        lVar8 = param_1[0x3e];
        if (lVar8 != 0) goto LAB_02892234;
LAB_028922bc:
        plVar10 = (long *)0x0;
      }
      else {
        lVar8 = param_1[0x3e];
        if (lVar8 == 0) goto LAB_028922bc;
LAB_02892234:
        if (*(int *)(lVar8 + 0xc) == 0) goto LAB_028922bc;
        piVar1 = (int *)(lVar8 + 0xc);
        iVar5 = *(int *)(lVar8 + 0xc);
        do {
          plVar10 = *(long **)(lVar8 + 0x10);
          lVar6 = FUN_00fd7558();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_028922bc;
            if (plVar10 == (long *)lVar6) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar5) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_02892280;
            plVar10 = (long *)0x0;
            if (*(long *)(lVar8 + 0x18) != 0) {
              plVar10 = (long *)(*(long *)(lVar8 + 0x18) + -0x50);
            }
            break;
          }
          ClearExclusiveLocal();
LAB_02892280:
          plVar10 = (long *)0x0;
          iVar5 = iVar2;
        } while (iVar2 != 0);
      }
      if ((int)plVar10[0xd] != 2) {
        if ((int)plVar10[0xd] == 1) {
          uVar7 = 4;
          goto LAB_028922e0;
        }
        if (plVar10 != (long *)0x0) goto LAB_028922ec;
        goto LAB_02892308;
      }
      uVar7 = 3;
LAB_028922e0:
      *(undefined4 *)(plVar10 + 0xd) = uVar7;
LAB_028922ec:
      lVar8 = plVar10[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_02892308;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
      puVar9 = (undefined8 *)param_1[0x3e];
      if (puVar9 == (undefined8 *)0x0) goto LAB_02892368;
      goto LAB_02892310;
    }
LAB_02892308:
    puVar9 = (undefined8 *)param_1[0x3e];
    if (puVar9 != (undefined8 *)0x0) {
LAB_02892310:
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = *puVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
  }
LAB_02892368:
  FUN_02a4c4ec(param_1);
  return;
}


