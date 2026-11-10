/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021c56c; name: FUN_0021c56c
 */


/* WARNING: Removing unreachable block (ram,0x0021c754) */

void FUN_0021c56c(long param_1,long *param_2,uint param_3,byte param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  byte *pbVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  byte bVar20;
  long lVar21;
  undefined4 uVar22;
  uint in_stack_ffffffffffffff38;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar12 = 0x40;
  if (*(char *)(param_1 + 0xba) != '\0') {
    lVar12 = 0x60;
  }
  lVar12 = lVar12 * *(int *)(param_1 + 0x9c);
  if (*param_2 == 0) {
    pbVar10 = *(byte **)(param_1 + 0xb0);
    uVar13 = (lVar12 + *(long *)(pbVar10 + 0x20)) - 1U & -*(long *)(pbVar10 + 0x20);
    if ((*pbVar10 & 1) == 0) goto LAB_0021c5e8;
    puVar11 = *(ulong **)(pbVar10 + 0x40);
    do {
      uVar17 = *puVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
      if (bVar8) {
        *puVar11 = uVar17 + uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0xb0);
    uVar13 = (*(long *)(pbVar10 + 0x20) + lVar12 * 2) - 1U & -*(long *)(pbVar10 + 0x20);
    if ((*pbVar10 & 1) == 0) {
LAB_0021c5e8:
      uVar17 = *(ulong *)(pbVar10 + 0x40);
      *(ulong *)(pbVar10 + 0x40) = uVar17 + uVar13;
    }
    else {
      puVar11 = *(ulong **)(pbVar10 + 0x40);
      do {
        uVar17 = *puVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar8) {
          *puVar11 = uVar17 + uVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  *(int *)(param_1 + 4) = (int)uVar17;
  uVar22 = *(undefined4 *)((long)param_2 + 0x14);
  uVar2 = (undefined4)param_2[2];
  lVar12 = *param_2;
  lVar1 = param_2[1];
  uVar3 = *(uint *)(param_1 + 0x9c);
  if (uVar3 == 0) {
    uVar15 = 0;
  }
  else {
    uVar13 = 0;
    uVar15 = 0;
    do {
      uVar17 = *(ulong *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x38 + 0x28) & 0xfffffffffffffffe;
      bVar20 = 0;
      if (uVar15 != 0) {
        do {
          if (*(ulong *)(param_1 + (ulong)bVar20 * 0x10 + 0x10) == uVar17) {
            lVar21 = param_1 + (ulong)bVar20 * 0x10;
            *(int *)(lVar21 + 0x18) = *(int *)(lVar21 + 0x18) + 1;
            goto LAB_0021c644;
          }
          bVar20 = bVar20 + 1;
        } while (bVar20 < uVar15);
      }
      lVar21 = param_1 + (ulong)uVar15 * 0x10;
      *(ulong *)(lVar21 + 0x10) = uVar17;
      *(undefined8 *)(lVar21 + 0x18) = 1;
      bVar5 = *(byte *)(uVar17 + 0x17);
      *(uint *)(lVar21 + 0x1c) = (uint)bVar5;
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x38 + 0x28) & 1) != 0) {
        *(uint *)(lVar21 + 0x1c) = bVar5 | 2;
      }
      uVar15 = uVar15 + 1;
      if (7 < uVar15) break;
LAB_0021c644:
      *(byte *)(*(long *)(param_1 + 0xa8) + uVar13) = bVar20;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
    uVar17 = (ulong)*(uint *)(param_1 + 4);
  }
  uVar17 = uVar17 & 0xffffffff;
  *(uint *)(param_1 + 0x90) = uVar15;
  lVar21 = *(long *)(*(long *)(param_1 + 0xb0) + 0x38);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  iVar6 = *(int *)(param_1 + 0x90);
  if (0 < iVar6) {
    uVar13 = (long)iVar6 & 1;
    if (iVar6 == 1) {
      lVar14 = 0;
      iVar16 = 0;
    }
    else {
      lVar14 = 0;
      iVar16 = 0;
      piVar18 = (int *)(param_1 + 0x28);
      piVar19 = (int *)((ulong)&local_90 | 4);
      do {
        piVar19[-1] = iVar16;
        iVar4 = piVar18[-4];
        *piVar19 = iVar4 + iVar16;
        lVar14 = lVar14 + 2;
        iVar16 = *piVar18 + iVar4 + iVar16;
        piVar18 = piVar18 + 8;
        piVar19 = piVar19 + 2;
      } while ((long)iVar6 - uVar13 != lVar14);
      if (uVar13 == 0) goto LAB_0021c7a0;
    }
    *(int *)((long)&local_90 + lVar14 * 4) = iVar16;
  }
LAB_0021c7a0:
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (lVar21 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x9c);
  uVar9 = 1;
  if (lVar12 != 0) {
    uVar9 = 2;
    if ((param_3 & 1) == 0) {
      if ((int)uVar3 < 1) {
        return;
      }
      uVar15 = 0;
      do {
        in_stack_ffffffffffffff38 = uVar15;
        FUN_0021c97c(uVar22,param_1,uVar17,lVar1,uVar2,lVar12,&local_90,lVar21,2,&local_b0,uVar15,
                     param_4 & 1);
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
    else {
      if ((int)uVar3 < 1) {
        return;
      }
      uVar15 = uVar3;
      do {
        uVar15 = uVar15 - 1;
        in_stack_ffffffffffffff38 = uVar15;
        FUN_0021c97c(uVar22,param_1,uVar17,lVar1,uVar2,lVar12,&local_90,lVar21,2,&local_b0,uVar15,
                     param_4 & 1);
      } while (0 < (int)uVar15);
    }
  }
  if ((param_3 & 1) == 0) {
    if (0 < (int)uVar3) {
      uVar15 = 0;
      do {
        in_stack_ffffffffffffff38 =
             CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
        FUN_0021cbf8(uVar22,param_1,uVar17,lVar1,uVar2,&local_90,lVar21,uVar9,&local_b0,uVar15,
                     in_stack_ffffffffffffff38);
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
  }
  else {
    while (0 < (int)uVar3) {
      uVar3 = uVar3 - 1;
      in_stack_ffffffffffffff38 =
           CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
      FUN_0021cbf8(uVar22,param_1,uVar17,lVar1,uVar2,&local_90,lVar21,uVar9,&local_b0,uVar3,
                   in_stack_ffffffffffffff38);
    }
  }
  return;
}


