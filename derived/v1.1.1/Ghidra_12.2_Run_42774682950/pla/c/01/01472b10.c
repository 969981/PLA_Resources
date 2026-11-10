/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01472b10; name: FUN_01472b10
 */


ulong FUN_01472b10(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  char *param3;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  long *local_1d0;
  undefined8 local_1c8;
  char *pcStack_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  long *local_1a8;
  ulong *puStack_1a0;
  undefined8 local_198;
  long *local_190;
  long *local_188;
  ulong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_68;
  
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uVar27 = (ulong)*param_2;
  if (6 < *param_2) {
    uVar27 = 0;
  }
  uVar23 = (ulong)param_2[1];
  if (param_2[1] < 2) {
    plVar22 = *(long **)(param_1 + 0x2c8);
  }
  else {
    uVar23 = 0;
    plVar22 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar22 != (long *)0x0) {
    plVar26 = plVar22 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      iVar10 = (int)*plVar26 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(int *)plVar26 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  param3 = (&PTR_s_inspect_00_04211d18)[uVar27 * 3];
  plVar26 = (long *)&DAT_cbf29ce484222645;
  uVar9 = snprintf((char *)&local_178,0x100,"pane_N_%s",param3);
  puVar12 = &DAT_cbf29ce484222645;
  if ((byte)local_178 != 0) {
    puVar12 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)((ulong)&local_178 | 1);
    bVar6 = (byte)local_178;
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar14 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar14 == 0) || ((undefined1 *)*puVar5 == puVar12)) {
    puVar20 = puVar5;
  }
  else {
    lVar19 = lVar14 * 0x30;
    puVar21 = puVar5;
    do {
      lVar19 = lVar19 + -0x30;
      if (lVar19 == 0) goto LAB_01472cfc;
      puVar1 = puVar21 + 6;
      puVar20 = puVar21 + 6;
      puVar21 = puVar21 + 6;
    } while ((undefined1 *)*puVar1 != puVar12);
  }
  if (puVar20 == puVar5 + lVar14 * 6) {
LAB_01472cfc:
    uVar13 = 0;
  }
  else {
    uVar13 = puVar20[4];
  }
  *(undefined8 *)(param_1 + uVar23 * 0x28 + 0x5c0) = uVar13;
  if ((((*param_2 == *(byte *)(param_1 + 0x630)) &&
       (*(int *)(param_2 + 4) == *(int *)(param_1 + 0x634))) &&
      (*(long *)(param_2 + 8) == *(long *)(param_1 + 0x638))) &&
     (*(long *)(param_1 + 0x640) == *(long *)(param_2 + 0x10))) {
    return (ulong)uVar9;
  }
  *(int *)(param_1 + 0x634) = *(int *)(param_2 + 4);
  *(byte *)(param_1 + 0x630) = *param_2;
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 8);
  lVar14 = *(long *)(param_2 + 0x10);
  if (lVar14 != 0) {
    piVar2 = (int *)(lVar14 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar11 = *(long **)(param_1 + 0x640);
  *(long *)(param_1 + 0x640) = lVar14;
  if (plVar11 != (long *)0x0) {
    plVar24 = plVar11 + 10;
    do {
      iVar10 = (int)*plVar24 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar8) {
        *(int *)plVar24 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  snprintf((char *)&local_178,0x100,"pane_L_%s",param3);
  local_1a8 = (long *)&DAT_cbf29ce484222645;
  if ((byte)local_178 != 0) {
    uVar23 = (ulong)(uint)(byte)local_178;
    local_1a8 = (long *)&DAT_cbf29ce484222645;
    pbVar17 = (byte *)((ulong)&local_178 | 1);
    do {
      local_1a8 = (long *)(((ulong)local_1a8 ^ uVar23) * 0x100000001b3);
      bVar6 = *pbVar17;
      uVar23 = (ulong)bVar6;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  local_198 = 0xff;
  local_190 = (long *)0x0;
  puStack_1a0 = &local_178;
  if ((byte)local_178 != 0) {
    lVar14 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_1a8);
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x20))();
    }
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0xe8), lVar14 != 0)) {
      FUN_00235780(lVar14);
      FUN_002350e8(lVar14,"T_help_00");
    }
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar24 = (long *)plVar11[0xd];
  lVar14 = param_1 + 0x180;
  if (plVar24 != (long *)0x0) {
    plVar4 = plVar24 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar19 = plVar11[0xb];
  piVar2 = (int *)(lVar19 + 0xc);
  do {
    iVar10 = *piVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = iVar10 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  uVar9 = snprintf((char *)&local_178,0x100,"pane_L_%s_T_help_00",param3);
  uVar23 = (ulong)uVar9;
  switch(*param_2) {
  case 0:
    if (*(uint *)(param_2 + 4) < 7) {
      lVar14 = *(long *)(&DAT_04211db8 + (ulong)*(uint *)(param_2 + 4) * 0x18);
      plVar11 = (long *)plVar22[0x38];
      if (plVar11 == (long *)0x0) {
        lVar19 = plVar24[0x16];
        if (lVar19 != 0) {
          plVar11 = *(long **)(lVar19 + 0x270);
          if (plVar11 != *(long **)(lVar19 + 0x278)) {
            iVar10 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar4 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar4 == lVar14) goto LAB_01473c24;
              plVar11 = plVar11 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar19 + 0x278) != plVar11);
          }
        }
        iVar10 = 0;
LAB_01473c24:
        FUN_02c2e33c(plVar24,iVar10,0);
      }
      else {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar19 = plVar24[0x16];
        if (lVar19 != 0) {
          plVar16 = *(long **)(lVar19 + 0x270);
          if (plVar16 != *(long **)(lVar19 + 0x278)) {
            iVar10 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar16 != 0) {
                plVar3 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar3 == lVar14) goto LAB_0147317c;
              plVar16 = plVar16 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar19 + 0x278) != plVar16);
          }
        }
        iVar10 = 0;
