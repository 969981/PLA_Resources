/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f670; name: FUN_0051f670
 */


void FUN_0051f670(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0051f670(param_1,*param_2);
  FUN_0051f670(param_1,param_2[1]);
  lVar4 = param_2[8];
  if (lVar4 != 0) {
    lVar3 = param_2[9];
    if (lVar3 == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        puVar1 = (undefined8 *)(lVar3 + -0x10);
        lVar2 = lVar3 + -0x18;
        lVar3 = lVar3 + -0x38;
        FUN_0051f7a0(lVar2,*puVar1);
      } while (lVar4 != lVar3);
      lVar3 = param_2[8];
    }
    param_2[9] = lVar4;
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  FUN_0051f718(param_2 + 5,param_2[6]);
  FUN_0051f4ac(param_2 + 4);
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


