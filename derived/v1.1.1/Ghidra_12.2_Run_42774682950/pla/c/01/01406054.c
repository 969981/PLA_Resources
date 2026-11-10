/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01406054; name: FUN_01406054
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01406054(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  lVar27 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar27 + 400);
  if (uVar4 != 0) {
    uVar29 = 0;
    piVar28 = (int *)(lVar27 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar28 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar28 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_304928236d5bcabe) && (*piVar28 == 10)) {
        if ((uint)uVar29 < 0x10) {
          plVar30 = *(long **)(piVar28 + -2);
          if (plVar30 != (long *)0x0) {
            lVar27 = plVar30[0xb];
            if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar27 + 0x10) == 0) {
              uVar26 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
              *(undefined8 *)(lVar27 + 0x10) = uVar26;
            }
            piVar28 = (int *)(lVar27 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar28,0x10);
              if (bVar6) {
                *piVar28 = *piVar28 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          plVar30 = (long *)0x0;
        }
        plVar7 = (long *)plVar30[0xd];
        goto joined_r0x014060e4;
      }
      uVar29 = uVar29 + 1;
      piVar28 = piVar28 + 6;
    } while (uVar4 != uVar29);
  }
  plVar30 = (long *)0x0;
  plVar7 = _DAT_00000068;
joined_r0x014060e4:
  if (plVar7 != (long *)0x0) {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar30 != (long *)0x0) {
    lVar27 = plVar30[0xb];
    piVar28 = (int *)(lVar27 + 0xc);
    do {
      iVar3 = *piVar28;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar28,0x10);
      if (bVar6) {
        *piVar28 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  plVar30 = *(long **)(param_1 + 0x2c8);
  lVar27 = param_1 + 0x180;
  if (plVar30 != (long *)0x0) {
    plVar31 = plVar30 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar8 = FUN_01306260(lVar27,"pane_N_poke_00");
  lVar9 = FUN_01306260(lVar27,"pane_N_discovered_00");
  lVar10 = FUN_01306260(lVar27,"pane_N_icon_type_00");
  lVar11 = FUN_01306260(lVar27,"pane_N_gender_00");
  lVar12 = FUN_01306260(lVar27,"pane_N_rare_00");
  lVar13 = FUN_01306260(lVar27,"pane_N_form_num_00");
  lVar14 = FUN_01306260(lVar27,"pane_N_form_name_00");
  lVar15 = FUN_01306260(lVar27,"pane_N_classification_00");
  lVar16 = FUN_01306260(lVar27,"pane_N_ner_classification_00");
  lVar17 = FUN_01306260(lVar27,"pane_N_height_weight_00");
  lVar18 = FUN_01306260(lVar27,"pane_N_lile_00");
  lVar19 = FUN_01306260(lVar27,"pane_N_ner_like_00");
  lVar20 = FUN_01306260(lVar27,"pane_N_item_00");
  lVar21 = FUN_01306260(lVar27,"pane_N_ner_item_00");
  lVar22 = FUN_01306260(lVar27,"pane_N_research_degree_00");
  *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
  lVar22 = FUN_01306260(lVar27,"pane_N_icon_imp_00");
  local_88 = 0x73ca5c8dc966c89b;
  pcStack_80 = "pane_T_h_rd_00";
  local_78 = 0xe;
  local_70 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98 = 0xd6c7e5d2da63f0d0;
  local_90 = plVar7;
  FUN_011845f4(lVar27,&local_88,&local_90,&local_98,10);
  if (local_90 != (long *)0x0) {
    plVar31 = local_90 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  FUN_0283d878(plVar30,"T_p_rd_00");
  lVar23 = FUN_01306260(lVar27,"pane_N_complete_00");
  lVar24 = FUN_01306260(lVar27,"pane_N_perfect_00");
  lVar25 = FUN_01306260(lVar27,"pane_N_unreported_00");
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  FUN_013db870(param_1 + 0x798);
  if (plVar30 != (long *)0x0) {
    plVar31 = plVar30 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = 0x779422f42550af73;
  pcStack_80 = "pane_T_dexnum_00";
  local_78 = 0x10;
  local_70 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar31 = plVar7;
  }
  local_98 = 0xdad224e9ad58ee30;
  local_a8 = plVar7;
  local_a0 = plVar30;
  FUN_014013e4(&local_a0,&local_88,&local_a8,&local_98,param_2);
  if (plVar31 != (long *)0x0) {
    plVar1 = plVar31 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    plVar31 = local_a0 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  local_88 = 0x2b42d5b6c65f6572;
  pcStack_80 = "pane_T_pokerace_00";
  local_78 = 0x12;
  local_70 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98 = 0x86cfcfc939d0a9a;
  local_b0 = plVar7;
  FUN_011845f4(lVar27,&local_88,&local_b0,&local_98,10);
  if (local_b0 != (long *)0x0) {
    plVar31 = local_b0 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  local_88 = 0xd36df2b18c96b732;
  pcStack_80 = "pane_T_description_00";
  local_78 = 0x15;
  local_70 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98 = 0xd80333d8017190ab;
  local_b8 = plVar7;
  FUN_011845f4(lVar27,&local_88,&local_b8,&local_98,10);
  if (local_b8 != (long *)0x0) {
    plVar31 = local_b8 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
  *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
  *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
  *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
  *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  if (plVar30 != (long *)0x0) {
    plVar31 = plVar30 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = 0x9d318c0d11454ff3;
  pcStack_80 = "pane_T_p_rd_00";
  local_78 = 0xe;
  local_70 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    plVar31 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar31 = plVar7;
  }
  local_98 = 0xd6c7e7d2da63f436;
  local_c8 = plVar7;
  local_c0 = plVar30;
  FUN_01406960(&local_c0,&local_88,&local_c8,&local_98,0);
  if (plVar31 != (long *)0x0) {
    plVar1 = plVar31 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    plVar31 = local_c0 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe;
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe;
  *(undefined4 *)(param_1 + 0xcc8) = *(undefined4 *)(*(long *)(param_1 + 0x740) + 0x3390);
  *(undefined2 *)(param_1 + 0xccc) = 0;
  *(undefined4 *)(param_1 + 0xcd0) = 0;
  *(undefined1 *)(param_1 + 0xcd4) = 0;
  FUN_014009c8(param_1);
  if (plVar30 != (long *)0x0) {
    plVar31 = plVar30 + 10;
    do {
      iVar3 = (int)*plVar31 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar6) {
        *(int *)plVar31 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar30 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar30 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar6) {
        *(int *)plVar30 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


