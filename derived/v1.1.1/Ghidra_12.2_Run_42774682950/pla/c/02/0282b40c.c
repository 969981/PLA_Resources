/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282b40c; name: FUN_0282b40c
 */


void FUN_0282b40c(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < 1) {
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar1 = 0;
    uVar9 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
    uVar9 = 0xffffffff;
    uVar10 = 0;
    uVar1 = 0;
    uVar7 = 0;
    uVar8 = 0xffffffff;
    do {
      if (0 < iVar2) {
        iVar2 = iVar2 * uVar10;
        uVar11 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar2 = 0;
          uVar11 = uVar10;
        }
        plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                         (ulong)(iVar2 + uVar11) * 0x28);
        lVar12 = *plVar3;
        plVar3 = (long *)plVar3[3];
        if (plVar3 == (long *)0x0) {
          if (lVar12 == *param_2) goto LAB_0282b530;
        }
        else {
          (**(code **)(*plVar3 + 0x18))(plVar3);
          lVar4 = *param_2;
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (lVar12 == lVar4) {
LAB_0282b530:
            if (uVar8 == 0xffffffff) {
              uVar8 = 0;
            }
            uVar1 = uVar10;
            if (uVar9 != 0xffffffff) {
              uVar1 = uVar9;
            }
            uVar7 = 0;
            uVar9 = uVar1;
            uVar1 = uVar10;
          }
        }
        iVar2 = *(int *)(param_1 + 0xc);
        if (1 < iVar2) {
          uVar11 = 1;
          do {
            if (*(int *)(param_1 + 0x1c) == 0) {
              iVar2 = iVar2 * uVar10;
              uVar6 = uVar11;
            }
            else {
              iVar2 = *(int *)(param_1 + 0x10) * uVar11;
              uVar6 = uVar10;
            }
            plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                             (ulong)(iVar2 + uVar6) * 0x28);
            lVar12 = *plVar3;
            plVar3 = (long *)plVar3[3];
            if (plVar3 == (long *)0x0) {
              if (lVar12 == *param_2) goto LAB_0282b508;
LAB_0282b4ec:
            }
            else {
              (**(code **)(*plVar3 + 0x18))(plVar3);
              lVar4 = *param_2;
              (**(code **)(*plVar3 + 0x20))(plVar3);
              if (lVar12 != lVar4) goto LAB_0282b4ec;
LAB_0282b508:
              uVar7 = uVar11;
              if (uVar8 != 0xffffffff) {
                uVar7 = uVar8;
              }
              uVar8 = uVar7;
              uVar1 = uVar10;
              if (uVar9 != 0xffffffff) {
                uVar1 = uVar9;
              }
              uVar7 = uVar11;
              uVar9 = uVar1;
              uVar1 = uVar10;
            }
            iVar2 = *(int *)(param_1 + 0xc);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar2);
        }
        iVar5 = *(int *)(param_1 + 0x10);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar5);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = CONCAT44(uVar9,uVar8);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = CONCAT44(uVar1 + ~uVar9,uVar7 + ~uVar8);
  }
  return;
}


