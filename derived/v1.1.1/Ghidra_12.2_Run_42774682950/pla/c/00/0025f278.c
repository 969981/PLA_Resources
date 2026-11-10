/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025f278; name: FUN_0025f278
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0025f278(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ushort *puVar21;
  
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar9 + 6;
  uVar6 = DAT_0388a148;
  uVar5 = DAT_0388a140;
  uVar4 = _UNK_03889a88;
  uVar7 = _DAT_03889a80;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar9;
  puVar9[1] = uVar4;
  *puVar9 = uVar7;
  puVar9[3] = uVar6;
  puVar9[2] = uVar5;
  uVar7 = _DAT_03888d10;
  puVar9[5] = _UNK_03888d18;
  puVar9[4] = uVar7;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) != 0)) {
    FUN_0025da5c(param_1 + 0x40);
  }
  uVar20 = *(uint *)(param_1 + 0xc0);
  pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
  *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + (long)(int)uVar20 * 0x30);
  if ((pvVar16 != (void *)0x0) && (0 < (int)uVar20)) {
    memset(pvVar16,0,(ulong)uVar20 * 0x30);
  }
  *(void **)(param_1 + 0xa8) = pvVar16;
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar18 = 0;
    do {
      lVar19 = *(long *)(param_1 + 0xa0);
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0);
      pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      uVar1 = *puVar21;
      sVar8 = (ulong)uVar1 * 8;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
      if ((pvVar16 != (void *)0x0) && (uVar1 != 0)) {
        memset(pvVar16,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) = pvVar16;
      if (*puVar21 == 0) {
LAB_0025f4ec:
        pvVar16 = (void *)0x0;
        uVar20 = 0;
      }
      else {
        uVar17 = 0;
        do {
          uVar7 = FUN_0025f640(param_1,*(undefined8 *)
                                        (*(long *)(lVar19 + uVar18 * 0xa0 + 8) + uVar17 * 8));
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) + uVar17 * 8)
               = uVar7;
          uVar1 = *puVar21;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar1);
        if (uVar1 == 0) goto LAB_0025f4ec;
        lVar11 = lVar19 + uVar18 * 0xa0;
        uVar2 = *(ushort *)(lVar11 + 0x10);
        uVar17 = 0;
        uVar20 = 0;
        uVar3 = *(ushort *)(**(long **)(lVar11 + 8) + 2);
        while( true ) {
          if (uVar3 < uVar2) {
            uVar12 = (ulong)uVar3;
            uVar13 = ~uVar12;
            uVar15 = (ulong)((uint)uVar2 - (uint)uVar3) & 3;
            if (((uint)uVar2 - (uint)uVar3 & 3) != 0) {
              do {
                lVar14 = uVar12 * 8;
                uVar12 = uVar12 + 1;
                if (**(byte **)(*(long *)(lVar11 + 0x18) + lVar14) < 2) {
                  uVar20 = uVar20 + 1;
                }
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (2 < uVar13 + uVar2) {
              lVar14 = uVar2 - uVar12;
              puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10 + uVar12 * 8);
              do {
                if (*(byte *)puVar9[-2] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar9[-1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)*puVar9 < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar9[1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                lVar14 = lVar14 + -4;
                puVar9 = puVar9 + 4;
              } while (lVar14 != 0);
            }
          }
          uVar17 = uVar17 + 1;
          if (uVar17 == uVar1) break;
          uVar3 = *(ushort *)((*(long **)(lVar11 + 8))[uVar17] + 2);
        }
        if (uVar20 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
          *(void **)(*(long *)(param_1 + 0x88) + 0x10) =
               (void *)((long)pvVar16 + (long)(int)uVar20 * 0x18);
          if ((pvVar16 != (void *)0x0) && (0 < (int)uVar20)) {
            memset(pvVar16,0,(ulong)uVar20 * 0x18);
          }
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x28) = pvVar16;
      *(uint *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x20) = uVar20;
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0 + 0x10);
      if ((ulong)*puVar21 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        sVar8 = (ulong)*puVar21 * 8;
        pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
        *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
        if (pvVar16 != (void *)0x0) {
          memset(pvVar16,0,sVar8);
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 8) = pvVar16;
      uVar1 = *puVar21;
      pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      sVar8 = (ulong)uVar1 * 0x10;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
      if ((pvVar16 != (void *)0x0) && (uVar1 != 0)) {
        memset(pvVar16,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10) = pvVar16;
      if (*puVar21 != 0) {
        uVar17 = 0;
        lVar19 = 8;
        do {
          pcVar10 = *(char **)(*(long *)(*(long *)(param_1 + 0xa0) + uVar18 * 0xa0 + 0x18) +
                              uVar17 * 8);
          lVar11 = *(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10);
          if (*pcVar10 == '\x01') {
            *(char **)(lVar11 + lVar19) = pcVar10;
          }
          else {
            *(undefined8 *)(lVar11 + lVar19) = 0;
          }
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 0x10;
        } while (uVar17 < *puVar21);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


