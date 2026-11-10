/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02841400; name: FUN_02841400
 */


void FUN_02841400(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  uint *puVar17;
  long *local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  long *local_e8;
  int *local_e0;
  long *local_d8;
  long *plStack_d0;
  long local_a0;
  
  FUN_02841748(&local_e0,*(long *)(param_3 + 8) + 0x270);
  if ((((4 < *(ushort *)((long)local_e0 - (long)*local_e0)) &&
       (uVar13 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))[2], uVar13 != 0)) &&
      (puVar2 = (uint *)((long)local_e0 + uVar13), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
      puVar2 != (uint *)0x0)) && (*puVar2 != 0)) {
    puVar17 = puVar2 + 1;
    do {
      piVar3 = (int *)((long)puVar17 + (ulong)*puVar17);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar13 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar13);
        lVar14 = (long)puVar4 + (ulong)*puVar4;
      }
      FUN_00947cf8(&local_e8,lVar14 + 4);
      plVar11 = plStack_d0;
      plVar12 = local_d8;
      plVar1 = local_e8;
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x18))(local_e8);
      }
      plVar10 = plVar12;
      if (plVar12 != plVar11) {
        plVar5 = (long *)PTR_DAT_04379c88;
        if (plVar1 != (long *)0x0) {
          plVar5 = plVar1 + 0xb;
        }
        lVar14 = *plVar12;
        while ((plVar10 = plVar12, *plVar5 != lVar14 &&
               (plVar12 = plVar12 + 4, plVar10 = plVar11, plVar11 != plVar12))) {
          lVar14 = *plVar12;
        }
      }
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      lVar14 = (long)plVar10 - (long)local_d8;
      plVar12 = (long *)FUN_00d25b60(&local_108,*(undefined8 *)(param_1 + 8));
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_02c3c658(plVar12 + 0xd,local_a0 + (lVar14 >> 5) * 0x30);
      FUN_0022b74c(plVar12[0xc],*(long *)(plVar12[0xe] + 600) + 0x80);
      piVar3 = (int *)((long)puVar17 + (ulong)*puVar17);
      uVar16 = *param_2;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar13 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar13 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar13);
        lVar14 = (long)puVar4 + (ulong)*puVar4;
      }
      local_f8 = strlen((char *)(lVar14 + 4));
      bVar6 = *(byte *)(lVar14 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar15 = (byte *)(lVar14 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar6 != 0);
      }
      local_f0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_110 = plVar12;
      pcStack_100 = (char *)(lVar14 + 4);
      FUN_0283c244(uVar16,&local_108,&local_110,0);
      if (local_110 != (long *)0x0) {
        plVar1 = local_110 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_110 + 0x10))();
        }
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar2 + 1 + *puVar2);
  }
  FUN_02841940(&local_e0);
  return;
}


