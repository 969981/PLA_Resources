/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01421d9c; name: FUN_01421d9c
 */


/* WARNING: Removing unreachable block (ram,0x01421e7c) */
/* WARNING: Removing unreachable block (ram,0x01421e80) */
/* WARNING: Removing unreachable block (ram,0x01421e88) */
/* WARNING: Removing unreachable block (ram,0x01421e90) */
/* WARNING: Removing unreachable block (ram,0x014221c8) */
/* WARNING: Removing unreachable block (ram,0x01421efc) */
/* WARNING: Removing unreachable block (ram,0x01421f04) */
/* WARNING: Removing unreachable block (ram,0x01421f0c) */
/* WARNING: Removing unreachable block (ram,0x01421f14) */
/* WARNING: Removing unreachable block (ram,0x01422174) */

void FUN_01421d9c(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  long *local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar15 = (ulong)*(byte *)(param_1 + 7);
  local_1e0 = *param_1;
  if (local_1e0 != 0) {
    piVar1 = (int *)(local_1e0 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar16 = uVar15 * 0x1f8;
  local_1d8 = param_1[1];
  if (local_1d8 != 0) {
    piVar1 = (int *)(local_1d8 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_128 = (&PTR_s_anime_L_list_base_00_L_gauge_hp__0420e3d0)[uVar15 * 0x3f];
  local_120 = *(undefined8 *)(&DAT_0420e3d8 + lVar16);
  local_170 = *(undefined8 *)(&DAT_0420e2a8 + lVar16);
  local_168 = (&PTR_s_pane_L_list_base_00_L_gauge_hp_0_0420e2b0)[uVar15 * 0x3f];
  local_88 = *(undefined8 *)(&DAT_0420e318 + lVar16);
  local_160 = *(undefined8 *)(&DAT_0420e2b8 + lVar16);
  local_1b0 = *(undefined8 *)(&DAT_0420e2c0 + lVar16);
  local_1a8 = (&PTR_s_pane_L_list_base_00_T_hp_numerat_0420e2c8)[uVar15 * 0x3f];
  local_1a0 = *(undefined8 *)(&DAT_0420e2d0 + lVar16);
  local_1d0 = *(undefined8 *)(&DAT_0420e2d8 + lVar16);
  local_1c8 = (&PTR_s_pane_L_list_base_00_T_hp_slash_0420e2e0)[uVar15 * 0x3f];
  local_1c0 = *(undefined8 *)(&DAT_0420e2e8 + lVar16);
  local_190 = *(undefined8 *)(&DAT_0420e2f0 + lVar16);
  local_188 = (&PTR_s_pane_L_list_base_00_T_hp_denomin_0420e2f8)[uVar15 * 0x3f];
  local_180 = *(undefined8 *)(&DAT_0420e300 + lVar16);
  local_98 = *(undefined8 *)(&DAT_0420e308 + lVar16);
  local_90 = (&PTR_s_pane_L_list_base_00_A_alignment__0420e310)[uVar15 * 0x3f];
  local_150 = *(undefined8 *)(&DAT_0420e3b0 + lVar16);
  local_148 = (&PTR_s_anime_L_list_base_00_L_gauge_hp__0420e3b8)[uVar15 * 0x3f];
  local_140 = *(undefined8 *)(&DAT_0420e3c0 + lVar16);
  local_130 = *(undefined8 *)(&DAT_0420e3c8 + lVar16);
  local_110 = *(undefined8 *)(&DAT_0420e3e0 + lVar16);
  local_108 = (&PTR_s_anime_L_list_base_00_L_gauge_hp__0420e3e8)[uVar15 * 0x3f];
  local_100 = *(undefined8 *)(&DAT_0420e3f0 + lVar16);
  local_f0 = *(undefined8 *)(&DAT_0420e3f8 + lVar16);
  local_e8 = (&PTR_s_anime_L_list_base_00_L_gauge_hp__0420e400)[uVar15 * 0x3f];
  local_e0 = *(undefined8 *)(&DAT_0420e408 + lVar16);
  local_80 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = &DAT_03996322;
  puStack_d0 = &DAT_cbf29ce484222645;
  local_d8 = 0;
  local_f8 = 0;
  local_118 = 0;
  local_138 = 0;
  local_158 = 0;
  local_178 = 0;
  local_198 = 0;
  local_1b8 = 0;
  local_1e8 = 0;
  local_a8 = 0x277beb238955333;
  local_b0 = 0x277bfb2389554e6;
  uVar17 = *(undefined8 *)(&DAT_0420e2a0 + lVar16);
  local_a0 = 0x277bdb238955180;
  uVar4 = *(undefined8 *)(&DAT_0420e290 + lVar16);
  puVar6 = (&PTR_s_pane_L_list_base_00_T_hp_heading_0420e298)[uVar15 * 0x3f];
  FUN_0143ac78(param_1[5],&local_1e8);
  lVar16 = param_1[5];
  uVar9 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xd);
  uVar10 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xe);
  FUN_0143b1ec((float)uVar9,lVar16,uVar10);
  FUN_0143ba18(param_1[5],1);
  FUN_0143bd08(param_1[5],1);
  lVar16 = param_1[1];
  plVar14 = *(long **)(*param_1 + 0x1c0);
  if (plVar14 == (long *)0x0) {
    lVar13 = *(long *)(lVar16 + 0xb0);
    if (lVar13 != 0) {
      plVar14 = *(long **)(lVar13 + 0x270);
      if (plVar14 != *(long **)(lVar13 + 0x278)) {
        iVar11 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar3 == 0x277c0b238955699) goto LAB_0142223c;
          plVar14 = plVar14 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar14);
      }
    }
    iVar11 = 0;
LAB_0142223c:
    FUN_02c2e33c(lVar16,iVar11,0);
  }
  else {
    plVar3 = plVar14 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar13 = *(long *)(lVar16 + 0xb0);
    if (lVar13 != 0) {
      plVar12 = *(long **)(lVar13 + 0x270);
      if (plVar12 != *(long **)(lVar13 + 0x278)) {
        iVar11 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar2 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar2 == 0x277c0b238955699) goto LAB_0142208c;
          plVar12 = plVar12 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar12);
      }
    }
    iVar11 = 0;
LAB_0142208c:
    FUN_02c2e33c(lVar16,iVar11,plVar14);
    do {
      iVar11 = (int)*plVar3 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  lVar13 = *param_1;
  local_1f0 = (long *)0x0;
  lVar18 = *(long *)(lVar13 + 0x1b8);
  uVar5 = *(undefined8 *)(lVar13 + 0x1c0);
  lVar16 = *(long *)(lVar13 + 0x1c8);
  *(undefined4 *)(lVar18 + 0x124) = 0;
  *(undefined2 *)(lVar18 + 0x128) = 0;
  *(undefined4 *)(lVar18 + 300) = 0;
  *(undefined4 *)(lVar18 + 0x134) = 0;
  local_208 = uVar4;
  puStack_200 = puVar6;
  local_1f8 = uVar17;
  FUN_02c33414(lVar18,uVar5);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar18,lVar16,uVar5,0,0);
  FUN_0283ce7c(lVar13,&local_208,*(undefined8 *)(lVar13 + 0x1c8),10);
  if (local_1f0 != (long *)0x0) {
    (**(code **)(*local_1f0 + 0x20))();
  }
  FUN_011cc710(&local_1e8);
  return;
}


