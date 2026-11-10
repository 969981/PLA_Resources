/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019eb0f8; name: FUN_019eb0f8
 */


undefined8 FUN_019eb0f8(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_40;
  undefined8 *local_38;
  char local_30;
  undefined8 local_28;
  
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        if (((long *)plVar6[3] == (long *)0x0) || (*(long *)plVar6[3] == 0)) goto LAB_019eb178;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        lVar7 = 0;
        if ((long *)plVar6[3] != (long *)0x0) {
          lVar7 = *(long *)plVar6[3];
        }
        if (*param_2 == lVar7) {
LAB_019eb178:
          FUN_019ed30c(&local_40);
          lVar7 = local_40;
          local_40 = 0;
          if (lVar7 != 0) {
            if ((local_30 != '\0') &&
               (puVar9 = *(undefined8 **)(lVar7 + 0x18), puVar9 != (undefined8 *)0x0)) {
              piVar1 = (int *)(puVar9 + 1);
              do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 + -1 == 0) {
                puVar9[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar8 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar8;
                local_28 = *puVar9;
                FUN_02a44274(lVar8 + 0xd8,&local_28);
              }
            }
            plVar6 = (long *)*local_38;
            uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
            if ((uVar5 & 1) != 0) {
              lVar8 = tpidr_el0;
              if (*(char *)(lVar8 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar8 + 0x38d488) = 1;
                *(undefined8 *)(lVar8 + 0x38d478) = 0;
                *(undefined8 *)(lVar8 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar8 + 0x38d480)) {
                FUN_02bcc824(plVar6,lVar7,0x38,8);
                return 1;
              }
            }
            (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0x38,8);
          }
          return 1;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}


