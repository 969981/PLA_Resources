/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd43c0; name: FUN_00cd43c0
 */


undefined4 FUN_00cd43c0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < -0x4175ea0788f3776) {
    if (lVar2 == -0x71e34ce7f06f86d1) {
      return 1;
    }
    if (lVar2 == -0x8750f665ab92ce0) {
      return 4;
    }
    if (lVar2 == -0x4aec9c9d27a4999f) {
      return 7;
    }
  }
  else {
    if (lVar2 < 0x39103154c3edb55a) {
      uVar1 = 2;
      if (lVar2 != -0x4175ea0788f3776) {
        uVar1 = 0;
      }
      return uVar1;
    }
    if (lVar2 == 0x5f42dedf281e4df1) {
      return 5;
    }
    if (lVar2 == 0x39103154c3edb55a) {
      return 6;
    }
    if (lVar2 == 0x6923c0a854b72fbb) {
      return 3;
    }
  }
  return 0;
}


