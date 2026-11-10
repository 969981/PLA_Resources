/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8cf9c; name: FUN_02b8cf9c
 */


long * FUN_02b8cf9c(long *param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  
  puVar3 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x280,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  puVar5 = PTR_DAT_043796d0;
  param_2 = (long *)*param_2;
  uVar12 = *param_3;
  plVar8[7] = 0;
  *(undefined4 *)(plVar8 + 8) = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar8 + 6) = 0;
  if (((*puVar3 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar8 + 10) = 0;
  *plVar8 = (long)&PTR_LAB_04285f40;
  plVar8[1] = lVar11;
  plVar8[0xb] = (long)&PTR_LAB_04286000;
  plVar8[0xc] = 0;
  plVar8[9] = (long)&PTR_LAB_04285fd0;
  nn::os::InitializeLightEvent((long)plVar8 + 0x6c,0,1);
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  uStack_78 = 0x38e38e38e38e38e;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_a8 = 0x38e38e38e38e38e;
  uStack_a0 = 0;
  plVar8[0x13] = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = (ulong)uStack_94 << 0x20;
  plVar8[0x14] = (long)param_2;
  plVar8[0x15] = 0x38e38e38e38e38e;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = (ulong)uStack_64 << 0x20;
  plVar8[0x1a] = (long)param_2;
  plVar8[0x1b] = 0x38e38e38e38e38e;
  local_90 = 0;
  local_88 = 0;
  local_b0 = param_2;
  local_80 = param_2;
  FUN_02b92754(&local_d0);
  plVar8[0x1f] = 0;
  plVar8[0x20] = (long)(plVar8 + 0x20);
  plVar8[0x21] = (long)(plVar8 + 0x20);
  plVar8[0x22] = 0;
  plVar8[0x27] = (long)(plVar8 + 0x26);
  *(undefined1 *)(plVar8 + 0x2a) = 0;
  plVar8[0x2b] = 0;
  plVar8[0x28] = (long)(plVar8 + 0x26);
  plVar8[0x29] = 0;
  *plVar8 = (long)&PTR_FUN_04285e58;
  plVar8[0x23] = (long)(plVar8 + 0x23);
  plVar8[0x24] = (long)(plVar8 + 0x23);
  plVar8[9] = (long)&PTR_LAB_04285ee8;
  plVar8[0xb] = (long)&PTR_LAB_04285f18;
  plVar8[0x25] = 0;
  plVar8[0x26] = 0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  plVar8[0x2c] = 0;
  plVar8[0x2d] = 0;
  (*DAT_043f0318)(&local_d0);
  (*DAT_043f0310)(&local_d0,*param_4);
  (*DAT_043f0328)(&local_d0,*(undefined4 *)(param_4 + 1));
  uVar12 = uVar12 & 0xfffffffffffff000;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar12,0x1000);
  lVar11 = plVar8[0x2c];
  plVar8[0x2c] = lVar9;
  if (lVar11 != 0) {
    plVar1 = (long *)plVar8[0x2d];
    lVar9 = plVar8[0x2e];
    lVar13 = plVar8[0x2f];
    uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar10 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar11,lVar9,lVar13);
        goto LAB_02b8d278;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar11,lVar9,lVar13);
  }
LAB_02b8d278:
  plVar8[0x2d] = (long)param_2;
  plVar8[0x2e] = uVar12;
  plVar8[0x2f] = 0x1000;
  (*DAT_043f0320)(&local_d0,plVar8[0x2c],uVar12);
  (*DAT_043f0350)(plVar8 + 0x30,&local_d0);
  FUN_02b91894(plVar8 + 0xd,uVar12,0);
  plVar8[1] = (long)param_1;
  plVar8[2] = (long)plVar8;
  plVar8[3] = 0x280;
  plVar8[4] = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return plVar8;
}


