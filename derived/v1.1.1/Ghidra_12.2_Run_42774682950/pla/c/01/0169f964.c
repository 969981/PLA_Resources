/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0169f964; name: FUN_0169f964
 */


undefined8 FUN_0169f964(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long *local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [24];
  long *local_68;
  undefined1 *local_58;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 200) == 1) {
    plVar15 = *(long **)(param_1 + 0x88);
    while( true ) {
      if (plVar15 == (long *)0x0) {
        *(undefined1 *)(param_1 + 0x54) = 1;
        return 1;
      }
      plVar14 = (long *)plVar15[3];
      if (plVar14 == (long *)0x0) {
        uVar8 = FUN_016a0dc4(0);
      }
      else {
        plVar10 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)*plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar8 = FUN_016a0dc4(plVar14);
        do {
          iVar7 = (int)*plVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if ((uVar8 & 1) == 0) break;
      plVar15 = (long *)*plVar15;
    }
  }
  else {
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    uVar8 = FUN_0161e820(*(undefined8 *)(param_1 + 0xc0));
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_0161e868(*(undefined8 *)(param_1 + 0xc0));
      puVar11 = *(uint **)(*(long *)(lVar9 + 8) + 0x250);
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
        puVar11 = (uint *)0x0;
        uVar3 = uRam0000000000000000;
      }
      else {
        puVar11 = (uint *)((long)piVar1 + uVar8);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        uVar3 = *puVar11;
      }
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          piVar1 = (int *)((long)(puVar11 + uVar8 + 1) + (ulong)puVar11[uVar8 + 1]);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar12 == 0)) {
            lVar9 = 0;
          }
          else {
            puVar2 = (uint *)((long)piVar1 + uVar12);
            lVar9 = (long)puVar2 + (ulong)*puVar2;
          }
          bVar4 = *(byte *)(lVar9 + 4);
          local_58 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            local_58 = &DAT_cbf29ce484222645;
            pbVar13 = (byte *)(lVar9 + 5);
            do {
              local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar4 != 0);
          }
          plVar15 = (long *)FUN_016a03a8(*(undefined8 *)(param_1 + 8));
          if (plVar15 != (long *)0x0) {
            plVar14 = plVar15 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = (int)*plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            lVar9 = 0;
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            lVar9 = 0;
            if (uVar12 != 0) {
              puVar2 = (uint *)((long)piVar1 + uVar12);
              lVar9 = (long)puVar2 + (ulong)*puVar2;
            }
          }
          FUN_00947cf8(&local_88,lVar9 + 4);
          FUN_02a47560(auStack_80,&local_88);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
            lVar9 = 0;
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
            lVar9 = 0;
            if (uVar12 != 0) {
              puVar2 = (uint *)((long)piVar1 + uVar12);
              lVar9 = (long)puVar2 + (ulong)*puVar2;
            }
          }
          FUN_00947cf8(&local_b0,lVar9 + 4);
          FUN_02a47560(auStack_a8,&local_b0);
          FUN_016a0b40(plVar15,auStack_80,auStack_a8);
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          plVar14 = (long *)FUN_0169fd00(param_1 + 0x58,&local_58);
          if (plVar15 != (long *)0x0) {
            plVar10 = plVar15 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar10 = (long *)*plVar14;
          *plVar14 = (long)plVar15;
          if (plVar10 != (long *)0x0) {
            plVar14 = plVar10 + 10;
            do {
              iVar7 = (int)*plVar14 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
          if (plVar15 != (long *)0x0) {
            plVar14 = plVar15 + 10;
            do {
              iVar7 = (int)*plVar14 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar11);
      }
      *(undefined4 *)(param_1 + 200) = 1;
      return 0;
    }
  }
  return 0;
}