LAB_0147317c:
        FUN_02c2e33c(plVar24,iVar10,plVar11);
        do {
          iVar10 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else {
        }
      }
      if ((byte)local_178 != '\0') {
        uVar27 = local_178 & 0xff;
        pbVar17 = (byte *)((ulong)&local_178 | 1);
        do {
          plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
          bVar6 = *pbVar17;
          uVar27 = (ulong)bVar6;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
      }
      goto LAB_014731c0;
    }
    break;
  case 1:
    if (((*PTR_DAT_0437b1a0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b1a0);
    }
    uVar13 = *(undefined8 *)PTR_DAT_0437b1a8;
    local_1b8 = 0x13;
    local_1b0 = (long *)0x0;
    *(undefined8 *)PTR_DAT_0437b1b0 = uVar13;
    local_1c8 = 0x9654922fc2c8b9d1;
    pcStack_1c0 = "common/namelist.dat";
    FUN_010c4b50(&local_1a8,&local_1c8,10);
    plVar11 = (long *)FUN_010caa60(uVar13,&local_1a8);
    if (plVar11 != (long *)0x0) {
      plVar4 = plVar11 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (plVar24 != (long *)0x0) {
      plVar4 = plVar24 + 10;
      do {
        iVar10 = (int)*plVar4 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
    }
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    uVar27 = 0;
    if (local_1b0 != (long *)0x0) {
      uVar27 = (**(code **)(*local_1b0 + 0x20))();
    }
    if (plVar11 == (long *)0x0) {
      return uVar27;
    }
    plVar24 = (long *)plVar22[0x38];
    if (plVar24 == (long *)0x0) {
      lVar14 = plVar11[0x16];
      if (lVar14 != 0) {
        plVar24 = *(long **)(lVar14 + 0x270);
        if (plVar24 != *(long **)(lVar14 + 0x278)) {
          iVar10 = 0;
          do {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (*plVar24 != 0) {
              plVar4 = (long *)(*plVar24 + 0x58);
            }
            if (*plVar4 == *(long *)(param_2 + 8)) goto LAB_01473bb8;
            plVar24 = plVar24 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar14 + 0x278) != plVar24);
        }
      }
      iVar10 = 0;
LAB_01473bb8:
      FUN_02c2e33c(plVar11,iVar10,0);
    }
    else {
      plVar4 = plVar24 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar14 = plVar11[0x16];
      if (lVar14 != 0) {
        plVar16 = *(long **)(lVar14 + 0x270);
        if (plVar16 != *(long **)(lVar14 + 0x278)) {
          iVar10 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar3 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar3 == *(long *)(param_2 + 8)) goto LAB_01473000;
            plVar16 = plVar16 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar14 + 0x278) != plVar16);
        }
      }
      iVar10 = 0;
