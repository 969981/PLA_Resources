/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b8264c; name: FUN_00b8264c
 */


void FUN_00b8264c(long *param_1,long param_2,ulong *param_3,char *param_4,long *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  long *extraout_x8;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte local_440 [1024];
  
  puVar2 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_5 != 0) {
    puVar2 = (undefined8 *)(*param_5 + 0x60);
  }
  puVar17 = &DAT_cbf29ce484222645;
  iVar6 = snprintf((char *)local_440,0x400,"%s/%s",(char *)*puVar2,param_4);
  if (local_440[0] != 0) {
    pbVar7 = (byte *)((ulong)local_440 | 1);
    do {
      puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)local_440[0]) * 0x100000001b3);
      local_440[0] = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (local_440[0] != 0);
  }
  uVar13 = *(ulong *)(param_2 + 0x3b8);
  if (uVar13 != 0) {
    uVar8 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar11 = *param_3;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar15 = uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      uVar15 = uVar11;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar11 / uVar13;
      }
      uVar15 = uVar11 - uVar15 * uVar13;
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x3b0) + uVar15 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar9[1] == uVar11) {
            if (plVar9[2] == uVar11) goto LAB_00b827d4;
          }
          else if ((plVar9[1] & uVar13 - 1) != uVar15) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar8 == uVar11) {
            if (plVar9[2] == uVar11) goto LAB_00b827d4;
          }
          else {
            if (uVar13 <= uVar8) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar8 / uVar13;
              }
              uVar8 = uVar8 - uVar5 * uVar13;
            }
            if (uVar8 != uVar15) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  goto LAB_00b828c4;
LAB_00b827d4:
  puVar12 = (undefined1 *)plVar9[4];
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)puVar17);
    }
    else {
      puVar14 = puVar17;
      if (puVar12 <= puVar17) {
        uVar8 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar17 / (ulong)puVar12;
        }
        puVar14 = puVar17 + -(uVar8 * (long)puVar12);
      }
    }
    plVar9 = *(long **)(plVar9[3] + (long)puVar14 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == puVar17) {
            if ((undefined1 *)plVar9[2] == puVar17) goto LAB_00b828c8;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar12 + -1)) != puVar14) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar9[1];
          if (puVar16 == puVar17) {
            if ((undefined1 *)plVar9[2] == puVar17) goto LAB_00b828c8;
          }
          else {
            if (puVar12 <= puVar16) {
              uVar13 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar16 / (ulong)puVar12;
              }
              puVar16 = puVar16 + -(uVar13 * (long)puVar12);
            }
            if (puVar16 != puVar14) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00b828c4:
  FUN_00b82640(iVar6);
  plVar9 = extraout_x8;
LAB_00b828c8:
  lVar10 = plVar9[3];
  *param_1 = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


