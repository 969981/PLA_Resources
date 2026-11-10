/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029380a0; name: FUN_029380a0
 */


uint * FUN_029380a0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((*(int *)(param_3 + 4) == 0) && (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0))
     && (*piVar4 != 0)) {
    uVar3 = (uint)*(byte *)(param_3 + 0x18);
    if (*(byte *)(param_3 + 0x18) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 8);
    }
    iVar6 = 0;
    iVar5 = *piVar4 + -1;
    do {
      while( true ) {
        iVar2 = iVar5 - iVar6;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar6 + (iVar2 >> 1);
        uVar1 = piVar4[(long)iVar2 * 5 + 1];
        if (param_2 < uVar1) break;
        if (param_2 <= uVar1) {
          if (uVar3 < (uint)piVar4[(long)iVar2 * 5 + 5]) break;
          if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
            return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
          }
        }
        iVar6 = iVar2 + 1;
        if (iVar5 < iVar6) {
          return (uint *)0x0;
        }
      }
      iVar5 = iVar2 + -1;
    } while (iVar6 <= iVar5);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x20);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      uVar3 = (uint)*(byte *)(param_3 + 0x18);
      if (*(byte *)(param_3 + 0x18) != 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 8);
      }
      iVar6 = 0;
      iVar5 = *piVar4 + -1;
      do {
        while( true ) {
          while( true ) {
            iVar2 = iVar5 - iVar6;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar6 + (iVar2 >> 1);
            uVar1 = piVar4[(long)iVar2 * 5 + 1];
            if (uVar1 <= param_2) break;
            iVar5 = iVar2 + -1;
            if (iVar5 < iVar6) {
              return (uint *)0x0;
            }
          }
          if (param_2 <= uVar1) break;
LAB_02938134:
          iVar6 = iVar2 + 1;
          if (iVar5 < iVar6) {
            return (uint *)0x0;
          }
        }
        if ((uint)piVar4[(long)iVar2 * 5 + 5] <= uVar3) {
          if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
            return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
          }
          goto LAB_02938134;
        }
        iVar5 = iVar2 + -1;
      } while (iVar6 <= iVar5);
    }
  }
  return (uint *)0x0;
}


