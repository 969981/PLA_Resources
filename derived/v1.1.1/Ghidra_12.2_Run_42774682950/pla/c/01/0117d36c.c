/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117d36c; name: FUN_0117d36c
 */


undefined8 FUN_0117d36c(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  long *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (*(int *)(param_1 + 0x690) != 1) {
    if (*(int *)(param_1 + 0x690) != 0) {
      return 0;
    }
    uVar7 = FUN_0117a1bc(param_1);
    plVar15 = *(long **)(param_1 + 0x2c8);
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar16 = (long *)plVar15[0x37];
    if (plVar16 == (long *)0x0) {
      FUN_02c395d0(0,0,uVar7,7,0,1);
    }
    else {
      lVar11 = plVar16[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar16,0,uVar7,7,0,1);
      lVar11 = plVar16[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    plVar16 = plVar15 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    local_70 = (long *)0x333f1bed2a73ee16;
    pcStack_68 = "pane_L_money_00_T_param_add_00";
    local_60 = 0x1e;
    local_58 = (long *)0x0;
    FUN_011797ec(param_1,0,0xe470e3c8711d08ec,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = (long *)&DAT_bcaa842e33ae880f;
    pcStack_68 = "anime_L_money_00_money_add";
    local_60 = 0x1a;
    local_58 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148c68(&local_70);
    FUN_011171c8(local_70,uVar7);
    if (local_70 != (long *)0x0) {
      lVar11 = local_70[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    FUN_01178624(param_1);
    local_70 = (long *)0x1e37f28f1ac9380a;
    pcStack_68 = "PLAY_UI_COMMON_REGISTER";
    local_60 = 0x17;
    local_58 = (long *)0x0;
    FUN_028354b0(&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    *(int *)(param_1 + 0x690) = *(int *)(param_1 + 0x690) + 1;
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x2c8);
  if (lVar11 != 0) {
    puVar3 = *(undefined8 **)(lVar11 + 0x1a0);
    lVar11 = *(long *)(lVar11 + 0x1a8);
    if ((lVar11 == 0) || ((undefined1 *)*puVar3 == &DAT_bcaa842e33ae880f)) {
      puVar13 = puVar3;
    }
    else {
      lVar12 = lVar11 * 0x30;
      puVar14 = puVar3;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          return 1;
        }
        puVar1 = puVar14 + 6;
        puVar13 = puVar14 + 6;
        puVar14 = puVar14 + 6;
      } while ((undefined1 *)*puVar1 != &DAT_bcaa842e33ae880f);
    }
    if (puVar13 != puVar3 + lVar11 * 6) {
      uVar10 = (ulong)*(uint *)(puVar13 + 5);
      if (((*(uint *)(puVar13 + 5) < *(uint *)(puVar13[4] + 0x278)) &&
          (lVar11 = *(long *)(puVar13[4] + 600), *(char *)(lVar11 + uVar10 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar11 + uVar10 * 0x48 + 0xb) != '\0')) {
        plVar15 = (long *)(lVar11 + uVar10 * 0x48 + 0x10);
        lVar12 = *plVar15;
        if ((lVar12 != 0) && (*(char *)(lVar11 + uVar10 * 0x48 + 9) == '\0')) {
          fVar17 = *(float *)(lVar12 + 0x20);
          uVar6 = FUN_00227728();
          uVar10 = FUN_00227744(*plVar15);
          if (((float)uVar6 <= fVar17) && ((uVar10 & 1) == 0)) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}


