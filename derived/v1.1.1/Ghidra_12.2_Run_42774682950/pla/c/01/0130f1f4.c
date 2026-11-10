/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130f1f4; name: FUN_0130f1f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0130f1f4(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long local_38;
  
  if (*(long *)(param_1 + 0x2c8) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x2c8) + 500) == '\0') {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x440);
  if (lVar9 == 0) {
    bVar6 = false;
    plVar11 = _DAT_00000058;
  }
  else {
    bVar6 = *(char *)(lVar9 + 0x60) != '\0';
    plVar11 = *(long **)(lVar9 + 0x58);
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = &local_38;
  local_38 = 0;
  FUN_01318f8c(plVar11,&local_70,0);
  lVar9 = local_38;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if ((bool)(bVar6 ^ 1U | lVar9 != 0)) {
LAB_0130f334:
    *(undefined8 *)(param_1 + 0xd74) = 0;
    *(undefined4 *)(param_1 + 0xd7c) = 0;
    goto LAB_0130f340;
  }
  uVar8 = *(uint *)(param_2 + 0xa0);
  iVar2 = (uVar8 >> 0xe & 1) - (uVar8 >> 0xc & 1);
  iVar5 = (uVar8 >> 0xd & 1) - (uVar8 >> 0xf & 1);
  if (iVar5 == 0 && iVar2 == 0) {
    fVar12 = *(float *)(param_2 + 0xd0);
    if (fVar12 * fVar12 + *(float *)(param_2 + 0xd4) * *(float *)(param_2 + 0xd4) <= 0.0) {
      if (*(char *)(param_1 + 0xd5c) != '\0') {
        local_70 = (long *)0x7a4a9d0dc22b5460;
        pcStack_68 = "STOP_UI_COMMON_MAP_CURSOR_MOVE";
        local_60 = 0x1e;
        local_58 = (long *)0x0;
        FUN_028354b0(&local_70);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        *(undefined1 *)(param_1 + 0xd5c) = 0;
      }
      goto LAB_0130f334;
    }
    fVar15 = *(float *)(param_2 + 0xd4);
    if (fVar15 * fVar15 + fVar12 * fVar12 < 0.64000005) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(int *)(param_1 + 0xd7c) + 1;
    }
    *(uint *)(param_1 + 0xd7c) = uVar8;
    if (*(int *)(param_1 + 0xd74) == 1) {
      if (uVar8 == 0) {
LAB_0130f514:
        *(undefined8 *)(param_1 + 0xd74) = 0;
      }
      else {
        if (8 < *(uint *)(param_1 + 0xd78)) {
          uVar7 = 2;
          goto LAB_0130f5c0;
        }
        *(uint *)(param_1 + 0xd78) = *(uint *)(param_1 + 0xd78) + 1;
      }
    }
    else if (*(int *)(param_1 + 0xd74) == 2) {
      if (uVar8 == 0) goto LAB_0130f514;
    }
    else if (8 < uVar8) {
      uVar7 = 1;
LAB_0130f5c0:
      *(undefined8 *)(param_1 + 0xd74) = uVar7;
    }
    fVar13 = *(float *)(param_1 + 0xd70);
    if (*(char *)(param_1 + 0x1e08) != '\0') {
      fVar14 = *(float *)(param_1 + 0xd60);
      fVar12 = fVar13 * fVar12;
      goto LAB_0130f5d0;
    }
    fVar14 = *(float *)(param_1 + 0xd60);
    fVar12 = fVar13 * fVar12;
LAB_0130f47c:
    local_70 = (long *)CONCAT44(fVar15 * fVar13 + *(float *)(param_1 + 0xd64),fVar12 + fVar14);
    FUN_01312d60(param_1,&local_70);
    cVar3 = *(char *)(param_1 + 0xd5c);
  }
  else {
    fVar12 = (float)iVar2;
    if ((iVar2 == 0) || (iVar5 == 0)) {
      fVar15 = (float)iVar5;
    }
    else {
      fVar12 = fVar12 * 0.707106;
      fVar15 = (float)iVar5 * 0.707106;
    }
    if (fVar12 * fVar12 + fVar15 * fVar15 < 0.64000005) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(int *)(param_1 + 0xd7c) + 1;
    }
    *(uint *)(param_1 + 0xd7c) = uVar8;
    if (*(int *)(param_1 + 0xd74) == 1) {
      if (uVar8 == 0) {
LAB_0130f6ec:
        *(undefined8 *)(param_1 + 0xd74) = 0;
      }
      else {
        if (8 < *(uint *)(param_1 + 0xd78)) {
          uVar7 = 2;
          goto LAB_0130f708;
        }
        *(uint *)(param_1 + 0xd78) = *(uint *)(param_1 + 0xd78) + 1;
      }
    }
    else if (*(int *)(param_1 + 0xd74) == 2) {
      if (uVar8 == 0) goto LAB_0130f6ec;
    }
    else if (8 < uVar8) {
      uVar7 = 1;
LAB_0130f708:
      *(undefined8 *)(param_1 + 0xd74) = uVar7;
    }
    fVar13 = *(float *)(param_1 + 0xd70);
    if (*(char *)(param_1 + 0x1e08) == '\0') {
      fVar14 = *(float *)(param_1 + 0xd60);
      fVar12 = fVar12 * fVar13;
      goto LAB_0130f47c;
    }
    fVar14 = *(float *)(param_1 + 0xd60);
    fVar12 = fVar12 * fVar13;
