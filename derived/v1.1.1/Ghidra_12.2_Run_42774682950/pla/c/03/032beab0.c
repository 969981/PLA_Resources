/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032beab0; name: FUN_032beab0
 */


void FUN_032beab0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar8 = *(uint *)(param_1 + 3);
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    plVar1 = (long *)param_1[2];
    if ((int)uVar8 < 1) {
      plVar5 = plVar1;
    }
    else {
      plVar5 = plVar1;
      if (*plVar1 != 0) {
        *plVar1 = *plVar1;
        plVar5 = plVar1 + 1;
      }
      if (uVar8 != 1) {
        if (plVar1[1] != 0) {
          *plVar5 = plVar1[1];
          plVar5 = plVar5 + 1;
        }
        if (uVar8 != 2) {
          iVar7 = uVar8 - 2;
          plVar1 = plVar1 + 2;
          plVar4 = plVar5;
          do {
            plVar5 = plVar4;
            if (*plVar1 != 0) {
              plVar5 = plVar4 + 1;
              *plVar4 = *plVar1;
            }
            plVar1 = plVar1 + 1;
            iVar7 = iVar7 + -1;
            plVar4 = plVar5;
          } while (iVar7 != 0);
        }
      }
      plVar1 = plVar5;
      plVar5 = (long *)param_1[2];
    }
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    uVar8 = (uint)((ulong)((long)plVar1 - (long)plVar5) >> 3);
  }
  if (uVar8 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      plVar1 = (long *)*param_1;
      lVar3 = *plVar1;
      puVar9 = (undefined8 *)param_1[2];
    }
    else {
      puVar9 = (undefined8 *)param_1[2];
      if ((int)uVar8 < 6) {
        iVar7 = *(int *)(param_2 + 0xb);
        if (*(int *)((long)param_2 + 0x5c) <= (int)(iVar7 + uVar8)) {
          iVar2 = iVar7;
          if (5 < iVar7) {
            iVar2 = 6;
          }
          iVar7 = iVar7 - iVar2;
          (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[1] + (long)iVar7 * 8);
          *(int *)(param_2 + 0xb) = iVar7;
        }
        if (0 < (int)uVar8) {
          *(undefined8 *)(param_2[1] + (long)iVar7 * 8) = *puVar9;
          iVar7 = *(int *)(param_2 + 0xb);
          if (uVar8 != 1) {
            uVar6 = 1;
            do {
              *(undefined8 *)(param_2[1] + (long)((int)uVar6 + iVar7) * 8) = puVar9[uVar6];
              iVar7 = *(int *)(param_2 + 0xb);
              uVar6 = uVar6 + 1;
            } while (uVar8 != uVar6);
          }
        }
        iVar2 = *(int *)((long)param_2 + 0x5c);
        iVar7 = iVar7 + uVar8;
        *(int *)(param_2 + 0xb) = iVar7;
        if (iVar2 < iVar7) {
          (**(code **)(*(long *)*param_2 + 0x28))
                    ((long *)*param_2,param_2[1] + (long)iVar2 * 8,iVar7 - iVar2);
          *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((long)param_2 + 0x5c);
        }
        goto LAB_032beadc;
      }
      plVar1 = (long *)*param_2;
      lVar3 = *plVar1;
    }
    (**(code **)(lVar3 + 0x28))(plVar1,puVar9,uVar8);
  }
LAB_032beadc:
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


