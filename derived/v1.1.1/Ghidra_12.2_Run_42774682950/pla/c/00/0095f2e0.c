/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095f2e0; name: FUN_0095f2e0
 */


void FUN_0095f2e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != puVar8) {
    uVar11 = *(ulong *)(param_1 + 0x40);
    plVar12 = (long *)((long)puVar8 + (uVar11 >> 6 & 0x3fffffffffffff8));
    uVar10 = *(long *)(param_1 + 0x48) + uVar11;
    plVar14 = (long *)(*plVar12 + (uVar11 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar8 + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                     (uVar10 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar7 = (long *)*plVar14;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        plVar14 = plVar14 + 1;
        if ((long)plVar14 - *plVar12 == 0x1000) {
          plVar12 = plVar12 + 1;
          plVar14 = (long *)*plVar12;
        }
      } while (plVar2 != plVar14);
      puVar8 = *(undefined8 **)(param_1 + 8);
      puVar9 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar10 = (long)puVar9 - (long)puVar8 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar10) {
    lVar6 = tpidr_el0;
    do {
      plVar14 = *(long **)(param_1 + 0x50);
      uVar13 = *puVar8;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) == 0) {
LAB_0095f43c:
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar13,0x1000,8);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0095f43c;
        FUN_02bcc824(plVar14,uVar13,0x1000,8);
      }
      puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar10 = *(long *)(param_1 + 0x10) - (long)puVar8 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar8;
    } while (2 < uVar10);
  }
  if (uVar10 == 1) {
    uVar13 = 0x100;
  }
  else {
    if (uVar10 != 2) {
      return;
    }
    uVar13 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  return;
}


