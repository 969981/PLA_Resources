/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b85f5c; name: FUN_00b85f5c
 */


uint FUN_00b85f5c(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (0x137e8707be8470ee < lVar3) {
    uVar2 = 0;
    if (lVar3 == 0x137e8707be8470ef) {
      uVar2 = param_2 ^ param_3 ^ 1;
    }
    uVar1 = param_2 ^ 1 | param_3;
    if (lVar3 != 0x13820b07be878712) {
      uVar1 = uVar2;
    }
    uVar2 = param_3 ^ 1 | param_2;
    if (lVar3 != 0x13890707be8d9ef4) {
      uVar2 = uVar1;
    }
    return uVar2 & 1;
  }
  if (lVar3 == -0x5098eeb379f8a065) {
    return (param_2 ^ 1) & param_3 & 1;
  }
  if (lVar3 == -0x5098ecb379f89cff) {
    return (param_3 ^ 1) & param_2 & 1;
  }
  if (lVar3 == 0x133a8707be4aa423) {
    return (param_2 ^ param_3) & 1;
  }
  return 0;
}


