/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00216880; name: FUN_00216880
 */


void FUN_00216880(long *param_1)

{
  void *__dest;
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  size_t __n;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  
  uVar3 = *(uint *)(param_1 + 10);
  uVar7 = *(uint *)((long)param_1 + 0xb4);
  uVar9 = uVar3;
  while( true ) {
    uVar14 = ((int)param_1[0xd] - uVar7) - *(uint *)((long)param_1 + 0xac);
    if ((uVar3 - 0x106) + uVar9 <= *(uint *)((long)param_1 + 0xac)) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + (ulong)uVar3),(ulong)(uVar3 - uVar14));
      uVar9 = *(uint *)((long)param_1 + 0x84);
      uVar10 = (ulong)uVar9;
      uVar4 = *(uint *)(param_1 + 10);
      uVar8 = (ulong)uVar4;
      *(uint *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) - uVar3;
      *(uint *)(param_1 + 0x16) = (int)param_1[0x16] - uVar3;
      puVar11 = (ushort *)(param_1[0xf] + uVar10 * 2);
      param_1[0x13] = param_1[0x13] - (ulong)uVar3;
      sVar6 = (short)uVar4;
      for (uVar7 = uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar11 = puVar11 + -1;
        uVar2 = 0;
        if (uVar4 <= *puVar11) {
          uVar2 = *puVar11 - sVar6;
        }
        uVar10 = (ulong)((int)uVar10 - 1);
        *puVar11 = uVar2;
      }
      if (2 < uVar9 - 1) {
        puVar11 = puVar11 + -2;
        do {
          uVar2 = 0;
          if (uVar4 <= puVar11[1]) {
            uVar2 = puVar11[1] - sVar6;
          }
          puVar11[1] = uVar2;
          uVar2 = 0;
          if (uVar4 <= *puVar11) {
            uVar2 = *puVar11 - sVar6;
          }
          *puVar11 = uVar2;
          uVar2 = 0;
          if (uVar4 <= puVar11[-1]) {
            uVar2 = puVar11[-1] - sVar6;
          }
          puVar11[-1] = uVar2;
          uVar2 = 0;
          if (uVar4 <= puVar11[-2]) {
            uVar2 = puVar11[-2] - sVar6;
          }
          puVar11[-2] = uVar2;
          uVar7 = (int)uVar10 - 4;
          uVar10 = (ulong)uVar7;
          puVar11 = puVar11 + -4;
        } while (uVar7 != 0);
      }
      puVar11 = (ushort *)(param_1[0xe] + uVar8 * 2);
      if ((uVar4 & 3) != 0) {
        uVar7 = 0;
        do {
          puVar11 = puVar11 + -1;
          uVar7 = uVar7 + 1;
          uVar2 = 0;
          if (uVar4 <= *puVar11) {
            uVar2 = *puVar11 - sVar6;
          }
          *puVar11 = uVar2;
        } while ((uVar4 & 3) != uVar7);
        uVar8 = (ulong)(uVar4 - uVar7);
      }
      if (2 < uVar4 - 1) {
        puVar11 = puVar11 + -2;
        do {
          uVar2 = 0;
          if (uVar4 <= puVar11[1]) {
            uVar2 = puVar11[1] - sVar6;
          }
          puVar11[1] = uVar2;
          uVar2 = 0;
          if (uVar4 <= *puVar11) {
            uVar2 = *puVar11 - sVar6;
          }
          *puVar11 = uVar2;
          uVar2 = 0;
          if (uVar4 <= puVar11[-1]) {
            uVar2 = puVar11[-1] - sVar6;
          }
          puVar11[-1] = uVar2;
          uVar2 = 0;
          if (uVar4 <= puVar11[-2]) {
            uVar2 = puVar11[-2] - sVar6;
          }
          puVar11[-2] = uVar2;
          uVar7 = (int)uVar8 - 4;
          uVar8 = (ulong)uVar7;
          puVar11 = puVar11 + -4;
        } while (uVar7 != 0);
      }
      uVar14 = uVar14 + uVar3;
    }
    plVar15 = (long *)*param_1;
    uVar9 = *(uint *)(plVar15 + 1);
    if (uVar9 == 0) break;
    uVar7 = *(uint *)((long)param_1 + 0xb4);
    if (uVar9 <= uVar14) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) {
      lVar12 = param_1[0xc];
      uVar10 = (ulong)uVar14;
      uVar4 = *(uint *)((long)param_1 + 0xac);
      *(uint *)(plVar15 + 1) = uVar9 - uVar14;
      __dest = (void *)(lVar12 + (ulong)uVar4 + (ulong)uVar7);
      memcpy(__dest,(void *)*plVar15,uVar10);
      if (*(int *)(plVar15[7] + 0x30) == 2) {
        lVar12 = FUN_00215640(plVar15[0xc],__dest,uVar14);
LAB_00216aac:
        plVar15[0xc] = lVar12;
      }
      else if (*(int *)(plVar15[7] + 0x30) == 1) {
        lVar12 = FUN_00215360(plVar15[0xc],__dest,uVar14);
        goto LAB_00216aac;
      }
      *plVar15 = *plVar15 + uVar10;
      plVar15[2] = plVar15[2] + uVar10;
      uVar7 = *(uint *)((long)param_1 + 0xb4);
    }
    iVar5 = *(int *)((long)param_1 + 0x172c);
    uVar7 = uVar7 + uVar14;
    *(uint *)((long)param_1 + 0xb4) = uVar7;
    if (2 < iVar5 + uVar7) {
      uVar9 = *(int *)((long)param_1 + 0xac) - iVar5;
      uVar14 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar9);
      *(uint *)(param_1 + 0x10) = uVar14;
      *(uint *)(param_1 + 0x10) =
           (uVar14 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
           (uint)*(byte *)(param_1[0xc] + (ulong)(uVar9 + 1))) & *(uint *)((long)param_1 + 0x8c);
      while (iVar5 != 0) {
        uVar7 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
                (uint)*(byte *)(param_1[0xc] + (ulong)(uVar9 + 2))) &
                *(uint *)((long)param_1 + 0x8c);
        *(uint *)(param_1 + 0x10) = uVar7;
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar9) * 2) =
             *(undefined2 *)(param_1[0xf] + (ulong)uVar7 * 2);
        *(short *)(param_1[0xf] + (ulong)*(uint *)(param_1 + 0x10) * 2) = (short)uVar9;
        iVar5 = *(int *)((long)param_1 + 0x172c) + -1;
        uVar7 = *(uint *)((long)param_1 + 0xb4);
        *(int *)((long)param_1 + 0x172c) = iVar5;
        if (uVar7 + iVar5 < 3) break;
        uVar9 = uVar9 + 1;
      }
    }
    if ((0x105 < uVar7) || (*(int *)(*param_1 + 8) == 0)) break;
    uVar9 = *(uint *)(param_1 + 10);
  }
  uVar8 = param_1[0x2e7];
  uVar13 = param_1[0xd];
  uVar10 = uVar13 - uVar8;
  if (uVar8 <= uVar13 && uVar10 != 0) {
    uVar1 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar8 < uVar1) {
      __n = uVar13 - uVar1;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[0xc] + uVar1),0,__n);
      lVar12 = __n + uVar1;
    }
    else {
      uVar13 = (uVar1 + 0x102) - uVar8;
      if (uVar1 + 0x102 < uVar8 || uVar13 == 0) {
        return;
      }
      if (uVar13 <= uVar10) {
        uVar10 = uVar13;
      }
      memset((void *)(param_1[0xc] + uVar8),0,uVar10 & 0xffffffff);
      lVar12 = param_1[0x2e7] + uVar10;
    }
    param_1[0x2e7] = lVar12;
  }
  return;
}


