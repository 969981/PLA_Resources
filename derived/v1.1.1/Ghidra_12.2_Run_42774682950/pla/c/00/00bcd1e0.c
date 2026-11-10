/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bcd1e0; name: FUN_00bcd1e0
 */


void FUN_00bcd1e0(undefined8 *param_1,long param_2,int param_3,long *param_4,undefined8 *param_5,
                 uint param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  byte unaff_w26;
  long lVar15;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 local_58;
  
  if (*(char *)(param_2 + 0x162) != '\0') goto LAB_00bcd64c;
  uVar10 = *(ulong *)(param_2 + 0x70);
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar8 = (ulong)param_3;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    unaff_x21 = (long *)(ulong)param_6;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar10 <= uVar8) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar8 / uVar10;
        }
        uVar13 = uVar8 - uVar13 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(param_2 + 0x68) + uVar13 * 8);
    unaff_x20 = param_5;
    unaff_x24 = param_4;
    unaff_w22 = param_3;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar8) {
            if ((int)plVar14[2] == param_3) goto LAB_00bcd2e0;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar8) {
            if ((int)plVar14[2] == param_3) goto LAB_00bcd2e0;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar4 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  param_3 = unaff_w22;
  FUN_00bcd7a0();
  puVar6 = extraout_x8;
  param_5 = unaff_x20;
  param_4 = unaff_x24;
LAB_00bcd738:
  iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
  if (iVar5 != 0) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
LAB_00bcd3b8:
  lVar11 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar11;
  local_58 = *puVar6;
  FUN_02a44274(lVar11 + 0xd8,&local_58);
LAB_00bcd3e4:
  unaff_x21[0x14] = *(long *)(*param_4 + 0xa8);
  lVar11 = *param_4;
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00bcd780;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = (long *)unaff_x21[0x25];
  unaff_x21[0x25] = lVar11;
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  FUN_009addb0(param_1,unaff_x21,unaff_x25[3]);
  uVar10 = (ulong)local_f0 >> 0x28;
  local_e8 = (long *)0x0;
  local_f0._0_5_ = CONCAT14(unaff_w26,param_3);
  local_f0 = (undefined8 *)(CONCAT35((int3)uVar10,(undefined5)local_f0) & 0xffff00ffffffffff);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  lVar11 = unaff_x21[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar14 = unaff_x21;
    if (local_e8 != (long *)0x0) {
      lVar11 = local_e8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar14 = unaff_x21;
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        lVar11 = *local_e8;
        local_e8 = unaff_x21;
        (**(code **)(lVar11 + 0x20))();
        plVar14 = local_e8;
      }
    }
    local_e8 = plVar14;
    pcVar9 = local_d8;
    if (local_d8 == (code *)0x0) {
      pcVar9 = (code *)param_5[2];
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar9)(auStack_c0);
      pcVar9 = (code *)param_5[2];
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(param_5 + 4,auStack_c0);
      local_e0 = *param_5;
      local_d8 = (code *)param_5[1];
      local_d0 = param_5[2];
      uStack_c8 = param_5[3];
    }
    lVar11 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_2 + 0x150);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00bcd560;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00bcd560:
    if (*(long *)(param_2 + 0x110) == *(long *)(param_2 + 0x118)) {
      FUN_00bd2878(param_2 + 0x108,&local_f0);
    }
    else {
      FUN_009af634(param_2 + 0x120,*(long *)(param_2 + 0x110),&local_f0);
      *(long *)(param_2 + 0x110) = *(long *)(param_2 + 0x110) + 0x90;
    }
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    pcVar9 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar9)(auStack_c0);
    }
    if (local_e8 != (long *)0x0) {
      lVar11 = local_e8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
    if (unaff_x21 == (long *)0x0) {
      return;
    }
    lVar11 = unaff_x21[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*unaff_x21 + 0x20))(unaff_x21);
      return;
    }
    return;
  }
LAB_00bcd780:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_00bcd644:
  puVar6 = (undefined8 *)*puVar6;
  if (puVar6 == (undefined8 *)0x0) goto LAB_00bcd64c;
  goto LAB_00bcd314;
LAB_00bcd2e0:
  lVar11 = plVar14[7];
  unaff_x25 = (undefined8 *)(lVar11 + 0x50);
  puVar6 = (undefined8 *)(**(code **)*unaff_x25)(unaff_x25);
  if (((*PTR_DAT_0437af40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437af40), iVar5 != 0))
  {
    uVar7 = FUN_00bcd7ac();
    *(undefined8 *)PTR_DAT_0437af48 = uVar7;
    __cxa_guard_release(PTR_DAT_0437af40);
  }
  if (puVar6 != (undefined8 *)0x0) {
    unaff_w26 = (byte)param_6 & 1;
LAB_00bcd314:
    if (puVar6 != (undefined8 *)PTR_DAT_0437af48) goto LAB_00bcd644;
    unaff_x21 = (long *)FUN_00bcd88c(&local_f0,*(undefined8 *)(lVar11 + 0x68));
    if (unaff_x21 == (long *)0x0) goto LAB_00bcd368;
    lVar15 = unaff_x21[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00bcd368:
      local_f0 = (undefined8 *)0x0;
      local_e8 = (long *)0x0;
      FUN_0095e898(&local_f0,lVar11 + 0x70);
      FUN_009ae04c(unaff_x21,&local_f0);
      if (local_f0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_f0 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 != 0) goto LAB_00bcd3e4;
        local_f0[2] = 0;
        puVar6 = local_f0;
        if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_00bcd738;
        goto LAB_00bcd3b8;
      }
      goto LAB_00bcd3e4;
    }
    goto LAB_00bcd780;
  }
LAB_00bcd64c:
  *param_1 = 0;
  return;
}


