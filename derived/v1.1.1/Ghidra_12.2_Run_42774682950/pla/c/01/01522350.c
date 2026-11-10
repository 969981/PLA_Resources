/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01522350; name: FUN_01522350
 */


void FUN_01522350(undefined8 *param_1,long param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5,byte param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  int local_e0;
  byte local_dc;
  undefined1 local_db;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  long *local_48;
  
  if (*(char *)(param_2 + 0x162) != '\0') goto LAB_015225f0;
  uVar11 = *(ulong *)(param_2 + 0x70);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar9 = (ulong)param_3;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar9;
    }
    else if (uVar9 < uVar11) {
      uVar13 = uVar9;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar9 / uVar11;
      }
      uVar13 = uVar9 - uVar13 * uVar11;
    }
    plVar14 = *(long **)(*(long *)(param_2 + 0x68) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if ((int)plVar14[2] == param_3) goto LAB_01522414;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar9) {
            if ((int)plVar14[2] == param_3) goto LAB_01522414;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  puVar8 = (undefined8 *)FUN_01523590();
  *puVar8 = &DAT_04219228;
  puVar8[9] = &PTR_LAB_04219288;
  puVar8[10] = &PTR_LAB_042192d0;
  plVar14 = (long *)puVar8[0x91];
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
      plVar14 = (long *)puVar8[0x90];
      goto joined_r0x01522754;
    }
  }
  plVar14 = (long *)puVar8[0x90];
joined_r0x01522754:
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  FUN_015103c0(puVar8);
  return;
LAB_01522414:
  lVar15 = plVar14[7];
  (*(code *)**(undefined8 **)(lVar15 + 0x50))((undefined8 *)(lVar15 + 0x50));
  uVar11 = FUN_01523778();
  if ((uVar11 & 1) != 0) {
    param_6 = param_6 & 1;
    FUN_0152364c(&local_48,lVar15);
    FUN_00d0f5b0(local_48,param_4);
    FUN_00d0ee68(param_1,local_48,*(undefined8 *)(lVar15 + 0x68));
    plVar14 = local_48;
    local_db = 0;
    local_b8 = 0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_c0 = 0;
    local_e0 = param_3;
    local_dc = param_6;
    if (local_48 == (long *)0x0) {
      local_d8 = local_48;
    }
    else {
      lVar15 = local_48[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar7;
      }
      plVar6 = local_d8;
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_d8 = plVar14;
      if (plVar6 != (long *)0x0) {
        lVar15 = plVar6[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
    }
    pcVar10 = local_c8;
    if (local_c8 == (code *)0x0) {
      pcVar10 = (code *)param_5[2];
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar10)(auStack_b0);
      pcVar10 = (code *)param_5[2];
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(param_5 + 4,auStack_b0);
      local_d0 = *param_5;
      local_c8 = (code *)param_5[1];
      local_c0 = param_5[2];
      local_b8 = param_5[3];
    }
    lVar15 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_2 + 0x150);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0152255c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0152255c:
    FUN_01523724(param_2 + 0x108,&local_e0);
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    pcVar10 = local_c8;
    if (local_c8 == (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    else {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar10)(auStack_b0);
    }
    if (local_d8 != (long *)0x0) {
      lVar15 = local_d8[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
    if (local_48 == (long *)0x0) {
      return;
    }
    lVar15 = local_48[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      return;
    }
    return;
  }
LAB_015225f0:
  *param_1 = 0;
  return;
}


