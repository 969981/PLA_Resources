/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333f228; name: FUN_0333f228
 */


void FUN_0333f228(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  int local_24;
  
  FUN_032c4f40(param_2);
  local_24 = *param_1;
  if (local_24 < -0x7ffbfd88) {
    switch(local_24) {
    case -0x7ffbfe00:
      lVar2 = 1;
      break;
    case -0x7ffbfdff:
    case -0x7ffbfdfd:
    case -0x7ffbfdfc:
    case -0x7ffbfdfb:
    case -0x7ffbfdfa:
    case -0x7ffbfdf9:
    case -0x7ffbfdf8:
    case -0x7ffbfdf7:
    case -0x7ffbfdf6:
    case -0x7ffbfdf5:
    case -0x7ffbfdf4:
    case -0x7ffbfdf3:
    case -0x7ffbfdf1:
    case -0x7ffbfdf0:
    case -0x7ffbfdef:
    case -0x7ffbfdee:
    case -0x7ffbfdec:
    case -0x7ffbfdeb:
    case -0x7ffbfdea:
    case -0x7ffbfde9:
    case -0x7ffbfde8:
    case -0x7ffbfde7:
    case -0x7ffbfde6:
    case -0x7ffbfde5:
    case -0x7ffbfde4:
    case -0x7ffbfde3:
    case -0x7ffbfde2:
    case -0x7ffbfde1:
    case -0x7ffbfde0:
    case -0x7ffbfddf:
    case -0x7ffbfdde:
    case -0x7ffbfddd:
    case -0x7ffbfddc:
    case -0x7ffbfddb:
    case -0x7ffbfdd9:
    case -0x7ffbfdd8:
    case -0x7ffbfdd7:
    case -0x7ffbfdd6:
    case -0x7ffbfdd5:
    case -0x7ffbfdd4:
    case -0x7ffbfdd3:
    case -0x7ffbfdd2:
    case -0x7ffbfdd1:
    case -0x7ffbfdd0:
    case -0x7ffbfdcf:
switchD_0333f284_caseD_80040201:
      pcVar1 = "HK_SUCCESS_{:X8}";
      if (local_24 < 0) {
        pcVar1 = "HK_E_{:X8}";
      }
      FUN_032c6910(param_2,pcVar1,PTR_DAT_04389020,&local_24);
      return;
    case -0x7ffbfdfe:
      lVar2 = 2;
      break;
    case -0x7ffbfdf2:
      lVar2 = 3;
      break;
    case -0x7ffbfded:
      lVar2 = 4;
      break;
    case -0x7ffbfdda:
      lVar2 = 5;
      break;
    case -0x7ffbfdce:
      lVar2 = 6;
      break;
    default:
      if (local_24 == -0x7ffbfec4) {
        lVar2 = 0xc;
      }
      else {
        if (local_24 != -0x7ffbfda9) goto switchD_0333f284_caseD_80040201;
        lVar2 = 7;
      }
    }
  }
  else if (local_24 < -0x7ffbbfff) {
    if (local_24 == -0x7ffbfd88) {
      lVar2 = 8;
    }
    else if (local_24 == -0x7ffbfd49) {
      lVar2 = 9;
    }
    else {
      if (local_24 != -0x7ffbfb70) goto switchD_0333f284_caseD_80040201;
      lVar2 = 10;
    }
  }
  else if (local_24 < -0x7ffb0001) {
    if (local_24 == -0x7ffbbfff) {
      lVar2 = 0xe;
    }
    else {
      if (local_24 != -0x7ffb7ffb) goto switchD_0333f284_caseD_80040201;
      lVar2 = 0xd;
    }
  }
  else if (local_24 == -0x7ffb0001) {
    lVar2 = 0xb;
  }
  else {
    if (local_24 != 0) goto switchD_0333f284_caseD_80040201;
    lVar2 = 0;
  }
  FUN_032c5d4c(param_2,(&PTR_s_HK_SUCCESS_04351148)[lVar2 * 3],0xffffffff);
  return;
}


