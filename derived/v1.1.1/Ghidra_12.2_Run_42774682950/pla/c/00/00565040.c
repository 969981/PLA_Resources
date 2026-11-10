/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00565040; name: FUN_00565040
 */


undefined8 FUN_00565040(long *param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  ostream *poVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  int local_178;
  uint local_174;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  if ((param_1[1] == 0) || (pcVar9 = (char *)*param_1, *pcVar9 != '\\')) {
    uVar5 = 1;
    goto LAB_00565098;
  }
  uVar7 = param_1[1] - 1;
  if (uVar7 == 0) {
    uVar5 = 7;
    goto LAB_00565098;
  }
  *param_1 = (long)(pcVar9 + 1);
  param_1[1] = uVar7;
  uVar5 = (undefined4)uVar7;
  if (3 < uVar7) {
    uVar5 = 4;
  }
  iVar2 = FUN_00550ad0(pcVar9 + 1,uVar5);
  if (((iVar2 == 0) || (iVar2 = FUN_00550920(&local_174,*param_1), 0x10ffff < (int)local_174)) ||
     ((iVar2 == 1 && (local_174 == 0xfffd)))) {
LAB_0056511c:
    uVar5 = 0xc;
LAB_00565098:
    *param_3 = uVar5;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    return 0;
  }
  pbVar8 = (byte *)(*param_1 + (long)iVar2);
  uVar7 = param_1[1] - (long)iVar2;
  *param_1 = (long)pbVar8;
  param_1[1] = uVar7;
  if (iVar2 < 0) {
    return 0;
  }
  uVar10 = local_174 - 0x30;
  pbVar1 = pbVar8;
  switch(uVar10) {
  case 0:
    uVar10 = 0;
    if (uVar7 != 0) goto LAB_005652ac;
    goto joined_r0x00565348;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    if ((uVar7 == 0) || ((*pbVar8 & 0xf8) != 0x30)) goto LAB_0056534c;
LAB_005652ac:
    if ((*pbVar8 & 0xf8) == 0x30) {
      pbVar1 = pbVar8 + 1;
      uVar10 = ((uint)*pbVar8 + uVar10 * 8) - 0x30;
      *param_1 = (long)pbVar1;
      param_1[1] = uVar7 - 1;
      if ((uVar7 - 1 != 0) && ((*pbVar1 & 0xf8) == 0x30)) {
        uVar10 = ((uint)*pbVar1 + uVar10 * 8) - 0x30;
        *param_1 = (long)(pbVar8 + 2);
        param_1[1] = uVar7 - 2;
        pbVar1 = pbVar8 + 2;
      }
    }
joined_r0x00565348:
    pbVar8 = pbVar1;
    if ((int)uVar10 <= param_4) {
      *param_2 = uVar10;
      return 1;
    }
LAB_0056534c:
    *param_3 = 2;
    *(char **)(param_3 + 2) = pcVar9;
    *(long *)(param_3 + 4) = (long)pbVar8 - (long)pcVar9;
    return 0;
  default:
    if ((((int)local_174 < 0x80) && (iVar2 = isalpha(local_174), 9 < uVar10)) && (iVar2 == 0)) {
      *param_2 = local_174;
      return 1;
    }
    goto LAB_0056534c;
  case 0x31:
    uVar6 = 7;
    break;
  case 0x36:
    uVar6 = 0xc;
    break;
  case 0x3e:
    uVar6 = 10;
    break;
  case 0x42:
    uVar6 = 0xd;
    break;
  case 0x44:
    uVar6 = 9;
    break;
  case 0x46:
    uVar6 = 0xb;
    break;
  case 0x48:
    if (uVar7 == 0) goto LAB_0056534c;
    uVar5 = (undefined4)uVar7;
    if (3 < uVar7) {
      uVar5 = 4;
    }
    iVar2 = FUN_00550ad0(pbVar8,uVar5);
    if (((iVar2 != 0) && (iVar2 = FUN_00550920(&local_174,*param_1), (int)local_174 < 0x110000)) &&
       ((iVar2 != 1 || (local_174 != 0xfffd)))) {
      pbVar8 = (byte *)(*param_1 + (long)iVar2);
      uVar7 = param_1[1] - (long)iVar2;
      *param_1 = (long)pbVar8;
      param_1[1] = uVar7;
      if (iVar2 < 0) {
        return 0;
      }
      uVar5 = (undefined4)uVar7;
      if (local_174 == 0x7b) {
        if (3 < uVar7) {
          uVar5 = 4;
        }
        iVar2 = FUN_00550ad0(pbVar8,uVar5);
        if (((iVar2 != 0) && (iVar2 = FUN_00550920(&local_174,*param_1), (int)local_174 < 0x110000))
           && ((iVar2 != 1 || (local_174 != 0xfffd)))) {
          pbVar8 = (byte *)(*param_1 + (long)iVar2);
          uVar7 = param_1[1] - (long)iVar2;
          *param_1 = (long)pbVar8;
          param_1[1] = uVar7;
          if (iVar2 < 0) {
            return 0;
          }
          iVar2 = 0;
          uVar10 = 0;
          do {
            uVar6 = local_174 - 0x30;
            if (((5 < local_174 - 0x61) && (9 < uVar6)) && (5 < local_174 - 0x41)) {
              if ((iVar2 != 0) && (local_174 == 0x7d)) {
                *param_2 = uVar10;
                return 1;
              }
              goto LAB_0056534c;
            }
            if (uVar6 < 10) {
LAB_0056542c:
              uVar10 = uVar6 + uVar10 * 0x10;
            }
            else {
              if (5 < local_174 - 0x41) {
                if (local_174 - 0x61 < 6) {
                  uVar6 = local_174 - 0x57;
                  goto LAB_0056542c;
                }
                FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 005655a0 to 005655b7 has its CatchHandler @ 00565640 */
                poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                   (aoStack_168,"Bad hex digit ",0xe);
                std::ostream::operator<<(poVar4,local_174);
                goto LAB_005655b8;
              }
              uVar10 = (local_174 - 0x37) + uVar10 * 0x10;
            }
            if ((param_4 < (int)uVar10) || (uVar7 == 0)) goto LAB_0056534c;
            uVar5 = (undefined4)uVar7;
            if (3 < uVar7) {
              uVar5 = 4;
            }
            iVar3 = FUN_00550ad0(pbVar8,uVar5);
            if (((iVar3 == 0) ||
                (iVar3 = FUN_00550920(&local_174,*param_1), 0x10ffff < (int)local_174)) ||
               ((iVar3 == 1 && (local_174 == 0xfffd)))) break;
            iVar2 = iVar2 + -1;
            pbVar8 = (byte *)(*param_1 + (long)iVar3);
            uVar7 = param_1[1] - (long)iVar3;
            *param_1 = (long)pbVar8;
            param_1[1] = uVar7;
            if (iVar3 < 0) {
              return 0;
            }
          } while( true );
        }
      }
      else {
        if (uVar7 == 0) goto LAB_0056534c;
        if (3 < uVar7) {
          uVar5 = 4;
        }
        iVar2 = FUN_00550ad0(pbVar8,uVar5);
        if (((iVar2 != 0) && (iVar2 = FUN_00550920(&local_178,*param_1), local_178 < 0x110000)) &&
           ((iVar2 != 1 || (local_178 != 0xfffd)))) {
          pbVar8 = (byte *)(*param_1 + (long)iVar2);
          *param_1 = (long)pbVar8;
          param_1[1] = param_1[1] - (long)iVar2;
          if (iVar2 < 0) {
            return 0;
          }
          uVar10 = local_174 - 0x30;
          if (((5 < local_174 - 0x61) && (9 < uVar10)) && (5 < local_174 - 0x41)) goto LAB_0056534c;
          uVar6 = local_178 - 0x30;
          if (((5 < local_178 - 0x61U) && (9 < uVar6)) && (5 < local_178 - 0x41U))
          goto LAB_0056534c;
          if (9 < uVar10) {
            if (local_174 - 0x41 < 6) {
              uVar10 = local_174 - 0x37;
            }
            else {
              if (5 < local_174 - 0x61) {
                FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 005655dc to 005655f3 has its CatchHandler @ 00565638 */
                poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                   (aoStack_168,"Bad hex digit ",0xe);
                std::ostream::operator<<(poVar4,local_174);
                goto LAB_005655b8;
              }
              uVar10 = local_174 - 0x57;
            }
          }
          if (9 < uVar6) {
            if (local_178 - 0x41U < 6) {
              uVar6 = local_178 - 0x37;
            }
            else {
              if (5 < local_178 - 0x61U) {
                FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x5a2);
                    /* try { // try from 00565614 to 0056562b has its CatchHandler @ 00565630 */
                poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                   (aoStack_168,"Bad hex digit ",0xe);
                std::ostream::operator<<(poVar4,local_178);
LAB_005655b8:
                    /* WARNING: Subroutine does not return */
                FUN_005503fc(auStack_170);
              }
              uVar6 = local_178 - 0x57;
            }
          }
          uVar6 = uVar6 + uVar10 * 0x10;
          break;
        }
      }
    }
    goto LAB_0056511c;
  }
  *param_2 = uVar6;
  return 1;
}


