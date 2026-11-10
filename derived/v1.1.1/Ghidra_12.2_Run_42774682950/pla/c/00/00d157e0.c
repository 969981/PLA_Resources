/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d157e0; name: FUN_00d157e0
 */


void FUN_00d157e0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_0437b1a0;
  if (((*PTR_DAT_0437b1a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar5 != 0))
  {
    FUN_00100250(&LAB_00d15f90,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  puVar4 = PTR_DAT_0437b1b0;
  puVar3 = PTR_DAT_0437b1a8;
  *(undefined8 *)PTR_DAT_0437b1b0 = *(undefined8 *)PTR_DAT_0437b1a8;
  FUN_010ca5e8();
  puVar6 = (undefined8 *)FUN_00d14a3c();
  *(undefined8 *)PTR_DAT_0437b1b8 = *puVar6;
  FUN_00d14514();
  uVar11 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x148);
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b1a0,uVar11), iVar5 != 0)) {
    FUN_00100250(&LAB_00d15f90,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar7;
  FUN_010c87c4(uVar7,uVar11);
  plVar8 = (long *)FUN_00d1603c();
  lVar9 = *plVar8;
  *(long *)PTR_DAT_0437b198 = lVar9;
  if (lVar9 == 0) {
    return;
  }
  if ((*PTR_DAT_0437b180 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_0437b180);
    if (iVar5 != 0) {
      FUN_00100250(&LAB_00d15ee4,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
  }
  lVar12 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar12;
  uVar1 = *(byte *)(lVar12 + 0x50) - 2;
  if (uVar1 < 9) {
    uVar10 = *(undefined4 *)(&DAT_03a781d4 + (long)(char)uVar1 * 4);
  }
  else {
    uVar10 = 1;
  }
  FUN_02c2c440(lVar9,uVar10);
  return;
}


