/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecaa1c; name: FUN_02ecaa1c
 */


undefined8 FUN_02ecaa1c(byte param_1,byte param_2,uint param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (((param_1 & 1) == DAT_0440a7c8) && ((param_2 & 1) == DAT_042aa0f0)) {
    uVar2 = 3;
  }
  else {
    if (DAT_0440a7cc <= param_3) {
      DAT_0440a7cc = param_3;
    }
    bVar1 = DAT_0440a7cc < DAT_042ab25c;
    DAT_0440a7cc = DAT_0440a7cc - DAT_042ab25c;
    if (bVar1 || DAT_0440a7cc == 0) {
      DAT_0440a7cc = 0;
      DAT_042aa0f0 = DAT_0440a7c8 == 0 & (param_1 ^ 0xff) | param_2 & 1;
      DAT_0440a7c8 = param_1 & 1;
      if ((param_1 & 1) != 0) {
        param_2 = param_2 & 1;
        goto LAB_02ecaaf4;
      }
      FUN_02ecab18();
      uVar2 = 1;
    }
    else {
      FUN_02e86864(DAT_0440a128,param_1 & 1,param_2 & 1);
      uVar2 = 1;
      if ((DAT_0440a7c8 != 0) && (DAT_042aa0f0 == 0)) {
        param_2 = 1;
        DAT_042aa0f0 = 1;
        DAT_0440a7c8 = 1;
LAB_02ecaaf4:
        uVar2 = FUN_02ec9278(param_2,0);
        return uVar2;
      }
    }
  }
  return uVar2;
}


