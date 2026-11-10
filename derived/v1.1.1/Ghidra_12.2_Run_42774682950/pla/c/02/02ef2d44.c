/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2d44; name: FUN_02ef2d44
 */


void FUN_02ef2d44(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 2) {
    FUN_02ef2bf8(param_1,param_2);
  }
  if ((DAT_0440a410 != 0) || (FUN_02e43d1c(), DAT_0440a410 != 0)) {
    lVar1 = DAT_0440a410;
    if (param_3 == 0) {
      FUN_02ea7600(DAT_0440a410,param_2);
    }
    else if (param_3 == 1) {
      FUN_02ea7648(DAT_0440a410,param_2);
    }
    else if (param_3 == 2) {
      FUN_02ea76a0(DAT_0440a410,param_2);
    }
    FUN_02f14074(0);
    lVar3 = *(long *)(PTR_DAT_04388730 + 0x10);
    if (lVar3 != 0) {
      do {
        if (((*(uint *)(*(long *)(lVar3 + 8) + 0x40) < 2) ||
            (lVar2 = *(long *)(*(long *)(*(long *)(lVar3 + 8) + 0x38) + 8), lVar2 == 0)) ||
           (*(char *)(lVar2 + 0xb8) == '\0')) {
          *(byte *)(lVar3 + 0x54) = *(byte *)(lVar3 + 0x54) | 1;
          FUN_02ef2c4c(lVar3 + 0x20,lVar1 + 0xa0);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
      } while (lVar3 != 0);
    }
  }
  return;
}


