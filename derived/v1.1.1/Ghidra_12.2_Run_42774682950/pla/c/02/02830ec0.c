/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02830ec0; name: FUN_02830ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02830ec0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar2 = PTR_DAT_04379528;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_0426efd0;
  param_1[1] = lVar6;
  param_1[9] = (long)&PTR_LAB_0426f008;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xd] = (long)&PTR_LAB_0426efa8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,8);
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    _DAT_000000e8 = 0;
    _DAT_000000e0 = 0;
    _DAT_000000d8 = 0;
    _DAT_000000d0 = 0;
    _DAT_000000c8 = 0;
    _DAT_000000c0 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_02807718();
  }
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


