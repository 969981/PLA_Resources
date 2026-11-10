/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133fd4c; name: FUN_0133fd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133fd4c(long param_1,int param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar10 + 400);
  if (uVar4 != 0) {
    uVar12 = 0;
    piVar11 = (int *)(lVar10 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar11 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_72837ff1f1cec6a2) && (*piVar11 == 10)) {
        if ((uint)uVar12 < 0x10) {
          plVar13 = *(long **)(piVar11 + -2);
          if (plVar13 != (long *)0x0) {
            lVar10 = plVar13[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar9;
            }
            piVar11 = (int *)(lVar10 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar6) {
                *piVar11 = *piVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          plVar13 = (long *)0x0;
        }
        plVar7 = (long *)plVar13[0xd];
        goto joined_r0x0133fde0;
      }
      uVar12 = uVar12 + 1;
      piVar11 = piVar11 + 6;
    } while (uVar4 != uVar12);
  }
  plVar13 = (long *)0x0;
  plVar7 = _DAT_00000068;
joined_r0x0133fde0:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  lVar10 = param_1 + 0x180;
  lVar8 = FUN_01306260(lVar10,"pane_L_indicator_00");
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
  if (param_2 == 0) {
    uVar9 = 0;
    if ((param_3 & param_4 & 1) == 0) {
      uVar9 = 0x3f800000;
    }
    local_70 = 0x56071cbbabfd11f4;
    pcStack_68 = "pane_L_indicator_00_T_guide_00";
    local_60 = 0x1e;
    local_58 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar13 = plVar7 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_78 = 0x39b0ca95fda4d062;
    local_48 = plVar7;
    FUN_011845f4(lVar10,&local_70,&local_48,&local_78,10);
    if (local_48 != (long *)0x0) {
      plVar13 = local_48 + 10;
      do {
        iVar3 = (int)*plVar13 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  else if (param_2 == 1) {
    uVar9 = 0x40000000;
  }
  else if (param_2 == 2) {
    uVar9 = 0x40400000;
  }
  else {
    uVar9 = 0;
  }
  local_70 = 0x6e3c39144adf8661;
  pcStack_68 = "anime_L_indicator_00_switch_info";
  local_60 = 0x20;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
  }
  FUN_00d2e2f0(uVar9,lVar10,"anime_L_indicator_00_switch_info");
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


