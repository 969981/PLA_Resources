/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01783528; name: FUN_01783528
 */


void FUN_01783528(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  long *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 uStack_28;
  
  puVar4 = PTR_DAT_04379e28;
  if (((*PTR_DAT_04379e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e28);
  }
  puVar5 = PTR_DAT_04379e38;
  puVar12 = (undefined8 *)PTR_DAT_04379e30;
  uVar8 = *(undefined8 *)PTR_DAT_04379e30;
  *(undefined8 *)PTR_DAT_04379e38 = uVar8;
  switch(*(undefined4 *)(param_1 + 0x194)) {
  case 0:
    local_30 = (long *)0x0;
    uStack_28 = 0;
    uStack_38 = DAT_0388a298;
    local_40 = DAT_0388a290;
    FUN_00d264cc(uVar8,0,0,&local_30,&local_40,0x1e,0,0);
    uVar10 = 1;
    goto LAB_017835bc;
  case 1:
    uVar9 = FUN_00d26428(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    FUN_00be5694(&local_40,param_1 + 0x70);
    if (*(long *)(param_1 + 0x80) == 0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_00ac64cc(&local_30);
    }
    plVar6 = local_30;
    FUN_00be5694(&local_30,param_1 + 0xa0);
    if ((plVar6 == (long *)0x0) || (local_40 == (long *)0x0)) {
      if (local_30 != (long *)0x0) {
        lVar11 = local_30[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
joined_r0x017837c4:
      if (plVar6 != (long *)0x0) {
        lVar11 = plVar6[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
        }
      }
      if (local_40 == (long *)0x0) {
        return;
      }
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (local_30 == (long *)0x0) goto joined_r0x017837c4;
      FUN_0181b198(plVar6);
      FUN_01a8af40(local_40,param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0x194) = 2;
      if (local_30 != (long *)0x0) {
        lVar11 = local_30[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      lVar11 = plVar6[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (local_40 == (long *)0x0) {
        return;
      }
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
    break;
  case 2:
    fVar13 = *(float *)(param_1 + 0x19c);
    if (1.0 <= fVar13) {
      if (((*puVar4 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379e28), puVar12 = (undefined8 *)PTR_DAT_04379e30,
         iVar7 != 0)) {
        FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e28);
        puVar12 = (undefined8 *)PTR_DAT_04379e30;
      }
      uVar8 = *puVar12;
      *(undefined8 *)puVar5 = uVar8;
      FUN_00d265c8(uVar8,0,0x1e);
      fVar13 = *(float *)(param_1 + 0x19c);
      *(undefined4 *)(param_1 + 0x194) = 3;
    }
    *(float *)(param_1 + 0x19c) = fVar13 + 0.033333335;
    break;
  case 3:
    uVar9 = FUN_00d26428(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar10 = 4;
LAB_017835bc:
    *(undefined4 *)(param_1 + 0x194) = uVar10;
  }
  return;
}