LAB_0130f5d0:
    local_70 = (long *)CONCAT44(fVar15 * fVar13 + *(float *)(param_1 + 0xd64),fVar12 + fVar14);
    FUN_01312c38(param_1,&local_70,0);
    cVar3 = *(char *)(param_1 + 0xd5c);
  }
  if (cVar3 == '\0') {
    local_70 = (long *)0x2f07cdb722895236;
    pcStack_68 = "PLAY_UI_COMMON_MAP_CURSOR_MOVE";
    local_60 = 0x1e;
    local_58 = (long *)0x0;
    FUN_028354b0(&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xd5c) = 1;
  }
LAB_0130f340:
  if (*(char *)(param_1 + 0x1e08) == '\0') {
    fVar12 = *(float *)(param_1 + 0xd60);
    fVar15 = *(float *)(param_1 + 0xd64);
  }
  else {
    fVar12 = *(float *)(param_1 + 0xd60) + *(float *)(param_1 + 0x1e28);
    fVar15 = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0x1e2c);
  }
  lVar9 = FUN_01306260(param_1 + 0x180,"pane_N_wacl_00");
  fVar13 = *(float *)(param_1 + 0x1e30);
  if (1.0 < fVar13) {
    fVar12 = -(fVar12 * (fVar13 + -1.0));
    fVar15 = -(fVar15 * (fVar13 + -1.0));
  }
  else {
    fVar12 = fVar12 * (1.0 - fVar13);
    fVar15 = fVar15 * (1.0 - fVar13);
  }
  *(float *)(param_1 + 0x1e34) = fVar12;
  *(float *)(param_1 + 0x1e38) = fVar15;
  *(float *)(lVar9 + 0x30) = fVar12;
  *(float *)(lVar9 + 0x34) = fVar15;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  *(ulong *)(lVar9 + 0x48) = CONCAT44(fVar13,fVar13);
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
  if (*(code **)(param_1 + 0x650) != (code *)0x0) {
    fVar12 = *(float *)(param_1 + 0xd60);
    if (*(char *)(param_1 + 0x1e08) == '\0') {
      fVar13 = *(float *)(param_1 + 0x1e30);
      fVar15 = *(float *)(param_1 + 0xd64);
      fVar12 = fVar12 + (fVar12 - fVar12) * fVar13;
      fVar14 = fVar15 - fVar15;
    }
    else {
      fVar12 = fVar12 + *(float *)(param_1 + 0x1e28);
      fVar15 = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0x1e2c);
      fVar14 = *(float *)(param_1 + 0x1e30);
      fVar12 = fVar12 + (fVar12 - fVar12) * fVar14;
      fVar13 = fVar15 - fVar15;
    }
    local_70 = (long *)CONCAT44(fVar15 + fVar14 * fVar13,fVar12);
    (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_70);
  }
  FUN_0130f750(param_1);
  FUN_013134e0(param_1);
  FUN_01317788(param_1,1);
  FUN_0130fa44(param_1);
  return 0;
}


