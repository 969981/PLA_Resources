/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a43aa0; name: FUN_02a43aa0
 */


void FUN_02a43aa0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar2 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_0427d3c0;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_0427d3f0;
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  PTR_DAT_043794a0[8] = 1;
  *param_1 = (long)&PTR_FUN_0427d370;
  param_1[9] = (long)&PTR_LAB_0427d3a0;
  nn::os::InitializeLightEvent((long)param_1 + 0x54,0,1);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  lVar5 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  param_1[0x11] = lVar6;
  param_1[0x12] = 0x7ffffffffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  lVar5 = param_1[1];
  param_1[0x17] = lVar6;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x18] = 0x7ffffffffffffff;
  param_1[0x19] = 0;
  local_68 = 0;
  local_40 = 0;
  local_38 = 0;
  local_78 = 0x3fffffffffffffff;
  uStack_70 = 0;
  uStack_48 = 0x3fffffffffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = (ulong)uStack_64 << 0x20;
  param_1[0x21] = lVar5;
  param_1[0x22] = 0x3fffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = (ulong)uStack_34 << 0x20;
  param_1[0x27] = lVar5;
  param_1[0x28] = 0x3fffffffffffffff;
  local_60 = 0;
  local_58 = 0;
  lStack_80 = lVar5;
  local_50 = lVar5;
  FUN_02a459e4(&local_a0);
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = lVar5;
  param_1[0x30] = 0x1fffffffffffffff;
  param_1[0x31] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x1a4,0,1);
  param_1[0x36] = 0;
  return;
}


