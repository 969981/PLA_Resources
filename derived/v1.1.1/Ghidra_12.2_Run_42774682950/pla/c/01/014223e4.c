/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014223e4; name: FUN_014223e4
 */


/* WARNING: Removing unreachable block (ram,0x01422494) */
/* WARNING: Removing unreachable block (ram,0x01422498) */
/* WARNING: Removing unreachable block (ram,0x014224a0) */
/* WARNING: Removing unreachable block (ram,0x014224a8) */
/* WARNING: Removing unreachable block (ram,0x014227cc) */
/* WARNING: Removing unreachable block (ram,0x014224cc) */
/* WARNING: Removing unreachable block (ram,0x014224f0) */

void FUN_014223e4(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_118;
  undefined *puStack_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 local_70;
  
  uVar12 = (ulong)*(byte *)(param_1 + 7);
  lVar14 = uVar12 * 0x1f8;
  local_e0 = *(undefined8 *)(&DAT_0420e360 + lVar14);
  local_c0 = *(undefined8 *)(&DAT_0420e420 + lVar14);
  local_f0 = *(undefined8 *)(&DAT_0420e350 + lVar14);
  local_e8 = (&PTR_s_pane_L_list_base_00_L_gauge_exp__0420e358)[uVar12 * 0x3f];
  local_d0 = *(undefined8 *)(&DAT_0420e410 + lVar14);
  puStack_c8 = (&PTR_s_anime_L_list_base_00_L_gauge_exp_0420e418)[uVar12 * 0x3f];
  local_f8 = (long *)*param_1;
  if (local_f8 != (long *)0x0) {
    plVar16 = local_f8 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_80 = 0;
  local_88 = &DAT_03996322;
  local_90 = &DAT_cbf29ce484222645;
  local_98 = (long *)0x0;
  local_a0 = 0;
  puStack_a8 = &DAT_03996322;
  local_b0 = &DAT_cbf29ce484222645;
  local_b8 = (long *)0x0;
  local_d8 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = 1;
  FUN_014228a0(param_1[6] + 0x58,&local_f8);
  iVar8 = FUN_02c68e44(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
  iVar9 = FUN_02c60024(*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60));
  iVar10 = FUN_02c600e8(*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60));
  (**(code **)(*(long *)param_1[6] + 0x28))
            ((float)(uint)(iVar8 - iVar9),(long *)param_1[6],iVar10 - iVar9);
  plVar16 = *(long **)(*param_1 + 0x1b8);
  if (plVar16 == (long *)0x0) {
    FUN_02c395d0(0,0,iVar10 - iVar8,7,0,1);
  }
  else {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_02c395d0(plVar16,0,iVar10 - iVar8,7,0,1);
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar15 = param_1[1];
  uVar17 = *(undefined8 *)(&DAT_0420e378 + lVar14);
  uVar11 = *(undefined8 *)(&DAT_0420e368 + lVar14);
  puVar5 = (&PTR_s_pane_L_list_base_00_T_exp_00_0420e370)[uVar12 * 0x3f];
  plVar16 = *(long **)(*param_1 + 0x1c0);
  if (plVar16 == (long *)0x0) {
    lVar14 = *(long *)(lVar15 + 0xb0);
    if (lVar14 != 0) {
      plVar16 = *(long **)(lVar14 + 0x270);
      if (plVar16 != *(long **)(lVar14 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar16 != 0) {
            plVar3 = (long *)(*plVar16 + 0x58);
          }
          if (*plVar3 == -0x7c45e2df7ef8eba3) goto LAB_01422878;
          plVar16 = plVar16 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar14 + 0x278) != plVar16);
      }
    }
    iVar8 = 0;
LAB_01422878:
    FUN_02c2e33c(lVar15,iVar8,0);
  }
  else {
    plVar3 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar14 = *(long *)(lVar15 + 0xb0);
    if (lVar14 != 0) {
      plVar13 = *(long **)(lVar14 + 0x270);
      if (plVar13 != *(long **)(lVar14 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar2 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar2 == -0x7c45e2df7ef8eba3) goto LAB_01422670;
          plVar13 = plVar13 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar14 + 0x278) != plVar13);
      }
    }
    iVar8 = 0;
LAB_01422670:
    FUN_02c2e33c(lVar15,iVar8,plVar16);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  lVar15 = *param_1;
  local_100 = (long *)0x0;
  lVar18 = *(long *)(lVar15 + 0x1b8);
  uVar4 = *(undefined8 *)(lVar15 + 0x1c0);
  lVar14 = *(long *)(lVar15 + 0x1c8);
  *(undefined4 *)(lVar18 + 0x124) = 0;
  *(undefined2 *)(lVar18 + 0x128) = 0;
  *(undefined4 *)(lVar18 + 300) = 0;
  *(undefined4 *)(lVar18 + 0x134) = 0;
  local_118 = uVar11;
  puStack_110 = puVar5;
  local_108 = uVar17;
  FUN_02c33414(lVar18,uVar4);
  if (*(char *)(lVar14 + 0x7c) != '\0') {
    **(undefined2 **)(lVar14 + 0x58) = 0;
    *(undefined2 *)(lVar14 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar18,lVar14,uVar4,0,0);
  FUN_0283ce7c(lVar15,&local_118,*(undefined8 *)(lVar15 + 0x1c8),10);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    plVar16 = local_f8 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  return;
}


