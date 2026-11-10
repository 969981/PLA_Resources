/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b889d4; name: FUN_00b889d4
 */


bool FUN_00b889d4(long *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  lVar2 = *param_1;
  if (lVar2 < 0x137e8707be8470ef) {
    if (lVar2 == -0x5098eeb379f8a065) {
      return param_2 < param_3;
    }
    if (lVar2 == -0x5098ecb379f89cff) {
      return param_3 < param_2;
    }
    if (lVar2 == 0x133a8707be4aa423) {
      return param_2 != param_3;
    }
  }
  else {
    if (lVar2 == 0x13890707be8d9ef4) {
      return param_3 <= param_2;
    }
    if (lVar2 == 0x13820b07be878712) {
      bVar1 = param_2 <= param_3;
    }
    else if (lVar2 == 0x137e8707be8470ef) {
      return param_2 == param_3;
    }
  }
  return bVar1;
}


