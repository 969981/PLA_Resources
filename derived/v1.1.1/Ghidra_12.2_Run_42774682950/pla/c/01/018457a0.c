/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018457a0; name: FUN_018457a0
 */


void FUN_018457a0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_d3;
  undefined8 local_60 [2];
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_38;
  
  plVar11 = (long *)*param_3;
  (**(code **)(*plVar11 + 0x40))(plVar11);
  local_60[0] = in_d3;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x460,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_01834354(plVar9,local_60);
  plVar9[1] = (long)param_4;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x460;
  plVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01845aac;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 9;
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,plVar11);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_009ad580(&local_50,plVar11 + 99);
  (**(code **)(*plVar2 + 0xc0))(plVar2,&local_50);
  puVar6 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = (long *)*puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined1 *)((long)plVar11 + 0x33b));
  (**(code **)(*plVar2 + 0x90))(plVar2);
  local_38 = plVar9;
  FUN_02a4dad4(plVar11 + 0x1e,&local_38);
  if (local_38 == (long *)0x0) {
LAB_01845960:
    *param_1 = (long)plVar9;
  }
  else {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01845960;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    *param_1 = (long)plVar9;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01845aac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


