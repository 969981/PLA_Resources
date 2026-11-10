/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155fc0; name: FUN_00155fc0
 */


undefined8 FUN_00155fc0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && (iVar1 = FUN_00150310(param_1,0xffffffff), iVar1 == 5)) {
    FUN_00151490(param_1);
    iVar1 = FUN_001532a0(param_1,0xfffffffe);
    if (iVar1 != 0) {
      do {
        iVar1 = FUN_00150310(param_1,0xfffffffe);
        if (iVar1 == 4) {
          iVar1 = FUN_00150750(param_1,param_2,0xffffffff);
          if (iVar1 != 0) {
            FUN_0014ff10(param_1,0xfffffffe);
            return 1;
          }
          iVar1 = FUN_00155fc0(param_1,param_2,param_3 + -1);
          if (iVar1 != 0) {
            FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
            FUN_0014ff10(param_1,0xfffffffe);
            FUN_00151570(param_1,&DAT_0389ff53);
            FUN_0014ff70(param_1,0xfffffffe,1);
            FUN_00153380(param_1,3);
            return 1;
          }
        }
        FUN_0014ff10(param_1,0xfffffffe);
        iVar1 = FUN_001532a0(param_1,0xfffffffe);
      } while (iVar1 != 0);
    }
  }
  return 0;
}


