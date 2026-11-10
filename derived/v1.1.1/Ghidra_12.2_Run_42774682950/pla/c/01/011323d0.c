/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011323d0; name: FUN_011323d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_011323d0(long param_1,uint param_2,ushort param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar13 = _DAT_000001c8;
  plVar7 = *(long **)(lVar9 + 0xd0);
  if (plVar7 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar7 = _DAT_000001c8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar13 = (long *)plVar7[0x39];
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  lVar9 = *(long *)(plVar13[0xb] + 0x48);
  if (*(char *)(lVar9 + 0x38) != '\0') {
    uVar3 = *(ushort *)(lVar9 + (ulong)param_2 * 2 + 0x48);
    uVar11 = (ulong)uVar3;
    if ((uVar11 != 0) && (uVar3 < *(ushort *)(lVar9 + 0x3a))) {
      lVar12 = *(ushort *)(lVar9 + 0x3a) - uVar11;
      puVar10 = (ushort *)(*(long *)(lVar9 + 0x40) + uVar11 * 6 + 4);
      do {
        if (puVar10[-2] != param_2) break;
        if (puVar10[-1] == param_3) {
          uVar8 = (uint)*puVar10;
          goto LAB_011324cc;
        }
        puVar10 = puVar10 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  uVar8 = 0;
LAB_011324cc:
  lVar9 = param_1 + (ulong)uVar8 * 0x18 + 0x151a8;
  if (0x5c7 < uVar8 - 1) {
    lVar9 = 0;
  }
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return lVar9;
}


