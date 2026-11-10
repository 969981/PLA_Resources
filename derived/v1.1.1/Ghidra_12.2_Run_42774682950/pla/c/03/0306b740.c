/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306b740; name: FUN_0306b740
 */


void FUN_0306b740(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 byte param_6,long *param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 8);
  plVar10 = *(long **)(lVar11 + 0x658);
  if ((*(byte *)(param_3 + 0x96) >> 4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x40);
    uVar1 = *(uint *)(*param_5 + 0x54) | *(uint *)(*param_4 + 0x54) |
            *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(*param_4 + 0x8a) * 0x50 + 0x14)
            | *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(*param_5 + 0x8a) * 0x50 +
                       0x14);
    if ((*(uint *)(lVar8 + 0x318) & uVar1) != 0) {
      if (*(int *)(lVar8 + 0x1458) == 0) {
        if ((*(uint *)(lVar8 + 800) & uVar1) != 0) {
          (**(code **)(**(long **)(lVar8 + 0x328) + 0x28))
                    (*(long **)(lVar8 + 0x328),param_1,param_2,param_4,param_5,param_3);
        }
        if (1 < *(int *)(lVar8 + 0x31c)) {
          if ((*(uint *)(lVar8 + 0x330) & uVar1) != 0) {
            (**(code **)(**(long **)(lVar8 + 0x338) + 0x28))
                      (*(long **)(lVar8 + 0x338),param_1,param_2,param_4,param_5,param_3);
          }
          if (2 < *(int *)(lVar8 + 0x31c)) {
            if ((*(uint *)(lVar8 + 0x340) & uVar1) != 0) {
              (**(code **)(**(long **)(lVar8 + 0x348) + 0x28))
                        (*(long **)(lVar8 + 0x348),param_1,param_2,param_4,param_5,param_3);
            }
            if (3 < *(int *)(lVar8 + 0x31c)) {
              if ((*(uint *)(lVar8 + 0x350) & uVar1) != 0) {
                (**(code **)(**(long **)(lVar8 + 0x358) + 0x28))
                          (*(long **)(lVar8 + 0x358),param_1,param_2,param_4,param_5,param_3);
              }
              if (4 < *(int *)(lVar8 + 0x31c)) {
                puVar9 = (undefined8 *)(lVar8 + 0x368);
                lVar6 = 4;
                do {
                  if ((*(uint *)(puVar9 + -1) & uVar1) != 0) {
                    (**(code **)(*(long *)*puVar9 + 0x28))
                              ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
                  }
                  lVar6 = lVar6 + 1;
                  puVar9 = puVar9 + 2;
                } while (lVar6 < *(int *)(lVar8 + 0x31c));
              }
            }
          }
        }
      }
      else {
        lVar6 = (long)*(int *)(lVar8 + 0x1458) << 3;
        puVar9 = *(undefined8 **)(lVar8 + 0x1450);
        do {
          (**(code **)(*(long *)*puVar9 + 0xb8))
                    ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
          lVar6 = lVar6 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar6 != 0);
        lVar6 = 0;
        puVar9 = (undefined8 *)(lVar8 + 0x328);
        do {
          if ((*(uint *)(puVar9 + -1) & uVar1) != 0) {
            (**(code **)(*(long *)*puVar9 + 0x28))
                      ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
          }
          lVar6 = lVar6 + 1;
          puVar9 = puVar9 + 2;
        } while (lVar6 < *(int *)(lVar8 + 0x31c));
        if (*(int *)(lVar8 + 0x1458) != 0) {
          lVar6 = (long)*(int *)(lVar8 + 0x1458) << 3;
          puVar9 = *(undefined8 **)(lVar8 + 0x1450);
          do {
            (**(code **)(*(long *)*puVar9 + 0xc0))
                      ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
            lVar6 = lVar6 + -8;
            puVar9 = puVar9 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
  lVar8 = *(long *)(param_3 + 0x98);
  if ((*(byte *)(lVar8 + 0x2c) >> 6 & 1) == 0) {
    (**(code **)(*plVar10 + 0x48))(plVar10,param_8,param_4[1],param_5[1]);
    puVar7 = *(uint **)(lVar8 + 0x20);
    if (puVar7 != (uint *)0x0) {
      puVar5 = (uint *)param_7[3];
      if (puVar5 == puVar7) {
        iVar4 = (int)param_7[4] + 1;
      }
      else {
        if ((puVar5 != (uint *)0x0) && (lVar6 = *param_7, lVar6 != 0)) {
          uVar1 = *(uint *)(param_7 + 4);
          if (uVar1 == (*puVar5 & 0xffff)) {
            puVar9 = (undefined8 *)param_7[2];
            *(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)puVar5[1] * 8) = 0;
            *(undefined1 *)(lVar6 + 0xc) = 1;
            iVar4 = *(int *)(puVar9 + 0xb);
            lVar6 = puVar9[1];
            *(uint **)(lVar6 + (long)iVar4 * 8) = puVar5;
            *(int *)(puVar9 + 0xb) = iVar4 + 1;
            if (*(int *)((long)puVar9 + 0x5c) <= iVar4 + 1) {
              (**(code **)(*(long *)*puVar9 + 0x28))
                        ((long *)*puVar9,lVar6 + (long)(iVar4 + -5) * 8,6);
              *(int *)(puVar9 + 0xb) = iVar4 + -5;
            }
          }
          else {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar3) {
                *puVar5 = *puVar5 - uVar1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        iVar4 = 1;
        param_7[3] = (long)puVar7;
      }
      *(int *)(param_7 + 4) = iVar4;
    }
    (**(code **)(*plVar10 + 0x50))
              (plVar10,param_8,param_1,lVar11 + 0x530,lVar8,param_3,param_4,param_5,param_6 & 1);
  }
  else {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined2 *)(lVar8 + 0x28) = 0;
  }
  return;
}


