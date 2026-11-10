/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c2b0; name: FUN_0046c2b0
 */


undefined8 FUN_0046c2b0(int param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x148);
  if (plVar3 != (long *)0x0) {
    if ((plVar3[1] != 0) && (iVar1 = FUN_00407950(), 0 < iVar1)) {
      iVar1 = 0;
      if ((param_3 >> 4 & 1) == 0) {
        do {
          FUN_00407970(plVar3[1],iVar1);
          iVar2 = FUN_00407f40();
          if (iVar2 == param_1) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(plVar3[1]);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          FUN_00407970(plVar3[1],iVar1);
          iVar2 = FUN_00407f40();
          if (iVar2 == param_1) {
            return 2;
          }
          if (iVar2 == 0x38e) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(plVar3[1]);
        } while (iVar1 < iVar2);
      }
    }
    if (*plVar3 != 0) {
      iVar1 = FUN_00407950();
      if (0 < iVar1) {
        if ((param_3 >> 4 & 1) == 0) {
          iVar1 = 0;
          do {
            FUN_00407970(*plVar3,iVar1);
            iVar2 = FUN_00407f40();
            if (iVar2 == param_1) {
              return 1;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_00407950(*plVar3);
          } while (iVar1 < iVar2);
        }
        else {
          iVar1 = 0;
          do {
            FUN_00407970(*plVar3,iVar1);
            iVar2 = FUN_00407f40();
            if (iVar2 == param_1) {
              return 1;
            }
            if (iVar2 == 0x38e) {
              return 1;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_00407950(*plVar3);
          } while (iVar1 < iVar2);
        }
      }
      return 2;
    }
  }
  if ((((param_3 >> 3 & 1) == 0) || (FUN_00456b10(param_2,0xffffffff,0), (param_3 >> 2 & 1) != 0))
     || ((*(byte *)(param_2 + 0xe1) >> 5 & 1) == 0)) {
    return 3;
  }
  return 1;
}


