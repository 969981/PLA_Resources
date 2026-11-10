/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137b230; name: FUN_0137b230
 */


/* WARNING: Removing unreachable block (ram,0x0137b36c) */

void FUN_0137b230(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long local_48;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar12 = *(long **)(lVar7 + 0x100);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar12[0x20];
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)plVar13[0xe];
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar6[0xb];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar6 + 10;
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
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = plVar13 + 10;
  do {
    iVar5 = (int)*plVar6 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *(int *)plVar6 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  plVar13 = plVar12 + 10;
  do {
    iVar5 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  *(undefined4 *)(param_1 + 0x1178) = 0;
  *(undefined4 *)(param_1 + 0x1980) = 0;
  if (*(int *)(param_1 + 0x970) == 0) {
    uVar8 = 0;
LAB_0137b400:
    uVar14 = (ulong)uVar8;
    uVar9 = 0xff - uVar14;
    uVar10 = (ulong)-uVar8 & 3;
    if ((-uVar8 & 3) != 0) {
      do {
        *(undefined8 *)(param_1 + 0x1180 + uVar14 * 8) = 0xc0ea47549ab5f3d9;
        uVar14 = uVar14 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (2 < uVar9) {
      lVar7 = uVar14 << 3;
      do {
        puVar2 = (undefined8 *)(param_1 + 0x1180 + lVar7);
        lVar7 = lVar7 + 0x20;
        *puVar2 = 0xc0ea47549ab5f3d9;
        puVar2[1] = 0xc0ea47549ab5f3d9;
        puVar2[2] = 0xc0ea47549ab5f3d9;
        puVar2[3] = 0xc0ea47549ab5f3d9;
      } while (lVar7 != 0x800);
    }
LAB_0137b45c:
    uVar8 = *(uint *)(param_1 + 0x1980);
    uVar14 = (ulong)uVar8;
    if (uVar8 < 0x100) {
      uVar9 = 0xff - uVar14;
      uVar10 = (ulong)-uVar8 & 3;
      if ((-uVar8 & 3) != 0) {
        do {
          *(undefined8 *)(param_1 + 0x1988 + uVar14 * 8) = 0xc0ea47549ab5f3d9;
          uVar14 = uVar14 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar9) {
        lVar7 = uVar14 << 3;
        do {
          puVar2 = (undefined8 *)(param_1 + 0x1988 + lVar7);
          lVar7 = lVar7 + 0x20;
          *puVar2 = 0xc0ea47549ab5f3d9;
          puVar2[1] = 0xc0ea47549ab5f3d9;
          puVar2[2] = 0xc0ea47549ab5f3d9;
          puVar2[3] = 0xc0ea47549ab5f3d9;
        } while (lVar7 != 0x800);
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 10;
      do {
        iVar5 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    return;
  }
  uVar14 = 0;
  do {
    local_48 = *(long *)(param_1 + 0x978 + uVar14 * 8);
    if (local_48 != -0x3f15b8ab654a0c27) {
      iVar5 = FUN_016aca50(plVar11,&local_48);
      if (iVar5 == 1) {
        uVar8 = *(uint *)(param_1 + 0x1980);
        if (0xff < uVar8) break;
        *(long *)(param_1 + (ulong)uVar8 * 8 + 0x1988) = local_48;
        *(uint *)(param_1 + 0x1980) = uVar8 + 1;
      }
      else if (iVar5 == 0) {
        uVar8 = *(uint *)(param_1 + 0x1178);
        if (0xff < uVar8) break;
        *(long *)(param_1 + (ulong)uVar8 * 8 + 0x1180) = local_48;
        *(uint *)(param_1 + 0x1178) = uVar8 + 1;
      }
    }
    uVar14 = uVar14 + 1;
    if (*(uint *)(param_1 + 0x970) <= uVar14) {
      uVar8 = *(uint *)(param_1 + 0x1178);
      if (0xff < uVar8) goto LAB_0137b45c;
      goto LAB_0137b400;
    }
  } while (uVar14 != 0x100);
                    /* WARNING: Subroutine does not return */
  FUN_0137d750();
}


