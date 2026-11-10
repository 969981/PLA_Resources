/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397650; name: FUN_01397650
 */


void FUN_01397650(void)

{
  int iVar1;
  ulong uVar2;
  long *local_18;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_18);
  if (local_18 != (long *)0x0) {
    FUN_011222a8();
    if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*local_18 + 0x20))(local_18);
    }
  }
  return;
}


