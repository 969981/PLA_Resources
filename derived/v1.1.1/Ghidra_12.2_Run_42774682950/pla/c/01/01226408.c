/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01226408; name: FUN_01226408
 */


void FUN_01226408(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (param_2 == 0) {
    FUN_01226344(param_1);
    return;
  }
  iVar7 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  if (iVar7 == 0) goto LAB_012267b0;
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar15 = (long *)plVar16[0x37];
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = plVar16 + 10;
  do {
    iVar9 = (int)*plVar14 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *(int *)plVar14 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  uVar8 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  uVar11 = (**(code **)(*plVar15 + 0x50))(plVar15,plVar15[0xd],uVar8);
  if ((int)plVar15[0x12] != 0) {
    lVar18 = plVar15[0xd];
    *(ulong *)(plVar15[0x13] + 8) = uVar11 & 0xffff | 0x20000;
    plVar16 = (long *)plVar15[0x13];
    lVar17 = *plVar16;
    if (*(char *)(lVar17 + 0x7c) != '\0') {
      uVar5 = FUN_02c30580(*(undefined8 *)(lVar17 + 0x58),*(undefined8 *)(lVar18 + 0x58),
                           *(undefined2 *)(lVar17 + 0x78));
      *(undefined2 *)(lVar17 + 0x7a) = uVar5;
      plVar16 = (long *)plVar15[0x13];
    }
    *(undefined2 *)(plVar16 + 2) = 0;
    *(ushort *)(plVar15[0x13] + 0x12) = *(ushort *)(plVar15[0x13] + 0x12) & 0xfffe;
  }
  local_70 = 0x54a4daa8e39c8cfd;
  pcStack_68 = "pane_L_mode_trade_00_T_pokerace_00";
  local_60 = 0x22;
  local_58 = (long *)0x0;
  FUN_0121ac84(param_1,0x738145784feacf19,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xa2918f41bb42e275;
  pcStack_68 = "anime_L_mode_trade_00_L_icon_seibetu_00_switch";
  local_60 = 0x2e;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
  }
  local_70 = 0xa2918f41bb42e275;
  pcStack_68 = "anime_L_mode_trade_00_L_icon_seibetu_00_switch";
  local_60 = 0x2e;
  local_58 = (long *)0x0;
  iVar9 = FUN_01090c00(param_2);
  lVar18 = *(long *)(param_1 + 0x2c8);
  if (lVar18 != 0) {
    plVar16 = *(long **)(lVar18 + 0x1a0);
    lVar17 = *(long *)(lVar18 + 0x1a8);
    if ((lVar17 == 0) || (*plVar16 == -0x5d6e70be44bd1d8b)) {
      plVar14 = plVar16;
    }
    else {
      lVar13 = lVar17 * 0x30;
      plVar12 = plVar16;
      do {
        lVar13 = lVar13 + -0x30;
        if (lVar13 == 0) goto LAB_012266f0;
        plVar1 = plVar12 + 6;
        plVar14 = plVar12 + 6;
        plVar12 = plVar12 + 6;
      } while (*plVar1 != -0x5d6e70be44bd1d8b);
    }
    plVar16 = plVar16 + lVar17 * 6;
    if (plVar14 == plVar16) {
      plVar12 = (long *)0x0;
      if (plVar14 != plVar16) goto LAB_01226670;
LAB_012266f0:
      if (lVar18 == 0) goto LAB_0122670c;
      FUN_0283b1e8(lVar18,&local_70);
    }
    else {
      plVar12 = plVar14 + 4;
      if (plVar14 == plVar16) goto LAB_012266f0;
LAB_01226670:
      uVar11 = (ulong)*(uint *)(plVar12 + 1);
      if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
          (lVar17 = *(long *)(*plVar12 + 600), *(char *)(lVar17 + uVar11 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar17 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_012266f0;
      plVar16 = (long *)(lVar17 + uVar11 * 0x48 + 0x10);
      lVar18 = *plVar16;
      if ((lVar18 != 0) && (*(char *)(lVar17 + uVar11 * 0x48 + 9) == '\0')) {
        fVar19 = *(float *)(lVar18 + 0x20);
        uVar6 = FUN_00227728();
        uVar11 = FUN_00227744(*plVar16);
        if (((float)uVar6 <= fVar19) && ((uVar11 & 1) == 0)) {
          lVar18 = *(long *)(param_1 + 0x2c8);
          goto LAB_012266f0;
        }
      }
    }
    FUN_0283b748((float)iVar9,*(undefined8 *)(param_1 + 0x2c8),&local_70);
  }
LAB_0122670c:
  uVar8 = FUN_02c5fb2c(param_2);
  FUN_02c395d0(plVar15,0,uVar8,3,0,1);
  local_70 = 0x6392d792db35eaa3;
  pcStack_68 = "pane_L_mode_trade_00_T_lv_00";
  local_60 = 0x1c;
  local_58 = (long *)0x0;
  FUN_0121ac84(param_1,0xc8f858d01388e617,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_01226258(param_1,param_2);
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
LAB_012267b0:
  FUN_01226344(param_1,iVar7 != 0);
  return;
}


