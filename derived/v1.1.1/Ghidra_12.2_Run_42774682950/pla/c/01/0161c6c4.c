/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161c6c4; name: FUN_0161c6c4
 */


void FUN_0161c6c4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined1 local_28;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar10 = *(long **)(lVar9 + 0xd0);
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00d853bc(&local_40,plVar10);
  plVar6 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar6 != (long *)0x0) {
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
  }
  puVar8 = local_40;
  local_40 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0xd0) = puVar8;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  uVar7 = FUN_02585a30(*(undefined8 *)(param_1 + 0xd0));
  if ((uVar7 & 1) == 0) {
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x1e);
    local_38 = 0x46701d2b931307d5;
    puStack_30 = &DAT_cbf29ce484222645;
    local_28 = 0xa0;
    FUN_02585c48(&local_48,*(undefined8 *)(param_1 + 0xd0),&local_40);
    if (local_48 != (long *)0x0) {
      lVar9 = local_48[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  FUN_02586824(&local_40,*(undefined8 *)(param_1 + 0xd0));
  plVar10 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(undefined1 **)(param_1 + 200) = local_40;
  puVar8 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    local_40 = &DAT_cbf29ce484222645;
    FUN_02586434(*(undefined8 *)(param_1 + 0xd0),&DAT_03a7c460,&local_40,0);
    FUN_02586824(&local_40,*(undefined8 *)(param_1 + 0xd0));
    plVar10 = *(long **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar10 != (long *)0x0) {
      plVar6 = plVar10 + 10;
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
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(undefined1 **)(param_1 + 200) = local_40;
    puVar8 = local_40;
  }
  local_40 = (undefined1 *)0xb24bd55816d4bebf;
  FUN_02582a00(puVar8,&local_40,0);
  local_40 = (undefined1 *)0xb24bd45816d4bd0c;
  FUN_02582a00(*(undefined8 *)(param_1 + 200),&local_40,1);
  local_40 = (undefined1 *)0xd575927cb17edd82;
  FUN_02585ec0(*(undefined8 *)(param_1 + 0xd0),&local_40);
  FUN_02583190(*(undefined8 *)(param_1 + 200),1,0,1);
  return;
}


