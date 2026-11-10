/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bde3b8; name: FUN_01bde3b8
 */


void FUN_01bde3b8(undefined8 param_1,uint param_2,int param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_3 < 0) {
    return;
  }
  if ((param_2 < 2) && (uVar1 = FUN_01a5a0d4(param_1), (uVar1 & 1) == 0)) {
    return;
  }
  if (param_2 == 5) {
    local_38 = 0x7400dcdd176778b6;
    uVar2 = *(undefined4 *)(&DAT_03a7cbd0 + (long)param_3 * 4);
    if (0x13 < param_3) {
      return;
    }
  }
  else {
    switch(param_2) {
    case 0:
      local_38 = 0x93d39e66038b8be0;
      uVar2 = *(undefined4 *)(&DAT_03a7cb40 + (long)param_3 * 4);
      if (9 < param_3) {
        return;
      }
      break;
    case 1:
      local_38 = 0x92f57e69f162f3ec;
      uVar2 = *(undefined4 *)(&DAT_03a7cb68 + (long)param_3 * 4);
      if (0x11 < param_3) {
        return;
      }
      break;
    case 2:
      local_38 = 0xd5921e6394bb2fa1;
      uVar2 = *(undefined4 *)(&DAT_03a7cbb0 + (long)param_3 * 4);
      if (2 < param_3) {
        return;
      }
      break;
    case 3:
      uVar2 = *(undefined4 *)(&DAT_0388a600 + (long)param_3 * 4);
      local_38 = 0xa99e3fac11764a7;
      FUN_01a51334(param_1,&DAT_03a7cc38,1);
      if (1 < param_3) {
        return;
      }
      break;
    case 4:
      local_38 = 0x7400dcdd176778b6;
      uVar2 = *(undefined4 *)(&DAT_03a7cbbc + (long)param_3 * 4);
      if (4 < param_3) {
        return;
      }
      break;
    default:
      goto switchD_01bde474_default;
    }
  }
  FUN_01a51334(param_1,&local_38,uVar2);
  if (param_2 == 0) {
    FUN_01a4f4d4(param_1,&DAT_03a7cc48,1);
  }
  else if (param_2 == 2) {
    FUN_01a51334(param_1,&DAT_03a7cc40,2);
  }
  else if (param_2 == 1) {
    FUN_01a5bd74(param_1,&DAT_03a7cc50,1);
  }
switchD_01bde474_default:
  return;
}


