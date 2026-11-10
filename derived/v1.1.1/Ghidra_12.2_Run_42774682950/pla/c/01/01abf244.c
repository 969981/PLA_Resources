/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abf244; name: FUN_01abf244
 */


void FUN_01abf244(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x388);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x37c));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01abf2a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01abf2a8:
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x372) = 0;
  if ((param_2 & 1) == 0) goto LAB_01abf4e8;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar6 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar6;
  uVar7 = *(ulong *)(lVar6 + 0x60);
  if (uVar7 == 0) {
LAB_01abf470:
    uVar12 = 0;
  }
  else {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x8ecbf07035a7ba12;
    }
    else if (uVar7 < 0x8ecbf07035a7ba13) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x8ecbf07035a7ba12 / uVar7;
      }
      uVar9 = 0x8ecbf07035a7ba12 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x8ecbf07035a7ba12;
    }
    plVar10 = *(long **)(*(long *)(lVar6 + 0x58) + uVar9 * 8);
    if ((plVar10 == (long *)0x0) || (plVar10 = (long *)*plVar10, plVar10 == (long *)0x0))
    goto LAB_01abf470;
    if (1 < uVar8) {
      do {
        uVar8 = plVar10[1];
        if (uVar8 == 0x8ecbf07035a7ba12) {
          if (plVar10[2] == -0x71340f8fca5845ee) goto LAB_01abf374;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
      goto LAB_01abf470;
    }
    do {
      if (plVar10[1] == 0x8ecbf07035a7ba12) {
        if (plVar10[2] == -0x71340f8fca5845ee) goto LAB_01abf374;
      }
      else if ((plVar10[1] & uVar7 - 1) != uVar9) goto LAB_01abf470;
      plVar10 = (long *)*plVar10;
      uVar12 = 0;
    } while (plVar10 != (long *)0x0);
  }
  goto LAB_01abf4d8;
LAB_01abf374:
  plVar10 = (long *)plVar10[3];
  if (plVar10 == (long *)0x0) goto LAB_01abf470;
  plVar1 = plVar10 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar10[0x14];
  if (uVar7 == 0) {
    uVar12 = 0;
  }
  else {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x74b5d8dbfa30cfaf;
    }
    else if (uVar7 < 0x74b5d8dbfa30cfb0) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x74b5d8dbfa30cfaf / uVar7;
      }
      uVar9 = 0x74b5d8dbfa30cfaf - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x74b5d8dbfa30cfaf;
    }
    plVar11 = *(long **)(plVar10[0x13] + uVar9 * 8);
    if (plVar11 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        uVar12 = 0;
      }
      else if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x74b5d8dbfa30cfaf) {
            if (plVar11[2] == 0x74b5d8dbfa30cfaf) goto LAB_01abf4c0;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            uVar12 = 0;
            break;
          }
          plVar11 = (long *)*plVar11;
          uVar12 = 0;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x74b5d8dbfa30cfaf) {
            if (plVar11[2] == 0x74b5d8dbfa30cfaf) goto LAB_01abf4c0;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              uVar12 = 0;
              goto LAB_01abf4c4;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
        uVar12 = 0;
      }
    }
  }
  goto LAB_01abf4c4;
LAB_01abf4c0:
  uVar12 = (undefined4)plVar11[6];
LAB_01abf4c4:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_01abf4d8:
  FUN_01abecb4(param_1,1,uVar12);
LAB_01abf4e8:
  *(undefined8 *)(param_1 + 0x388) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x37c));
  return;
}