LAB_01473000:
      FUN_02c2e33c(plVar11,iVar10,plVar24);
      do {
        iVar10 = (int)*plVar4 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
      else {
      }
    }
    plVar24 = plVar11;
    if ((byte)local_178 != '\0') {
      uVar27 = local_178 & 0xff;
      pbVar17 = (byte *)((ulong)&local_178 | 1);
      do {
        plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
        bVar6 = *pbVar17;
        uVar27 = (ulong)bVar6;
        pbVar17 = pbVar17 + 1;
      } while (bVar6 != 0);
    }
LAB_01473044:
    puStack_1a0 = &local_178;
    local_198 = 0xff;
    local_190 = (long *)0x0;
    lVar18 = plVar22[0x37];
    lVar14 = plVar22[0x38];
    lVar19 = plVar22[0x39];
    *(undefined4 *)(lVar18 + 0x124) = 0;
    *(undefined2 *)(lVar18 + 0x128) = 0;
    *(undefined4 *)(lVar18 + 300) = 0;
    *(undefined4 *)(lVar18 + 0x134) = 0;
    local_1a8 = plVar26;
    FUN_02c33414(lVar18,lVar14);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar18,lVar19,lVar14,0,0);
    FUN_0283ce7c(plVar22,&local_1a8,plVar22[0x39],10);
    uVar23 = 0;
    if (local_190 != (long *)0x0) {
      uVar23 = (**(code **)(*local_190 + 0x20))();
    }
    if (plVar24 == (long *)0x0) {
      return uVar23;
    }
    goto LAB_0147324c;
  case 2:
    lVar14 = *(long *)(&DAT_04211e60 + uVar27 * 0x18);
    plVar11 = (long *)plVar22[0x38];
    if (plVar11 == (long *)0x0) {
      lVar19 = plVar24[0x16];
      if (lVar19 != 0) {
        plVar11 = *(long **)(lVar19 + 0x270);
        if (plVar11 != *(long **)(lVar19 + 0x278)) {
          iVar10 = 0;
          do {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (*plVar11 != 0) {
              plVar4 = (long *)(*plVar11 + 0x58);
            }
            if (*plVar4 == lVar14) goto LAB_01473e98;
            plVar11 = plVar11 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar11);
        }
      }
      iVar10 = 0;
LAB_01473e98:
      FUN_02c2e33c(plVar24,iVar10,0);
    }
    else {
      plVar4 = plVar11 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar19 = plVar24[0x16];
      if (lVar19 != 0) {
        plVar16 = *(long **)(lVar19 + 0x270);
        if (plVar16 != *(long **)(lVar19 + 0x278)) {
          iVar10 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar3 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar3 == lVar14) goto LAB_01473a54;
            plVar16 = plVar16 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar16);
        }
      }
      iVar10 = 0;
LAB_01473a54:
      FUN_02c2e33c(plVar24,iVar10,plVar11);
      do {
        iVar10 = (int)*plVar4 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else {
      }
    }
    if ((byte)local_178 != '\0') {
      uVar27 = local_178 & 0xff;
      pbVar17 = (byte *)((ulong)&local_178 | 1);
      do {
        plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
        bVar6 = *pbVar17;
        uVar27 = (ulong)bVar6;
        pbVar17 = pbVar17 + 1;
      } while (bVar6 != 0);
    }
LAB_014731c0:
    puStack_1a0 = &local_178;
    local_198 = 0xff;
    local_190 = (long *)0x0;
    lVar18 = plVar22[0x37];
    lVar14 = plVar22[0x38];
    lVar19 = plVar22[0x39];
    *(undefined4 *)(lVar18 + 0x124) = 0;
    *(undefined2 *)(lVar18 + 0x128) = 0;
    *(undefined4 *)(lVar18 + 300) = 0;
    *(undefined4 *)(lVar18 + 0x134) = 0;
    local_1a8 = plVar26;
    FUN_02c33414(lVar18,lVar14);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar18,lVar19,lVar14,0,0);
    FUN_0283ce7c(plVar22,&local_1a8,plVar22[0x39],10);
