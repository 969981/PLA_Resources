/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009495bc; name: FUN_009495bc
 */


void FUN_009495bc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  long local_70;
  undefined1 local_68;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x30);
    lVar7 = *plVar6;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar7) {
      local_68 = 0;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
            while (*plVar6 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar2) {
                *plVar6 = lVar5;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_009497ac;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_009497ac:
      local_68 = 1;
    }
    local_90 = PTR_LAB_04379da0;
    local_88 = (code *)PTR_FUN_04379da8;
    local_80 = PTR_LAB_04379db0;
    local_70 = param_1 + 0x20;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x90))(&local_90);
  }
  plVar6 = *(long **)(param_1 + 0x38);
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,param_3,param_4);
      goto LAB_0094967c;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,param_3,param_4);
LAB_0094967c:
  pcVar3 = local_88;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
  if (local_88 != (code *)0x0) {
    local_90 = (undefined *)0x0;
    local_88 = (code *)0x0;
    local_80 = (undefined *)0x0;
    (*pcVar3)(&local_70);
  }
  return;
}


