/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290f4c4; name: FUN_0290f4c4
 */


void FUN_0290f4c4(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
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
  *param_1 = (long)&DAT_04275248;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_04275278;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  PTR_DAT_04379c30[8] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)&PTR_LAB_042751f8;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = (long)&PTR_LAB_04275228;
  param_1[10] = 0;
  param_1[0xe] = 0;
  FUN_00e8e484(param_1 + 0xf);
  FUN_0290f77c(param_1 + 0x16);
  puVar2 = PTR_DAT_0437a7c0;
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar4 != 0))
  {
    local_28 = FUN_00938550();
    puVar3 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
    FUN_00100250(PTR_LAB_0437a8d8,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  puVar3 = PTR_DAT_0437a7d0;
  plVar6 = *(long **)PTR_DAT_0437a7d0;
  param_1[0x1d] = (long)plVar6;
  if (plVar6 == (long *)0x0) {
    bVar1 = *puVar2;
  }
  else {
    (**(code **)(*plVar6 + 0x18))();
    bVar1 = *puVar2;
  }
  if (((bVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar4 != 0)) {
    local_28 = FUN_00938550();
    puVar2 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
    FUN_00100250(PTR_LAB_0437a8d8,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar6 = *(long **)puVar3;
  param_1[0x1e] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x26),false,0);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return;
}


