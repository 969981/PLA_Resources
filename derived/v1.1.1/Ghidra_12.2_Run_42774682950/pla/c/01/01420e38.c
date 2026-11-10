/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01420e38; name: FUN_01420e38
 */


void FUN_01420e38(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  byte bVar13;
  byte bVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined4 uVar20;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar9 = *param_1;
  plVar19 = *(long **)(lVar9 + 0x1b8);
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = *param_1;
  }
  plVar15 = *(long **)(lVar9 + 0x1c0);
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  uVar10 = (ulong)*(byte *)(param_1 + 4);
  lVar9 = uVar10 * 0xc0;
  if (*(byte *)(param_1 + 4) < *(byte *)(*(long *)(param_2 + 0x70) + 0x368)) {
    lVar11 = *(long *)(param_2 + 0x70) + uVar10 * 0x1c;
    bVar13 = *(byte *)(lVar11 + 0x304);
    bVar14 = *(byte *)(lVar11 + 0x305);
  }
  else {
    bVar13 = 0;
    bVar14 = 0;
  }
  uVar7 = *(undefined8 *)(&DAT_0420dfc0 + lVar9);
  puVar4 = (&PTR_s_pane_L_status_button_skill_00_T__0420dfc8)[uVar10 * 0x18];
  uVar17 = *(undefined8 *)(&DAT_0420dfd0 + lVar9);
  FUN_02c395d0(plVar19,0,bVar13,2,0,1);
  FUN_02c395d0(plVar19,1,bVar14,2,0,1);
  lVar11 = *(long *)(param_1[1] + 0xb0);
  if (lVar11 != 0) {
    plVar12 = *(long **)(lVar11 + 0x270);
    if (plVar12 != *(long **)(lVar11 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar12 != 0) {
          plVar2 = (long *)(*plVar12 + 0x58);
        }
        if (*plVar2 == 0x2bced3c0616b27cc) goto LAB_01420fc0;
        plVar12 = plVar12 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar11 + 0x278) != plVar12);
    }
  }
  iVar8 = 0;
LAB_01420fc0:
  FUN_02c2e33c(param_1[1],iVar8,plVar15);
  lVar16 = *param_1;
  local_68 = (long *)0x0;
  lVar18 = *(long *)(lVar16 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar16 + 0x1c0);
  lVar11 = *(long *)(lVar16 + 0x1c8);
  *(undefined4 *)(lVar18 + 0x124) = 0;
  *(undefined2 *)(lVar18 + 0x128) = 0;
  *(undefined4 *)(lVar18 + 300) = 0;
  *(undefined4 *)(lVar18 + 0x134) = 0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar17;
  FUN_02c33414(lVar18,uVar3);
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    **(undefined2 **)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x7a) = 0;
  }
  uVar7 = *(undefined8 *)(&DAT_0420dff0 + lVar9);
  puVar4 = (&PTR_s_anime_L_status_button_skill_00_p_0420dff8)[uVar10 * 0x18];
  uVar17 = *(undefined8 *)(&DAT_0420e000 + lVar9);
  FUN_02c338a4(lVar18,lVar11,uVar3,0,0);
  FUN_0283ce7c(lVar16,&local_80,*(undefined8 *)(lVar16 + 0x1c8),10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_68 = (long *)0x0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar17;
  FUN_0283b1e8(*param_1,&local_80);
  if (bVar13 == 0) {
    lVar9 = *param_1;
    uVar20 = 0x40400000;
  }
  else if ((bVar14 == 0) || ((float)bVar13 / (float)bVar14 <= 0.25)) {
    lVar9 = *param_1;
    uVar20 = 0x40000000;
  }
  else {
    lVar9 = *param_1;
    if ((float)bVar13 / (float)bVar14 <= 0.5) {
      uVar20 = 0x3f800000;
    }
    else {
      uVar20 = 0;
    }
  }
  local_68 = (long *)0x0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar17;
  FUN_0283b748(uVar20,lVar9,&local_80);
  if (plVar19 != (long *)0x0) {
    lVar9 = plVar19[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))();
    }
  }
  return;
}


