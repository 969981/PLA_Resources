/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fde9cc; name: FUN_02fde9cc
 */


void FUN_02fde9cc(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_70;
  long local_68;
  
  if (((param_4 != (long *)0x0) &&
      (local_68 = param_2, lVar8 = FUN_02f79850(param_4,&local_68), lVar8 != 0)) &&
     (-1 < (int)(*(uint *)(lVar8 + 4) | ((int)lVar8 - (int)param_4[2]) * 0x20000000))) {
    local_68 = param_2;
    lVar8 = FUN_02f79850(param_4,&local_68);
    if ((lVar8 == 0) ||
       (plVar11 = (long *)(*param_4 + (long)*(int *)(lVar8 + 4) * 0x10 + 8), *plVar11 == 0)) {
      *param_1 = 0;
      return;
    }
    FUN_032d645c();
    plVar11 = (long *)*plVar11;
    *param_1 = plVar11;
    if (plVar11 == (long *)0x0) {
      return;
    }
    FUN_032d645c(plVar11);
    if (plVar11[1] == 0) {
      return;
    }
    plVar13 = plVar11 + 2;
    do {
      lVar8 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
      return;
    }
    return;
  }
  uVar12 = *(uint *)(param_2 + 8);
  if (uVar12 != 0) {
    lVar8 = tpidr_el0;
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar9 = (long *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x58),1,uVar12);
    lVar8 = param_2;
    plVar11 = plVar9;
    uVar1 = uVar12;
    goto LAB_02fdeafc;
  }
  iVar5 = *(int *)(param_2 + 0x54);
  if (iVar5 < 4) {
    uVar12 = (*(int *)(param_2 + 0x44) * 0xc + 0xfU & 0xfffffff0) + (param_3 + 0xfU & 0xfffffff0);
    lVar8 = tpidr_el0;
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,(long)(int)uVar12,0);
  }
  else {
    uVar12 = (iVar5 << 4 | 0xfU) + (param_3 + 0xfU & 0xfffffff0) +
             (*(int *)(param_2 + 0x44) * 0xc + 0xfU & 0xfffffff0) +
             (*(int *)(param_2 + 0x5c) + 3U & 0xfffffffc) +
             (*(int *)(param_2 + 100) + iVar5 + *(int *)(param_2 + 0x6c)) * 4 & 0xfffffff0;
    lVar8 = tpidr_el0;
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar11 = (long *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x58),1,uVar12);
  }
  memset(plVar11,0,(ulong)uVar12);
  FUN_032c4a00(plVar11,param_2,param_3);
  uVar2 = (param_3 + 0xfU | 0xf) + *(int *)(param_2 + 0x44) * 0xc & 0xfff0;
  uVar3 = uVar2 + *(int *)(param_2 + 0x54) * 0x10 & 0xfff0;
  uVar1 = uVar3 + *(int *)(param_2 + 0x54) * 4;
  uVar4 = *(int *)(param_2 + 0x5c) + uVar1 + 3 & 0xfffc;
  plVar13 = plVar11 + 0xd;
  *(uint *)plVar13 = (uVar4 + *(int *)(param_2 + 100) * 4 & 0xfffc) - 0x68;
  iVar5 = (param_3 + 0xfU & 0xfff0) - 0x40;
  *(int *)(plVar11 + 8) = iVar5;
  plVar16 = plVar11 + 9;
  *(uint *)plVar16 = uVar2 - 0x48;
  plVar15 = plVar11 + 10;
  *(uint *)plVar15 = uVar3 - 0x50;
  plVar14 = plVar11 + 0xb;
  *(uint *)plVar14 = (uVar1 & 0xfffc) - 0x58;
  plVar9 = plVar11 + 0xc;
  *(uint *)plVar9 = uVar4 - 0x60;
  if (iVar5 == 0) {
    lVar8 = 0;
    iVar5 = *(int *)(param_2 + 0x40);
    if (iVar5 != 0) goto LAB_02fded38;
LAB_02fdee48:
    lVar10 = 0;
  }
  else {
    lVar8 = (long)(plVar11 + 8) + (long)iVar5;
    iVar5 = *(int *)(param_2 + 0x40);
    if (iVar5 == 0) goto LAB_02fdee48;
LAB_02fded38:
    lVar10 = (long)iVar5 + param_2 + 0x40;
  }
  FUN_032c4a00(lVar8,lVar10,*(int *)(param_2 + 0x44) * 0xc);
  if ((int)*plVar16 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)(int)*plVar16 + (long)plVar16;
  }
  iVar5 = *(int *)(param_2 + 0x48);
  if (iVar5 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (long)iVar5 + param_2 + 0x48;
  }
  FUN_032c4a00(lVar8,lVar10,*(int *)(param_2 + 0x4c) << 4);
  lVar8 = 0;
  if ((int)*plVar15 != 0) {
    lVar8 = (long)(int)*plVar15 + (long)plVar15;
  }
  lVar10 = 0;
  if (*(int *)(param_2 + 0x50) != 0) {
    lVar10 = (long)*(int *)(param_2 + 0x50) + param_2 + 0x50;
  }
  FUN_032c4a00(lVar8,lVar10,*(int *)(param_2 + 0x54) << 2);
  if ((int)*plVar14 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)(int)*plVar14 + (long)plVar14;
  }
  iVar5 = *(int *)(param_2 + 0x58);
  if (iVar5 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (long)iVar5 + param_2 + 0x58;
  }
  FUN_032c4a00(lVar8,lVar10,*(undefined4 *)(param_2 + 0x5c));
  lVar8 = 0;
  if ((int)*plVar9 != 0) {
    lVar8 = (long)(int)*plVar9 + (long)plVar9;
  }
  lVar10 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar10 = (long)*(int *)(param_2 + 0x60) + param_2 + 0x60;
  }
  FUN_032c4a00(lVar8,lVar10,*(int *)(param_2 + 100) << 2);
  iVar5 = *(int *)(param_2 + 0x68);
  plVar9 = (long *)0x0;
  if ((int)*plVar13 != 0) {
    plVar9 = (long *)((long)(int)*plVar13 + (long)plVar13);
  }
  lVar8 = 0;
  if (iVar5 != 0) {
    lVar8 = (long)iVar5 + param_2 + 0x68;
  }
  uVar1 = *(int *)(param_2 + 0x6c) << 2;
LAB_02fdeafc:
  FUN_032c4a00(plVar9,lVar8,uVar1);
  plVar11[7] = 0;
  plVar11[6] = 0;
  FUN_02fdeef4(plVar11 + 6,param_2 + 0x30);
  FUN_032d65d0(plVar11,1);
  plVar11[1] = (long)(int)uVar12;
  if (param_4 != (long *)0x0) {
    local_70 = plVar11;
    local_68 = param_2;
    if (plVar11 != (long *)0x0) {
      FUN_032d645c(plVar11);
    }
    FUN_02f6f888(param_4,&local_68,&local_70);
    if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
      plVar13 = local_70 + 2;
      do {
        lVar8 = *plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_70 + 0x18))();
      }
    }
  }
  *param_1 = plVar11;
  return;
}


