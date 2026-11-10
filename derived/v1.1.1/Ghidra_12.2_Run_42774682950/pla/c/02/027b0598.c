/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b0598; name: FUN_027b0598
 */


long FUN_027b0598(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x200,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  FUN_027b0768(&local_d0,param_3);
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  FUN_027b0ff8(&local_150,param_4);
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  FUN_027b11b8(&local_1d0,param_5);
  FUN_013b7bdc(lVar5,param_2,&local_d0,&local_150,&local_1d0);
  pcVar2 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar2)(auStack_1b0);
  }
  pcVar2 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar2)(auStack_130);
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  *(long **)(lVar5 + 8) = param_1;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x200;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return lVar5;
}


