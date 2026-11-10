/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02819878; name: FUN_02819878
 */


void FUN_02819878(long *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  code *pcVar19;
  float fVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  float fVar23;
  long *local_f0;
  long *local_e8;
  long **local_e0;
  code *pcStack_d8;
  code *local_d0;
  long *local_c8;
  long *local_c0 [12];
  undefined4 local_5c;
  long *local_58;
  
  lVar13 = param_1[0x116];
  piVar1 = (int *)(lVar13 + 0x20);
  if (*(int *)(lVar13 + 0x28) != 0) {
    piVar1 = (int *)(lVar13 + 0x24);
  }
  uVar8 = param_2 + *piVar1 * param_3;
  uVar12 = (**(code **)(*(long *)param_1[0x20] + 0x58))();
  if (uVar12 <= uVar8) {
    return;
  }
  *(int *)(param_1 + 0x122) = param_2;
  *(int *)(param_1[0x116] + 0x14) = param_2;
  *(int *)((long)param_1 + 0x914) = param_3;
  *(int *)(param_1[0x116] + 0x10) = param_3;
  lVar13 = param_1[0x112];
  if (*(char *)(lVar13 + 8) != '\0') {
    FUN_0282d0b4(lVar13);
    uVar21 = (**(code **)(**(long **)(lVar13 + 0x10) + 0x30))
                       (*(long **)(lVar13 + 0x10),lVar13 + 0x58);
    uVar22 = (undefined4)((ulong)uVar21 >> 0x20);
    pcStack_d8 = *(code **)(lVar13 + 200);
    fVar23 = (float)uVar21 + *(float *)(lVar13 + 0xb0) * 0.5;
    fVar20 = (float)(int)(float)param_3;
    if (*(char *)(lVar13 + 0xd4) != '\0') {
      fVar20 = (float)param_3;
    }
    *(code **)(lVar13 + 200) = pcStack_d8;
    *(ulong *)(lVar13 + 0xc0) = CONCAT44(uVar22,fVar23);
    local_e0 = (long **)CONCAT44(uVar22,fVar23 + *(float *)(lVar13 + 0xd0) * fVar20);
    (**(code **)(**(long **)(lVar13 + 0x10) + 0x28))
              (*(long **)(lVar13 + 0x10),lVar13 + 0x38,&local_e0);
  }
  pcVar14 = (code *)param_1[0x42];
  if (pcVar14 != (code *)0x0) {
    puVar3 = *(undefined8 **)param_1[0x107];
    puVar6 = (undefined8 *)((long *)param_1[0x107])[1];
    if ((puVar3 != puVar6) &&
       ((*(char *)(puVar3 + 4) != '\0' || (*(uint *)((long)puVar3 + 0x24) != uVar8)))) {
      puVar11 = puVar3 + 6;
      do {
        puVar16 = puVar11;
        puVar3 = puVar6;
        if (puVar6 == puVar16) break;
        puVar11 = puVar16 + 6;
      } while ((*(char *)(puVar16 + 4) != '\0') ||
              (puVar3 = puVar16, *(uint *)((long)puVar16 + 0x24) != uVar8));
    }
    if ((puVar3 != (undefined8 *)0x0) && (puVar6 != puVar3)) {
      local_e0 = (long **)*puVar3;
      pcStack_d8 = (code *)puVar3[1];
      local_d0 = (code *)puVar3[2];
      local_c8 = (long *)puVar3[3];
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x18))();
        pcVar14 = (code *)param_1[0x42];
      }
      local_5c = *(undefined4 *)(puVar3 + 5);
      local_58 = (long *)CONCAT44(local_58._4_4_,uVar8);
      (*pcVar14)(param_1 + 0x46,&local_58,&local_e0,&local_5c);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
    }
  }
  plVar4 = *(long **)param_1[0x107];
  plVar18 = (long *)((long *)param_1[0x107])[1];
  if ((plVar4 != plVar18) && ((char)plVar4[4] != '\0' || *(uint *)((long)plVar4 + 0x24) != uVar8)) {
    plVar17 = plVar4 + 6;
    do {
      plVar15 = plVar17;
      plVar4 = plVar18;
      if (plVar18 == plVar15) break;
      plVar17 = plVar15 + 6;
    } while (((char)plVar15[4] != '\0') ||
            (plVar4 = plVar15, *(uint *)((long)plVar15 + 0x24) != uVar8));
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (plVar18 == plVar4) {
    return;
  }
  pcVar14 = (code *)param_1[0x11f];
  if (*pcVar14 == (code)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    pcVar19 = (code *)param_1[0x11e];
    plVar18 = (long *)param_1[0x120];
    plVar17 = (long *)param_1[0x121];
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    local_e0 = &local_58;
    local_58 = (long *)0x0;
    pcStack_d8 = pcVar19;
    local_d0 = pcVar14;
    local_c8 = plVar18;
    local_c0[0] = plVar17;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    FUN_02813244(param_1,&local_e0,0);
    if (local_c0[0] != (long *)0x0) {
      (**(code **)(*local_c0[0] + 0x20))();
    }
    plVar18 = local_58;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    (**(code **)(*plVar18 + 0xe8))(plVar18);
    lVar13 = FUN_00d35700(plVar18 + 10);
    if (lVar13 != 0) {
      local_d0 = (code *)0x0;
      local_c8 = (long *)0x0;
      local_e0 = (long **)0x0;
      pcStack_d8 = (code *)0x0;
      pcVar14 = *(code **)(lVar13 + 0x2c8);
      if (pcVar14 != (code *)0x0) {
        *(undefined8 *)(lVar13 + 0x2d8) = 0;
        *(undefined8 *)(lVar13 + 0x2d0) = 0;
        *(undefined8 *)(lVar13 + 0x2c8) = 0;
        *(undefined8 *)(lVar13 + 0x2c0) = 0;
        (*pcVar14)(lVar13 + 0x2e0);
        if (local_d0 != (code *)0x0) {
          (*local_d0)(local_c0,lVar13 + 0x2e0);
          *(code **)(lVar13 + 0x2c8) = pcStack_d8;
          *(long **)(lVar13 + 0x2d8) = local_c8;
          *(code **)(lVar13 + 0x2d0) = local_d0;
          *(long ***)(lVar13 + 0x2c0) = local_e0;
        }
      }
      pcVar14 = pcStack_d8;
      if (pcStack_d8 != (code *)0x0) {
        local_d0 = (code *)0x0;
        local_c8 = (long *)0x0;
        local_e0 = (long **)0x0;
        pcStack_d8 = (code *)0x0;
        (*pcVar14)(local_c0);
      }
    }
  }
  lVar13 = *plVar4;
  lVar7 = plVar4[1];
  lVar5 = plVar4[2];
  plVar17 = (long *)plVar4[3];
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  local_e0 = &local_58;
  local_58 = (long *)0x0;
  pcStack_d8 = (code *)lVar13;
  local_d0 = (code *)lVar7;
  local_c8 = (long *)lVar5;
  local_c0[0] = plVar17;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  FUN_02813244(param_1,&local_e0,0);
  if (local_c0[0] != (long *)0x0) {
    (**(code **)(*local_c0[0] + 0x20))();
  }
  plVar15 = local_58;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  plVar17 = (long *)param_1[0x110];
  if (plVar17 != (long *)0x0) {
    local_e8 = plVar18;
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02819ef0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar21;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    local_f0 = plVar15;
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02819ef0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar21;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    (**(code **)(*plVar17 + 0xf8))(plVar17,&local_e8,&local_f0);
    if (local_f0 != (long *)0x0) {
      lVar13 = local_f0[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar2 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    if (local_e8 != (long *)0x0) {
      lVar13 = local_e8[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar2 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar4;
  lVar7 = plVar4[1];
  lVar5 = plVar4[2];
  plVar4 = (long *)plVar4[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar18 = (long *)param_1[0x121];
  param_1[0x11e] = lVar13;
  param_1[0x11f] = lVar7;
  param_1[0x120] = lVar5;
  param_1[0x121] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  param_1[0x121] = (long)plVar4;
  (**(code **)(*plVar15 + 0xe0))(plVar15);
  lVar13 = FUN_00d35700(plVar15 + 10);
  if (lVar13 == 0) {
    return;
  }
  pcVar14 = *(code **)(lVar13 + 0x2c8);
  local_e0 = (long **)&LAB_028223a8;
  pcStack_d8 = FUN_02822574;
  local_d0 = FUN_02822578;
  local_c8 = (long *)&LAB_02822584;
  local_c0[0] = param_1;
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar13 + 0x2d0) = 0;
    *(undefined8 *)(lVar13 + 0x2d8) = 0;
    *(undefined8 *)(lVar13 + 0x2c0) = 0;
    *(undefined8 *)(lVar13 + 0x2c8) = 0;
    (*pcVar14)(lVar13 + 0x2e0);
    if (local_d0 == (code *)0x0) goto LAB_02819ddc;
  }
  (*local_d0)(local_c0,lVar13 + 0x2e0);
  *(code **)(lVar13 + 0x2c8) = pcStack_d8;
  *(long **)(lVar13 + 0x2d8) = local_c8;
  *(code **)(lVar13 + 0x2d0) = local_d0;
  *(undefined8 *)(lVar13 + 0x2c0) = local_e0;
LAB_02819ddc:
  pcVar14 = pcStack_d8;
  if (pcStack_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (long **)0x0;
    pcStack_d8 = (code *)0x0;
    (*pcVar14)(local_c0);
  }
  return;
}


