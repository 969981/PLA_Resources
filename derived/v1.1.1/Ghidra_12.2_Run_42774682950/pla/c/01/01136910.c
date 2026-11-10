/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01136910; name: FUN_01136910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_01136910(long param_1,uint *param_2,ulong param_3,int *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
  cVar5 = (char)param_2[3];
  iVar8 = 5;
  if (cVar5 == '\0') {
    iVar8 = 1;
  }
  iVar15 = 7;
  if (cVar5 == '\0') {
    iVar15 = 3;
  }
  if ((param_3 & 1) != 0) {
    iVar8 = iVar15;
  }
  iVar15 = 6;
  if (cVar5 == '\0') {
    iVar15 = 2;
  }
  iVar3 = (uint)(cVar5 != '\0') << 2;
  if ((param_3 & 1) != 0) {
    iVar3 = iVar15;
  }
  if ((param_2[2] & 0xfffffffd) == 0) {
    iVar8 = iVar3;
  }
  *param_4 = iVar8;
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    uVar10 = *param_2;
    uVar7 = param_2[1];
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar16 = _DAT_000001c8;
    plVar9 = *(long **)(lVar11 + 0xd0);
    if (plVar9 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar9 = _DAT_000001c8 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)*plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
      plVar1 = plVar9 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar16 = (long *)plVar9[0x39];
      if (plVar16 != (long *)0x0) {
        plVar2 = plVar16 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    lVar11 = *(long *)(plVar16[0xb] + 0x48);
    if (*(char *)(lVar11 + 0x38) != '\0') {
      uVar4 = *(ushort *)(lVar11 + (ulong)uVar10 * 2 + 0x48);
      uVar13 = (ulong)uVar4;
      if ((uVar13 != 0) && (uVar4 < *(ushort *)(lVar11 + 0x3a))) {
        lVar14 = *(ushort *)(lVar11 + 0x3a) - uVar13;
        puVar12 = (ushort *)(*(long *)(lVar11 + 0x40) + uVar13 * 6 + 4);
        do {
          if (uVar10 != puVar12[-2]) break;
          if (puVar12[-1] == (ushort)uVar7) {
            uVar10 = (uint)*puVar12;
            goto LAB_01136a68;
          }
          puVar12 = puVar12 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    uVar10 = 0;
LAB_01136a68:
    lVar11 = param_1 + (ulong)uVar10 * 0x18 + 0x151a8;
    if (0x5c7 < uVar10 - 1) {
      lVar11 = 0;
    }
    if (plVar16 != (long *)0x0) {
      plVar9 = plVar16 + 10;
      do {
        iVar8 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  else {
    lVar11 = 0;
  }
  return lVar11;
}


