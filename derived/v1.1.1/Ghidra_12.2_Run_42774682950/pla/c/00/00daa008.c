/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daa008; name: FUN_00daa008
 */


undefined8 FUN_00daa008(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint param3;
  uint uVar12;
  char local_a0 [64];
  
  puVar4 = PTR_DAT_0437b630;
  uVar7 = *param_2;
  if (((*PTR_DAT_0437b630 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  puVar5 = PTR_DAT_0437b638;
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"tikaratameshi_battle_rensyou",uVar7);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar9 = *(long **)(lVar10 + 0xd0);
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar9[0xb];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar9 + 10;
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))();
    uVar12 = (uint)*(byte *)(plVar11 + 0x11);
    if (uVar12 == 0) goto LAB_00daa29c;
  }
  else {
    uVar12 = (uint)*(byte *)(plVar11 + 0x11);
    if (*(byte *)(plVar11 + 0x11) == 0) goto LAB_00daa29c;
  }
  param3 = 0;
  do {
    local_a0[0x30] = '\0';
    local_a0[0x31] = '\0';
    local_a0[0x32] = '\0';
    local_a0[0x33] = '\0';
    local_a0[0x34] = '\0';
    local_a0[0x35] = '\0';
    local_a0[0x36] = '\0';
    local_a0[0x37] = '\0';
    local_a0[0x38] = '\0';
    local_a0[0x39] = '\0';
    local_a0[0x3a] = '\0';
    local_a0[0x3b] = '\0';
    local_a0[0x3c] = '\0';
    local_a0[0x3d] = '\0';
    local_a0[0x3e] = '\0';
    local_a0[0x3f] = '\0';
    local_a0[0x20] = '\0';
    local_a0[0x21] = '\0';
    local_a0[0x22] = '\0';
    local_a0[0x23] = '\0';
    local_a0[0x24] = '\0';
    local_a0[0x25] = '\0';
    local_a0[0x26] = '\0';
    local_a0[0x27] = '\0';
    local_a0[0x28] = '\0';
    local_a0[0x29] = '\0';
    local_a0[0x2a] = '\0';
    local_a0[0x2b] = '\0';
    local_a0[0x2c] = '\0';
    local_a0[0x2d] = '\0';
    local_a0[0x2e] = '\0';
    local_a0[0x2f] = '\0';
    local_a0[0x10] = '\0';
    local_a0[0x11] = '\0';
    local_a0[0x12] = '\0';
    local_a0[0x13] = '\0';
    local_a0[0x14] = '\0';
    local_a0[0x15] = '\0';
    local_a0[0x16] = '\0';
    local_a0[0x17] = '\0';
    local_a0[0x18] = '\0';
    local_a0[0x19] = '\0';
    local_a0[0x1a] = '\0';
    local_a0[0x1b] = '\0';
    local_a0[0x1c] = '\0';
    local_a0[0x1d] = '\0';
    local_a0[0x1e] = '\0';
    local_a0[0x1f] = '\0';
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\0';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    local_a0[8] = '\0';
    local_a0[9] = '\0';
    local_a0[10] = '\0';
    local_a0[0xb] = '\0';
    local_a0[0xc] = '\0';
    local_a0[0xd] = '\0';
    local_a0[0xe] = '\0';
    local_a0[0xf] = '\0';
    lVar10 = (**(code **)(*plVar11 + 0x50))(plVar11,param3);
    param3 = param3 + 1;
    snprintf(local_a0,0x40,"tikaratameshi_battle_use_poke%d_mons_no",param3);
    uVar7 = FUN_02c6849c(*(undefined8 *)(lVar10 + 0x98));
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    DAT_043ad1d0 = *(long *)puVar5;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,local_a0,uVar7);
    }
    snprintf(local_a0,0x40,"tikaratameshi_battle_use_poke%d_form_no",param3);
    uVar6 = FUN_02c6f924(*(undefined8 *)(lVar10 + 0x98));
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    DAT_043ad1d0 = *(long *)puVar5;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,local_a0,uVar6);
    }
    snprintf(local_a0,0x40,"tikaratameshi_battle_use_poke%d_poke_lv",param3);
    uVar7 = FUN_02c5fb2c(lVar10);
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    DAT_043ad1d0 = *(long *)puVar5;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,local_a0,uVar7);
    }
  } while (uVar12 != param3);
LAB_00daa29c:
  plVar9 = plVar11 + 10;
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return param_1;
}


