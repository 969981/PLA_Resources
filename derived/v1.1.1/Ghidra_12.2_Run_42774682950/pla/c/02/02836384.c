/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02836384; name: FUN_02836384
 */


/* WARNING: Removing unreachable block (ram,0x02836560) */
/* WARNING: Removing unreachable block (ram,0x02836564) */
/* WARNING: Removing unreachable block (ram,0x0283656c) */
/* WARNING: Removing unreachable block (ram,0x02836574) */
/* WARNING: Removing unreachable block (ram,0x02836578) */

void FUN_02836384(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_00d24350(param_1 + 0x1d,0,param_2,0,param_1[0xf],0);
  lVar6 = FUN_00d25b60(&local_88,param_1[0xe]);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0x18] = lVar6;
  FUN_02c3c658(lVar6 + 0x68,param_1 + 0x1d);
  FUN_0022b74c(*(undefined8 *)(lVar6 + 0x60),*(long *)(*(long *)(lVar6 + 0x70) + 600) + 0x80);
  if (((*PTR_DAT_0437b228 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  lVar6 = *(long *)PTR_DAT_0437b230;
  *(long *)PTR_DAT_0437b238 = lVar6;
  FUN_0022bb08(*(undefined8 *)(param_1[0x18] + 0x60),"ScFontB",*(long *)(lVar6 + 0xf0) + 0x68);
  lVar6 = FUN_00d25c98(&local_88,param_1[0xe]);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  plVar7 = (long *)param_1[0x18];
  param_1[0x19] = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = (**(code **)(*param_1 + 0xb8))(param_1);
  local_60 = 0;
  uStack_58 = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = 0;
  uStack_68 = 0;
  local_88 = plVar7;
  local_78 = param_3;
  FUN_02c4165c(lVar6,&local_88);
  if (local_88 != (long *)0x0) {
    plVar2 = local_88 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  lVar6 = DAT_03a7e444;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = DAT_03a7e444;
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = DAT_03a7e444;
    }
  }
  DAT_03a7e444 = lVar6;
  if ((param_4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x43) = DAT_03a7e44c;
    param_1[0x42] = lVar6;
    lVar6 = DAT_03a7e434;
    param_1[0x41] = DAT_03a7e43c;
    param_1[0x40] = lVar6;
    *(undefined1 *)((long)param_1 + 0x21d) = 1;
    FUN_02c3a000(param_1 + 0x3a);
    FUN_02c3a2c4(param_1 + 0x3a,&DAT_03a848b0);
    param_1[0x52] = 0x438078000000000;
    lVar6 = param_1[0x19];
    *(long **)(lVar6 + 0x250) = param_1 + 0x38;
    *(undefined1 *)(lVar6 + 0x81) = 0;
  }
  FUN_02836154(param_1);
  lVar6 = param_1[0x19];
  *(undefined1 *)(lVar6 + 0x3d1) = 0xa0;
  if (*(long *)(lVar6 + 0x3d8) != 0) {
    *(uint *)(*(long *)(lVar6 + 0x3d8) + 0x90) = *(byte *)(lVar6 + 0x3d2) | 0xa000;
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(**(long **)(param_1[0x18] + 0x60) + 0x18))
            (*(long **)(param_1[0x18] + 0x60),FUN_02c3bc54);
  (**(code **)(param_1[0xd] + 8))(param_1 + 0xd,0);
  return;
}


