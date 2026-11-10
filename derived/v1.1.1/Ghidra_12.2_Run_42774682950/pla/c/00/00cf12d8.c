/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf12d8; name: FUN_00cf12d8
 */


float FUN_00cf12d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  fVar6 = *(float *)(param_1 + 0x2e0);
  if (*(char *)(param_1 + 0x2e4) != '\0') {
    local_40 = 0x1073f2d92331daf9;
    pcStack_38 = "ai_common";
    local_30 = 9;
    local_28 = (long *)0x0;
    local_60 = 0xa07aab425c16db16;
    pcStack_58 = "bait_effect_perception_down_hearing_rate";
    local_50 = 0x28;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379660), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar5 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar5;
    FUN_00d7d9e4(&local_18,uVar5,&local_40);
    if (local_18 == (long *)0x0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)FUN_00d7905c(local_18,&local_60);
      if (local_18 != (long *)0x0) {
        plVar1 = local_18 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_18 + 0x10))();
        }
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    fVar6 = fVar6 * fVar7;
  }
  return fVar6;
}


