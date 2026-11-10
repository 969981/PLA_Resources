/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ad6fc; name: FUN_028ad6fc
 */


void FUN_028ad6fc(long *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
LAB_028ad904:
    param_1[1] = lVar2;
    return;
  }
  lVar7 = tpidr_el0;
  puVar14 = *(undefined8 **)(lVar3 + -0x38);
  do {
    if (puVar14 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar3 + -0x30);
      if (puVar13 == puVar14) {
        puVar13 = puVar14;
      }
      else {
        do {
          puVar13 = puVar13 + -3;
          puVar16 = (undefined8 *)*puVar13;
          if (puVar16 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar16 + 1);
            do {
              iVar11 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_68 = *puVar16;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
        } while (puVar13 != puVar14);
        puVar13 = *(undefined8 **)(lVar3 + -0x38);
      }
      plVar4 = *(long **)(lVar3 + -0x20);
      *(undefined8 **)(lVar3 + -0x30) = puVar14;
      lVar15 = *(long *)(lVar3 + -0x28) - (long)puVar13;
      uVar12 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar12 & 1) != 0) {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar4,puVar13,lVar15,8);
          goto LAB_028ad87c;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar13,lVar15,8);
    }
LAB_028ad87c:
    if (*(long **)(lVar3 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + -0x40) + 0x20))();
    }
    if (lVar3 + -0x58 == lVar2) goto LAB_028ad904;
    puVar14 = *(undefined8 **)(lVar3 + -0x90);
    lVar3 = lVar3 + -0x58;
  } while( true );
}


