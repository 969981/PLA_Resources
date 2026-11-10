/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b77f5c; name: FUN_00b77f5c
 */


void FUN_00b77f5c(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  ushort *puVar6;
  uint *puVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  long local_c8;
  char acStack_c0 [128];
  
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    lVar8 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    lVar8 = 0;
    if (uVar5 != 0) {
      puVar7 = (uint *)((long)param_3 + uVar5);
      lVar8 = (long)puVar7 + (ulong)*puVar7;
    }
  }
  snprintf(acStack_c0,0x80,"%s",lVar8 + 4);
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  puVar7 = (uint *)((long)param_3 + (ulong)puVar6[2]);
  uVar5 = (ulong)*puVar7;
  bVar4 = *(byte *)((long)puVar7 + uVar5 + 4);
  puVar9 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)((long)param_3 + uVar5 + puVar6[2] + 5);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar4 != 0);
  }
  if (param_4 != (uint *)0x0) {
    puVar7 = param_4 + 1;
    if (*param_4 != 0) {
      puVar1 = puVar7 + *param_4;
      lVar8 = (long)param_4 + 9;
      do {
        piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
        puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar11[2]);
        uVar5 = (ulong)*puVar3;
        bVar4 = *(byte *)((long)puVar3 + uVar5 + 4);
        puVar12 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar12 = &DAT_cbf29ce484222645;
          pbVar10 = (byte *)(lVar8 + uVar5 + puVar11[2] + (ulong)*puVar7);
          do {
            puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 != 0);
        }
        if (puVar12 == puVar9) {
          if (piVar2 != (int *)0x0) {
            if (*puVar11 < 7) goto LAB_00b7811c;
            local_c8 = 0;
            if ((ulong)puVar11[3] == 0) goto LAB_00b780c4;
            puVar7 = (uint *)((long)piVar2 + (ulong)puVar11[3]);
            goto LAB_00b780bc;
          }
          break;
        }
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + 4;
      } while (puVar7 != puVar1);
    }
  }
  if (*puVar6 < 7) {
LAB_00b7811c:
    local_c8 = 0;
  }
  else {
    local_c8 = 0;
    if ((ulong)puVar6[3] != 0) {
      puVar7 = (uint *)((long)param_3 + (ulong)puVar6[3]);
LAB_00b780bc:
      local_c8 = (long)puVar7 + (ulong)*puVar7;
    }
  }
LAB_00b780c4:
  FUN_00b78c0c(param_1,param_2,acStack_c0,&local_c8);
  return;
}


