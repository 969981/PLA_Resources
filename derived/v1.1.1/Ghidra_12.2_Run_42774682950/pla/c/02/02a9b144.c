/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9b144; name: FUN_02a9b144
 */


undefined * FUN_02a9b144(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x210);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02a9b1a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02a9b1a8:
  uVar7 = *(ulong *)(param_1 + 0x220);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x218) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_02a9b2d8;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_02a9b2d8;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar3 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  if (((DAT_043ef008 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043ef008), iVar4 != 0)) {
    puVar11 = &DAT_043ef000;
    FUN_00100250(&LAB_02a9b324,&DAT_043ef000,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ef008);
  }
  else {
    puVar11 = &DAT_043ef000;
  }
LAB_02a9b2b0:
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return puVar11;
LAB_02a9b2d8:
  puVar11 = (undefined *)(plVar10[6] + 0x88);
  goto LAB_02a9b2b0;
}


