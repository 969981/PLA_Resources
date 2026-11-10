/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01525764; name: FUN_01525764
 */


void FUN_01525764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar11 = *(long **)(param_1 + 8);
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x48,8);
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar13 = (undefined4 *)PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01525d88:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  local_60 = 0x48;
  local_58 = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *(undefined1 *)puVar7 = 0;
  plVar12 = *(long **)(param_1 + 8);
  local_70 = puVar7;
  local_68 = plVar11;
  puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x80,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = (long *)0x0;
  }
  else {
    if (((*puVar1 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      puVar13 = (undefined4 *)PTR_DAT_04379528;
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*puVar13);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01525d88;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_80 = 0x80;
    local_78 = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    local_88 = plVar12;
  }
  puVar3 = local_70;
  local_90 = 0;
  FUN_01526234(local_70 + 1,puVar7);
  puVar3[2] = local_88;
  puVar3[3] = local_80;
  puVar3[4] = local_78;
  FUN_01526234(&local_90,0);
  puVar7 = (undefined8 *)puVar3[1];
  pcVar10 = (code *)puVar7[1];
  if (pcVar10 != (code *)0x0) {
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    (*pcVar10)(puVar7 + 4);
  }
  *puVar7 = &LAB_015264ac;
  puVar7[1] = &LAB_01526578;
  puVar7[2] = &LAB_0152657c;
  puVar7[3] = &LAB_01526588;
  puVar7[4] = param_2;
  plVar11 = *(long **)(param_1 + 8);
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x80,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = (long *)0x0;
  }
  else {
    if (((*puVar1 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*puVar13);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01525d88;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_80 = 0x80;
    local_78 = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    local_88 = plVar11;
  }
  puVar3 = local_70;
  local_90 = 0;
  FUN_01526594(local_70 + 5,puVar7);
  puVar3[6] = local_88;
  puVar3[7] = local_80;
  puVar3[8] = local_78;
  FUN_01526594(&local_90,0);
  puVar7 = (undefined8 *)puVar3[5];
  pcVar10 = (code *)puVar7[1];
  if (pcVar10 != (code *)0x0) {
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    (*pcVar10)(puVar7 + 4);
  }
  *puVar7 = &LAB_0152680c;
  puVar7[1] = &LAB_0152681c;
  puVar7[2] = &LAB_01526820;
  puVar7[3] = &LAB_0152682c;
  puVar7[4] = param_3;
  FUN_015261e0(param_1 + 0x68,&local_70);
  puVar7 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(&local_90,0);
  FUN_01526594(puVar7 + 5,0);
  FUN_01526234(puVar7 + 1,0);
  uVar5 = local_58;
  uVar4 = local_60;
  plVar11 = local_68;
  uVar9 = (**(code **)(*local_68 + 0xc0))(local_68);
  lVar8 = tpidr_el0;
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar11,puVar7,uVar4,uVar5);
      goto LAB_01525af8;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,puVar7,uVar4,uVar5);
LAB_01525af8:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  return;
}


