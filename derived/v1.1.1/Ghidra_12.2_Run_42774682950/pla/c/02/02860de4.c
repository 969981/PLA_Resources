/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02860de4; name: FUN_02860de4
 */


undefined8 FUN_02860de4(long *param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  long *plVar9;
  short *psVar10;
  long lVar11;
  long *plVar12;
  
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar8 = (undefined4 *)FUN_0286bc70();
  lVar11 = *(long *)(*(long *)(lVar11 + 0x18) + 400);
  if (*(long *)(lVar11 + 0x170) == 0) {
    return 0;
  }
  psVar10 = *(short **)(lVar11 + 0x168);
  sVar3 = *psVar10;
  sVar4 = psVar10[1];
  *puVar8 = 1;
  if (sVar3 == -1) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar12 = *(long **)(lVar11 + 0xd0);
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar11 = plVar12[0xb];
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(puVar8 + 4);
    *(undefined8 *)(puVar8 + 4) = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    plVar9 = plVar12 + 10;
    *(long *)(puVar8 + 4) = lVar11;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02860efc;
    lVar11 = *plVar12;
  }
  else {
    plVar12 = *(long **)(puVar8 + 4);
    *(undefined8 *)(puVar8 + 4) = 0;
    if (plVar12 == (long *)0x0) goto LAB_02860efc;
    plVar9 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02860efc;
    lVar11 = *plVar12;
  }
  (**(code **)(lVar11 + 0x10))(plVar12);
LAB_02860efc:
  puVar8[6] = (int)sVar4;
  return 1;
}


