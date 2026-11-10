/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025985e0; name: FUN_025985e0
 */


void FUN_025985e0(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  if (((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0xbc), iVar2 == 0)) &&
     (iVar2 = *(int *)(param_1 + 0xb8), iVar2 == 0)) {
    iVar2 = *(int *)(param_1 + 0xb4);
  }
  switch(iVar2) {
  case 1:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0xf;
    local_40 = 0x384865c952df5a85;
    pcStack_38 = "SET_STATE_SUNNY";
    break;
  case 2:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x10;
    local_40 = 0x262d24d1edc64a4a;
    pcStack_38 = "SET_STATE_CLOUDY";
    break;
  case 3:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0xf;
    local_40 = 0x7df28cdb2687db6b;
    pcStack_38 = "SET_STATE_RAINY";
    break;
  case 4:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0xe;
    local_40 = 0x537b61ab8a19a52d;
    pcStack_38 = "SET_STATE_SNOW";
    break;
  case 5:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x11;
    local_40 = 0xca7442a814663291;
    pcStack_38 = "SET_STATE_DROUGHT";
    break;
  case 6:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0xd;
    local_40 = 0x888366a58243355a;
    pcStack_38 = "SET_STATE_FOG";
    break;
  case 7:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x14;
    local_40 = 0x19ddb2b61b44d2a8;
    pcStack_38 = "SET_STATE_HEAVY_RAIN";
    break;
  case 8:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x12;
    local_40 = 0x1ec3fe9878fb1e3c;
    pcStack_38 = "SET_STATE_BLIZZARD";
    break;
  default:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x19;
    local_40 = 0x1859059e13fd9496;
    pcStack_38 = "SET_STATE_WEATHER_SILENCE";
  }
  local_28 = (long *)0x0;
  uVar3 = *(undefined8 *)PTR_DAT_04379c30;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)PTR_DAT_04379c38 = uVar3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_02913338(uVar3,&local_40,&local_c0,0,0,0);
  pcVar1 = local_b8;
  if (local_b8 == (code *)0x0) {
    local_b8 = (code *)0x0;
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


