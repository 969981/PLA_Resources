/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a861dc; name: FUN_02a861dc
 */


byte * FUN_02a861dc(long param_1,byte *param_2,byte *param_3,string *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar1 = *param_2;
  uVar5 = (ulong)bVar1;
  switch(bVar1) {
  case 0x30:
    if (param_4 != (string *)0x0) {
      std::string::operator=(param_4,'\0');
      goto LAB_02a86460;
    }
    uVar5 = 0;
    goto LAB_02a8645c;
  default:
    if ((-1 < (char)bVar1) &&
       ((*(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar5 * 2) & 0xc00) != 0))
    goto switchD_02a86218_caseD_5f;
    if (param_4 != (string *)0x0) {
      std::string::operator=(param_4,bVar1);
      goto LAB_02a86460;
    }
    goto LAB_02a8645c;
  case 0x5f:
    goto switchD_02a86218_caseD_5f;
  case 99:
    if ((param_2 + 1 != param_3) && (bVar1 = param_2[1], (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
      if (param_4 == (string *)0x0) {
        FUN_02a86478();
        return param_2 + 2;
      }
      std::string::operator=(param_4,bVar1 & 0x1f);
      return param_2 + 2;
    }
    goto switchD_02a86218_caseD_5f;
  case 0x66:
    if (param_4 != (string *)0x0) {
      std::string::operator=(param_4,'\f');
      goto LAB_02a86460;
    }
    uVar5 = 0xc;
    goto LAB_02a8645c;
  case 0x6e:
    uVar5 = 10;
    cVar4 = '\n';
    break;
  case 0x72:
    uVar5 = 0xd;
    cVar4 = '\r';
    break;
  case 0x74:
    uVar5 = 9;
    cVar4 = '\t';
    break;
  case 0x75:
    if (param_2 + 1 == param_3) goto switchD_02a86218_caseD_5f;
    bVar1 = param_2[1];
    if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
      if (bVar1 == 0x2f) goto switchD_02a86218_caseD_5f;
    }
    else if (5 < (byte)((bVar1 | 0x20) + 0x9f)) goto switchD_02a86218_caseD_5f;
    param_2 = param_2 + 2;
    if (param_2 == param_3) goto switchD_02a86218_caseD_5f;
    bVar1 = *param_2;
    if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
      if (bVar1 == 0x2f) goto switchD_02a86218_caseD_5f;
    }
    else if (5 < (byte)((bVar1 | 0x20) + 0x9f)) goto switchD_02a86218_caseD_5f;
  case 0x78:
    if (param_2 + 1 != param_3) {
      bVar1 = param_2[1];
      if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
        iVar6 = bVar1 - 0x30;
        if (iVar6 == -1) goto switchD_02a86218_caseD_5f;
      }
      else {
        uVar2 = bVar1 | 0x20;
        if (5 < (uVar2 - 0x61 & 0xff)) goto switchD_02a86218_caseD_5f;
        iVar6 = uVar2 - 0x57;
      }
      if (param_2 + 2 != param_3) {
        bVar1 = param_2[2];
        if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
          iVar3 = bVar1 - 0x30;
          if (iVar3 != -1) {
            cVar4 = (char)iVar3 + (char)iVar6 * '\x10';
            goto joined_r0x02a86420;
          }
        }
        else {
          uVar2 = bVar1 | 0x20;
          if ((uVar2 - 0x61 & 0xff) < 6) {
            cVar4 = (char)uVar2 + -0x57 + (char)iVar6 * '\x10';
joined_r0x02a86420:
            if (param_4 == (string *)0x0) {
              FUN_02a86478();
              return param_2 + 3;
            }
            std::string::operator=(param_4,cVar4);
            return param_2 + 3;
          }
        }
      }
    }
switchD_02a86218_caseD_5f:
                    /* WARNING: Subroutine does not return */
    FUN_02a861d0();
  case 0x76:
    uVar5 = 0xb;
    cVar4 = '\v';
  }
  if (param_4 == (string *)0x0) {
LAB_02a8645c:
    FUN_02a86478(param_1,uVar5);
  }
  else {
    std::string::operator=(param_4,cVar4);
  }
LAB_02a86460:
  return param_2 + 1;
}


