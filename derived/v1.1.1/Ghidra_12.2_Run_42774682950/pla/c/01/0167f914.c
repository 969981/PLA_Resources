/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167f914; name: FUN_0167f914
 */


void FUN_0167f914(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_18);
  if (local_18 != (long *)0x0) {
    local_40 = 0x2a231f3f4c127744;
    pcStack_38 = "FSYS_TUTORIAL_MODE_CRAFT";
    local_30 = 0x18;
    local_28 = (long *)0x0;
    uVar2 = FUN_010f4bb4(local_18,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar2 & 1) != 0) {
      local_40 = 0xcb28ff671a2bf67c;
      FUN_0165b1f8(&local_40,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,
                   &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
    }
    if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*local_18 + 0x20))(local_18);
    }
  }
  FUN_00db16f8(0x12);
  return;
}


