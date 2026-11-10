/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a1d8c; name: FUN_027a1d8c
 */


long FUN_027a1d8c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

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
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  long local_1b0 [12];
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  long local_130 [12];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
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
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x200,0x10);
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  FUN_027a2034(&local_d0,param_3);
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_150 = (undefined1 *)0x0;
  local_148 = (code *)0x0;
  local_130[0] = *param_4;
  if (local_130[0] != 0) {
    lVar10 = *(long *)(local_130[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_027a2018;
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
  local_150 = &LAB_027a2cbc;
  local_148 = FUN_027a2d04;
  local_140 = &LAB_027a2d3c;
  puStack_138 = &LAB_027a2db0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1b0[0] = *param_5;
  if (local_1b0[0] != 0) {
    lVar10 = *(long *)(local_1b0[0] + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_027a2018:
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
  local_1d0 = &LAB_027a2dc0;
  local_1c8 = FUN_027a2dd4;
  local_1c0 = &LAB_027a2e0c;
  puStack_1b8 = &LAB_027a2e80;
  FUN_013b7bdc(lVar8,param_2,&local_d0,&local_150,&local_1d0);
  pcVar5 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar5)(local_1b0);
  }
  pcVar5 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar5)(local_130);
  }
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar5)(auStack_b0);
  }
  *(long **)(lVar8 + 8) = param_1;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x200;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


