/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013970a0; name: FUN_013970a0
 */


undefined8 FUN_013970a0(void)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_28);
  if (local_28 == (long *)0x0) {
    return 0;
  }
  uVar1 = FUN_01123cf0();
  uVar4 = 0;
  switch(uVar1) {
  case 2:
    uVar4 = 1;
  default:
    goto joined_r0x013971c4;
  case 3:
    uVar4 = 2;
    break;
  case 4:
    uVar4 = 3;
    break;
  case 5:
    uVar4 = 4;
    break;
  case 7:
    uVar4 = 5;
    break;
  case 8:
    uVar4 = 6;
    break;
  case 9:
    uVar4 = 7;
    break;
  case 10:
    uVar4 = 8;
joined_r0x013971c4:
    if (local_28 == (long *)0x0) {
      return uVar4;
    }
    goto LAB_01397124;
  }
  if (local_28 != (long *)0x0) {
LAB_01397124:
    uVar3 = FUN_02a43a5c(local_28[0xb]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return uVar4;
}


