/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a3370; name: FUN_010a3370
 */


undefined8
FUN_010a3370(undefined4 *param_1,int *param_2,int param_3,int param_4,short param_5,int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  if (((*param_2 == param_3) && (param_2[1] == param_4)) && ((short)param_2[2] == param_5)) {
    lVar8 = 0;
  }
  else if (((param_2[0x16] == param_3) && (param_2[0x17] == param_4)) &&
          ((short)param_2[0x18] == param_5)) {
    lVar8 = 1;
  }
  else {
    if (((param_2[0x2c] != param_3) || (param_2[0x2d] != param_4)) ||
       ((short)param_2[0x2e] != param_5)) {
      return 0;
    }
    lVar8 = 2;
  }
  if (param_6 == 1) {
    lVar4 = lVar8 * 0x16 + 10;
  }
  else {
    lVar4 = lVar8 * 0x16 + 0x10;
    if (param_6 != 2) {
      lVar4 = lVar8 * 0x16 + 4;
    }
  }
  local_40 = 0x63e2672f9e43a54e;
  pcStack_38 = "battle_logic";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  FUN_02a4754c(auStack_60,param_2 + lVar4);
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar7;
  FUN_00d7d9e4(&local_18,uVar7,&local_40);
  uVar5 = 0;
  if ((local_18 != (long *)0x0) &&
     (uVar5 = FUN_00d78f50(local_18,auStack_60), local_18 != (long *)0x0)) {
    plVar1 = local_18 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))(local_18);
    }
  }
  *param_1 = uVar5;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return 1;
}


