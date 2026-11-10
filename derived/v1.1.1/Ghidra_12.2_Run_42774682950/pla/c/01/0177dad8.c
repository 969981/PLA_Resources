/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177dad8; name: FUN_0177dad8
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0177dad8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0xb0,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
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
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  puVar1 = PTR_DAT_043796d0 + 0x10;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 6) = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)puVar1;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar6 + 10) = 0;
  *plVar6 = (long)&PTR_LAB_04225228;
  plVar6[1] = lVar8;
  plVar6[9] = (long)&PTR_LAB_04225260;
  plVar6[0x11] = 0;
  plVar6[0xb] = (long)&DAT_cbf29ce484222645;
  plVar6[0xc] = (long)&DAT_03996322;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  FUN_0177dee4(plVar6 + 0x12);
  plVar6[1] = (long)param_1;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0xb0;
  plVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