LAB_01473234:
    uVar23 = 0;
    if (local_190 != (long *)0x0) {
LAB_0147323c:
      pcVar15 = *(code **)(*local_190 + 0x20);
      plVar22 = local_190;
      goto LAB_01473244;
    }
    break;
  case 3:
    if (*(int *)(param_2 + 4) == 0) {
      if (((*PTR_DAT_0437b1a0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b1a0);
      }
      uVar13 = *(undefined8 *)PTR_DAT_0437b1a8;
      local_1b8 = 0x13;
      local_1b0 = (long *)0x0;
      *(undefined8 *)PTR_DAT_0437b1b0 = uVar13;
      local_1c8 = 0x9654922fc2c8b9d1;
      pcStack_1c0 = "common/namelist.dat";
      FUN_010c4b50(&local_1a8,&local_1c8,10);
      plVar11 = (long *)FUN_010caa60(uVar13,&local_1a8);
      if (plVar11 != (long *)0x0) {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (plVar24 != (long *)0x0) {
        plVar4 = plVar24 + 10;
        do {
          iVar10 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      uVar27 = 0;
      if (local_1b0 != (long *)0x0) {
        uVar27 = (**(code **)(*local_1b0 + 0x20))();
      }
      if (plVar11 == (long *)0x0) {
        return uVar27;
      }
      plVar24 = (long *)plVar22[0x38];
      if (plVar24 == (long *)0x0) {
        lVar14 = plVar11[0x16];
        if (lVar14 != 0) {
          plVar24 = *(long **)(lVar14 + 0x270);
          if (plVar24 != *(long **)(lVar14 + 0x278)) {
            iVar10 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar24 != 0) {
                plVar4 = (long *)(*plVar24 + 0x58);
              }
              if (*plVar4 == *(long *)(param_2 + 8)) goto LAB_01473da0;
              plVar24 = plVar24 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar14 + 0x278) != plVar24);
          }
        }
        iVar10 = 0;
LAB_01473da0:
        FUN_02c2e33c(plVar11,iVar10,0);
      }
      else {
        plVar4 = plVar24 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar14 = plVar11[0x16];
        if (lVar14 != 0) {
          plVar16 = *(long **)(lVar14 + 0x270);
          if (plVar16 != *(long **)(lVar14 + 0x278)) {
            iVar10 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar16 != 0) {
                plVar3 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar3 == *(long *)(param_2 + 8)) goto LAB_01473730;
              plVar16 = plVar16 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar14 + 0x278) != plVar16);
          }
        }
        iVar10 = 0;
LAB_01473730:
        FUN_02c2e33c(plVar11,iVar10,plVar24);
        do {
          iVar10 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
        else {
        }
      }
      plVar24 = plVar11;
      if ((byte)local_178 != '\0') {
        uVar27 = local_178 & 0xff;
        pbVar17 = (byte *)((ulong)&local_178 | 1);
        do {
          plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
          bVar6 = *pbVar17;
          uVar27 = (ulong)bVar6;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
      }
      goto LAB_01473044;
    }
    plVar11 = (long *)plVar22[0x38];
    if (plVar11 == (long *)0x0) {
      lVar19 = plVar24[0x16];
      if (lVar19 != 0) {
        plVar11 = *(long **)(lVar19 + 0x270);
        if (plVar11 != *(long **)(lVar19 + 0x278)) {
          iVar10 = 0;
          do {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (*plVar11 != 0) {
              plVar4 = (long *)(*plVar11 + 0x58);
            }
            if (*plVar4 == -0x57ed8a7103fe4e38) goto LAB_01473e14;
            plVar11 = plVar11 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar11);
        }
      }
      iVar10 = 0;
LAB_01473e14:
      FUN_02c2e33c(plVar24,iVar10,0);
    }
    else {
      plVar4 = plVar11 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar19 = plVar24[0x16];
      if (lVar19 != 0) {
        plVar16 = *(long **)(lVar19 + 0x270);
        if (plVar16 != *(long **)(lVar19 + 0x278)) {
          iVar10 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar3 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar3 == -0x57ed8a7103fe4e38) goto LAB_01473830;
            plVar16 = plVar16 + 1;
            iVar10 = iVar10 + 1;
          } while (*(long **)(lVar19 + 0x278) != plVar16);
        }
      }
      iVar10 = 0;
