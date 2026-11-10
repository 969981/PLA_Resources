/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117bfcc; name: FUN_0117bfcc
 */


void FUN_0117bfcc(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  char local_60 [8];
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (6 < *(int *)(param_1 + 0x618) - 1U) goto LAB_0117c0b8;
  iVar3 = snprintf(local_60,0x40,"anime_L_list_bonus_00_in_%dline",*(int *)(param_1 + 0x618));
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (local_60[0] == '\0') {
    local_80 = (long *)FUN_00938550(iVar3);
    if (local_80 == (long *)0x0) goto LAB_0117c060;
    (**(code **)(*local_80 + 0x18))(local_80);
    if (local_80 == (long *)0x0) goto LAB_0117c184;
LAB_0117c064:
    plVar5 = (long *)local_80[0xb];
    if (local_80 != (long *)0x0) goto LAB_0117c070;
LAB_0117c194:
    lStack_78 = *(long *)PTR_PTR_04379d00;
    if (local_80 == (long *)0x0) goto LAB_0117c1a4;
LAB_0117c07c:
    local_70 = local_80[0xd];
    plVar7 = local_80;
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
    FUN_02a47cd8(&local_80,uVar4,local_60);
LAB_0117c060:
    if (local_80 != (long *)0x0) goto LAB_0117c064;
LAB_0117c184:
    plVar5 = *(long **)PTR_DAT_04379c88;
    if (local_80 == (long *)0x0) goto LAB_0117c194;
LAB_0117c070:
    lStack_78 = local_80[0xc];
    if (local_80 != (long *)0x0) goto LAB_0117c07c;
LAB_0117c1a4:
    local_70 = 0;
    plVar7 = local_80;
  }
  local_68 = (long *)0x0;
  local_80 = plVar5;
  if (plVar7 == (long *)0x0) {
    local_68 = (long *)0x0;
    FUN_0283b1e8(plVar6,&local_80);
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_68 = plVar7;
    FUN_0283b1e8(plVar6,&local_80);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_0117c0b8:
  local_60[0] = -0x7e;
  local_60[1] = 'c';
  local_60[2] = -4;
  local_60[3] = -0x49;
  local_60[4] = '\f';
  local_60[5] = 'S';
  local_60[6] = 'T';
  local_60[7] = -0x62;
  pcStack_58 = "PLAY_UI_RESULT_BONUS";
  local_50 = 0x14;
  local_48 = (long *)0x0;
  FUN_028354b0(local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


