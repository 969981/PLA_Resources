/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cf7dc; name: FUN_018cf7dc
 */


void FUN_018cf7dc(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
                 ,uint param_7,uint param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  if ((param_3 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x74) + -1;
    if (((*(int *)(param_1 + 0x74) < 1) || (*(int *)(param_1 + 0x74) = iVar3, iVar3 == 0)) &&
       (*(char *)(param_1 + 0x6a) != '\0')) {
      lVar4 = FUN_018cfdbc(param_1,0);
      goto joined_r0x018cf954;
    }
    lVar4 = param_1;
    if ((param_2 & 1) != 0) goto LAB_018cf958;
LAB_018cf838:
    iVar3 = *(int *)(param_1 + 0x70) + -1;
    if (((0 < *(int *)(param_1 + 0x70)) && (*(int *)(param_1 + 0x70) = iVar3, iVar3 != 0)) ||
       (*(char *)(param_1 + 0x69) == '\0')) {
      cVar6 = *(char *)(param_1 + 0x6b);
      goto joined_r0x018cf850;
    }
    lVar4 = FUN_018d03b4(param_1,0);
    cVar6 = *(char *)(param_1 + 0x6b);
    if ((param_4 & 1) == 0) goto LAB_018cf854;
LAB_018cf998:
    if (cVar6 != '\0') goto LAB_018cf858;
    FUN_018d0518();
    uVar5 = 1;
LAB_018cfa50:
    lVar4 = FUN_018d06a4(param_1,uVar5);
    cVar6 = *(char *)(param_1 + 0x6c);
    if ((param_5 & 1) == 0) goto LAB_018cf860;
LAB_018cfa5c:
    if (cVar6 != '\0') goto LAB_018cf864;
    FUN_018d0808();
    lVar4 = FUN_018d0994(param_1,1);
joined_r0x018cfa70:
    if ((param_7 & 1) == 0) goto LAB_018cf868;
LAB_018cfa88:
    if (*(char *)(param_1 + 0x6e) == '\0') {
      lVar4 = FUN_018d0af8(param_1,1);
    }
    local_f0 = 0x782e140a080c95f0;
    local_e8 = (code *)0x39b6296;
    local_e0 = 0xf;
    uStack_d8 = 0;
    lVar4 = FUN_018cff20(lVar4,&local_f0);
    *(int *)(param_1 + 0x78) = (int)lVar4;
joined_r0x018cf87c:
    if ((param_8 & 1) != 0) goto LAB_018cfad0;
LAB_018cf880:
    iVar3 = *(int *)(param_1 + 0x7c) + -1;
    if (((0 < *(int *)(param_1 + 0x7c)) && (*(int *)(param_1 + 0x7c) = iVar3, iVar3 != 0)) ||
       (*(char *)(param_1 + 0x6f) == '\0')) goto joined_r0x018cfb14;
    FUN_018d0c5c(param_1,0);
    if ((param_6 & 1) != 0) goto LAB_018cfb18;
LAB_018cf898:
    if (((*(char *)(param_1 + 0x69) == '\0') && (*(char *)(param_1 + 0x6a) == '\0')) &&
       ((*(char *)(param_1 + 0x6e) == '\0' && (*(char *)(param_1 + 0x6f) == '\0')))) {
      *(undefined1 *)(param_1 + 0x6d) = 0;
    }
  }
  else {
    lVar4 = param_1;
    if (*(char *)(param_1 + 0x6a) == '\0') {
      FUN_018cfc30();
      lVar4 = FUN_018cfdbc(param_1,1);
    }
    local_f0 = 0xe07c11f1bf145cec;
    local_e8 = (code *)0x389bf21;
    local_e0 = 0xf;
    uStack_d8 = 0;
    lVar4 = FUN_018cff20(lVar4,&local_f0);
    *(int *)(param_1 + 0x74) = (int)lVar4;
joined_r0x018cf954:
    if ((param_2 & 1) == 0) goto LAB_018cf838;
LAB_018cf958:
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_018d0228();
      lVar4 = FUN_018d03b4(param_1,1);
    }
    local_f0 = 0xf8c8d5e5e6e3589f;
    local_e8 = (code *)0x390a3d4;
    local_e0 = 10;
    uStack_d8 = 0;
    lVar4 = FUN_018cff20(lVar4,&local_f0);
    *(int *)(param_1 + 0x70) = (int)lVar4;
    cVar6 = *(char *)(param_1 + 0x6b);
joined_r0x018cf850:
    if ((param_4 & 1) != 0) goto LAB_018cf998;
LAB_018cf854:
    if (cVar6 != '\0') {
      uVar5 = 0;
      goto LAB_018cfa50;
    }
LAB_018cf858:
    cVar6 = *(char *)(param_1 + 0x6c);
    if ((param_5 & 1) != 0) goto LAB_018cfa5c;
LAB_018cf860:
    if (cVar6 != '\0') {
      lVar4 = FUN_018d0994(param_1,0);
      goto joined_r0x018cfa70;
    }
LAB_018cf864:
    if ((param_7 & 1) != 0) goto LAB_018cfa88;
LAB_018cf868:
    iVar3 = *(int *)(param_1 + 0x78) + -1;
    if (((0 < *(int *)(param_1 + 0x78)) && (*(int *)(param_1 + 0x78) = iVar3, iVar3 != 0)) ||
       (*(char *)(param_1 + 0x6e) == '\0')) goto joined_r0x018cf87c;
    lVar4 = FUN_018d0af8(param_1,0);
    if ((param_8 & 1) == 0) goto LAB_018cf880;
LAB_018cfad0:
    if (*(char *)(param_1 + 0x6f) == '\0') {
      lVar4 = FUN_018d0c5c(param_1,1);
    }
    local_f0 = 0x84df810fcca3ffa2;
    local_e8 = (code *)0x397f39b;
    local_e0 = 0x17;
    uStack_d8 = 0;
    uVar2 = FUN_018cff20(lVar4,&local_f0);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
joined_r0x018cfb14:
    if ((param_6 & 1) == 0) goto LAB_018cf898;
LAB_018cfb18:
    if (*(char *)(param_1 + 0x6d) == '\0') {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      local_60 = 0x1f;
      local_58 = (long *)0x0;
      local_70 = 0x5a2b196bfc08580b;
      pcStack_68 = "SET_STATE_BGM_CAUTION_BATTLE_ON";
      uVar5 = *(undefined8 *)PTR_DAT_04379c30;
      local_80 = 0;
      uStack_78 = 0;
      *(undefined8 *)PTR_DAT_04379c38 = uVar5;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      FUN_02913338(uVar5,&local_70,&local_f0,0,0,0);
      pcVar1 = local_e8;
      if (local_e8 == (code *)0x0) {
        local_e8 = (code *)0x0;
      }
      else {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar1)(&local_d0);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x6d) = 1;
      cVar6 = *(char *)(param_1 + 0x69);
      goto joined_r0x018cfbd0;
    }
  }
  cVar6 = *(char *)(param_1 + 0x69);
joined_r0x018cfbd0:
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x6a) == '\0')) {
    if (*(char *)(param_1 + 0x6e) == '\0') {
      cVar6 = *(char *)(param_1 + 0x6f);
    }
    else {
      *(undefined1 *)(param_1 + 0x6e) = 0;
      cVar6 = *(char *)(param_1 + 0x6f);
    }
    if (cVar6 != '\0') {
      *(undefined1 *)(param_1 + 0x6f) = 0;
    }
  }
  return;
}


