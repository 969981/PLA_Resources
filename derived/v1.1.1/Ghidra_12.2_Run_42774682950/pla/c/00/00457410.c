/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00457410; name: FUN_00457410
 */


undefined8 FUN_00457410(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_2 != (long *)0x0) {
    if (((*param_2 != 0) && (*(long *)(param_1 + 0xf0) != 0)) &&
       (iVar1 = thunk_FUN_0040a680(), iVar1 != 0)) {
      return 0x1e;
    }
    if (param_2[2] != 0) {
      uVar3 = FUN_0044e540(param_1);
      iVar1 = FUN_00420090(uVar3,param_2[2]);
      if (iVar1 != 0) {
        return 0x1f;
      }
    }
    lVar5 = param_2[1];
    if ((lVar5 != 0) && (iVar1 = FUN_00407950(lVar5), 0 < iVar1)) {
      iVar1 = 0;
      do {
        piVar4 = (int *)FUN_00407970(lVar5,iVar1);
        if (*piVar4 == 4) {
          lVar5 = *(long *)(piVar4 + 2);
          if (lVar5 == 0) {
            return 0;
          }
          uVar3 = FUN_0044e490(param_1);
          iVar1 = FUN_0044e250(lVar5,uVar3);
          if (iVar1 == 0) {
            return 0;
          }
          return 0x1f;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(lVar5);
      } while (iVar1 < iVar2);
    }
  }
  return 0;
}


