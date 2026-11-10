/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008359ac; name: FUN_008359ac
 */


void FUN_008359ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 local_50 [2];
  
  uVar1 = *(uint *)(param_1 + 0x850);
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0) {
    return;
  }
  lVar3 = FUN_008473ec();
  if (lVar3 != 0) {
    lVar3 = FUN_008473ec(param_1);
    lVar4 = FUN_00847388(param_1);
    if (lVar3 == lVar4) {
      if (0 < (int)uVar1) {
        puVar8 = (undefined8 *)(param_1 + 0x798);
        do {
          FUN_0083cad4(local_50,*(undefined8 *)(param_1 + 200),*puVar8,1);
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      FUN_00835048(param_1);
      goto LAB_00835b74;
    }
  }
  lVar3 = FUN_008473ec(param_1);
  if ((lVar3 != 0) && (lVar3 = FUN_00847388(param_1), lVar3 != 0)) {
    lVar3 = FUN_008473ec(param_1);
    lVar4 = FUN_00847388(param_1);
    if (lVar3 != lVar4) {
      lVar3 = FUN_008473ec(param_1);
      if (0 < *(int *)(param_1 + 0x850)) {
        lVar4 = 0;
        do {
          if (*(long *)(param_1 + lVar4 * 8 + 0x798) == lVar3) {
            uVar6 = FUN_008473ec(param_1);
            plVar5 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
            lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar6);
            if (lVar3 != 0) {
              FUN_00835b90(param_1,lVar3);
              FUN_0083514c(local_50,param_1,0);
            }
            goto LAB_00835b74;
          }
          lVar4 = lVar4 + 1;
        } while (*(int *)(param_1 + 0x850) != lVar4);
      }
      FUN_00835dd4(param_1,param_1 + 0x798,uVar1);
      plVar5 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      puVar2 = PTR_DAT_04377ce8;
      if (0 < (int)uVar1) {
        puVar8 = (undefined8 *)(param_1 + 0x798);
        do {
          lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,*puVar8);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0x3c) == 2)) {
            *(undefined1 *)(lVar3 + 0x78) = 1;
            local_50[0] = 0;
            FUN_007ecf14(local_50);
            *(undefined8 *)(lVar3 + 0x88) = local_50[0];
            FUN_0082fb40(*(undefined8 *)puVar2,lVar3);
          }
          puVar8 = puVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
LAB_00835b74:
  *(undefined4 *)(param_1 + 0x850) = 0;
  return;
}


