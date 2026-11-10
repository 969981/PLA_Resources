/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b7a4; name: FUN_02e9b7a4
 */


undefined8 FUN_02e9b7a4(long param_1,long param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int local_54;
  
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    plVar1 = (long *)(param_1 + 0x50);
    plVar2 = (long *)(param_1 + 0x10);
    uVar13 = param_3;
    do {
      uVar11 = (uint)uVar12;
      uVar9 = *(uint *)(param_1 + 0x20);
      uVar5 = (ulong)uVar9;
      uVar7 = *(uint *)(param_1 + uVar5 * 4 + 0x18);
      if (uVar7 == 0) {
        if (*(long **)(param_1 + 0x40) == (long *)0x0) break;
        uVar10 = (ulong)(uVar9 == 0);
        if (*(int *)(param_1 + uVar10 * 4 + 0x18) != 0) {
          iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
          if (iVar3 != 4) {
            uVar9 = (uint)(uVar9 == 0);
            *(uint *)(param_1 + 0x20) = uVar9;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar10 * 8);
            uVar5 = (ulong)uVar9;
            goto LAB_02e9b8c4;
          }
LAB_02e9b9bc:
          uVar4 = 0x38;
          goto LAB_02e9b864;
        }
LAB_02e9b8c4:
        local_54 = 0;
        if (uVar13 < *(uint *)(param_1 + 0x24)) {
          uVar9 = *(uint *)(param_1 + 0x30);
          uVar5 = (ulong)((int)uVar5 == 0);
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = *(uint *)(param_1 + 0x24) / uVar9;
          }
          uVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                            ((float)(uVar7 * uVar9) / *(float *)(param_1 + 0x48),
                             *(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + uVar5 * 8),
                             uVar7 * uVar9,0,*(undefined1 *)(param_1 + 0x4c),&local_54);
          if ((int)uVar4 != 1) goto LAB_02e9b864;
          if (local_54 != 0) {
            *(int *)(param_1 + uVar5 * 4 + 0x18) = local_54;
            goto LAB_02e9b850;
          }
        }
        else if (*(int *)(param_1 + uVar5 * 4 + 0x18) == 0) {
          uVar9 = *(uint *)(param_1 + 0x30);
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar13 / uVar9;
          }
          iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                            ((float)(uVar7 * uVar9) / *(float *)(param_1 + 0x48),
                             *(long **)(param_1 + 0x40),param_2 + uVar12,uVar7 * uVar9,1,
                             *(undefined1 *)(param_1 + 0x4c),&local_54);
          if ((iVar3 != 1) ||
             (iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), iVar3 != 1))
          goto LAB_02e9b9bc;
          uVar12 = (ulong)(local_54 + uVar11);
          uVar13 = uVar13 - local_54;
          if (local_54 != 0) goto LAB_02e9b850;
        }
        uVar11 = (uint)uVar12;
        if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18) == 0) break;
      }
      else {
        __src = (void *)*plVar1;
        if (__src == (void *)0x0) {
          __src = (void *)*plVar2;
        }
        if (uVar13 <= uVar7) {
          uVar7 = uVar13;
        }
        memcpy((void *)(param_2 + uVar12),__src,(ulong)uVar7);
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          lVar6 = *plVar2;
          plVar8 = plVar2;
        }
        else {
          plVar8 = plVar1;
        }
        *plVar8 = lVar6 + (ulong)uVar7;
        lVar6 = param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4;
        uVar12 = (ulong)(uVar7 + uVar11);
        uVar13 = uVar13 - uVar7;
        *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) - uVar7;
      }
LAB_02e9b850:
      uVar11 = (uint)uVar12;
    } while (uVar11 < param_3);
  }
  uVar4 = 1;
LAB_02e9b864:
  *param_4 = uVar11;
  return uVar4;
}


