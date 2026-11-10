/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5ee80; name: FUN_00d5ee80
 */


undefined8 FUN_00d5ee80(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != param_3) && (0 < param_4)) {
    iVar3 = param_4;
    iVar1 = param_2;
    do {
      if (iVar1 == param_3) {
        return 2;
      }
      if (param_2 == param_3) {
        return 1;
      }
      iVar2 = 0;
      if (iVar1 + 1 < param_4) {
        iVar2 = iVar1 + 1;
      }
      iVar1 = param_4;
      if (0 < param_2) {
        iVar1 = param_2;
      }
      param_2 = iVar1 + -1;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2;
    } while (iVar3 != 0);
  }
  return 0;
}


