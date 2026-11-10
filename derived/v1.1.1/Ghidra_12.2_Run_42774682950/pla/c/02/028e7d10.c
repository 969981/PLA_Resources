/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e7d10; name: FUN_028e7d10
 */


long FUN_028e7d10(long param_1,long *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  
  *(int **)(param_1 + 8) = param_3;
  puVar11 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar11 < 7) {
switchD_028e7d80_default:
    uVar8 = 0;
  }
  else if ((ulong)puVar11[3] == 0) {
switchD_028e7d80_caseD_0:
    if (*puVar11 < 0xf) goto switchD_028e7d80_default;
    uVar8 = 0;
    if ((ulong)puVar11[7] != 0) {
      puVar2 = (uint *)((long)param_3 + (ulong)puVar11[7]);
      piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
      uVar8 = 0;
      if (piVar1 != (int *)0x0) {
        uVar8 = (uint)(*piVar1 != 0);
      }
    }
  }
  else {
    uVar8 = 2;
    switch(*(undefined4 *)((long)param_3 + (ulong)puVar11[3])) {
    case 0:
      goto switchD_028e7d80_caseD_0;
    case 1:
      break;
    case 2:
      uVar8 = 3;
      break;
    case 3:
      uVar8 = 4;
      break;
    default:
      goto switchD_028e7d80_default;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar8;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_3 + uVar9);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  sVar5 = strlen((char *)(lVar10 + 4));
  bVar4 = *(byte *)(lVar10 + 4);
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)(lVar10 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  *(size_t *)(param_1 + 0x28) = sVar5;
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 **)(param_1 + 0x18) = puVar14;
  *(char **)(param_1 + 0x20) = (char *)(lVar10 + 4);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    lVar10 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    lVar10 = 0;
    if (uVar9 != 0) {
      puVar2 = (uint *)((long)param_3 + uVar9);
      lVar10 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  pbVar12 = (byte *)(lVar10 + 4);
  pcVar7 = strrchr((char *)pbVar12,0x2f);
  if (pcVar7 != (char *)0x0) {
    pbVar12 = (byte *)(pcVar7 + 1);
  }
  sVar5 = strlen((char *)pbVar12);
  bVar4 = *pbVar12;
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar13 = pbVar12;
    do {
      pbVar13 = pbVar13 + 1;
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar13;
    } while (bVar4 != 0);
  }
  *(size_t *)(param_1 + 0x48) = sVar5;
  plVar6 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 **)(param_1 + 0x38) = puVar14;
  *(byte **)(param_1 + 0x40) = pbVar12;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((0x10 < *(ushort *)((long)param_3 - (long)*param_3)) &&
     (uVar9 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[8], uVar9 != 0)) {
    uVar15 = (ulong)*(uint *)((long)param_3 + uVar9);
    puVar2 = (uint *)((long)((long)param_3 + uVar9) + uVar15);
    if (*puVar2 != 0) {
      (**(code **)(*param_2 + 0x58))(&local_78,param_2);
      if (*puVar2 != 0) {
        uVar17 = 0;
        lVar10 = (long)param_3 + uVar15 + uVar9 + 9;
        do {
          puVar3 = puVar2 + uVar17 + 1;
          uVar9 = (ulong)*puVar3;
          pcVar7 = (char *)((long)puVar3 + uVar9 + 4);
          sVar5 = strlen(pcVar7);
          bVar4 = *(byte *)((long)puVar3 + uVar9 + 4);
          puVar14 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            puVar14 = &DAT_cbf29ce484222645;
            pbVar12 = (byte *)(lVar10 + uVar9);
            do {
              puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar4 != 0);
          }
          puVar16 = (undefined8 *)(local_78 + uVar17 * local_68);
          puVar16[2] = sVar5;
          plVar6 = (long *)puVar16[3];
          *puVar16 = puVar14;
          puVar16[1] = pcVar7;
          puVar16[3] = 0;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          puVar16[3] = 0;
          uVar17 = uVar17 + 1;
          lVar10 = lVar10 + 4;
        } while (uVar17 < *puVar2);
      }
      goto LAB_028e8038;
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
LAB_028e8038:
  *(long *)(param_1 + 0x58) = local_78;
  *(undefined8 *)(param_1 + 0x60) = uStack_70;
  *(long *)(param_1 + 0x68) = local_68;
  return param_1;
}


