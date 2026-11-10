/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109ff50; name: FUN_0109ff50
 */


int FUN_0109ff50(undefined4 param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379600;
  *(undefined8 *)PTR_DAT_04379608 = uVar6;
  iVar4 = FUN_02c50d20(uVar6,param_1,0x46);
  iVar5 = param_2;
  switch(iVar4) {
  case 0xfc:
    iVar5 = param_2 / 3;
    break;
  case 0xfd:
    iVar5 = param_2 + 3;
    if (-1 < param_2) {
      iVar5 = param_2;
    }
    iVar5 = iVar5 >> 2;
    break;
  case 0xfe:
    if (param_2 < 0) {
      iVar5 = param_2 + 1;
    }
    iVar5 = iVar5 >> 1;
    break;
  case 0xff:
    break;
  default:
    iVar5 = iVar4;
  }
  uVar7 = FUN_02c50624(param_1);
  if ((((uVar7 & 1) != 0) && (iVar4 = FUN_0109fe90(param_1), iVar4 != 6)) &&
     (iVar4 = FUN_02c8b874(param_3,iVar4), iVar4 == 2)) {
    local_58 = 0xf11db8bc397f5c46;
    puStack_50 = &DAT_038cb993;
    local_48 = 4;
    local_40 = (long *)0x0;
    local_78 = 0x320f0b24919c527e;
    pcStack_70 = "HpRecoverRateByDislikeKinomi";
    local_68 = 0x1c;
    local_60 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar6;
    FUN_00d7d9e4(&local_38,uVar6,&local_58);
    if (local_38 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00d78f50(local_38,&local_78);
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 10;
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
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    iVar5 = (iVar5 * param_2) / 100;
  }
  return iVar5;
}


