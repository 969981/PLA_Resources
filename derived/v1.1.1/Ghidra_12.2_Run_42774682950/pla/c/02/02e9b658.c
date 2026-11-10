/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b658; name: FUN_02e9b658
 */


undefined8 FUN_02e9b658(long param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  int local_48 [2];
  
  if (param_2 == 0) {
    uVar8 = 0;
    uVar2 = 1;
  }
  else {
    uVar8 = 0;
    uVar9 = param_2;
    do {
      puVar3 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18);
      uVar5 = *puVar3;
      if (uVar5 == 0) {
        if (*(long **)(param_1 + 0x40) == (long *)0x0) {
          uVar2 = 1;
          break;
        }
        iVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
        if (iVar1 == 4) {
          uVar2 = 0x38;
          break;
        }
        uVar4 = (ulong)(*(int *)(param_1 + 0x20) == 0);
        if (*(int *)(param_1 + uVar4 * 4 + 0x18) == 0) {
          uVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
                            (*(long **)(param_1 + 0x40),uVar9,1,local_48);
          if ((int)uVar2 != 1) break;
          uVar8 = uVar8 + local_48[0];
          uVar9 = uVar9 - local_48[0];
        }
        else {
          *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar4 * 8);
        }
      }
      else {
        if (uVar9 <= uVar5) {
          uVar5 = uVar9;
        }
        lVar6 = *(long *)(param_1 + 0x50);
        uVar8 = uVar5 + uVar8;
        uVar9 = uVar9 - uVar5;
        if (lVar6 == 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          plVar7 = (long *)(param_1 + 0x10);
        }
        else {
          plVar7 = (long *)(param_1 + 0x50);
        }
        *plVar7 = lVar6 + (ulong)uVar5;
        *puVar3 = *puVar3 - uVar5;
      }
      uVar2 = 1;
    } while (uVar8 < param_2);
  }
  *param_3 = uVar8;
  return uVar2;
}


