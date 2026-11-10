/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094af34; name: FUN_0094af34
 */


void FUN_0094af34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long local_60;
  undefined1 local_58;
  undefined4 *local_40;
  undefined4 local_34;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    local_58 = 0;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0094b044;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0094b044:
    local_58 = 1;
  }
  pcVar6 = (code *)PTR_FUN_04379da8;
  local_60 = param_1 + 0x20;
  if (*(char *)(param_1 + 0x19) == '\0') {
    lVar4 = param_1 + 0x38;
    uVar5 = FUN_02bcf5a8(lVar4);
    if ((uVar5 & 1) == 0) {
      local_40 = &local_34;
      local_34 = 0;
      FUN_0094b04c(lVar4,&local_40);
      FUN_02bcf284(lVar4);
      if (pcVar6 == (code *)0x0) {
        return;
      }
      goto LAB_0094afa8;
    }
  }
  FUN_02bcf284(param_1 + 0x38);
  pcVar6 = (code *)PTR_FUN_04379da8;
LAB_0094afa8:
  (*pcVar6)(&local_60);
  return;
}


