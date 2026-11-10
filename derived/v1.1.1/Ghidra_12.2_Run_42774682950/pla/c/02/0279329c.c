/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279329c; name: FUN_0279329c
 */


void FUN_0279329c(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar6;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8 [16];
  undefined1 auStack_98 [48];
  undefined1 local_68;
  undefined1 local_67;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  
  local_c0 = *param_2;
  local_b8 = param_2[1];
  uStack_b0 = param_2[2];
  FUN_0278ad08(local_a8,&local_c0);
  puVar2 = PTR_DAT_0437b630;
  if (local_a8[0] != '\0') {
    uVar6 = extraout_x1;
    if (((*PTR_DAT_0437b630 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630), uVar6 = extraout_x1_04, iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
      uVar6 = extraout_x1_05;
    }
    puVar3 = PTR_DAT_0437b638;
    DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
    if (DAT_043ad1d0 != 0) {
      FUN_00db1574(DAT_043ad1d0,"content_id",auStack_98);
      uVar6 = extraout_x1_00;
    }
    if (((*puVar2 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630), uVar6 = extraout_x1_06, iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
      uVar6 = extraout_x1_07;
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"api_type",2);
      uVar6 = extraout_x1_01;
    }
    if (((*puVar2 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630,uVar6,local_67), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"area_id",local_67);
    }
    FUN_00db1124((double)local_64,"point_x");
    FUN_00db1124((double)local_60,"point_y");
    FUN_00db1124((double)local_5c,"point_z");
    uVar6 = extraout_x1_02;
    if (((*puVar2 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630,extraout_x1_02,local_58),
       uVar6 = extraout_x1_08, iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
      uVar6 = extraout_x1_09;
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"f_point",local_58);
      uVar6 = extraout_x1_03;
    }
    if (((*puVar2 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630,uVar6,local_68), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"ridelv",local_68);
    }
    auVar8 = FUN_02785978(1);
    uVar6 = auVar8._8_8_;
    if ((auVar8._0_8_ & 1) == 0) {
      uVar7 = 0;
      bVar1 = *puVar2;
    }
    else {
      auVar8 = FUN_02785978(2);
      uVar6 = auVar8._8_8_;
      if ((auVar8._0_8_ & 1) == 0) {
        uVar7 = 1;
        bVar1 = *puVar2;
      }
      else {
        auVar8 = FUN_02785978(3);
        uVar6 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) {
          uVar7 = 2;
          bVar1 = *puVar2;
        }
        else {
          auVar8 = FUN_02785978(4);
          uVar6 = auVar8._8_8_;
          if ((auVar8._0_8_ & 1) == 0) {
            uVar7 = 3;
            bVar1 = *puVar2;
          }
          else {
            auVar8 = FUN_02785978(5);
            uVar6 = auVar8._8_8_;
            uVar7 = 4;
            if ((auVar8._0_8_ & 1) != 0) {
              uVar7 = 5;
            }
            bVar1 = *puVar2;
          }
        }
      }
    }
    if (((bVar1 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630,uVar6,uVar7), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"my_open_map",uVar7);
    }
    uVar4 = FUN_02786460();
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar3;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,"my_ride_lv",uVar4);
    }
    FUN_00db16f8(4);
  }
  return;
}


