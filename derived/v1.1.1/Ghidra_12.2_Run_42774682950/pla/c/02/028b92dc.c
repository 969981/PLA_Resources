/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b92dc; name: FUN_028b92dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_028b92dc(undefined1 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_230;
  char *pcStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0 [12];
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  long *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *apuStack_150 [12];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  plVar8 = *(long **)(param_1 + 8);
  plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xb0,8);
  if (plVar5 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_028bcc18(plVar5,plVar8,param_3,param_2,param_4);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    uVar11 = 8;
    uVar12 = 0xb0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar5;
  if (puVar9 == (undefined8 *)0x0) goto LAB_028b94d4;
  FUN_02bcbe58(&local_190,0);
  (**(code **)*puVar9)(puVar9);
  plVar5 = *(long **)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uVar10 = *(undefined8 *)(param_1 + 0xa8);
  uVar7 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  lVar6 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_028b9434:
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,uVar1,uVar10);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_028b9434;
    FUN_02bcc824(plVar5,puVar9,uVar1,uVar10);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x90);
LAB_028b94d4:
  *(long **)(param_1 + 0x98) = plVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar12;
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1 + 0xb8);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),param_1 + 0xf0);
  plVar5 = *(long **)(*(long *)(param_1 + 0x80) + 0x68);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  plVar8 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb0) = plVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  local_190 = (undefined1 *)0x7d3de69efb5b8a5f;
  local_210 = &LAB_028bb7c8;
  local_208 = FUN_028bbb14;
  local_200 = &LAB_028bbb18;
  local_1f8 = &LAB_028bbb24;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_188 = (code *)0x38c5eba;
  local_180 = (undefined1 *)0x16;
  local_178 = (long *)0x0;
  local_170 = &LAB_028bb7c8;
  local_168 = FUN_028bbb14;
  local_160 = &LAB_028bbb18;
  local_158 = &LAB_028bbb24;
  local_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_028b9c64(param_1,&local_190);
  pcVar2 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
    pcVar2 = local_168;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
    pcVar2 = local_168;
  }
  if (pcVar2 == (code *)0x0) {
    local_168 = (code *)0x0;
  }
  else {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar2 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar2)(local_1f0);
  }
  local_190 = (undefined1 *)0xf22d452d01989c12;
  local_210 = &LAB_028bbb30;
  local_208 = FUN_028bbe78;
  local_200 = &LAB_028bbe7c;
  local_1f8 = &LAB_028bbe88;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_188 = (code *)0x390db7c;
  local_180 = (undefined1 *)0x18;
  local_178 = (long *)0x0;
  local_170 = &LAB_028bbb30;
  local_168 = FUN_028bbe78;
  local_160 = &LAB_028bbe7c;
  local_158 = &LAB_028bbe88;
  local_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_028b9c64(param_1,&local_190);
  pcVar2 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
    pcVar2 = local_168;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
    pcVar2 = local_168;
  }
  if (pcVar2 == (code *)0x0) {
    local_168 = (code *)0x0;
  }
  else {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar2 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar2)(local_1f0);
  }
  local_190 = (undefined1 *)0x3f0fd053702f7122;
  local_210 = &LAB_028bbe94;
  local_208 = FUN_028bc1e8;
  local_200 = &LAB_028bc1ec;
  local_1f8 = &LAB_028bc1f8;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_188 = (code *)0x390db95;
  local_180 = (undefined1 *)0x17;
  local_178 = (long *)0x0;
  local_170 = &LAB_028bbe94;
  local_168 = FUN_028bc1e8;
  local_160 = &LAB_028bc1ec;
  local_158 = &LAB_028bc1f8;
  local_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_028b9c64(param_1,&local_190);
  pcVar2 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
    pcVar2 = local_168;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
    pcVar2 = local_168;
  }
  if (pcVar2 == (code *)0x0) {
    local_168 = (code *)0x0;
  }
  else {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar2 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar2)(local_1f0);
  }
  local_230 = 0xab1c861cdb465f6f;
  pcStack_228 = "System/SetBoolParameterRange";
  local_220 = 0x1c;
  uStack_218 = 0;
  local_190 = &LAB_028bc204;
  local_188 = FUN_028bc558;
  local_180 = &LAB_028bc55c;
  local_178 = (long *)&LAB_028bc568;
  local_210 = &LAB_028bc574;
  local_208 = FUN_028bc8c8;
  local_200 = &LAB_028bc8cc;
  local_1f8 = &LAB_028bc8d8;
  local_1f0[0] = param_1;
  local_170 = param_1;
  FUN_028b9f80(param_1,&local_230,&local_190,&local_210);
  pcVar2 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar2)(local_1f0);
  }
  pcVar2 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    local_178 = (long *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar2)(&local_170);
  }
  local_190 = (undefined1 *)0x93196bfbac332444;
  local_210 = &LAB_028bc8e4;
  local_208 = FUN_028bcaf0;
  local_200 = &LAB_028bcaf4;
  local_1f8 = &LAB_028bcb00;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_188 = (code *)0x39a65b8;
  local_180 = (undefined1 *)0x1a;
  local_178 = (long *)0x0;
  local_170 = &LAB_028bc8e4;
  local_168 = FUN_028bcaf0;
  local_160 = &LAB_028bcaf4;
  local_158 = &LAB_028bcb00;
  local_1f0[0] = param_1;
  apuStack_150[0] = param_1;
  FUN_028b9c64(param_1,&local_190);
  pcVar2 = local_e8;
  if (local_e8 == (code *)0x0) {
    local_e8 = (code *)0x0;
    pcVar2 = local_168;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
    pcVar2 = local_168;
  }
  if (pcVar2 == (code *)0x0) {
    local_168 = (code *)0x0;
  }
  else {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(apuStack_150);
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  pcVar2 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined1 *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar2)(local_1f0);
  }
  return;
}


