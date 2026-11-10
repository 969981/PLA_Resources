/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f7ed4; name: FUN_031f7ed4
 */


/* WARNING: Removing unreachable block (ram,0x031f90a8) */
/* WARNING: Removing unreachable block (ram,0x031f901c) */
/* WARNING: Removing unreachable block (ram,0x031f9040) */
/* WARNING: Removing unreachable block (ram,0x031f9080) */
/* WARNING: Removing unreachable block (ram,0x031f9088) */
/* WARNING: Removing unreachable block (ram,0x031f9050) */
/* WARNING: Removing unreachable block (ram,0x031f9064) */
/* WARNING: Removing unreachable block (ram,0x031f906c) */
/* WARNING: Removing unreachable block (ram,0x031f9030) */
/* WARNING: Removing unreachable block (ram,0x031f90b0) */

void FUN_031f7ed4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined2 local_54 [2];
  
  switch(*(undefined2 *)(param_1 + 4)) {
  case 0:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    FUN_03176534(param_2,*(undefined8 *)(param_1 + 8),lVar11,
                 lVar11 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,
                 *(undefined8 *)(param_1 + 0x18),lVar12,
                 lVar12 + (long)*(int *)(*(long *)(param_1 + 0x20) + 0x20) * 8,3);
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(param_1 + 8);
    FUN_032cb060(auStack_80,lVar11 + 0x60);
    uStack_68 = *(undefined8 *)(lVar11 + 0x98);
    local_70 = *(undefined8 *)(lVar11 + 0x90);
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x20) + 0x68);
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    plVar6 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,0);
    plVar5 = *(long **)(lVar13 + 0x18);
    plVar6[1] = 0xffffffff;
    plVar14 = plVar6 + 2;
    *plVar14 = 1;
    *plVar6 = (long)&PTR_LAB_042f60b8;
    plVar6[3] = (long)plVar5;
    if (plVar5 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = plVar5;
      if (plVar5[1] != 0) {
        plVar5 = plVar5 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = (long *)plVar6[3];
      }
      plVar5 = plVar8;
    }
    plVar6[4] = lVar12;
    (**(code **)(*plVar5 + 0x48))(plVar8,lVar12);
    local_88[0] = *(undefined4 *)(param_1 + 0x28);
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    FUN_031e83c4(param_3,local_88,*(undefined8 *)(lVar11 + 0x68),plVar6,auStack_80,
                 *(undefined4 *)(lVar11 + 0x180));
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    local_90[0] = *(undefined4 *)(param_1 + 0x28);
    FUN_031ca7f8(param_4,local_90,*(undefined8 *)(param_1 + 8));
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    local_58 = *(undefined4 *)(param_1 + 0x28);
    plVar5 = (long *)(param_5 + 0x18);
    local_54[0] = 0;
    lVar11 = FUN_031c9374(plVar5,&local_58,local_54);
    lVar11 = *(long *)(param_5 + 0x18) + ((lVar11 << 0x20) >> 0x1d);
    *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) | 1;
    *(undefined1 *)(lVar11 + 5) = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar12 = (long)DAT_0444b53c;
      lVar11 = *(long *)(lVar9 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar11;
      }
      if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      local_58 = *(undefined4 *)(param_1 + 0x28);
      local_54[0] = 0;
      lVar11 = FUN_031c9374(plVar5,&local_58,local_54);
      lVar11 = *plVar5 + ((lVar11 << 0x20) >> 0x1d);
      *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) | 4;
      *(undefined1 *)(lVar11 + 5) = 1;
    }
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) == 0) {
      lVar9 = plVar6[1];
    }
    else {
      FUN_0332a954();
      lVar9 = plVar6[1];
    }
    if (lVar9 != 0) {
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    return;
  case 1:
    lVar9 = tpidr_el0;
    lVar12 = *(long *)(lVar9 + 0x38d490);
    lVar11 = (long)DAT_0444b53c;
    if (lVar12 == 0) {
      local_78 = (long)DAT_0444b53c;
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar12;
      lVar11 = local_78;
    }
    if (*(long *)(lVar12 + lVar11 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    local_58 = *(undefined4 *)(param_1 + 8);
    FUN_031cc660(param_4,&local_58);
    lVar12 = *(long *)(lVar9 + 0x38d490);
    lVar11 = (long)DAT_0444b53c;
    if (lVar12 == 0) {
      local_78 = (long)DAT_0444b53c;
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar12;
      lVar11 = local_78;
    }
    if (*(long *)(lVar12 + lVar11 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_031cb390(param_4,local_54 + -6);
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_031e8b60(param_3,&uStack_68);
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 8));
    if (*(char *)(param_1 + 0xc) == '\0') {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    FUN_031770fc(param_2,&local_70,uVar7);
    plVar5 = (long *)(param_5 + 0x18);
    lVar11 = FUN_031c9374(plVar5,local_54 + 6,local_54 + 8);
    lVar12 = *(long *)(param_5 + 0x18);
    pbVar10 = (byte *)(lVar12 + ((lVar11 << 0x20) >> 0x1d) + 4);
    bVar1 = *pbVar10;
    iVar4 = (int)lVar11;
    if ((bVar1 & 1) == 0) {
      *pbVar10 = bVar1 | 2;
    }
    else {
      *pbVar10 = bVar1 & 0xfe;
      if ((bVar1 & 0xfe) == 0) {
        if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar11 >> 0x20)) ||
           (lVar11 = *(long *)(param_5 + 0x28) + (lVar11 >> 0x20) * 8, *(int *)(lVar11 + 4) != iVar4
           )) {
          lVar11 = FUN_031acbdc(plVar5,*plVar5 + (long)iVar4 * 8);
        }
        FUN_031c9670(plVar5,lVar11);
      }
    }
    *(undefined1 *)(lVar12 + (long)iVar4 * 8 + 5) = 1;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar12 = (long)DAT_0444b53c;
      lVar11 = *(long *)(lVar9 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar11;
      }
      if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      lVar11 = FUN_031c9374(plVar5,local_54 + 6,local_54 + 8);
      lVar12 = *plVar5;
      pbVar10 = (byte *)(lVar12 + ((lVar11 << 0x20) >> 0x1d) + 4);
      bVar1 = *pbVar10;
      iVar4 = (int)lVar11;
      if ((bVar1 >> 2 & 1) == 0) {
        *pbVar10 = bVar1 | 8;
      }
      else {
        *pbVar10 = bVar1 & 0xfb;
        if ((bVar1 & 0xfb) == 0) {
          if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar11 >> 0x20)) ||
             (lVar11 = *(long *)(param_5 + 0x28) + (lVar11 >> 0x20) * 8,
             *(int *)(lVar11 + 4) != iVar4)) {
            lVar11 = FUN_031acbdc(plVar5,*plVar5 + (long)iVar4 * 8);
          }
          FUN_031c9670(plVar5,lVar11);
        }
      }
      *(undefined1 *)(lVar12 + (long)iVar4 * 8 + 5) = 1;
    }
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 2:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_0317765c(param_2,*(undefined8 *)(param_1 + 8),lVar11,
                 lVar11 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,1);
    lVar11 = FUN_031c9374(param_5 + 0x18,local_54 + 6,local_54 + 8);
    lVar11 = *(long *)(param_5 + 0x18) + ((lVar11 << 0x20) >> 0x1d);
    *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) | 4;
    *(undefined1 *)(lVar11 + 5) = 1;
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 3:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_03177574(param_2,local_54 + 2,1);
    plVar5 = (long *)(param_5 + 0x18);
    lVar11 = FUN_031c9374(plVar5,local_54 + 6,local_54 + 8);
    lVar12 = *(long *)(param_5 + 0x18);
    pbVar10 = (byte *)(lVar12 + ((lVar11 << 0x20) >> 0x1d) + 4);
    bVar1 = *pbVar10;
    iVar4 = (int)lVar11;
    if ((bVar1 >> 2 & 1) == 0) {
      *pbVar10 = bVar1 | 8;
    }
    else {
      *pbVar10 = bVar1 & 0xfb;
      if ((bVar1 & 0xfb) == 0) {
        if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar11 >> 0x20)) ||
           (lVar11 = *(long *)(param_5 + 0x28) + (lVar11 >> 0x20) * 8, *(int *)(lVar11 + 4) != iVar4
           )) {
          lVar11 = FUN_031acbdc(plVar5,*plVar5 + (long)iVar4 * 8);
        }
        FUN_031c9670(plVar5,lVar11);
      }
    }
    *(undefined1 *)(lVar12 + (long)iVar4 * 8 + 5) = 1;
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 4:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_03177b80(param_2,*(undefined8 *)(param_1 + 8),lVar11,
                 lVar11 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,1);
    lVar11 = FUN_031c9374(param_5 + 0x18,local_54 + 6,local_54 + 8);
    lVar11 = *(long *)(param_5 + 0x18) + ((lVar11 << 0x20) >> 0x1d);
    *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) | 0x10;
    *(undefined1 *)(lVar11 + 5) = 1;
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 5:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_031781b8(param_2,local_54 + 2);
    plVar5 = (long *)(param_5 + 0x18);
    lVar11 = FUN_031c9374(plVar5,local_54 + 6,local_54 + 8);
    lVar12 = *(long *)(param_5 + 0x18);
    pbVar10 = (byte *)(lVar12 + ((lVar11 << 0x20) >> 0x1d) + 4);
    bVar1 = *pbVar10;
    iVar4 = (int)lVar11;
    if ((bVar1 >> 4 & 1) == 0) {
      *pbVar10 = bVar1 | 0x20;
    }
    else {
      *pbVar10 = bVar1 & 0xef;
      if ((bVar1 & 0xef) == 0) {
        if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar11 >> 0x20)) ||
           (lVar11 = *(long *)(param_5 + 0x28) + (lVar11 >> 0x20) * 8, *(int *)(lVar11 + 4) != iVar4
           )) {
          lVar11 = FUN_031acbdc(plVar5,*plVar5 + (long)iVar4 * 8);
        }
        FUN_031c9670(plVar5,lVar11);
      }
    }
    *(undefined1 *)(lVar12 + (long)iVar4 * 8 + 5) = 1;
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 6:
    FUN_031cbc50(param_4 + 0xd0,local_54 + 0x1e,local_54 + 10);
    return;
  case 7:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (*(int *)(param_1 + 8) == -1) {
      FUN_031cc2b0(param_4,lVar11,lVar11 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 0x90);
    }
    else {
      FUN_031cbecc();
    }
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) == 0) {
      return;
    }
    FUN_0332a954();
    return;
  case 8:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_03186448(0x3d4ccccd,lVar11,lVar11 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 0x120
                 ,param_2,local_54 + 2);
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    if (*(int *)(param_1 + 8) == -1) {
      FUN_031cc2b0(param_4,0,0);
    }
    else {
      FUN_031cbecc();
    }
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    return;
  case 9:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_031cc374(param_4,*(undefined4 *)(param_1 + 8));
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) == 0) {
      return;
    }
    FUN_0332a954();
    return;
  case 10:
    break;
  case 0xb:
    lVar12 = (long)DAT_0444b53c;
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_031e933c(param_3,*(undefined8 *)(param_1 + 8));
    lVar12 = (long)DAT_0444b53c;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    if (*(long *)(lVar11 + lVar12 * 8 + 0x18) == 0) {
      return;
    }
    FUN_0332a954();
    return;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = tpidr_el0;
  lVar11 = *(long *)(lVar9 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar11;
  }
  if (*(long *)(lVar11 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  FUN_031e8fec(param_3,*(undefined8 *)(param_1 + 8));
  lVar12 = (long)DAT_0444b53c;
  lVar11 = *(long *)(lVar9 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar11;
  }
  if (*(long *)(lVar11 + lVar12 * 8 + 0x18) == 0) {
    return;
  }
  FUN_0332a954();
  return;
}


