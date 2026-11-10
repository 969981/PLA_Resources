/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00461090; name: FUN_00461090
 */


int FUN_00461090(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar1 = FUN_00407950(*param_2);
  if (0 < iVar1) {
    iVar3 = 0;
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_00407970(*param_2,iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return 0x31;
        }
        if (puVar4[2] != 0) {
          return 0x31;
        }
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          iVar2 = FUN_00461800(param_1);
          if (iVar2 == 0) {
            iVar3 = 2;
          }
          else if (iVar2 != 0x2f) {
            return iVar2;
          }
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(*param_2);
    } while (iVar1 < iVar2);
    if (iVar3 == 1) {
      return 0x2f;
    }
  }
  iVar1 = FUN_00407950(param_2[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_00407970(param_2[1],iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if ((puVar4[1] != 0) || (puVar4[2] != 0)) {
          return 0x31;
        }
        iVar3 = FUN_00461800(param_1);
        if (iVar3 != 0x2f) {
          if (iVar3 == 0) {
            return 0x30;
          }
          return iVar3;
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = FUN_00407950(param_2[1]);
    } while (iVar1 < iVar3);
  }
  return 0;
}


