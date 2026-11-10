/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7507c; name: FUN_00b7507c
 */


void FUN_00b7507c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  lVar1 = *param_1;
  lVar7 = param_1[1];
  if (*(long *)(lVar7 + 0x300) != 0) {
    if (*(long **)(lVar7 + 0x2d8) != (long *)0x0) {
      lVar9 = tpidr_el0;
      plVar13 = *(long **)(lVar7 + 0x2d8);
      do {
        while( true ) {
          plVar15 = (long *)*plVar13;
          FUN_00b7545c(plVar13 + 2);
          plVar14 = *(long **)(lVar7 + 0x2e0);
          uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar6 & 1) != 0) break;
LAB_00b75128:
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x50,8);
          plVar13 = plVar15;
          if (plVar15 == (long *)0x0) goto LAB_00b7516c;
        }
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00b75128;
        FUN_02bcc824(plVar14,plVar13,0x50,8);
        plVar13 = plVar15;
      } while (plVar15 != (long *)0x0);
    }
LAB_00b7516c:
    uVar6 = *(ulong *)(lVar7 + 0x2b0);
    *(undefined8 *)(lVar7 + 0x2d8) = 0;
    if (uVar6 != 0) {
      uVar8 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar11 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar11) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar11 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar11 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar11 + 0x18) = 0;
        } while (uVar6 - uVar8 != lVar9);
      }
      if (uVar8 != 0) {
        lVar9 = lVar9 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar9) = 0;
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar8 != 0);
      }
    }
    *(undefined8 *)(lVar7 + 0x300) = 0;
  }
  if ((*(byte *)(lVar1 + 0x79) & 1) != 0) {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar1 + 0x90);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x84));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00b7524c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00b7524c:
  puVar12 = *(undefined8 **)(lVar1 + 0x98);
  puVar2 = *(undefined8 **)(lVar1 + 0xa0);
  if (puVar12 != puVar2) {
    do {
      if ((*(byte *)(lVar1 + 0x79) & 1) == 0) {
        (*(code *)*puVar12)(puVar12 + 4);
      }
      if ((*(byte *)(lVar1 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar12[0x10])();
        *(int *)(lVar1 + 0x7c) = *(int *)(lVar1 + 0x7c) + 1;
      }
      puVar12 = puVar12 + 0x12;
    } while (puVar2 != puVar12);
    puVar12 = *(undefined8 **)(lVar1 + 0x98);
    puVar2 = *(undefined8 **)(lVar1 + 0xa0);
    while (puVar5 = puVar2, puVar5 != puVar12) {
      pcVar10 = (code *)puVar5[-0x11];
      puVar2 = puVar5 + -0x12;
      if (pcVar10 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        (*pcVar10)(puVar5 + -0xe);
      }
    }
  }
  *(undefined8 **)(lVar1 + 0xa0) = puVar12;
  *(undefined1 *)(lVar1 + 0x78) = 1;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 0x84));
  return;
}


