/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d15584; name: FUN_02d15584
 */


long FUN_02d15584(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                 long *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_1e0;
  code *local_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  long local_1c0 [12];
  undefined *local_160;
  code *local_158;
  undefined *local_150;
  undefined *puStack_148;
  long local_140 [12];
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  undefined4 local_80;
  long local_78;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,0x200,0x10);
  if (lVar8 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_d0 = (undefined *)0x0;
  local_c8 = (undefined *)0x0;
  local_e0 = (undefined *)0x0;
  local_d8 = (code *)0x0;
  local_c0 = *param_4;
  if (local_c0 != 0) {
    lVar10 = *(long *)(local_c0 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d15984;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b8 = param_4[1];
  if (local_b8 != 0) {
    lVar10 = *(long *)(local_b8 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d15984;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = param_4[2];
  if (local_b0 != 0) {
    lVar10 = *(long *)(local_b0 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d15984;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = param_4[3];
  if (local_a8 != 0) {
    lVar10 = *(long *)(local_a8 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d15984;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a0 = param_4[4];
  local_98 = param_4[5];
  local_90 = param_4[6];
  plStack_88 = (long *)param_4[7];
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))();
  }
  local_80 = (undefined4)param_4[8];
  local_78 = param_4[9];
  local_e0 = PTR_LAB_04388480;
  local_d8 = (code *)PTR_FUN_04388488;
  local_d0 = PTR_LAB_04388490;
  local_c8 = PTR_LAB_04388498;
  local_150 = (undefined *)0x0;
  puStack_148 = (undefined *)0x0;
  local_160 = (undefined *)0x0;
  local_158 = (code *)0x0;
  local_140[0] = *param_5;
  if (local_140[0] != 0) {
    lVar10 = *(long *)(local_140[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d15984;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1d0 = (undefined *)0x0;
  puStack_1c8 = (undefined *)0x0;
  local_160 = PTR_LAB_043884a0;
  local_158 = (code *)PTR_FUN_043884a8;
  local_150 = PTR_LAB_043884b0;
  puStack_148 = PTR_LAB_043884b8;
  local_1e0 = (undefined *)0x0;
  local_1d8 = (code *)0x0;
  local_1c0[0] = *param_6;
  if (local_1c0[0] != 0) {
    lVar10 = *(long *)(local_1c0[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_02d15984:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1e0 = PTR_LAB_043884c0;
  local_1d8 = (code *)PTR_FUN_043884c8;
  local_1d0 = PTR_LAB_043884d0;
  puStack_1c8 = PTR_LAB_043884d8;
  FUN_013b7bdc(lVar8,param_3,&local_e0,&local_160,&local_1e0);
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
    local_1e0 = (undefined *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    local_160 = (undefined *)0x0;
    local_158 = (code *)0x0;
    (*pcVar5)(local_140);
  }
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar5)(&local_c0);
  }
  *(long **)(lVar8 + 8) = param_2;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x200;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


