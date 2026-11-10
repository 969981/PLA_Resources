/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daac50; name: FUN_00daac50
 */


undefined4 FUN_00daac50(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar3 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar3;
  if ((lVar3 == 0) || (FUN_01148f20(&local_28), local_28 == (long *)0x0)) {
    return 0;
  }
  uVar1 = FUN_0112ed20(local_28,0);
  if (local_28 == (long *)0x0) {
    return uVar1;
  }
  uVar4 = FUN_02a43a5c(local_28[0xb]);
  if ((uVar4 & 1) == 0) {
    return uVar1;
  }
  (**(code **)(*local_28 + 0x20))(local_28);
  return uVar1;
}


