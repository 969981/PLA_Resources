/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a2b1ac; name: FUN_00a2b1ac
 */


undefined8 FUN_00a2b1ac(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_48;
  undefined8 *local_40;
  char local_38;
  
  uVar9 = *param_2;
  FUN_009b3814(&local_48);
  lVar5 = local_48;
  local_48 = 0;
  if (lVar5 != 0) {
    if ((local_38 != '\0') && (plVar6 = *(long **)(lVar5 + 0x18), plVar6 != (long *)0x0)) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    plVar6 = (long *)*local_40;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,0x20,8);
        return uVar9;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0x20,8);
  }
  return uVar9;
}


