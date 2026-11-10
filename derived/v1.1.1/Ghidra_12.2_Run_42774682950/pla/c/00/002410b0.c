/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002410b0; name: FUN_002410b0
 */


void FUN_002410b0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
  pbVar7 = *(byte **)(param_2 + 200);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    lVar9 = 0x230;
  }
  else {
    lVar9 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
  }
  uVar5 = -lVar4;
  uVar10 = lVar4 + -1 + lVar9 & uVar5;
  if ((*pbVar7 & 1) == 0) {
    lVar9 = *(long *)(pbVar7 + 0x40);
    *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar10;
    uVar6 = *(uint *)(param_1 + 0x10);
    *(int *)(param_1 + 0x30) = (int)lVar9;
    if ((uVar6 >> 0x10 & 1) != 0) goto LAB_00241154;
LAB_00241128:
    pbVar7 = *(byte **)(param_2 + 200);
    if ((uVar6 >> 0x11 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar10 = lVar4 + 0x8f;
        bVar1 = *pbVar7;
      }
      else {
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x8f + lVar4;
        bVar1 = *pbVar7;
      }
      uVar10 = uVar10 & uVar5;
      if ((bVar1 & 1) == 0) {
LAB_002411d8:
        lVar9 = *(long *)(pbVar7 + 0x40);
        *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar10;
        *(int *)(param_1 + 0x34) = (int)lVar9;
        lVar9 = *(long *)(param_1 + 0x38);
        goto joined_r0x0024117c;
      }
      plVar8 = *(long **)(pbVar7 + 0x40);
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      uVar10 = lVar4 + 0x21fU & uVar5;
      if ((*pbVar7 & 1) == 0) goto LAB_002411d8;
      plVar8 = *(long **)(pbVar7 + 0x40);
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    plVar8 = *(long **)(pbVar7 + 0x40);
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + uVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(uint *)(param_1 + 0x10);
    *(int *)(param_1 + 0x30) = (int)lVar9;
    if ((uVar6 >> 0x10 & 1) == 0) goto LAB_00241128;
LAB_00241154:
    pbVar7 = *(byte **)(param_2 + 200);
    uVar10 = lVar4 + 0xdfU & uVar5;
    if ((*pbVar7 & 1) == 0) {
      lVar9 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar10;
      *(int *)(param_1 + 0x34) = (int)lVar9;
      lVar9 = *(long *)(param_1 + 0x38);
      goto joined_r0x0024117c;
    }
    plVar8 = *(long **)(pbVar7 + 0x40);
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + uVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(int *)(param_1 + 0x34) = (int)lVar9;
  lVar9 = *(long *)(param_1 + 0x38);
joined_r0x0024117c:
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 8) != 0)) {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar10 = lVar4 + -1 + (ulong)*(uint *)(lVar9 + 8) & uVar5;
    if ((*pbVar7 & 1) == 0) {
      lVar9 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar9 + uVar10;
    }
    else {
      plVar8 = *(long **)(pbVar7 + 0x40);
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(int *)(*(long *)(param_1 + 0x38) + 0xc) = (int)lVar9;
  }
  uVar6 = *(uint *)(param_1 + 0x14) & 3;
  if ((uVar6 != 0) &&
     ((lVar9 = *(long *)(param_1 + 0x18) +
               ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14, *(char *)(lVar9 + 1) == '\a' ||
      ((uVar6 != 1 &&
       ((*(char *)(lVar9 + 0x11) == '\a' || ((uVar6 != 2 && (*(char *)(lVar9 + 0x21) == '\a'))))))))
     )) {
    pbVar7 = *(byte **)(param_2 + 200);
    uVar5 = lVar4 + 0xbfU & uVar5;
    if ((*pbVar7 & 1) == 0) {
      lVar4 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar4 + uVar5;
    }
    else {
      plVar8 = *(long **)(pbVar7 + 0x40);
      do {
        lVar4 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar4 + uVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = *(uint *)(param_1 + 0x10);
    *(long *)(*(long *)(param_1 + 0x18) +
             (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                         (uVar6 >> 0xd & 0x60) + (uVar6 >> 0xc & 1) * 0xc +
                         (uVar6 >> 0x10 & 1) * 0x1c + (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) +
                         (uVar6 >> 0x11 & 1) * 0x74 +
                         ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                        ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14)) = lVar4;
  }
  return;
}


