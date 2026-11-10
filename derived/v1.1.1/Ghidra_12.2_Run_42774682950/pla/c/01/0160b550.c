/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0160b550; name: FUN_0160b550
 */


bool FUN_0160b550(long *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == -0x489c341774907bb1) {
    return *param_2 == *param_3;
  }
  bVar1 = false;
  if (lVar2 < -0x1a1cb288238a1d11) {
    if (lVar2 == -0x773661660e0393ab) {
      return *param_2 != *param_3;
    }
  }
  else if (lVar2 == -0x1a1cb288238a1d11) {
    bVar1 = *param_3 <= *param_2 && *param_2 <= *param_4;
  }
  else {
    if (lVar2 == 0x34f605c97c571896) {
      return *param_3 <= *param_2;
    }
    if (lVar2 == 0x488b1f9fbc949365) {
      return *param_2 <= *param_3;
    }
  }
  return bVar1;
}


