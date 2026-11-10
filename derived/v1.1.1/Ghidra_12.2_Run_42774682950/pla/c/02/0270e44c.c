/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0270e44c; name: FUN_0270e44c
 */


undefined8 FUN_0270e44c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  long *local_88;
  uint *local_80;
  uint *puStack_78;
  uint *local_70;
  undefined *local_68;
  long local_60 [2];
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  FUN_0270ef00(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar11 = 0;
  }
  else {
    FUN_0270f178(&local_38);
    plVar3 = local_38;
    if (local_38 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      local_68 = PTR_DAT_0437ace8 + 0x10;
      FUN_00937ea0(local_60,local_38 + 0xe);
      local_50 = plVar3[0x10];
      if (local_50 != 0) {
        piVar8 = (int *)(local_50 + 0x50);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_48 = plVar3[0x11];
      if (local_48 != 0) {
        piVar8 = (int *)(local_48 + 0x50);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_40 = plVar3[0x12];
      if (local_40 != 0) {
        FUN_02a439f4(*(undefined8 *)(local_40 + 0x58));
      }
      local_68 = PTR_DAT_0437a508 + 0x10;
      piVar8 = (int *)((long)*(uint **)(local_60[0] + 0x250) +
                      (ulong)**(uint **)(local_60[0] + 0x250));
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar7 == 0)) {
        puVar12 = (uint *)0x0;
      }
      else {
        puVar12 = (uint *)((long)piVar8 + uVar7);
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      }
      puVar9 = puVar12 + 1;
      local_80 = puVar9 + *puVar12;
      puStack_78 = puVar9;
      FUN_0270e920(&local_70,&puStack_78,&local_80,&DAT_afc4d6c05abef19e);
      if (local_70 == puVar9 + *puVar12) {
        uVar11 = 0;
      }
      else {
        piVar8 = (int *)((long)local_70 + (ulong)*local_70);
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
           (uVar7 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar7 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar8 + uVar7);
        }
        *(undefined4 *)(param_1 + 0x44) = uVar6;
        piVar8 = (int *)((long)local_70 + (ulong)*local_70);
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
           (uVar7 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar7 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar8 + uVar7);
        }
        *(undefined4 *)(param_1 + 0x48) = uVar6;
        piVar8 = (int *)((long)local_70 + (ulong)*local_70);
        uVar13 = 0;
        if ((10 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
           (uVar7 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar7 != 0)) {
          uVar13 = *(undefined4 *)((long)piVar8 + uVar7);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar13;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
        piVar8 = (int *)((long)local_70 + (ulong)*local_70);
        lVar10 = (long)*piVar8;
        puVar12 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0xc - lVar10)));
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        uVar4 = *puVar12;
        if ((ulong)uVar4 != 0) {
          *(uint *)(param_1 + 0x54) = puVar12[1];
          if (uVar4 != 1) {
            puVar9 = puVar12 + 1 + uVar4;
            *(uint *)(param_1 + 0x58) = puVar12[2];
            if (puVar12 + 3 != puVar9) {
              *(uint *)(param_1 + 0x5c) = puVar12[3];
              if (puVar12 + 4 != puVar9) {
                *(uint *)(param_1 + 0x60) = puVar12[4];
                if (puVar12 + 5 != puVar9) {
                  *(uint *)(param_1 + 100) = puVar12[5];
                }
              }
            }
          }
          piVar8 = (int *)((long)local_70 + (ulong)*local_70);
          lVar10 = (long)*piVar8;
        }
        lVar10 = -lVar10;
        puVar12 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + lVar10 + 0xe));
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        uVar4 = *puVar12;
        if ((ulong)uVar4 != 0) {
          *(uint *)(param_1 + 0x68) = puVar12[1];
          if (uVar4 != 1) {
            puVar9 = puVar12 + 1 + uVar4;
            *(uint *)(param_1 + 0x6c) = puVar12[2];
            if (puVar12 + 3 != puVar9) {
              *(uint *)(param_1 + 0x70) = puVar12[3];
              if (puVar12 + 4 != puVar9) {
                *(uint *)(param_1 + 0x74) = puVar12[4];
                if (puVar12 + 5 != puVar9) {
                  *(uint *)(param_1 + 0x78) = puVar12[5];
                }
              }
            }
          }
          piVar8 = (int *)((long)local_70 + (ulong)*local_70);
          lVar10 = -(long)*piVar8;
        }
        puVar12 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + lVar10 + 0x10));
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        puVar9 = puVar12 + 1;
        uVar4 = *puVar12;
        if ((ulong)uVar4 != 0) {
          *(uint *)(param_1 + 0x7c) = *puVar9;
          if (uVar4 != 1) {
            *(uint *)(param_1 + 0x80) = puVar12[2];
            if (puVar12 + 3 != puVar9 + uVar4) {
              *(uint *)(param_1 + 0x84) = puVar12[3];
              if (puVar12 + 4 != puVar9 + uVar4) {
                *(uint *)(param_1 + 0x88) = puVar12[4];
              }
            }
          }
        }
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
        FUN_01148a98(&local_88);
        if (local_88 != (long *)0x0) {
          uVar4 = FUN_010f5984(local_88,&DAT_03a7df70);
          if (*(uint *)(param_1 + 0x44) < uVar4) {
            FUN_010f520c(local_88,&DAT_03a7df70);
          }
          if (local_88 != (long *)0x0) {
            lVar10 = local_88[0xb];
            piVar8 = (int *)(lVar10 + 0xc);
            do {
              iVar5 = *piVar8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar2) {
                *piVar8 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar5 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
        uVar11 = 1;
      }
      FUN_00936104(&local_68);
      if (local_38 != (long *)0x0) {
        lVar10 = local_38[0xb];
        piVar8 = (int *)(lVar10 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
  return uVar11;
}


