/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123b66c; name: FUN_0123b66c
 */


uint FUN_0123b66c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *local_38;
  
  puVar2 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar4 = PTR_DAT_04379568;
  puVar3 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  uVar6 = FUN_01123ce8(local_38);
  plVar5 = local_38;
  if ((local_38 == (long *)0x0) || (uVar9 = FUN_02a43a5c(local_38[0xb]), (uVar9 & 1) == 0)) {
    bVar1 = *puVar2;
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    bVar1 = *puVar2;
  }
  if (((bVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
  FUN_0114907c(&local_38);
  uVar10 = FUN_0111b7c0(local_38,0);
  if ((local_38 != (long *)0x0) && (uVar9 = FUN_02a43a5c(local_38[0xb]), (uVar9 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  uVar7 = FUN_00b1e670(uVar6,uVar10);
  return uVar7 & 1;
}