LAB_01473830:
      FUN_02c2e33c(plVar24,iVar10,plVar11);
      do {
        iVar10 = (int)*plVar4 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else {
      }
    }
    if ((byte)local_178 != '\0') {
      uVar27 = local_178 & 0xff;
      pbVar17 = (byte *)((ulong)&local_178 | 1);
      do {
        plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
        bVar6 = *pbVar17;
        uVar27 = (ulong)bVar6;
        pbVar17 = pbVar17 + 1;
      } while (bVar6 != 0);
    }
    puStack_1a0 = &local_178;
    local_198 = 0xff;
    local_190 = (long *)0x0;
    lVar25 = plVar22[0x37];
    lVar19 = plVar22[0x38];
    lVar18 = plVar22[0x39];
    *(undefined4 *)(lVar25 + 0x124) = 0;
    *(undefined2 *)(lVar25 + 0x128) = 0;
    *(undefined4 *)(lVar25 + 300) = 0;
    *(undefined4 *)(lVar25 + 0x134) = 0;
    local_1a8 = plVar26;
    FUN_02c33414(lVar25,lVar19);
    if (*(char *)(lVar18 + 0x7c) != '\0') {
      **(undefined2 **)(lVar18 + 0x58) = 0;
      *(undefined2 *)(lVar18 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar25,lVar18,lVar19,0,0);
    FUN_0283ce7c(plVar22,&local_1a8,plVar22[0x39],10);
    uVar23 = 0;
    if (local_190 != (long *)0x0) {
      uVar23 = (**(code **)(*local_190 + 0x20))();
    }
    lVar19 = *(long *)(param_2 + 0x10);
    if (lVar19 == 0) break;
    if (plVar24 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      plVar22 = plVar24 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar19 = *(long *)(param_2 + 0x10);
      plVar22 = plVar24;
    }
    local_1a8 = (long *)0xa812758efc01b1c8;
    local_1d0 = plVar24;
    uVar23 = FUN_01473eb0(lVar14,&local_178,&local_1d0,&local_1a8,lVar19);
    if (plVar22 == (long *)0x0) break;
    plVar26 = plVar22 + 10;
    do {
      iVar10 = (int)*plVar26 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(int *)plVar26 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 != 0) break;
    pcVar15 = *(code **)(*plVar22 + 0x10);
LAB_01473244:
    uVar23 = (*pcVar15)(plVar22);
    break;
  case 4:
    if (*(int *)(param_2 + 4) != 0) {
      local_1a8 = (long *)0x70d85e210740409c;
      puStack_1a0 = (ulong *)0x3975359;
      local_198 = 0x1d;
      local_190 = (long *)0x0;
      lVar19 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_1a8);
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 0x20))();
      }
      if (lVar19 != 0) {
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
        FUN_00256608(lVar19);
      }
      local_1a8 = (long *)0xaaeac7698c63f455;
      puStack_1a0 = (ulong *)0x3913f9b;
      local_198 = 0x18;
      local_190 = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        plVar22 = plVar24 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar8) {
            *(int *)plVar22 = (int)*plVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_1c8 = *(undefined8 *)(&DAT_04211e60 + uVar27 * 0x18);
      local_68 = plVar24;
      FUN_01381200(lVar14,&local_1a8,&local_68,&local_1c8,0,*(undefined4 *)(param_2 + 4),1);
      if (local_68 == (long *)0x0) goto LAB_01473234;
      plVar22 = local_68 + 10;
      do {
        iVar10 = (int)*plVar22 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != 0) goto LAB_01473234;
      (**(code **)(*local_68 + 0x10))();
      if (local_190 == (long *)0x0) {
        uVar23 = 0;
        break;
      }
      goto LAB_0147323c;
    }
    break;
  case 5:
    if (*(uint *)(param_2 + 4) < 2) {
      plVar11 = (long *)plVar22[0x38];
      lVar14 = *(long *)(&DAT_04211e60 + (ulong)(*(uint *)(param_2 + 4) + (int)uVar27) * 0x18);
      if (plVar11 == (long *)0x0) {
        lVar19 = plVar24[0x16];
        if (lVar19 != 0) {
          plVar11 = *(long **)(lVar19 + 0x270);
          if (plVar11 != *(long **)(lVar19 + 0x278)) {
            iVar10 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar4 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar4 == lVar14) goto LAB_01473cf4;
              plVar11 = plVar11 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar19 + 0x278) != plVar11);
          }
        }
        iVar10 = 0;
