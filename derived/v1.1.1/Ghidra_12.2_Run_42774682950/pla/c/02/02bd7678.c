/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd7678; name: FUN_02bd7678
 */


void FUN_02bd7678(long param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  long *plVar12;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 600);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24c));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02bd76dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02bd76dc:
  *(undefined8 *)(param_1 + 600) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24c));
  puVar8 = *(undefined2 **)(param_1 + 0x1f0);
  if (puVar8 == *(undefined2 **)(param_1 + 0x1f8)) {
    lVar4 = (long)puVar8 - *(long *)(param_1 + 0x1e8) >> 1;
    uVar6 = lVar4 + 1;
    if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)*(undefined2 **)(param_1 + 0x1f8) - *(long *)(param_1 + 0x1e8);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar7 >> 1)) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x200) + 0x10))
                        (*(long **)(param_1 + 0x200),uVar6 << 1,2);
      if (lVar5 == 0) {
        (**(code **)(**(long **)(param_1 + 0x200) + 0xb8))();
      }
    }
    puVar8 = (undefined2 *)(lVar5 + lVar4 * 2);
    puVar9 = puVar8 + 1;
    *puVar8 = param_2;
    puVar11 = *(undefined2 **)(param_1 + 0x1e8);
    puVar10 = *(undefined2 **)(param_1 + 0x1f0);
    if ((long)puVar10 - (long)puVar11 != 0) {
      uVar7 = ((long)puVar10 - (long)puVar11) - 2;
      uVar1 = ((uint)(uVar7 >> 1) & 0x7fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar4 = -((ulong)uVar1 & 3);
        do {
          puVar10 = puVar10 + -1;
          bVar3 = lVar4 != -1;
          lVar4 = lVar4 + 1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar10;
        } while (bVar3);
      }
      if (5 < uVar7) {
        do {
          puVar8[-1] = puVar10[-1];
          puVar8[-2] = puVar10[-2];
          puVar8[-3] = puVar10[-3];
          puVar10 = puVar10 + -4;
          puVar8 = puVar8 + -4;
          *puVar8 = *puVar10;
        } while (puVar11 != puVar10);
      }
      puVar11 = *(undefined2 **)(param_1 + 0x1e8);
    }
    *(undefined2 **)(param_1 + 0x1e8) = puVar8;
    *(undefined2 **)(param_1 + 0x1f0) = puVar9;
    lVar4 = *(long *)(param_1 + 0x1f8);
    *(ulong *)(param_1 + 0x1f8) = lVar5 + uVar6 * 2;
    if (puVar11 != (undefined2 *)0x0) {
      plVar12 = *(long **)(param_1 + 0x200);
      lVar4 = lVar4 - (long)puVar11;
      uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar6 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar12,puVar11,lVar4,2);
          goto LAB_02bd7880;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,lVar4,2);
    }
  }
  else {
    *puVar8 = param_2;
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 2;
  }
LAB_02bd7880:
  *(undefined1 *)(param_1 + 0x261) = 1;
  return;
}


