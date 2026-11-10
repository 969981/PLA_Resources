/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284016c; name: FUN_0284016c
 */


void FUN_0284016c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  long *local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  long *local_e8;
  int *local_e0 [16];
  
  FUN_02841748(local_e0,*(long *)(param_2 + 8) + 0x270);
  if ((((4 < *(ushort *)((long)local_e0[0] - (long)*local_e0[0])) &&
       (uVar9 = (ulong)((ushort *)((long)local_e0[0] - (long)*local_e0[0]))[2], uVar9 != 0)) &&
      (puVar2 = (uint *)((long)local_e0[0] + uVar9),
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2), puVar2 != (uint *)0x0)) && (*puVar2 != 0)) {
    puVar12 = puVar2 + 1;
    do {
      piVar3 = (int *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar9);
        lVar13 = (long)puVar4 + (ulong)*puVar4;
      }
      FUN_00947cf8(&local_e8,lVar13 + 4);
      plVar1 = local_e8;
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x18))(local_e8);
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      piVar3 = (int *)((long)puVar12 + (ulong)*puVar12);
      uVar11 = *param_1;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar9 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar9);
        lVar13 = (long)puVar4 + (ulong)*puVar4;
      }
      local_f8 = strlen((char *)(lVar13 + 4));
      bVar5 = *(byte *)(lVar13 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar10 = (byte *)(lVar13 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 != 0);
      }
      local_f0 = (long *)0x0;
      local_110 = (long *)*param_3;
      if (local_110 != (long *)0x0) {
        plVar1 = local_110 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pcStack_100 = (char *)(lVar13 + 4);
      FUN_0283c244(uVar11,&local_108,&local_110,0);
      if (local_110 != (long *)0x0) {
        plVar1 = local_110 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_110 + 0x10))();
        }
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2 + 1 + *puVar2);
  }
  FUN_02841940(local_e0);
  return;
}


