/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9a40; name: FUN_02ff9a40
 */


void FUN_02ff9a40(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long local_68;
  undefined *puStack_60;
  long local_58;
  
  if (param_2 == 0) {
    return;
  }
  plVar6 = (long *)(*param_1 + (long)param_1);
  uVar1 = *(uint *)(param_1 + 1);
  plVar5 = (long *)0x0;
  if (*param_1 != 0) {
    plVar5 = plVar6;
  }
  lVar13 = (long)(int)uVar1 * 8;
  if (uVar1 != 0) {
    lVar8 = lVar13;
    do {
      lVar7 = *plVar5 + (long)plVar5;
      if ((*plVar5 != 0 && lVar7 != 0) && (*(short *)(lVar7 + 0x18) == *(short *)(param_2 + 0x18)))
      {
        local_68 = param_2 - (long)&local_68;
        if (*(long *)(param_2 + 8) != 0) {
          plVar6 = (long *)(param_2 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_02ff99b8(plVar5,&local_68);
        if (local_68 == 0) {
          return;
        }
        plVar5 = (long *)(local_68 + (long)&local_68);
        if (plVar5 == (long *)0x0) {
          return;
        }
        if (*(long *)((long)&puStack_60 + local_68) == 0) {
          return;
        }
        plVar6 = (long *)((long)&local_58 + local_68);
        do {
          lVar13 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
          return;
        }
        return;
      }
      plVar5 = plVar5 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar11 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)((long)param_1 + 0xc) == 0) {
    *(uint *)((long)param_1 + 0xc) = uVar1;
    uVar11 = uVar1;
  }
  if ((int)uVar1 < (int)(uVar11 & 0x7fffffff)) goto LAB_02ff9b44;
  uVar2 = uVar1 | (int)uVar1 >> 0x10;
  uVar2 = uVar2 | (int)uVar2 >> 8;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  uVar2 = uVar2 | (int)uVar2 >> 1;
  uVar11 = uVar2 + 1;
  if ((int)uVar2 < (int)uVar1) {
    local_58 = 0;
    local_68 = 0;
    puStack_60 = PTR_DAT_04372528;
    FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                 "Capacity reservation overflow",&local_68);
  }
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x10))
                             (plVar5,-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar11 << 3,0);
  plVar5 = (long *)0x0;
  if (*param_1 != 0) {
    plVar5 = (long *)(*param_1 + (long)param_1);
  }
  uVar9 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar12 = plVar6;
    do {
      lVar7 = 0;
      if (*plVar5 != 0) {
        lVar7 = (*plVar5 - (long)plVar12) + (long)plVar5;
      }
      uVar9 = uVar9 - 1;
      *plVar12 = lVar7;
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
      plVar12 = plVar12 + 1;
    } while (uVar9 != 0);
  }
  if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
      uVar2 = *(uint *)(param_1 + 1);
    }
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,(ulong)uVar2 << 3);
    if (plVar6 != (long *)0x0) goto LAB_02ff9b30;
LAB_02ff9bf0:
    lVar8 = 0;
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_02ff9bf0;
LAB_02ff9b30:
    lVar8 = (long)plVar6 - (long)param_1;
  }
  *param_1 = lVar8;
  plVar6 = (long *)(lVar8 + (long)param_1);
  *(uint *)((long)param_1 + 0xc) = uVar11 | 0x80000000;
LAB_02ff9b44:
  *(uint *)(param_1 + 1) = uVar1 + 1;
  plVar6[(int)uVar1] = 0;
  param_1 = (long *)((long)param_1 + lVar13 + *param_1);
  *param_1 = param_2 - (long)param_1;
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


