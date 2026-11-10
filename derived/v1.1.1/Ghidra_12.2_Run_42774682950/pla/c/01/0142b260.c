/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142b260; name: FUN_0142b260
 */


void FUN_0142b260(long param_1,byte param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long **local_68;
  char *local_60;
  char *local_58;
  long *local_50;
  long *local_48;
  long *local_38;
  
  lVar9 = *(long *)(param_1 + 0x5b0);
  lVar13 = *(long *)(lVar9 + (ulong)param_2 * 8 + 0x70);
  uVar15 = (ulong)param_2;
  if (lVar13 != 0) {
    FUN_0141f4e0(param_1 + 0x738,lVar13,*(undefined4 *)(lVar9 + uVar15 * 4 + 0xa0),
                 lVar9 + uVar15 * 0x14 + 0xb8,*(undefined1 *)(lVar9 + 0x130));
    lVar9 = *(long *)(param_1 + 0x810);
    if (lVar9 != 0) {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x70) + 0x60);
      bVar7 = FUN_02c6cf3c(*(undefined8 *)(lVar13 + 0x98));
      bVar7 = (*(ushort *)(*(long *)(*(long *)(lVar13 + 0x98) + 0x10) + 4) & 4) == 0 &
              (bVar7 ^ 0xff);
      FUN_00d42438(lVar9,bVar7,1);
      FUN_00d42690(lVar9,bVar7,1);
    }
  }
  FUN_01420b18(param_1 + 0x738);
  local_68 = (long **)0x292c0349cd5092f4;
  local_60 = "grid_skill_list";
  local_58 = (char *)0xf;
  local_50 = (long *)0x0;
  lVar9 = FUN_00d2ec48(param_1 + 0x180,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if ((lVar9 != 0) &&
     (lVar13 = *(long *)(*(long *)(param_1 + 0x5b0) + uVar15 * 8 + 0x70), lVar13 != 0)) {
    bVar7 = *(byte *)(*(long *)(lVar13 + 0x70) + 0x368);
    lVar13 = *(long *)(*(long *)(*(long *)(lVar9 + 0x468) + 0x40) + 0x20);
    *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | (ulong)(bVar7 != 0)
    ;
    lVar13 = *(long *)(lVar9 + 0x468);
    if (*(int *)(lVar13 + 0x1c) == 0) {
      uVar11 = *(uint *)(lVar13 + 0xc);
    }
    else {
      uVar11 = 1;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x40) + 0x20) + (ulong)uVar11 * 0x28;
    *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | (ulong)(1 < bVar7);
    lVar13 = *(long *)(lVar9 + 0x468);
    if (*(int *)(lVar13 + 0x1c) == 0) {
      uVar11 = *(int *)(lVar13 + 0xc) << 1;
    }
    else {
      uVar11 = 2;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x40) + 0x20) + (ulong)uVar11 * 0x28;
    *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | (ulong)(2 < bVar7);
    lVar9 = *(long *)(lVar9 + 0x468);
    if (*(int *)(lVar9 + 0x1c) == 0) {
      uVar11 = *(int *)(lVar9 + 0xc) * 3;
    }
    else {
      uVar11 = 3;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + 0x20) + (ulong)uVar11 * 0x28;
    *(ulong *)(lVar9 + 0x20) = *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe | (ulong)(3 < bVar7);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_68 = &local_38;
  local_38 = (long *)0x0;
  local_60 = (char *)0x6bb64670ff82ebad;
  local_58 = "InputStatus";
  local_50 = (long *)0xb;
  local_48 = (long *)0x0;
  FUN_00d6190c(plVar14,&local_68,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar10 = local_38;
  if (plVar14 == (long *)0x0) {
LAB_0142b4fc:
    if (local_38 == (long *)0x0) goto LAB_0142b544;
LAB_0142b500:
    lVar9 = *(long *)(param_1 + 0x5b0);
    lVar13 = *(long *)(lVar9 + uVar15 * 8 + 0x70);
    if (lVar13 != 0) {
      lVar9 = *(long *)(*(long *)(lVar13 + 0x70) + 0x60);
      bVar7 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
      bVar7 = (*(byte *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) & 4) == 0 & (bVar7 ^ 0xff);
      if (*(byte *)((long)plVar10 + 0xa2) != bVar7) {
        *(byte *)((long)plVar10 + 0xa2) = bVar7;
        (**(code **)(*plVar10 + 0x98))(plVar10);
      }
      goto LAB_0142b544;
    }
  }
  else {
    lVar9 = plVar14[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 != 0) goto LAB_0142b4fc;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    if (plVar10 != (long *)0x0) goto LAB_0142b500;
LAB_0142b544:
    lVar9 = *(long *)(param_1 + 0x5b0);
  }
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x70), lVar9 != 0)) {
    lVar13 = *(long *)(*(long *)(lVar9 + 0x70) + 0x60);
    uVar15 = FUN_02c6cf3c(*(undefined8 *)(lVar13 + 0x98));
    if (((uVar15 & 1) != 0) ||
       (((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x98) + 0x10) + 4) >> 2 & 1) != 0 ||
        (*(short *)(*(long *)(lVar9 + 0x70) + 0x74) == 0)))) {
      uVar15 = 0xdd52e363b7e7;
      goto LAB_0142b5c4;
    }
    if (*(byte *)(*(long *)(param_1 + 0x5b0) + 0x132) == param_2) {
      uVar15 = 0xdf52e363bb4d;
      goto LAB_0142b5c4;
    }
  }
  uVar15 = 0xdc52e363b634;
LAB_0142b5c4:
  local_60 = "pane_T_situation_00";
  local_68 = (long **)0xf711f234e7fad910;
  local_58 = (char *)0x13;
  local_50 = (long *)0x0;
  FUN_0142de28(param_1,uVar15 | 0x5771000000000000,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)plVar14[0x29];
  lVar9 = plVar14[0x2a];
  if ((lVar9 != 0) && (*plVar10 != 0x7c76ea1e5273b0f6)) {
    plVar12 = plVar10 + lVar9 * 6;
    lVar9 = lVar9 * 0x30;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar10 = plVar12;
        break;
      }
      plVar3 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar3;
    } while (*plVar1 != 0x7c76ea1e5273b0f6);
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) | 1;
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  return;
}


