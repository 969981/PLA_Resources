/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a41d38; name: FUN_02a41d38
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02a41d38(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xb8,8);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
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
    FUN_02a42024();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  *puVar7 = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  FUN_02a42024();
  *puVar7 = &PTR_LAB_0427d1b0;
  puVar7[0xf] = 0;
  puVar7[9] = &PTR_LAB_0427d218;
  puVar7[10] = &PTR_LAB_0427d278;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar4 = DAT_043f1798;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar1 = tpidr_el0;
    lVar8 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(long *)(lVar1 + 0x20) = DAT_043f1798;
      lVar8 = lVar4;
    }
  }
  puVar7[0x12] = 0;
  *(undefined4 *)(puVar7 + 0x13) = 0;
  puVar7[0x10] = lVar8;
  puVar7[0x11] = 0x1fffffffffffffff;
  nn::os::InitializeLightEvent((long)puVar7 + 0xa4,0,1);
  puVar7[0x16] = 0;
  puVar7[1] = param_1;
  puVar7[2] = puVar7;
  puVar7[3] = 0xb8;
  puVar7[4] = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return puVar7;
}


