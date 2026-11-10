/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6004; name: FUN_010c6004
 */


void FUN_010c6004(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  FUN_02c70c90(*(undefined8 *)(param_3 + 0x98),*(undefined8 *)(param_1 + 0x170));
  uVar8 = *(undefined8 *)(param_1 + 0x170);
  uVar4 = FUN_02c6f5e8(*(undefined8 *)(param_3 + 0x98));
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  lVar9 = *(long *)(param_3 + 0x98);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_010c60b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010c60b8:
  cVar3 = FUN_02c69ba8(lVar9);
  *(undefined8 *)(lVar9 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x24));
  if ((byte)(cVar3 - 2U) < 9) {
    uVar7 = *(undefined4 *)(&DAT_03a78cf0 + (long)(char)(cVar3 - 2U) * 4);
  }
  else {
    uVar7 = 1;
  }
  FUN_02c36550(param_1,param_2,uVar8,uVar4,uVar7);
  return;
}


