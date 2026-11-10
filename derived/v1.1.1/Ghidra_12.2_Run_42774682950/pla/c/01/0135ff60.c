/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135ff60; name: FUN_0135ff60
 */


void FUN_0135ff60(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *local_40;
  long *local_38;
  
  puVar2 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar4 = PTR_DAT_04379568;
  puVar3 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
  FUN_0114907c(&local_40);
  uVar5 = FUN_01123ce8(local_38);
  if ((undefined1 *)local_40[0x11] != &DAT_cbf29ce484222645) {
    FUN_01360188(0,uVar5);
  }
  if ((undefined1 *)local_40[0x12] != &DAT_cbf29ce484222645) {
    FUN_01360188(1,uVar5);
  }
  if ((undefined1 *)local_40[0x13] != &DAT_cbf29ce484222645) {
    FUN_01360188(2,uVar5);
  }
  if ((undefined1 *)local_40[0x14] != &DAT_cbf29ce484222645) {
    FUN_01360188(3,uVar5);
  }
  if ((undefined1 *)local_40[0x17] != &DAT_cbf29ce484222645) {
    FUN_01360188(4,uVar5);
  }
  if ((undefined1 *)local_40[0x15] != &DAT_cbf29ce484222645) {
    FUN_01360188(5,uVar5);
  }
  if ((undefined1 *)local_40[0x10] != &DAT_cbf29ce484222645) {
    FUN_01360188(6,uVar5);
  }
  plVar1 = local_38;
  if ((local_40 != (long *)0x0) &&
     (uVar7 = FUN_02a43a5c(local_40[0xb]), plVar1 = local_38, (uVar7 & 1) != 0)) {
    (**(code **)(*local_40 + 0x20))(local_40);
    plVar1 = local_38;
  }
  if ((plVar1 != (long *)0x0) && (uVar7 = FUN_02a43a5c(plVar1[0xb]), (uVar7 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


