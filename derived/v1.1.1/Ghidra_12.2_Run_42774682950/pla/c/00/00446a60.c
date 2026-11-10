/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446a60; name: FUN_00446a60
 */


undefined8 FUN_00446a60(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((param_3 != -1) && (param_1[1] == 0)) {
      lVar1 = FUN_0041cfc0();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    FUN_00409be0(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        FUN_0041cfd0(param_1[1]);
        param_1[1] = 0;
      }
      else {
        FUN_0041ec80(param_1[1],param_3,param_4);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


