/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cdbbe4; name: FUN_02cdbbe4
 */


long FUN_02cdbbe4(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
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
  undefined *local_1d0;
  code *local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  long local_1b0 [12];
  undefined *local_150;
  code *local_148;
  undefined *local_140;
  undefined *puStack_138;
  long local_130 [12];
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  long local_b0 [12];
  
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
  local_c0 = (undefined *)0x0;
  puStack_b8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  local_c8 = (code *)0x0;
  local_b0[0] = *param_4;
  if (local_b0[0] != 0) {
    lVar10 = *(long *)(local_b0[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02cdbed0;
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
  local_140 = (undefined *)0x0;
  puStack_138 = (undefined *)0x0;
  local_d0 = PTR_LAB_043883a0;
  local_c8 = (code *)PTR_FUN_043883a8;
  local_c0 = PTR_LAB_043883b0;
  puStack_b8 = PTR_LAB_043883b8;
  local_150 = (undefined *)0x0;
  local_148 = (code *)0x0;
  local_130[0] = *param_5;
  if (local_130[0] != 0) {
    lVar10 = *(long *)(local_130[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02cdbed0;
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
  local_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined *)0x0;
  local_150 = PTR_LAB_043883c0;
  local_148 = (code *)PTR_FUN_043883c8;
  local_140 = PTR_LAB_043883d0;
  puStack_138 = PTR_LAB_043883d8;
  local_1d0 = (undefined *)0x0;
  local_1c8 = (code *)0x0;
  local_1b0[0] = *param_6;
  if (local_1b0[0] != 0) {
    lVar10 = *(long *)(local_1b0[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_02cdbed0:
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
  local_1d0 = PTR_LAB_043883e0;
  local_1c8 = (code *)PTR_FUN_043883e8;
  local_1c0 = PTR_LAB_043883f0;
  puStack_1b8 = PTR_LAB_043883f8;
  FUN_013b7bdc(lVar8,param_3,&local_d0,&local_150,&local_1d0);
  pcVar5 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined *)0x0;
    puStack_1b8 = (undefined *)0x0;
    local_1d0 = (undefined *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar5)(local_1b0);
  }
  pcVar5 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined *)0x0;
    puStack_138 = (undefined *)0x0;
    local_150 = (undefined *)0x0;
    local_148 = (code *)0x0;
    (*pcVar5)(local_130);
  }
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    puStack_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(local_b0);
  }
  *(long **)(lVar8 + 8) = param_2;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x200;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


