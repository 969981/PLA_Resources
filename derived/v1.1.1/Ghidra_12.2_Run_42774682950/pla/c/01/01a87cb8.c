/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a87cb8; name: FUN_01a87cb8
 */


undefined4 FUN_01a87cb8(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  undefined1 in_q3 [16];
  undefined8 uVar12;
  long *local_40;
  undefined8 uStack_38;
  long *local_28;
  long local_18;
  
  uVar12 = in_q3._8_8_;
  plVar11 = in_q3._0_8_;
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_01a9e404(&local_40,param_1 + 0xc1);
  FUN_01a821fc(&local_28,&local_40);
  plVar5 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_40[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_18 = *plVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_18);
    }
  }
  if (local_28 == (long *)0x0) {
    return 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x218))(param_1);
  if (((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*param_1 + 0x228))(param_1), (uVar7 & 1) == 0)) {
    FUN_009c69bc(&local_40,param_1);
    (**(code **)(*local_40 + 0x40))();
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    local_40 = plVar11;
    uStack_38 = uVar12;
    uVar7 = FUN_0182fe2c(local_28,&local_40);
    if ((uVar7 & 0xff) != 0) {
      uVar8 = FUN_018300cc(local_28,&local_40);
      if ((uVar8 & 0xff) == 0) goto LAB_01a87e60;
      if (0.0 < (float)(uVar7 >> 0x20) - (float)(uVar8 >> 0x20)) {
        uVar7 = FUN_018305bc(local_28);
        uVar9 = 1;
        if ((uVar7 & 1) != 0) {
          uVar9 = 2;
        }
        goto joined_r0x01a87e58;
      }
    }
    uVar9 = 0;
  }
  else {
LAB_01a87e60:
    uVar9 = 2;
  }
joined_r0x01a87e58:
  if (local_28 != (long *)0x0) {
    lVar10 = local_28[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar9;
}


