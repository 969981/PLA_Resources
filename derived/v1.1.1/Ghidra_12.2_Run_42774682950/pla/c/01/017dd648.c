/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017dd648; name: FUN_017dd648
 */


void FUN_017dd648(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_68;
  
  if (param_1[2] != 0) {
    lVar2 = *param_1;
    plVar11 = (long *)param_1[1];
    *(undefined8 *)(*plVar11 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = *plVar11;
    param_1[2] = 0;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar11 != param_1) {
      lVar2 = tpidr_el0;
      do {
        plVar12 = (long *)plVar11[1];
        puVar13 = (undefined8 *)plVar11[3];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar13;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        plVar14 = (long *)param_1[3];
        uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar9 & 1) == 0) {
LAB_017dd760:
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar11,0x28,8);
        }
        else {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_017dd760;
          FUN_02bcc824(plVar14,plVar11,0x28,8);
        }
        plVar11 = plVar12;
      } while (plVar12 != param_1);
    }
  }
  return;
}


