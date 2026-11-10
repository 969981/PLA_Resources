/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bd550; name: FUN_004bd550
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_004bd550(uint *param_1,long *param_2,long *param_3,int *param_4,undefined8 *param_5,
            undefined8 *param_6,int param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  uint local_68 [6];
  
  lVar16 = *(long *)(param_1 + 0x7e);
  if (lVar16 == 0) {
    return 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    FUN_004001b0(&DAT_0439ea20,&LAB_004bf920);
    *param_6 = 0;
    local_68[0] = param_1[0x7c];
    if (DAT_0439ea28 != 0) {
      uVar7 = FUN_00407710(DAT_0439ea28,local_68);
      uVar9 = FUN_00407970(DAT_0439ea28,uVar7);
      *param_6 = uVar9;
    }
    if ((param_2 == (long *)0x0) && (param_3 == (long *)0x0)) {
      return 1;
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  iVar10 = *(int *)(lVar16 + 0x24);
  if (0x7ff < iVar10) {
    if (iVar10 < 0x10000) {
      if (iVar10 < 0x2000) {
        if (iVar10 == 0x800) {
          lVar11 = 0xb;
        }
        else {
          if (iVar10 != 0x1000) goto switchD_004bd62c_caseD_3;
          lVar11 = 0xc;
        }
      }
      else if (iVar10 == 0x2000) {
        lVar11 = 0xd;
      }
      else if (iVar10 == 0x4000) {
        lVar11 = 0xe;
      }
      else {
        if (iVar10 != 0x8000) goto switchD_004bd62c_caseD_3;
        lVar11 = 0xf;
      }
    }
    else if (iVar10 < 0x80000) {
      if (iVar10 == 0x10000) {
        lVar11 = 0x10;
      }
      else if (iVar10 == 0x20000) {
        lVar11 = 0x11;
      }
      else {
        if (iVar10 != 0x40000) goto switchD_004bd62c_caseD_3;
        lVar11 = 0x12;
      }
    }
    else if (iVar10 == 0x80000) {
      lVar11 = 0x13;
    }
    else if (iVar10 == 0x100000) {
      lVar11 = 0x14;
    }
    else {
      if (iVar10 != 0x200000) goto switchD_004bd62c_caseD_3;
      lVar11 = 0x15;
    }
    goto switchD_004bd62c_caseD_1;
  }
  if (0x7f < iVar10) {
    if (iVar10 < 0x200) {
      if (iVar10 == 0x80) {
        lVar11 = 7;
      }
      else {
        if (iVar10 != 0x100) goto switchD_004bd62c_caseD_3;
        lVar11 = 8;
      }
    }
    else if (iVar10 == 0x200) {
      lVar11 = 9;
    }
    else {
      if (iVar10 != 0x400) goto switchD_004bd62c_caseD_3;
      lVar11 = 10;
    }
    goto switchD_004bd62c_caseD_1;
  }
  lVar11 = 0;
  switch(iVar10) {
  case 1:
    break;
  case 2:
    lVar11 = 1;
    break;
  default:
switchD_004bd62c_caseD_3:
    *param_2 = 0;
    iVar10 = *(int *)(lVar16 + 0x28);
    lVar11 = DAT_0439ea38;
    lVar1 = DAT_0439ea40;
    lVar2 = DAT_0439ea48;
    lVar3 = DAT_0439ea50;
    lVar4 = DAT_0439ea58;
    lVar13 = DAT_0439ea60;
    lVar5 = DAT_0439ea70;
    lVar6 = DAT_0439ea78;
    goto joined_r0x004bd720;
  case 4:
    lVar11 = 2;
    break;
  case 8:
    lVar11 = 3;
    break;
  case 0x10:
    lVar11 = 4;
    break;
  case 0x20:
    lVar11 = FUN_004bfc80(0);
    *param_2 = lVar11;
    iVar10 = *(int *)(lVar16 + 0x28);
    lVar11 = DAT_0439ea38;
    lVar1 = DAT_0439ea40;
    lVar2 = DAT_0439ea48;
    lVar3 = DAT_0439ea50;
    lVar4 = DAT_0439ea58;
    lVar13 = DAT_0439ea60;
    lVar5 = DAT_0439ea70;
    lVar6 = DAT_0439ea78;
    goto joined_r0x004bd720;
  case 0x40:
    lVar11 = 6;
  }
switchD_004bd62c_caseD_1:
  *param_2 = (&DAT_0439eaf0)[lVar11];
  iVar10 = *(int *)(lVar16 + 0x28);
  lVar11 = DAT_0439ea38;
  lVar1 = DAT_0439ea40;
  lVar2 = DAT_0439ea48;
  lVar3 = DAT_0439ea50;
  lVar4 = DAT_0439ea58;
  lVar13 = DAT_0439ea60;
  lVar5 = DAT_0439ea70;
  lVar6 = DAT_0439ea78;
joined_r0x004bd720:
  DAT_0439ea38 = lVar11;
  DAT_0439ea40 = lVar1;
  DAT_0439ea48 = lVar2;
  DAT_0439ea50 = lVar3;
  DAT_0439ea58 = lVar4;
  DAT_0439ea60 = lVar13;
  DAT_0439ea70 = lVar5;
  DAT_0439ea78 = lVar6;
  if (0x7f < iVar10) {
    if (iVar10 == 0x80) {
      lVar12 = 6;
      puVar14 = &DAT_0439ea40;
      *param_3 = lVar13;
    }
    else {
      if (iVar10 == 0x100) {
        lVar12 = 7;
        goto switchD_004bd7fc_caseD_1;
      }
      if (iVar10 != 0x200) goto switchD_004bd7fc_caseD_3;
      lVar12 = 8;
      puVar14 = &DAT_0439ea50;
      *param_3 = lVar5;
      lVar13 = lVar5;
    }
    goto joined_r0x004bd9f4;
  }
  lVar12 = 0;
  switch(iVar10) {
  case 0:
    lVar12 = 9;
    puVar14 = &DAT_0439ea58;
    *param_3 = lVar6;
    lVar13 = lVar6;
    break;
  case 1:
switchD_004bd7fc_caseD_1:
    puVar14 = (undefined8 *)(&DAT_0439ea10 + lVar12 * 2);
    lVar13 = (&DAT_0439ea30)[lVar12];
    *param_3 = lVar13;
    break;
  case 2:
    lVar12 = 1;
    puVar14 = &DAT_0439ea18;
    *param_3 = lVar11;
    lVar13 = lVar11;
    break;
  default:
switchD_004bd7fc_caseD_3:
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    lVar13 = 0;
    piVar15 = (int *)0x0;
    if (*(int *)(lVar16 + 0x28) != 0x40) {
      piVar15 = param_4;
    }
    if (*param_2 == 0) {
      return 0;
    }
    goto LAB_004bd84c;
  case 4:
    lVar12 = 2;
    puVar14 = (undefined8 *)&DAT_0439ea20;
    *param_3 = lVar1;
    lVar13 = lVar1;
    break;
  case 8:
    lVar12 = 3;
    puVar14 = &DAT_0439ea28;
    *param_3 = lVar2;
    lVar13 = lVar2;
    break;
  case 0x10:
    lVar12 = 4;
    puVar14 = &DAT_0439ea30;
    *param_3 = lVar3;
    lVar13 = lVar3;
    break;
  case 0x20:
    lVar12 = 5;
    puVar14 = &DAT_0439ea38;
    *param_3 = lVar4;
    lVar13 = lVar4;
  }
joined_r0x004bd9f4:
  if (param_4 != (int *)0x0) {
    *param_4 = (&DAT_0417c630)[lVar12];
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = puVar14[0x10];
  }
  piVar15 = param_4;
  if (*param_2 == 0) {
    return 0;
  }
LAB_004bd84c:
  if (((lVar13 == 0) && (uVar8 = FUN_0041c7b0(), (uVar8 >> 0x15 & 1) == 0)) ||
     ((piVar15 != (int *)0x0 && (*piVar15 == 0)))) {
    return 0;
  }
  if (param_7 != 0) {
    return 1;
  }
  if ((int)*param_1 < 0x301) {
    return 1;
  }
  if ((*param_1 & 0xffffff00) != 0x300) {
    return 1;
  }
  iVar10 = *(int *)(lVar16 + 0x24);
  if (iVar10 == 4) {
    if (*(int *)(lVar16 + 0x28) != 1) {
      return 1;
    }
    lVar11 = FUN_00446500("RC4-HMAC-MD5");
    if (lVar11 != 0) goto LAB_004bd974;
    iVar10 = *(int *)(lVar16 + 0x24);
  }
  if (iVar10 == 0x40) {
    iVar10 = *(int *)(lVar16 + 0x28);
    if (iVar10 == 2) {
      lVar11 = FUN_00446500("AES-128-CBC-HMAC-SHA1");
      if (lVar11 != 0) goto LAB_004bd974;
      iVar10 = *(int *)(lVar16 + 0x24);
      goto LAB_004bd900;
    }
LAB_004bd934:
    if (iVar10 != 0x10) {
      return 1;
    }
    lVar11 = FUN_00446500("AES-128-CBC-HMAC-SHA256");
    if (lVar11 != 0) goto LAB_004bd974;
    iVar10 = *(int *)(lVar16 + 0x24);
LAB_004bd950:
    if (iVar10 != 0x80) {
      return 1;
    }
    iVar10 = *(int *)(lVar16 + 0x28);
  }
  else {
LAB_004bd900:
    if (iVar10 != 0x80) {
LAB_004bd928:
      if (iVar10 == 0x40) {
        iVar10 = *(int *)(lVar16 + 0x28);
        goto LAB_004bd934;
      }
      goto LAB_004bd950;
    }
    iVar10 = *(int *)(lVar16 + 0x28);
    if (iVar10 == 2) {
      lVar11 = FUN_00446500("AES-256-CBC-HMAC-SHA1");
      if (lVar11 != 0) goto LAB_004bd974;
      iVar10 = *(int *)(lVar16 + 0x24);
      goto LAB_004bd928;
    }
  }
  if (iVar10 != 0x10) {
    return 1;
  }
  lVar11 = FUN_00446500("AES-256-CBC-HMAC-SHA256");
  if (lVar11 == 0) {
    return 1;
  }
LAB_004bd974:
  *param_2 = lVar11;
  *param_3 = 0;
  return 1;
}


