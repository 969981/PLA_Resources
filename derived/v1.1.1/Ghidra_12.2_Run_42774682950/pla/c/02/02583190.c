/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02583190; name: FUN_02583190
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02583190(long param_1,ulong param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long local_58;
  
  plVar17 = *(long **)(*(long *)(param_1 + 0x60) + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_90 = &local_58;
  local_58 = 0;
  local_88 = 0x60dd9a51c30b7a73;
  pcStack_80 = "ContextMenu";
  local_78 = 0xb;
  local_70 = (long *)0x0;
  FUN_00d4747c(plVar17,&local_90,0);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  lVar16 = local_58;
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x90);
  uVar15 = -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  uVar6 = *(undefined4 *)(&DAT_03a7d638 + uVar15);
  *(undefined1 *)(lVar16 + 0x701) = 0;
  *(undefined1 *)(lVar16 + 0x6ff) = 0;
  *(undefined4 *)(lVar16 + 0x510) = uVar5;
  *(undefined4 *)(lVar16 + 0xf0) = *(undefined4 *)(&DAT_03a7d64c + uVar15);
  FUN_0280a9e0(lVar16);
  FUN_0280ace8(lVar16);
  FUN_0280b258(lVar16,uVar6);
  *(undefined4 *)(lVar16 + 0x500) = 1;
  *(undefined1 *)(lVar16 + 0xa1) = 1;
  lVar3 = lVar16 + (long)(int)param_3 * 0x40;
  lVar12 = lVar16 + 0x338;
  (**(code **)(**(long **)(lVar16 + 0xe8) + 0x50))(*(long **)(lVar16 + 0xe8),lVar12,1);
  *(uint *)(*(long *)(lVar16 + 0x4e0) + 8) = param_3;
  local_90 = (long *)0x0;
  local_88 = 0;
  (**(code **)(**(long **)(lVar16 + 0xe8) + 0x28))(*(long **)(lVar16 + 0xe8),lVar12,&local_90);
  (**(code **)(**(long **)(lVar16 + 0xe8) + 0xd0))(*(long **)(lVar16 + 0xe8),lVar3 + 0x118,lVar12);
  if (0 < *(int *)(lVar16 + 0x510)) {
    plVar17 = *(long **)(lVar16 + 0xe8);
    lVar12 = lVar16 + 0x794;
    lVar3 = lVar3 + 0xf8;
    lVar2 = lVar16 + 0x790;
    if (param_3 == 0) {
      lVar13 = *plVar17;
      lVar10 = lVar3;
      lVar11 = lVar2;
    }
    else {
      lVar13 = *plVar17;
      lVar10 = lVar16 + 0xf8;
      lVar11 = lVar12;
    }
    (**(code **)(lVar13 + 200))(plVar17,lVar10,lVar11);
    if (1 < *(int *)(lVar16 + 0x510)) {
      plVar17 = *(long **)(lVar16 + 0xe8);
      if (param_3 == 1) {
        lVar13 = *plVar17;
        lVar10 = lVar3;
        lVar11 = lVar2;
      }
      else {
        lVar13 = *plVar17;
        lVar10 = lVar16 + 0x138;
        lVar11 = lVar12;
      }
      (**(code **)(lVar13 + 200))(plVar17,lVar10,lVar11);
      if (2 < *(int *)(lVar16 + 0x510)) {
        plVar17 = *(long **)(lVar16 + 0xe8);
        if (param_3 == 2) {
          lVar13 = *plVar17;
          lVar10 = lVar3;
          lVar11 = lVar2;
        }
        else {
          lVar13 = *plVar17;
          lVar10 = lVar16 + 0x178;
          lVar11 = lVar12;
        }
        (**(code **)(lVar13 + 200))(plVar17,lVar10,lVar11);
        if (3 < *(int *)(lVar16 + 0x510)) {
          lVar10 = lVar16 + 0x1b8;
          uVar15 = 3;
          do {
            plVar17 = *(long **)(lVar16 + 0xe8);
            if (param_3 == uVar15) {
              lVar14 = *plVar17;
              lVar11 = lVar3;
              lVar13 = lVar2;
            }
            else {
              lVar14 = *plVar17;
              lVar11 = lVar10;
              lVar13 = lVar12;
            }
            (**(code **)(lVar14 + 200))(plVar17,lVar11,lVar13);
            uVar15 = uVar15 + 1;
            lVar10 = lVar10 + 0x40;
          } while ((long)uVar15 < (long)*(int *)(lVar16 + 0x510));
        }
      }
    }
  }
  *(undefined8 *)(lVar16 + 0x4d8) = 0;
  *(undefined8 *)(lVar16 + 0x4d0) = 0;
  *(undefined8 *)(lVar16 + 0x4c8) = 0;
  *(undefined8 *)(lVar16 + 0x4c0) = 0;
  *(undefined8 *)(lVar16 + 0x4b8) = 0;
  *(undefined8 *)(lVar16 + 0x4b0) = 0;
  *(undefined8 *)(lVar16 + 0x4a8) = 0;
  if (*(char *)(lVar16 + 0x6f8) == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6f9);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6f8) = 0;
    *(undefined8 *)(lVar16 + 0x538) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x540) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x548) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6f9);
  }
  if (cVar7 == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6fa);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6f9) = 0;
    *(undefined8 *)(lVar16 + 0x558) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x560) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x568) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6fa);
  }
  if (cVar7 == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6fb);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6fa) = 0;
    *(undefined8 *)(lVar16 + 0x578) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x580) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x588) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6fb);
  }
  if (cVar7 == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6fc);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6fb) = 0;
    *(undefined8 *)(lVar16 + 0x598) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x5a0) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x5a8) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6fc);
  }
  if (cVar7 == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6fd);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6fc) = 0;
    *(undefined8 *)(lVar16 + 0x5b8) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x5c0) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x5c8) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6fd);
  }
  if (cVar7 == '\0') {
    cVar7 = *(char *)(lVar16 + 0x6fe);
  }
  else {
    *(undefined1 *)(lVar16 + 0x6fd) = 0;
    *(undefined8 *)(lVar16 + 0x5d8) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x5e0) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x5e8) = 0x15;
    cVar7 = *(char *)(lVar16 + 0x6fe);
  }
  if (cVar7 != '\0') {
    *(undefined1 *)(lVar16 + 0x6fe) = 0;
    *(undefined8 *)(lVar16 + 0x5f8) = 0xc1a949029450238f;
    *(char **)(lVar16 + 0x600) = "PLAY_UI_COMMON_DECIDE";
    *(undefined8 *)(lVar16 + 0x608) = 0x15;
  }
  if ((param_4 & 1) != 0) {
    FUN_0280a5d8(lVar16,*(int *)(param_1 + 0x90) + -1,&DAT_03a7d660,1);
  }
  lVar16 = *(long *)(param_1 + 0x60);
  if (*(char *)(lVar16 + 0x62) == '\0') {
    *(undefined1 *)(lVar16 + 0x60) = 1;
    if (*(char *)(lVar16 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar16 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar16 + 0x58),0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


