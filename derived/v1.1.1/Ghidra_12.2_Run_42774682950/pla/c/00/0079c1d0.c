/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079c1d0; name: FUN_0079c1d0
 */


bool FUN_0079c1d0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  piVar3 = (int *)*param_1;
  if ((piVar3 == (int *)0x0) || (lVar5 = param_1[1], lVar5 == 0)) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x20e);
                    /* try { // try from 0079c20c to 0079c21f has its CatchHandler @ 0079c364 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: node_ != nullptr && m_ != nullptr: ");
                    /* try { // try from 0079c220 to 0079c227 has its CatchHandler @ 0079c360 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    piVar3 = (int *)*param_1;
    lVar5 = param_1[1];
  }
  uVar9 = *(long *)(lVar5 + 8) - 1;
  uVar11 = param_1[2] & uVar9;
  param_1[2] = uVar11;
  lVar7 = *(long *)(lVar5 + 0x20);
  piVar4 = *(int **)(lVar7 + uVar11 * 8);
  if (piVar4 == piVar3) {
    return true;
  }
  if ((piVar4 != (int *)0x0) && (piVar4 != *(int **)(lVar7 + (uVar11 ^ 1) * 8))) {
    while (piVar4 = *(int **)(piVar4 + 4), piVar4 != (int *)0x0) {
      if (piVar4 == piVar3) {
        return true;
      }
    }
  }
  iVar1 = *piVar3;
  uVar9 = *(long *)(lVar5 + 0x10) + (long)iVar1 & uVar9;
  piVar3 = *(int **)(lVar7 + uVar9 * 8);
  if (piVar3 != (int *)0x0) {
    if (piVar3 == *(int **)(lVar7 + (uVar9 ^ 1) * 8)) {
      uVar9 = uVar9 & 0xfffffffffffffffe;
      plVar8 = (long *)(*(long *)(lVar7 + uVar9 * 8) + 8);
      plVar10 = (long *)*plVar8;
      if (plVar10 != (long *)0x0) {
        plVar6 = plVar8;
        do {
          if (iVar1 <= *(int *)plVar10[4]) {
            plVar6 = plVar10;
          }
          plVar10 = (long *)plVar10[*(int *)plVar10[4] < iVar1];
        } while (plVar10 != (long *)0x0);
        if ((plVar6 != plVar8) && (*(int *)plVar6[4] <= iVar1)) {
          if (param_2 != (long *)0x0) {
            *param_2 = (long)plVar6;
          }
          goto LAB_0079c30c;
        }
      }
    }
    else {
      do {
        if (*piVar3 == iVar1) goto LAB_0079c30c;
        piVar3 = *(int **)(piVar3 + 4);
      } while (piVar3 != (int *)0x0);
    }
  }
  uVar9 = 0;
LAB_0079c30c:
  param_1[2] = uVar9;
  lVar5 = *(long *)(*(long *)(param_1[1] + 0x20) + uVar9 * 8);
  if (lVar5 == 0) {
    return true;
  }
  return lVar5 != *(long *)(*(long *)(param_1[1] + 0x20) + (uVar9 ^ 1) * 8);
}


