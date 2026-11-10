/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b821b4; name: FUN_00b821b4
 */


long FUN_00b821b4(long param_1,undefined8 *param_2,int *param_3,uint *param_4,long *param_5)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ushort *puVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  long *extraout_x10;
  undefined1 *puVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  long *local_298 [4];
  long *local_278;
  byte local_268 [520];
  
  puVar8 = (undefined8 *)FUN_00b779ac();
  plVar20 = (long *)*puVar8;
  if (plVar20 == (long *)0x0) {
    plVar21 = (long *)puVar8[4];
  }
  else {
    (**(code **)(*plVar20 + 0x18))(plVar20);
    plVar21 = (long *)puVar8[4];
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  puVar12 = (ushort *)((long)param_3 - (long)*param_3);
  if ((*puVar12 < 5) || ((ulong)puVar12[2] == 0)) {
    lVar19 = 0;
  }
  else {
    puVar13 = (uint *)((long)param_3 + (ulong)puVar12[2]);
    lVar19 = (long)puVar13 + (ulong)*puVar13;
  }
  bVar4 = *(byte *)(lVar19 + 4);
  puVar22 = &DAT_cbf29ce484222645;
  puVar15 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar15 = &DAT_cbf29ce484222645;
    pbVar14 = (byte *)(lVar19 + 5);
    do {
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar4 != 0);
  }
  if (param_4 != (uint *)0x0) {
    puVar13 = param_4 + 1;
    if (*param_4 != 0) {
      puVar1 = puVar13 + *param_4;
      lVar19 = (long)param_4 + 9;
      do {
        piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
        puVar17 = (ushort *)((long)piVar2 - (long)*piVar2);
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar17[2]);
        uVar11 = (ulong)*puVar3;
        bVar4 = *(byte *)((long)puVar3 + uVar11 + 4);
        puVar18 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar18 = &DAT_cbf29ce484222645;
          pbVar14 = (byte *)(lVar19 + uVar11 + puVar17[2] + (ulong)*puVar13);
          do {
            puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar4 != 0);
        }
        if (puVar18 == puVar15) {
          if (piVar2 != (int *)0x0) {
            if (*puVar17 < 7) goto LAB_00b8261c;
            lVar19 = 0;
            if ((ulong)puVar17[3] == 0) goto LAB_00b82304;
            puVar13 = (uint *)((long)piVar2 + (ulong)puVar17[3]);
            goto LAB_00b822fc;
          }
          break;
        }
        puVar13 = puVar13 + 1;
        lVar19 = lVar19 + 4;
      } while (puVar13 != puVar1);
    }
  }
  if (*puVar12 < 7) {
LAB_00b8261c:
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if ((ulong)puVar12[3] != 0) {
      puVar13 = (uint *)((long)param_3 + (ulong)puVar12[3]);
LAB_00b822fc:
      lVar19 = (long)puVar13 + (ulong)*puVar13;
    }
  }
LAB_00b82304:
  snprintf((char *)local_268,0x80,"%s/%s.aibt",*(char **)(param_1 + 0x28),(char *)(lVar19 + 4));
  FUN_00aad744(local_298,local_268);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  plVar20 = local_278;
  plVar6 = local_298[0];
  local_298[0] = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    local_278 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar21 + 0x20))(plVar21);
    plVar20 = local_278;
    local_278 = (long *)0x0;
    if (local_298[0] != (long *)0x0) {
      (**(code **)(*local_298[0] + 0x20))();
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    if (plVar6 == (long *)0x0) {
      plVar21 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar21 = plVar6 + 0xc;
    }
    pcVar9 = strrchr((char *)*plVar21,0x2f);
    if (pcVar9 == (char *)0x0) {
      pbVar14 = (byte *)0x0;
    }
    else {
      pbVar14 = (byte *)(pcVar9 + 1);
    }
    bVar4 = *pbVar14;
    puVar15 = &DAT_cbf29ce484222645;
    if (bVar4 != 0) {
      puVar15 = &DAT_cbf29ce484222645;
      do {
        pbVar14 = pbVar14 + 1;
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar14;
      } while (bVar4 != 0);
    }
    *param_2 = puVar15;
  }
  plVar21 = (long *)PTR_PTR_04379d00;
  if (plVar6 != (long *)0x0) {
    plVar21 = plVar6 + 0xc;
  }
  pcVar10 = strrchr((char *)*plVar21,0x2f);
  pcVar9 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    pcVar9 = pcVar10 + 1;
  }
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    lVar19 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    lVar19 = 0;
    if (uVar11 != 0) {
      puVar13 = (uint *)((long)param_3 + uVar11);
      lVar19 = (long)puVar13 + (ulong)*puVar13;
    }
  }
  puVar8 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_5 != 0) {
    puVar8 = (undefined8 *)(*param_5 + 0x60);
  }
  iVar7 = snprintf((char *)local_268,0x200,"%s_%s_%s",pcVar9,(char *)(lVar19 + 4),(char *)*puVar8);
  if (local_268[0] != 0) {
    pbVar14 = (byte *)((ulong)local_268 | 1);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)local_268[0]) * 0x100000001b3);
      local_268[0] = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (local_268[0] != 0);
  }
  puVar15 = *(undefined1 **)(param_1 + 0x1e0);
  if (puVar15 != (undefined1 *)0x0) {
    uVar11 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar18 = (undefined1 *)((ulong)(puVar15 + -1) & (ulong)puVar22);
    }
    else {
      puVar18 = puVar22;
      if (puVar15 <= puVar22) {
        uVar5 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar22 / (ulong)puVar15;
        }
        puVar18 = puVar22 + -(uVar5 * (long)puVar15);
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x1d8) + (long)puVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar21[1] == puVar22) {
            if ((undefined1 *)plVar21[2] == puVar22) goto LAB_00b82570;
          }
          else if ((undefined1 *)((ulong)plVar21[1] & (ulong)(puVar15 + -1)) != puVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar21[1];
          if (puVar16 == puVar22) {
            if ((undefined1 *)plVar21[2] == puVar22) goto LAB_00b82570;
          }
          else {
            if (puVar15 <= puVar16) {
              uVar11 = 0;
              if (puVar15 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar16 / (ulong)puVar15;
              }
              puVar16 = puVar16 + -(uVar11 * (long)puVar15);
            }
            if (puVar16 != puVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  FUN_00b82640(iVar7);
  plVar21 = extraout_x10;
LAB_00b82570:
  lVar19 = plVar21[3];
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return lVar19;
}


