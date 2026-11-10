/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01100cd8; name: FUN_01100cd8
 */


void FUN_01100cd8(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_04379c38;
  puVar4 = PTR_DAT_04379c30;
  puVar3 = PTR_DAT_04379c28;
  pbStack_68 = (byte *)(param_1 + 0x68);
  bVar1 = *pbStack_68;
  puVar11 = &DAT_cbf29ce484222645;
  local_70 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    uVar10 = (ulong)(uint)bVar1;
    local_70 = &DAT_cbf29ce484222645;
    pbVar9 = (byte *)(param_1 + 0x69);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ uVar10) * 0x100000001b3);
      bVar2 = *pbVar9;
      uVar10 = (ulong)bVar2;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  local_60 = 0x3f;
  local_58 = (long *)0x0;
  if (bVar1 != 0) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar8;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_02913338(uVar8,&local_70,&local_f0,0,0,0);
    pcVar6 = local_e8;
    if (local_e8 == (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    else {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  pbStack_68 = (byte *)(param_1 + 0xa8);
  bVar1 = *pbStack_68;
  if (bVar1 != 0) {
    uVar10 = (ulong)(uint)bVar1;
    pbVar9 = (byte *)(param_1 + 0xa9);
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ uVar10) * 0x100000001b3);
      bVar2 = *pbVar9;
      uVar10 = (ulong)bVar2;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  local_60 = 0x3f;
  local_58 = (long *)0x0;
  if (bVar1 != 0) {
    local_70 = puVar11;
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar8;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_02913338(uVar8,&local_70,&local_f0,0,0,0);
    pcVar6 = local_e8;
    if (local_e8 == (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    else {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


