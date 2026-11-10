/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0149139c; name: FUN_0149139c
 */


void FUN_0149139c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 != puVar6) {
    uVar10 = *(ulong *)(param_1 + 0x40);
    uVar9 = *(long *)(param_1 + 0x48) + uVar10;
    lVar11 = puVar6[uVar10 / 0x38] + (uVar10 % 0x38) * 0x48;
    lVar12 = puVar6[uVar9 / 0x38] + (uVar9 % 0x38) * 0x48;
    if (lVar12 != lVar11) {
      plVar13 = puVar6 + uVar10 / 0x38;
      do {
        while( true ) {
          plVar5 = *(long **)(lVar11 + 8);
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          lVar11 = lVar11 + 0x48;
          if (lVar11 - *plVar13 != 0xfc0) break;
          plVar13 = plVar13 + 1;
          lVar11 = *plVar13;
          if (lVar12 == lVar11) goto LAB_014914a8;
        }
      } while (lVar12 != lVar11);
LAB_014914a8:
      puVar6 = *(undefined8 **)(param_1 + 8);
      puVar8 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar9 = (long)puVar8 - (long)puVar6 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar9) {
    lVar11 = tpidr_el0;
    do {
      plVar13 = *(long **)(param_1 + 0x50);
      uVar7 = *puVar6;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) == 0) {
LAB_0149154c:
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar7,0xfc0,8);
      }
      else {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_0149154c;
        FUN_02bcc824(plVar13,uVar7,0xfc0,8);
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      uVar9 = *(long *)(param_1 + 0x10) - (long)puVar6 >> 3;
      *(undefined8 **)(param_1 + 8) = puVar6;
    } while (2 < uVar9);
  }
  if (uVar9 == 1) {
    uVar7 = 0x1c;
  }
  else {
    if (uVar9 != 2) {
      return;
    }
    uVar7 = 0x38;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}


