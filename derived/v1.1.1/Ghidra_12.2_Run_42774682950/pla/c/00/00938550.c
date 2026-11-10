/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00938550; name: FUN_00938550
 */


undefined * FUN_00938550(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
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
  *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  if ((*PTR_DAT_04379ce8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04379ce8);
    if (iVar2 != 0) {
      FUN_00931848(PTR_DAT_04379cf0);
      __cxa_guard_release(PTR_DAT_04379ce8);
    }
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return PTR_DAT_04379cf0;
}


