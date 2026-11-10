/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d1980; name: FUN_004d1980
 */


undefined8 FUN_004d1980(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((((uVar1 >> 3 & 1) != 0) || (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
     (iVar2 == 0x10000)) {
    switch(param_1[0x17]) {
    case 0:
    case 1:
    case 0x15:
      if (param_2 == 1) {
LAB_004d1a14:
        param_1[0x17] = 0x14;
        return 1;
      }
      break;
    case 0x1a:
      if (param_2 == 0x10) {
        if (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0) {
          if (*param_1 != 0x300) goto switchD_004d19cc_caseD_2;
          if ((~param_1[0x156] & 3U) == 0) {
            FUN_004c99a0(param_1,0x28,0x1a2,199,"external/openssl/ssl/statem/statem_srvr.c",0xb9);
            return 0;
          }
        }
LAB_004d1a88:
        param_1[0x17] = 0x1c;
        return 1;
      }
      if ((param_2 == 0xb) && (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0)) goto LAB_004d1bc0;
      break;
    case 0x1b:
      if (param_2 == 0x10) goto LAB_004d1a88;
      break;
    case 0x1c:
      if ((*(long *)(*(long *)(param_1 + 0x142) + 0x1b8) == 0) || (param_1[0x1d] != 0))
      goto switchD_004d1a08_caseD_1d;
      if (param_2 == 0xf) goto LAB_004d1c2c;
      break;
    case 0x1d:
    case 0x24:
switchD_004d1a08_caseD_1d:
      if (param_2 == 0x101) {
        param_1[0x17] = 0x1f;
        return 1;
      }
      goto switchD_004d19cc_caseD_2;
    case 0x1e:
switchD_004d1a08_caseD_1e:
      if (param_2 == 0x14) goto LAB_004d1b88;
      break;
    case 0x1f:
      if (*(int *)(*(long *)(param_1 + 0x2a) + 0x3dc) == 0) goto switchD_004d1a08_caseD_1e;
      if (param_2 == 0x43) {
        param_1[0x17] = 0x1e;
        return 1;
      }
    }
    if ((param_2 == 0x101) && ((uVar1 >> 3 & 1) != 0)) {
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[10] = 3;
      uVar3 = FUN_004c3370();
      FUN_00404040(uVar3,0xf);
      FUN_00404060(uVar3,9);
      return 0;
    }
    goto switchD_004d19cc_caseD_2;
  }
  switch(param_1[0x17]) {
  case 1:
    if (param_1[0x21] == 0xb) goto switchD_004d19cc_caseD_2;
    if (param_2 == 0x18) {
      param_1[0x17] = 0x2c;
      return 1;
    }
    if ((param_2 != 0xb) || (param_1[0x1d2] != 4)) goto switchD_004d19cc_caseD_2;
    goto LAB_004d1bc0;
  default:
    goto switchD_004d19cc_caseD_2;
  case 0x1b:
    if (*(long *)(*(long *)(param_1 + 0x142) + 0x1b8) != 0) {
      if (param_2 == 0xf) {
LAB_004d1c2c:
        param_1[0x17] = 0x1d;
        return 1;
      }
      goto switchD_004d19cc_caseD_2;
    }
    break;
  case 0x1d:
    break;
  case 0x24:
  case 0x31:
    goto switchD_004d19cc_caseD_24;
  case 0x2e:
    if (param_1[0x136] == 1) {
      if (param_2 == 1) goto LAB_004d1a14;
      goto switchD_004d19cc_caseD_2;
    }
    if (param_1[0x1bc] == 2) {
      if (param_2 == 5) {
        param_1[0x17] = 0x31;
        return 1;
      }
      goto switchD_004d19cc_caseD_2;
    }
switchD_004d19cc_caseD_24:
    if (*(int *)(*(long *)(param_1 + 0x2a) + 0x2a0) != 0) {
      if (param_2 == 0xb) {
LAB_004d1bc0:
        param_1[0x17] = 0x1b;
        return 1;
      }
      goto switchD_004d19cc_caseD_2;
    }
  }
  if (param_2 == 0x14) {
LAB_004d1b88:
    param_1[0x17] = 0x20;
    return 1;
  }
switchD_004d19cc_caseD_2:
  FUN_004c99a0(param_1,10,0x1a2,0xf4,"external/openssl/ssl/statem/statem_srvr.c",0x12a);
  return 0;
}


