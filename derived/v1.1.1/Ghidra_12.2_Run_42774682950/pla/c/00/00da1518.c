/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da1518; name: FUN_00da1518
 */


long FUN_00da1518(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
joined_r0x00da15a8:
    if (param_2 != 0) {
      return 0;
    }
  }
  else {
    switch(*(int *)(param_1 + 0x40)) {
    case 2:
      if (param_2 != 0) {
        lVar1 = 0;
        if (param_2 != 3) {
          return 0;
        }
        goto LAB_00da157c;
      }
      break;
    case 3:
      if (1 < param_2) {
        if (param_2 != 2) {
          return 0;
        }
        lVar1 = 1;
        goto LAB_00da157c;
      }
      break;
    case 4:
      lVar1 = 0;
      if (1 < param_2) {
        return 0;
      }
      goto LAB_00da157c;
    case 5:
      param_2 = param_2 & 0xfffffffd;
      goto joined_r0x00da15a8;
    default:
      return 0;
    }
  }
  lVar1 = 0;
LAB_00da157c:
  return param_1 + lVar1 * 4 + 0x18;
}


