/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013973d0; name: FUN_013973d0
 */


uint FUN_013973d0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char local_38 [8];
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379558), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  if ((local_28 != (long *)0x0) && (bVar1 = FUN_0112226c(), 9 < bVar1)) {
    FUN_0275d180(local_38);
    if ((local_38[0] != '\0') && (FUN_01122294(local_28,local_30), local_38[0] != '\0')) {
      local_38[0] = '\0';
    }
  }
  uVar2 = FUN_013974d0();
  if ((local_28 != (long *)0x0) && (uVar4 = FUN_02a43a5c(local_28[0xb]), (uVar4 & 1) != 0)) {
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return uVar2 & 1;
}


