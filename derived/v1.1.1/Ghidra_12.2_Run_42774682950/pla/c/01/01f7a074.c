/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7a074; name: FUN_01f7a074
 */


void FUN_01f7a074(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ushort *puVar9;
  uint *puVar10;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x78) != 0) && (FUN_00ca554c(&local_38), local_38 != (long *)0x0)) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_011492c0(&local_40);
    lVar6 = FUN_018b4864(local_38,&DAT_cbf29ce484222645);
    puVar7 = *(uint **)(*(long *)(lVar6 + 8) + 0x250);
    piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
    if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
        (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 != 0)) &&
       (puVar7 = (uint *)((long)piVar2 + uVar8), puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7),
       puVar7 != (uint *)0x0)) {
      puVar10 = puVar7 + 1;
      if ((ulong)*puVar7 != 0) {
        puVar7 = puVar10 + *puVar7;
        do {
          piVar2 = (int *)((long)puVar10 + (ulong)*puVar10);
          puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
          if (((8 < *puVar9) && ((ulong)puVar9[4] != 0)) &&
             (*(undefined1 **)((long)piVar2 + (ulong)puVar9[4]) == &DAT_cbf29ce484222645)) {
            if ((ulong)puVar9[3] == 0) {
              local_48 = 0;
            }
            else {
              local_48 = *(undefined8 *)((long)piVar2 + (ulong)puVar9[3]);
            }
            uVar8 = FUN_01127534(local_40,&local_48);
            if ((uVar8 & 1) != 0) {
              local_58 = *(undefined8 *)(param_1 + 8);
              local_50 = (long *)FUN_0161dc70(auStack_28,local_58,&local_58);
              if (local_50 == (long *)0x0) {
                local_60 = (long *)0x0;
              }
              else {
                plVar1 = local_50 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                local_60 = local_50;
              }
              if (local_60 != (long *)0x0) {
                plVar1 = local_60 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_01127084(local_40,&local_60,&local_48);
              if (local_60 != (long *)0x0) {
                plVar1 = local_60 + 10;
                do {
                  iVar5 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar5;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 == 0) {
                  (**(code **)(*local_60 + 0x10))();
                }
              }
              FUN_01f79164(param_1,local_48,&local_50);
              if (local_50 != (long *)0x0) {
                plVar1 = local_50 + 10;
                do {
                  iVar5 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar5;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 == 0) {
                  (**(code **)(*local_50 + 0x10))();
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar7);
      }
    }
    if (local_40 != (long *)0x0) {
      lVar6 = local_40[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


