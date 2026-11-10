/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbe494; name: FUN_02bbe494
 */


void FUN_02bbe494(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x290);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x284));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02bbe514;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02bbe514:
  piVar8 = *(int **)(param_1 + 0x248);
  piVar7 = *(int **)(param_1 + 0x250);
  if (piVar8 != piVar7) {
    piVar10 = piVar8;
    do {
      if (*piVar10 == param_2) {
        *piVar10 = param_2;
        piVar10[1] = param_3;
        piVar10[2] = param_4;
        piVar10[3] = param_5;
        piVar10[4] = param_6;
        goto LAB_02bbe718;
      }
      piVar10 = piVar10 + 5;
    } while (piVar7 != piVar10);
  }
  puVar1 = (undefined8 *)(param_1 + 0x260);
  local_78 = param_2;
  iStack_74 = param_3;
  local_70 = param_4;
  iStack_6c = param_5;
  local_68 = param_6;
  if (piVar7 < *(int **)(param_1 + 600)) {
    FUN_02bb98b0(puVar1,piVar7,&local_78);
    *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + 0x14;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x268);
    lVar6 = (long)piVar7 - (long)piVar8 >> 2;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar2 = lVar6 * -0x3333333333333333 + 1;
    if (uVar12 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)*(int **)(param_1 + 600) - (long)piVar8 >> 2;
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if ((ulong)(lVar9 * -0x3333333333333333) < uVar12 >> 1) {
      uVar12 = uVar2;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 * 0x14,4);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar16 = lVar9 + lVar6 * 4;
    FUN_02bb98b0(puVar1,lVar16,&local_78);
    lVar14 = *(long *)(param_1 + 0x248);
    lVar6 = lVar16 + 0x14;
    lVar15 = *(long *)(param_1 + 0x250);
    if (lVar15 != lVar14) {
      do {
        lVar16 = lVar16 + -0x14;
        lVar15 = lVar15 + -0x14;
        FUN_02bb98b0(puVar1,lVar16,lVar15);
      } while (lVar14 != lVar15);
      lVar14 = *(long *)(param_1 + 0x248);
    }
    *(long *)(param_1 + 0x250) = lVar6;
    lVar6 = *(long *)(param_1 + 600);
    *(long *)(param_1 + 0x248) = lVar16;
    *(ulong *)(param_1 + 600) = lVar9 + uVar12 * 0x14;
    if (lVar14 != 0) {
      plVar13 = (long *)*puVar1;
      lVar6 = lVar6 - lVar14;
      uVar12 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar12 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar14,lVar6,4);
          goto LAB_02bbe718;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar6,4);
    }
  }
LAB_02bbe718:
  *(undefined8 *)(param_1 + 0x290) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x284));
  plVar3 = *(long **)(param_1 + 0x118);
  for (plVar13 = *(long **)(param_1 + 0x110); plVar13 != plVar3; plVar13 = plVar13 + 1) {
    lVar6 = *plVar13;
    if (*(long *)(lVar6 + 0x250) == *(long *)(lVar6 + 0x248)) {
      FUN_02bbe494(lVar6,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}


