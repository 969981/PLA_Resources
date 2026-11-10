/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119c444; name: FUN_0119c444
 */


void FUN_0119c444(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xa8) +
                    (ulong)param_3 * 0x10);
  local_58 = 0;
  iStack_54 = 0;
  local_50 = 0;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar7 = *(long **)(lVar9 + 0xd0);
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)plVar7[0xb];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar7 + 10;
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar9 = (**(code **)(*plVar12 + 0x58))(plVar12,param_3);
  uVar8 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
  if (((uVar8 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    if (**(int **)(param_1 + 0x1648) == 0) {
      uVar8 = FUN_011a9a80(*(undefined8 *)(param_1 + 0x16b8),param_3,0);
      bVar3 = (uVar8 & 1) != 0;
      if (bVar3) {
        local_58 = 0x15;
      }
      uVar8 = FUN_01091d40(lVar9);
      uVar5 = DAT_03a79688;
      uVar4 = DAT_03889af8;
      puVar10 = (undefined8 *)((ulong)&local_58 | (ulong)bVar3 << 2);
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(puVar10 + 1) = DAT_03a79690;
        *puVar10 = uVar5;
      }
      else {
        *puVar10 = DAT_03889af0;
        puVar10[1] = uVar4;
      }
    }
    else {
      local_58 = 6;
      iStack_54 = 2;
    }
  }
  else {
    local_58 = 2;
  }
  piVar11 = (int *)(lVar13 + 0x2c);
  piVar11[0] = 0;
  piVar11[1] = 0;
  *(undefined4 *)(lVar13 + 0x44) = 0;
  *(undefined8 *)(lVar13 + 0x34) = 0;
  *(undefined8 *)(lVar13 + 0x3c) = 0;
  if ((local_58 != 0) && (*piVar11 = local_58, iStack_54 != 0)) {
    *(int *)(lVar13 + 0x30) = iStack_54;
    if ((int)local_50 != 0) {
      *(int *)(lVar13 + 0x34) = (int)local_50;
      if (local_50._4_4_ != 0) {
        *(int *)(lVar13 + 0x38) = local_50._4_4_;
        if ((int)local_48 != 0) {
          *(int *)(lVar13 + 0x3c) = (int)local_48;
          if (local_48._4_4_ != 0) {
            *(int *)(lVar13 + 0x40) = local_48._4_4_;
          }
        }
      }
    }
  }
  plVar7 = plVar12 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  return;
}


