/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec10a4; name: FUN_02ec10a4
 */


void FUN_02ec10a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_40;
  undefined1 local_38;
  
  *(undefined4 *)(param_1 + 0x78) = 3;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_02eba234();
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 2) {
        if (*(int *)(param_1 + 0x28) != 0) {
          local_38 = 0;
          local_40 = 0x400000000;
          puVar8 = *(undefined8 **)(param_1 + 0x20);
          do {
            puVar6 = puVar8 + 1;
            FUN_02ecc3d4(*puVar8,&local_40,1);
            puVar8 = puVar6;
          } while (puVar6 != (undefined8 *)
                             (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8));
        }
      }
      else if (iVar1 == 1) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) {
            puVar8 = *(undefined8 **)(param_1 + 0x30);
            do {
              uVar7 = *puVar8;
              if (DAT_0440a128 != 0) {
                FUN_02e83118(DAT_0440a128,uVar7,*(undefined8 *)(param_1 + 0x40),
                             *(undefined4 *)(param_1 + 0x58));
              }
              FUN_02ed50e8(uVar7,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58),0,4
                          );
              puVar8 = puVar8 + 1;
            } while (puVar8 != (undefined8 *)
                               (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
          }
          else {
            plVar3 = *(long **)(lVar5 + 0x40);
            if (plVar3 != (long *)0x0) {
              do {
                if ((*(long *)(plVar3[2] + 0x68) != 0) &&
                   (uVar2 = FUN_02ec6c74(*(long *)(plVar3[2] + 0x68),param_1), (uVar2 & 1) != 0)) {
                  local_38 = 0;
                  local_40 = 0x400000000;
                  FUN_02ecc3d4(plVar3[2],&local_40,1);
                }
                plVar3 = (long *)*plVar3;
              } while (plVar3 != (long *)0x0);
              lVar5 = *(long *)(param_1 + 0x48);
            }
            plVar3 = *(long **)(lVar5 + 0x68);
            if (plVar3 != (long *)0x0) {
              uVar4 = *(uint *)(param_1 + 0x38);
              uVar2 = (ulong)uVar4;
              while( true ) {
                if (uVar4 != 0) {
                  puVar8 = *(undefined8 **)(param_1 + 0x30);
                  do {
                    uVar2 = FUN_02e8dfb4(plVar3[2],param_1);
                    if ((uVar2 & 1) != 0) {
                      FUN_02e84770(DAT_0440a128,plVar3[2],*puVar8,3);
                    }
                    puVar8 = puVar8 + 1;
                    uVar2 = (ulong)*(uint *)(param_1 + 0x38);
                  } while (puVar8 != (undefined8 *)(*(long *)(param_1 + 0x30) + uVar2 * 8));
                }
                plVar3 = (long *)*plVar3;
                if (plVar3 == (long *)0x0) break;
                uVar4 = (uint)uVar2;
              }
            }
          }
        }
      }
      else if ((iVar1 == 0) && (*(long *)(param_1 + 0x18) != 0)) {
        local_38 = 0;
        local_40 = 0x400000000;
        FUN_02ecc3d4(*(long *)(param_1 + 0x18),&local_40,1);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0xffff;
  while( true ) {
    uVar4 = *(uint *)(param_1 + 0x38);
    if (uVar4 == 0) break;
    plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 8 + -8);
    *(uint *)(param_1 + 0x38) = uVar4 - 1;
    (**(code **)(*plVar3 + 0x18))();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_02e7b4e0();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


