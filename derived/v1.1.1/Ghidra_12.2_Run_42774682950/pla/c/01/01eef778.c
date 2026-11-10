/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eef778; name: FUN_01eef778
 */


void FUN_01eef778(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (param_2 != (long *)0x0) {
    lVar4 = tpidr_el0;
    do {
      while( true ) {
        plVar11 = (long *)*param_2;
        puVar12 = (undefined8 *)param_2[3];
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        plVar13 = *(long **)(param_1 + 0x38);
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) break;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) break;
        FUN_02bcc824(plVar13,param_2,0x30,8);
        param_2 = plVar11;
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,param_2,0x30,8);
      param_2 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}


