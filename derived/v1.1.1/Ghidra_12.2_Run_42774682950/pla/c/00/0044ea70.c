/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044ea70; name: FUN_0044ea70
 */


undefined8 FUN_0044ea70(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  iVar1 = FUN_00407f40(*(undefined8 *)(param_1 + 8));
  if ((param_2 != 0) && (iVar2 = FUN_00423a50(param_2), iVar2 == 0x198)) {
    FUN_004238d0(param_2);
    lVar3 = FUN_0042d4f0();
    if (lVar3 != 0) {
      iVar2 = FUN_0042e3e0();
      if (iVar2 == 0x19f) {
        if ((iVar1 != 0x31a) && (iVar1 != -1)) {
          return 0x3b;
        }
        param_3 = param_3 >> 0x10;
      }
      else {
        if (iVar2 != 0x2cb) {
          return 0x3a;
        }
        if ((iVar1 != 0x31b) && (iVar1 != -1)) {
          return 0x3b;
        }
        param_3 = param_3 >> 0x11;
      }
      if ((param_3 & 1) == 0) {
        return 0x3c;
      }
      return 0;
    }
  }
  return 0x39;
}


