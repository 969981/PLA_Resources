/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010469e4; name: FUN_010469e4
 */


void FUN_010469e4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_041ef428;
  param_1[1] = lVar4;
  param_1[9] = (long)&PTR_LAB_041ef460;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = 0;
  FUN_01047134(param_1 + 0xe);
  lVar3 = *plVar5;
  if ((ulong)(param_1[0xd] - lVar3 >> 3) < 5) {
    lVar4 = param_1[0xc];
    local_40 = 0;
    plStack_38 = param_1 + 0xe;
    local_58 = (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],0x28,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[0xe] + 0xb8))();
    }
    lStack_50 = local_58 + (lVar4 - lVar3 >> 3) * 8;
    local_40 = local_58 + 0x28;
    local_48 = lStack_50;
    FUN_010471e8(plVar5,&local_58);
    FUN_010472e8(&local_58);
  }
  return;
}


