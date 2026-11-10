/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ec110; name: FUN_028ec110
 */


void FUN_028ec110(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint *puVar10;
  byte *pbVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  int *local_68;
  undefined1 *local_60;
  char *local_58;
  size_t local_50;
  long *local_48;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  param_1[1] = param_1[1] + 1;
  puVar13 = (ushort *)((long)param_2 - (long)*param_2);
  lVar12 = -(long)*param_2;
  uVar9 = *puVar13;
  if (uVar9 < 0xd) {
LAB_028ec278:
    if (10 < uVar9) goto LAB_028ec280;
LAB_028ec378:
    param_1[6] = param_1[6] + 1;
  }
  else {
    uVar14 = (ulong)puVar13[6];
    if (uVar14 != 0) {
      uVar15 = (ulong)*(uint *)((long)param_2 + uVar14);
      puVar1 = (uint *)((long)((long)param_2 + uVar14) + uVar15);
      puVar10 = puVar1 + 1;
      uVar16 = (ulong)*puVar1;
      if (uVar16 != 0) {
        puVar1 = puVar10 + uVar16;
        lVar12 = (long)param_2 + uVar14 + uVar15 + 8;
        do {
          uVar6 = *puVar10;
          piVar2 = (int *)((long)puVar10 + (ulong)uVar6);
          if (piVar2 != (int *)0x0) {
            param_1[2] = param_1[2] + 1;
            if ((0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
               (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar14 != 0)) {
              puVar3 = (uint *)((long)piVar2 + uVar14);
              uVar15 = (ulong)*puVar3;
              param_1[5] = param_1[5] + (ulong)(*(int *)((long)puVar3 + uVar15) * 2 - 1);
              uVar7 = *(uint *)((long)puVar3 + uVar15);
              if ((ulong)uVar7 != 0) {
                lVar17 = 0;
                lVar4 = lVar12 + uVar6 + uVar15 + uVar14;
                do {
                  uVar14 = (ulong)*(uint *)(lVar4 + lVar17);
                  lVar5 = lVar17 + (uVar14 - (long)*(int *)(lVar4 + uVar14 + lVar17));
                  if (((8 < *(ushort *)(lVar4 + lVar5)) &&
                      (uVar15 = (ulong)*(ushort *)(lVar4 + lVar5 + 8), uVar15 != 0)) &&
                     (*(char *)(lVar4 + uVar14 + uVar15 + lVar17) != '\0')) {
                    param_1[4] = param_1[4] + 1;
                  }
                  lVar17 = lVar17 + 4;
                } while ((ulong)uVar7 * 4 != lVar17);
              }
            }
          }
          puVar10 = puVar10 + 1;
          lVar12 = lVar12 + 4;
        } while (puVar10 != puVar1);
        lVar12 = -(long)*param_2;
        uVar9 = *(ushort *)((long)param_2 - (long)*param_2);
        goto LAB_028ec278;
      }
    }
LAB_028ec280:
    uVar14 = (ulong)*(ushort *)((long)param_2 + lVar12 + 10);
    if (uVar14 == 0) goto LAB_028ec378;
    puVar10 = (uint *)((long)param_2 + uVar14);
    piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 != 0)) {
      puVar10 = (uint *)((long)piVar2 + uVar14);
      puVar18 = &DAT_cbf29ce484222645;
      local_68 = (int *)((long)puVar10 + (ulong)*puVar10);
      local_60 = &DAT_cbf29ce484222645;
      local_48 = (long *)0x0;
      local_58 = "";
      local_50 = 0;
      if ((*(ushort *)((long)local_68 - (long)*local_68) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2], uVar14 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar10 = (uint *)((long)local_68 + uVar14);
        lVar12 = (long)puVar10 + (ulong)*puVar10;
      }
      local_50 = strlen((char *)(lVar12 + 4));
      bVar8 = *(byte *)(lVar12 + 4);
      if (bVar8 != 0) {
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar8 != 0);
      }
      local_48 = (long *)0x0;
      local_60 = puVar18;
      local_58 = (char *)(lVar12 + 4);
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_1 + 6,&local_68);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  puVar13 = (ushort *)((long)param_2 - (long)*param_2);
  lVar12 = -(long)*param_2;
  uVar9 = *puVar13;
  if (0x10 < uVar9) {
    uVar14 = (ulong)puVar13[8];
    if (uVar14 == 0) goto LAB_028ec3d4;
    puVar10 = (uint *)((long)param_2 + uVar14);
    param_1[3] = param_1[3] + (ulong)*(uint *)((long)puVar10 + (ulong)*puVar10);
    lVar12 = -(long)*param_2;
    uVar9 = *(ushort *)((long)param_2 - (long)*param_2);
  }
  if (uVar9 < 0xf) {
    return;
  }
LAB_028ec3d4:
  uVar14 = (ulong)*(ushort *)((long)param_2 + lVar12 + 0xe);
  if (uVar14 != 0) {
    puVar10 = (uint *)((long)param_2 + uVar14);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    lVar12 = (ulong)*puVar10 << 2;
    if ((ulong)*puVar10 != 0) {
      do {
        puVar10 = puVar10 + 1;
        FUN_028ec110(param_1,(long)puVar10 + (ulong)*puVar10);
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
  }
  return;
}


