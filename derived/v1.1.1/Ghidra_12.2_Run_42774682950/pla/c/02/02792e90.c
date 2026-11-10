/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02792e90; name: FUN_02792e90
 */


void FUN_02792e90(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_0437b630;
  if (((*PTR_DAT_0437b630 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  puVar4 = PTR_DAT_0437b638;
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 != 0) {
    FUN_00db1574(DAT_043ad1d0,"content_id",param_1 + 0x10);
  }
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"api_type",param_2);
  }
  uVar5 = *(undefined1 *)(param_1 + 0x41);
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"area_id",uVar5);
  }
  FUN_00db1124((double)*(float *)(param_1 + 0x44),"point_x");
  FUN_00db1124((double)*(float *)(param_1 + 0x48),"point_y");
  FUN_00db1124((double)*(float *)(param_1 + 0x4c),"point_z");
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"f_point",uVar2);
  }
  uVar5 = *(undefined1 *)(param_1 + 0x40);
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"ridelv",uVar5);
  }
  uVar7 = FUN_02785978(1);
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
    bVar1 = *puVar3;
  }
  else {
    uVar7 = FUN_02785978(2);
    if ((uVar7 & 1) == 0) {
      uVar8 = 1;
      bVar1 = *puVar3;
    }
    else {
      uVar7 = FUN_02785978(3);
      if ((uVar7 & 1) == 0) {
        uVar8 = 2;
        bVar1 = *puVar3;
      }
      else {
        uVar7 = FUN_02785978(4);
        if ((uVar7 & 1) == 0) {
          uVar8 = 3;
          bVar1 = *puVar3;
        }
        else {
          uVar7 = FUN_02785978(5);
          uVar8 = 4;
          if ((uVar7 & 1) != 0) {
            uVar8 = 5;
          }
          bVar1 = *puVar3;
        }
      }
    }
  }
  if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"my_open_map",uVar8);
  }
  uVar5 = FUN_02786460();
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar4;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"my_ride_lv",uVar5);
  }
  FUN_00db16f8(4);
  return;
}


