/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d1508c; name: FUN_02d1508c
 */


long FUN_02d1508c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *local_1e0;
  code *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined8 auStack_1c0 [12];
  undefined *local_160;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined8 auStack_140 [12];
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 auStack_c0 [12];
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x200,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_e0 = PTR_LAB_04388420;
  auStack_c0[0] = *param_4;
  *param_4 = 0;
  local_d8 = (code *)PTR_FUN_04388428;
  local_d0 = PTR_LAB_04388430;
  local_c8 = PTR_LAB_04388438;
  auStack_140[0] = *param_5;
  *param_5 = 0;
  local_160 = PTR_LAB_04388448;
  local_158 = (code *)PTR_FUN_04388440;
  local_150 = PTR_LAB_04388450;
  local_148 = PTR_LAB_04388458;
  auStack_1c0[0] = *param_6;
  *param_6 = 0;
  local_1e0 = PTR_LAB_04388468;
  local_1d8 = (code *)PTR_FUN_04388470;
  local_1d0 = PTR_LAB_04388460;
  local_1c8 = PTR_LAB_04388478;
  FUN_013b7bdc(lVar5,param_3,&local_e0,&local_160,&local_1e0);
  pcVar2 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined *)0x0;
    local_1c8 = (undefined *)0x0;
    local_1e0 = (undefined *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar2)(auStack_1c0);
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined *)0x0;
    local_148 = (undefined *)0x0;
    local_160 = (undefined *)0x0;
    local_158 = (code *)0x0;
    (*pcVar2)(auStack_140);
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  *(long **)(lVar5 + 8) = param_2;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x200;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return lVar5;
}