LAB_01473cf4:
        FUN_02c2e33c(plVar24,iVar10,0);
      }
      else {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar19 = plVar24[0x16];
        if (lVar19 != 0) {
          plVar16 = *(long **)(lVar19 + 0x270);
          if (plVar16 != *(long **)(lVar19 + 0x278)) {
            iVar10 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar16 != 0) {
                plVar3 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar3 == lVar14) goto LAB_0147355c;
              plVar16 = plVar16 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar19 + 0x278) != plVar16);
          }
        }
        iVar10 = 0;
LAB_0147355c:
        FUN_02c2e33c(plVar24,iVar10,plVar11);
        do {
          iVar10 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else {
        }
      }
      if ((byte)local_178 != '\0') {
        uVar27 = local_178 & 0xff;
        pbVar17 = (byte *)((ulong)&local_178 | 1);
        do {
          plVar26 = (long *)(((ulong)plVar26 ^ uVar27) * 0x100000001b3);
          bVar6 = *pbVar17;
          uVar27 = (ulong)bVar6;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
      }
      goto LAB_014731c0;
    }
    break;
  case 6:
    if (*(uint *)(param_2 + 4) < 6) {
      lVar19 = *(long *)(&DAT_04211f08 + (ulong)*(uint *)(param_2 + 4) * 0x18);
      plVar11 = (long *)plVar22[0x38];
      if (plVar11 == (long *)0x0) {
        lVar18 = plVar24[0x16];
        if (lVar18 != 0) {
          plVar11 = *(long **)(lVar18 + 0x270);
          if (plVar11 != *(long **)(lVar18 + 0x278)) {
            iVar10 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar4 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar4 == lVar19) goto LAB_01473c90;
              plVar11 = plVar11 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar11);
          }
        }
        iVar10 = 0;
LAB_01473c90:
        FUN_02c2e33c(plVar24,iVar10,0);
      }
      else {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar18 = plVar24[0x16];
        if (lVar18 != 0) {
          plVar16 = *(long **)(lVar18 + 0x270);
          if (plVar16 != *(long **)(lVar18 + 0x278)) {
            iVar10 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar16 != 0) {
                plVar3 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar3 == lVar19) goto LAB_01473420;
              plVar16 = plVar16 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar16);
          }
        }
        iVar10 = 0;
LAB_01473420:
        FUN_02c2e33c(plVar24,iVar10,plVar11);
        do {
          iVar10 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      uVar13 = 0x40000000;
      if (2 < *(int *)(param_2 + 4) - 3U) {
        uVar13 = 0;
      }
      local_1a8 = (long *)0x39777a1ab3984ea1;
      puStack_1a0 = (ulong *)0x391eb1c;
      local_198 = 0x18;
      local_190 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_1a8);
      }
      FUN_00d2e2f0(uVar13,lVar14,"anime_L_nspoke_00_switch");
      if ((byte)local_178 != 0) {
        pbVar17 = (byte *)((ulong)&local_178 | 1);
        bVar6 = (byte)local_178;
        do {
          plVar26 = (long *)(((ulong)plVar26 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
      }
      goto LAB_014731c0;
    }
  }
  if (plVar24 != (long *)0x0) {
LAB_0147324c:
    plVar22 = plVar24 + 10;
    do {
      iVar10 = (int)*plVar22 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *(int *)plVar22 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      uVar23 = (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  return uVar23;
}


