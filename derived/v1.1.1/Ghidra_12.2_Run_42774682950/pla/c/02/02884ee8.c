/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02884ee8; name: FUN_02884ee8
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_02884ee8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
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
    FUN_00f5a01c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar4[9] = 0;
  plVar4[10] = 0;
  *plVar4 = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  FUN_00f5a01c();
  puVar1 = PTR_DAT_04387f48;
  *(undefined1 *)(plVar4 + 10) = 0;
  plVar4[9] = (long)(puVar1 + 0x40);
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x58;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)param_1;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


