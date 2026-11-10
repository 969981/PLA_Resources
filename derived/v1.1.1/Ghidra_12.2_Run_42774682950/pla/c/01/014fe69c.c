/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fe69c; name: FUN_014fe69c
 */


int FUN_014fe69c(long param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (3 < param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x640) == 0) {
LAB_014fe6ec:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x644) == 0) goto LAB_014fe71c;
LAB_014fe6f8:
    piVar2 = (int *)(param_1 + 0x644);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
    if ((iVar1 != 0) &&
       ((*piVar2 == iVar1 ||
        ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1), iVar1 != 0 &&
         ((*piVar2 == iVar1 ||
          ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2), iVar1 != 0
           && ((*piVar2 == iVar1 ||
               ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3),
                iVar1 != 0 && (*piVar2 == iVar1)))))))))))))) goto LAB_014fe71c;
    if (uVar3 == param_2) goto LAB_014fe998;
    uVar3 = uVar3 + 1;
    if (*(int *)(param_1 + 0x648) != 0) goto LAB_014fe724;
LAB_014fe748:
    iVar1 = *(int *)(param_1 + 0x64c);
  }
  else {
    piVar2 = (int *)(param_1 + 0x640);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
    if ((iVar1 != 0) &&
       ((*piVar2 == iVar1 ||
        ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1), iVar1 != 0 &&
         ((*piVar2 == iVar1 ||
          ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2), iVar1 != 0
           && ((*piVar2 == iVar1 ||
               ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3),
                iVar1 != 0 && (*piVar2 == iVar1)))))))))))))) goto LAB_014fe6ec;
    if (param_2 == 0) goto LAB_014fe998;
    uVar3 = 1;
    if (*(int *)(param_1 + 0x644) != 0) goto LAB_014fe6f8;
LAB_014fe71c:
    if (*(int *)(param_1 + 0x648) == 0) goto LAB_014fe748;
LAB_014fe724:
    piVar2 = (int *)(param_1 + 0x648);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
    if ((iVar1 != 0) &&
       ((*piVar2 == iVar1 ||
        ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1), iVar1 != 0 &&
         ((*piVar2 == iVar1 ||
          ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2), iVar1 != 0
           && ((*piVar2 == iVar1 ||
               ((iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3),
                iVar1 != 0 && (*piVar2 == iVar1)))))))))))))) goto LAB_014fe748;
    if (uVar3 == param_2) goto LAB_014fe998;
    uVar3 = uVar3 + 1;
    iVar1 = *(int *)(param_1 + 0x64c);
  }
  if (iVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x64c);
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
    if (iVar1 != 0) {
      if (*piVar2 == iVar1) {
        return 0;
      }
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
      if (iVar1 != 0) {
        if (*piVar2 == iVar1) {
          return 0;
        }
        iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
        if (iVar1 != 0) {
          if (*piVar2 == iVar1) {
            return 0;
          }
          iVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
          if (iVar1 != 0) {
            if (uVar3 != param_2) {
              return 0;
            }
            if (*piVar2 == iVar1) {
              return 0;
            }
            goto LAB_014fe998;
          }
        }
      }
    }
    if (uVar3 == param_2) {
LAB_014fe998:
      return *piVar2;
    }
  }
  return 0;
}


