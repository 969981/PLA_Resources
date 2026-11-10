/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3ca94; name: FUN_00d3ca94
 */


void FUN_00d3ca94(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != puVar7) {
    uVar12 = *(ulong *)(param_1 + 0x40);
    plVar13 = (long *)((long)puVar7 + (uVar12 >> 6 & 0x3fffffffffffff8));
    uVar11 = *(long *)(param_1 + 0x48) + uVar12;
    plVar14 = (long *)(*plVar13 + (uVar12 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar7 + (uVar11 >> 6 & 0x3fffffffffffff8)) +
                     (uVar11 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 != (long *)0x0) {
          lVar9 = plVar6[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        plVar14 = plVar14 + 1;
        if ((long)plVar14 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar14 = (long *)*plVar13;
        }
      } while (plVar2 != plVar14);
      puVar7 = *(undefined8 **)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar11 = (long)puVar10 - (long)puVar7 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar11) {
    lVar9 = tpidr_el0;
    do {
      plVar14 = *(long **)(param_1 + 0x50);
      uVar8 = *puVar7;
      uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar11 & 1) == 0) {
LAB_00d3cc20:
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar8,0x1000,8);
      }
      else {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00d3cc20;
        FUN_02bcc824(plVar14,uVar8,0x1000,8);
      }
      puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar11 = *(long *)(param_1 + 0x10) - (long)puVar7 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar7;
    } while (2 < uVar11);
  }
  if (uVar11 == 1) {
    uVar8 = 0x100;
  }
  else {
    if (uVar11 != 2) {
      return;
    }
    uVar8 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  return;
}


