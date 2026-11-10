/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d37a8; name: FUN_013d37a8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013d37a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  
  uVar8 = (uint)*(ulong *)(param_1 + 0x5d0);
  if ((*(ulong *)(param_1 + 0x5d0) & 0x1a) != 0x12) {
    if ((uVar8 >> 3 & 1) != 0) goto LAB_013d3a04;
LAB_013d37e0:
    if ((uVar8 >> 2 & 1) == 0) goto LAB_013d37e4;
    local_70 = -0x66b328930d9203c0;
    local_68 = "anime_wake";
    local_60 = 10;
    local_58 = (long *)0x0;
    fVar17 = *(float *)(param_1 + 0x5dc);
    plVar14 = *(long **)(param_1 + 0x2c8);
    if (plVar14 == (long *)0x0) {
      fVar16 = (float)FUN_0283b914(0,&local_70);
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      FUN_0283b748(fVar16,0,&local_70);
    }
    else {
      plVar2 = plVar14 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      fVar16 = (float)FUN_0283b914(plVar14,&local_70);
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      FUN_0283b748(fVar16,plVar14,&local_70);
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar14 = *(long **)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x5dc) = *(float *)(param_1 + 0x5d8) + *(float *)(param_1 + 0x5dc);
    if (plVar14 == (long *)0x0) {
      if ((_DAT_000001a8 == 0) || (*_DAT_000001a0 == -0x66b328930d9203c0)) {
        plVar14 = _DAT_000001a0;
      }
      else {
        lVar9 = _DAT_000001a8 * 0x30;
        plVar2 = _DAT_000001a0;
        do {
          lVar9 = lVar9 + -0x30;
          if (lVar9 == 0) goto LAB_013d3e54;
          plVar15 = plVar2 + 6;
          plVar14 = plVar2 + 6;
          plVar2 = plVar2 + 6;
        } while (*plVar15 != -0x66b328930d9203c0);
      }
      if (plVar14 != _DAT_000001a0 + _DAT_000001a8 * 6) {
        lVar9 = plVar14[4];
        uVar8 = *(uint *)(plVar14 + 4 + 1);
        uVar10 = (ulong)uVar8;
        if (((uVar8 < *(uint *)(lVar9 + 0x278)) &&
            (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar10 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar9 + uVar10 * 0x48 + 0xb) != '\0')) {
          plVar14 = (long *)(lVar9 + uVar10 * 0x48 + 0x10);
          lVar12 = *plVar14;
          if ((lVar12 != 0) && (*(char *)(lVar9 + uVar10 * 0x48 + 9) == '\0')) {
            fVar17 = *(float *)(lVar12 + 0x20);
            uVar7 = FUN_00227728();
            uVar10 = FUN_00227744(*plVar14);
            if (((float)uVar7 <= fVar17) && ((uVar10 & 1) == 0)) goto LAB_013d3e54;
          }
          goto LAB_013d37e4;
        }
      }
LAB_013d3e54:
      local_70 = -0x66b328930d9203c0;
      local_68 = "anime_wake";
      local_60 = 10;
      local_58 = (long *)0x0;
      FUN_013d3f98(param_1,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      *(ulong *)(param_1 + 0x5d0) = *(ulong *)(param_1 + 0x5d0) & 0xfffffffffffffffb;
      lVar9 = *(long *)(param_1 + 0x5b0);
      goto joined_r0x013d3f68;
    }
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar15 = (long *)plVar14[0x34];
    lVar9 = plVar14[0x35];
    if ((lVar9 == 0) || (*plVar15 == -0x66b328930d9203c0)) {
      plVar13 = plVar15;
    }
    else {
      lVar12 = lVar9 * 0x30;
      plVar11 = plVar15;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_013d3e38;
        plVar1 = plVar11 + 6;
        plVar13 = plVar11 + 6;
        plVar11 = plVar11 + 6;
      } while (*plVar1 != -0x66b328930d9203c0);
    }
    plVar15 = plVar15 + lVar9 * 6;
    if (plVar13 == plVar15) {
      plVar11 = (long *)0x0;
      if (plVar13 != plVar15) goto LAB_013d3944;
LAB_013d3e38:
      bVar4 = true;
    }
    else {
      plVar11 = plVar13 + 4;
      if (plVar13 == plVar15) goto LAB_013d3e38;
LAB_013d3944:
      uVar10 = (ulong)*(uint *)(plVar11 + 1);
      if (((*(uint *)(*plVar11 + 0x278) <= *(uint *)(plVar11 + 1)) ||
          (lVar9 = *(long *)(*plVar11 + 600), *(char *)(lVar9 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar9 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_013d3e38;
      plVar15 = (long *)(lVar9 + uVar10 * 0x48 + 0x10);
      lVar12 = *plVar15;
      if (lVar12 == 0) {
        bVar4 = false;
      }
      else if (*(char *)(lVar9 + uVar10 * 0x48 + 9) == '\0') {
        fVar17 = *(float *)(lVar12 + 0x20);
        uVar7 = FUN_00227728(lVar12);
        uVar10 = FUN_00227744(*plVar15);
        bVar4 = false;
        if (((float)uVar7 <= fVar17) && ((uVar10 & 1) == 0)) goto LAB_013d3e38;
      }
      else {
        bVar4 = false;
      }
    }
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    if (bVar4) goto LAB_013d3e54;
    goto LAB_013d37e4;
  }
  FUN_013d36ac(param_1);
  uVar8 = (uint)*(undefined8 *)(param_1 + 0x5d0);
  if ((uVar8 >> 3 & 1) == 0) goto LAB_013d37e0;
LAB_013d3a04:
  local_70 = 0x4a0f571a28d293b4;
  local_68 = "anime_close";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  fVar17 = *(float *)(param_1 + 0x5dc);
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 == (long *)0x0) {
    fVar16 = (float)FUN_0283b914(0,&local_70);
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    FUN_0283b748(fVar16,0,&local_70);
  }
  else {
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar16 = (float)FUN_0283b914(plVar14,&local_70);
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    FUN_0283b748(fVar16,plVar14,&local_70);
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar14 = *(long **)(param_1 + 0x2c8);
  *(float *)(param_1 + 0x5dc) = *(float *)(param_1 + 0x5d8) + *(float *)(param_1 + 0x5dc);
  if (plVar14 == (long *)0x0) {
    if ((_DAT_000001a8 == 0) || (*_DAT_000001a0 == 0x4a0f571a28d293b4)) {
      plVar14 = _DAT_000001a0;
    }
    else {
      lVar9 = _DAT_000001a8 * 0x30;
      plVar2 = _DAT_000001a0;
      do {
        lVar9 = lVar9 + -0x30;
        if (lVar9 == 0) goto LAB_013d3ee8;
        plVar15 = plVar2 + 6;
        plVar14 = plVar2 + 6;
        plVar2 = plVar2 + 6;
      } while (*plVar15 != 0x4a0f571a28d293b4);
    }
    if (plVar14 != _DAT_000001a0 + _DAT_000001a8 * 6) {
      uVar10 = (ulong)*(uint *)(plVar14 + 5);
      if (((*(uint *)(plVar14 + 5) < *(uint *)(plVar14[4] + 0x278)) &&
          (lVar9 = *(long *)(plVar14[4] + 600), *(char *)(lVar9 + uVar10 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar9 + uVar10 * 0x48 + 0xb) != '\0')) {
        plVar14 = (long *)(lVar9 + uVar10 * 0x48 + 0x10);
        lVar12 = *plVar14;
        if ((lVar12 != 0) && (*(char *)(lVar9 + uVar10 * 0x48 + 9) == '\0')) {
          fVar17 = *(float *)(lVar12 + 0x20);
          uVar7 = FUN_00227728();
          uVar10 = FUN_00227744(*plVar14);
          if (((float)uVar7 <= fVar17) && ((uVar10 & 1) == 0)) goto LAB_013d3ee8;
        }
        goto LAB_013d37e4;
      }
    }
  }
  else {
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar15 = (long *)plVar14[0x34];
    lVar9 = plVar14[0x35];
    if ((lVar9 == 0) || (*plVar15 == 0x4a0f571a28d293b4)) {
      plVar13 = plVar15;
    }
    else {
      lVar12 = lVar9 * 0x30;
      plVar11 = plVar15;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) goto LAB_013d3ecc;
        plVar1 = plVar11 + 6;
        plVar13 = plVar11 + 6;
        plVar11 = plVar11 + 6;
      } while (*plVar1 != 0x4a0f571a28d293b4);
    }
    plVar15 = plVar15 + lVar9 * 6;
    if (plVar13 == plVar15) {
      plVar11 = (long *)0x0;
      if (plVar13 != plVar15) goto LAB_013d3b40;
LAB_013d3ecc:
      bVar4 = true;
    }
    else {
      plVar11 = plVar13 + 4;
      if (plVar13 == plVar15) goto LAB_013d3ecc;
LAB_013d3b40:
      uVar10 = (ulong)*(uint *)(plVar11 + 1);
      if (((*(uint *)(*plVar11 + 0x278) <= *(uint *)(plVar11 + 1)) ||
          (lVar9 = *(long *)(*plVar11 + 600), *(char *)(lVar9 + uVar10 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar9 + uVar10 * 0x48 + 0xb) == '\0')) goto LAB_013d3ecc;
      plVar15 = (long *)(lVar9 + uVar10 * 0x48 + 0x10);
      lVar12 = *plVar15;
      if (lVar12 == 0) {
        bVar4 = false;
      }
      else if (*(char *)(lVar9 + uVar10 * 0x48 + 9) == '\0') {
        fVar17 = *(float *)(lVar12 + 0x20);
        uVar7 = FUN_00227728(lVar12);
        uVar10 = FUN_00227744(*plVar15);
        bVar4 = false;
        if (((float)uVar7 <= fVar17) && ((uVar10 & 1) == 0)) goto LAB_013d3ecc;
      }
      else {
        bVar4 = false;
      }
    }
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    if (!bVar4) {
LAB_013d37e4:
      lVar9 = *(long *)(param_1 + 0x5b0);
      goto joined_r0x013d3f68;
    }
  }
LAB_013d3ee8:
  local_70 = 0x4a0f571a28d293b4;
  local_68 = "anime_close";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  FUN_013d3f98(param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_00d42690(param_1,0,1);
  FUN_00d42438(param_1,0,1);
  lVar9 = *(long *)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  if (lVar9 != 0) {
    FUN_00d347f0(param_1 + 0x5b8);
  }
  local_70 = param_1 + 0x5d0;
  local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
  FUN_013d4690(&local_70);
  lVar9 = *(long *)(param_1 + 0x5b0);
joined_r0x013d3f68:
  if (lVar9 != 0) {
    FUN_02c4cd94(*(undefined8 *)(lVar9 + 8));
  }
  return;
}


