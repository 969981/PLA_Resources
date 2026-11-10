/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cee1c; name: FUN_029cee1c
 */


undefined8 FUN_029cee1c(long param_1,long param_2,int param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  
  cVar1 = *(char *)(param_2 + 0x7d);
  lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0xce0);
  cVar6 = FUN_0296eaa8(*(undefined8 *)(lVar12 + 0x38));
  if (cVar1 != '\x1f') {
    cVar6 = FUN_0296ed7c(*(undefined8 *)(lVar12 + 0x38),cVar1);
  }
  if (cVar6 == '\x01' || cVar6 == '\x06') {
    if (param_3 == 3) {
      return 3;
    }
    bVar2 = false;
  }
  else {
    bVar2 = param_3 == 3;
  }
  if (param_3 == 4) {
    bVar3 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    bVar11 = *(byte *)(param_2 + 0x2dc);
    bVar9 = *(byte *)(param_2 + 0x2dd);
    bVar4 = bVar9 != 0x12;
    bVar5 = bVar9 == 2;
    bVar10 = bVar9;
    if (*(char *)(param_2 + 0x389) < '\0') {
      if (bVar11 != 0x12 && (bVar11 != 2 || !bVar3)) {
        if (!bVar4 || bVar3 && bVar5) goto LAB_029cf0cc;
      }
      else {
        bVar11 = bVar9;
        if (!bVar4 || bVar3 && bVar5) {
          bVar11 = 0x12;
LAB_029cf0cc:
          bVar10 = bVar11;
        }
      }
    }
    else if (bVar11 != 0x12 && (bVar11 != 2 || !bVar3)) {
      if (!bVar4 || bVar3 && bVar5) goto LAB_029cf0cc;
    }
    else {
      bVar11 = 0;
      bVar10 = 0;
      if (bVar4 && (!bVar3 || !bVar5)) {
        bVar11 = bVar9;
        bVar10 = bVar9;
      }
    }
    if ((*(byte *)(param_2 + 0x2de) & 0x1f) == 9) {
      return 2;
    }
    if ((bVar11 & 0x1f) == 9) {
      return 2;
    }
    if ((bVar10 & 0x1f) == 9) {
      return 2;
    }
  }
  else if (param_3 == 5) {
    bVar3 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    bVar11 = *(byte *)(param_2 + 0x2dc);
    bVar9 = *(byte *)(param_2 + 0x2dd);
    bVar4 = bVar9 != 0x12;
    bVar5 = bVar9 == 2;
    bVar10 = bVar9;
    if (*(char *)(param_2 + 0x389) < '\0') {
      if (bVar11 != 0x12 && (bVar11 != 2 || !bVar3)) {
        if (!bVar4 || bVar3 && bVar5) goto LAB_029cef9c;
      }
      else {
        bVar11 = bVar9;
        if (!bVar4 || bVar3 && bVar5) {
          bVar11 = 0x12;
LAB_029cef9c:
          bVar10 = bVar11;
        }
      }
    }
    else if (bVar11 != 0x12 && (bVar11 != 2 || !bVar3)) {
      if (!bVar4 || bVar3 && bVar5) goto LAB_029cef9c;
    }
    else {
      bVar11 = 0;
      bVar10 = 0;
      if (bVar4 && (!bVar3 || !bVar5)) {
        bVar11 = bVar9;
        bVar10 = bVar9;
      }
    }
    if ((bVar11 & 0x1f) == 8) {
      return 2;
    }
    if ((bVar10 & 0x1f) == 8) {
      return 2;
    }
    bVar9 = *(byte *)(param_2 + 0x2de) & 0x1f;
    if (bVar9 == 3) {
      return 2;
    }
    if ((bVar10 & 0x1f) == 3) {
      return 2;
    }
    if ((bVar11 & 0x1f) == 3) {
      return 2;
    }
    if (bVar9 == 8) {
      return 2;
    }
  }
  if (bVar2) {
    bVar4 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    bVar11 = *(byte *)(param_2 + 0x2dc);
    bVar9 = *(byte *)(param_2 + 0x2dd);
    bVar3 = bVar11 == 0x12 || bVar11 == 2 && bVar4;
    bVar2 = bVar9 == 0x12 || bVar4 && bVar9 == 2;
    if (*(char *)(param_2 + 0x389) < '\0') {
LAB_029cf168:
      bVar10 = bVar9;
      if (bVar3) {
        bVar11 = bVar9;
        if (bVar2) {
          bVar11 = 0x12;
LAB_029cf184:
          bVar10 = bVar11;
        }
      }
      else if (bVar2) goto LAB_029cf184;
    }
    else if (bVar11 == 0x12 || bVar11 == 2 && bVar4) {
LAB_029cf03c:
      bVar11 = 0;
      bVar10 = 0;
      if (!bVar2) {
        bVar11 = bVar9;
        bVar10 = bVar9;
      }
    }
    else {
LAB_029cf160:
      bVar10 = bVar9;
      if (bVar2) goto LAB_029cf184;
    }
    if ((*(byte *)(param_2 + 0x2de) & 0x1f) == 0xe) {
      return 2;
    }
    if ((bVar11 & 0x1f) == 0xe) {
      return 2;
    }
    if ((bVar10 & 0x1f) == 0xe) {
      return 2;
    }
  }
  else {
    switch(param_3) {
    case 1:
      bVar2 = (*(byte *)(param_2 + 0x168) & 7) != 0;
      bVar11 = *(byte *)(param_2 + 0x2dc);
      bVar9 = *(byte *)(param_2 + 0x2dd);
      bVar3 = bVar9 != 0x12;
      bVar4 = bVar9 == 2;
      bVar10 = bVar9;
      if (*(char *)(param_2 + 0x389) < '\0') {
        if (bVar11 != 0x12 && (bVar11 != 2 || !bVar2)) {
          if (!bVar3 || bVar2 && bVar4) goto LAB_029cf320;
        }
        else {
          bVar11 = bVar9;
          if (!bVar3 || bVar2 && bVar4) {
            bVar11 = 0x12;
LAB_029cf320:
            bVar10 = bVar11;
          }
        }
      }
      else if (bVar11 != 0x12 && (bVar11 != 2 || !bVar2)) {
        if (!bVar3 || bVar2 && bVar4) goto LAB_029cf320;
      }
      else {
        bVar11 = 0;
        bVar10 = 0;
        if (bVar3 && (!bVar2 || !bVar4)) {
          bVar11 = bVar9;
          bVar10 = bVar9;
        }
      }
      if ((*(byte *)(param_2 + 0x2de) & 0x1f) == 0xc) {
        return 2;
      }
      if ((bVar11 & 0x1f) == 0xc) {
        return 2;
      }
      if ((bVar10 & 0x1f) == 0xc) {
        return 2;
      }
      break;
    case 7:
      bVar4 = (*(byte *)(param_2 + 0x168) & 7) != 0;
      bVar11 = *(byte *)(param_2 + 0x2dc);
      bVar9 = *(byte *)(param_2 + 0x2dd);
      bVar3 = bVar11 == 0x12 || bVar11 == 2 && bVar4;
      bVar2 = bVar9 == 0x12 || bVar4 && bVar9 == 2;
      if (-1 < *(char *)(param_2 + 0x389)) {
        if (bVar11 != 0x12 && (bVar11 != 2 || !bVar4)) goto LAB_029cf160;
        goto LAB_029cf03c;
      }
      goto LAB_029cf168;
    case 0x10:
      if (((((*(byte *)(param_2 + 0x98) & 7) != 0) || ((*(byte *)(param_2 + 0xa0) & 7) != 0)) ||
          ((*(byte *)(param_2 + 0xa8) & 7) != 0)) ||
         ((((*(byte *)(param_2 + 0xb0) & 7) != 0 || ((*(byte *)(param_2 + 0xb8) & 7) != 0)) ||
          (((*(byte *)(param_2 + 0xc0) & 7) != 0 || ((*(byte *)(param_2 + 200) & 7) != 0)))))) {
        return 3;
      }
      break;
    case 0x12:
      sVar7 = FUN_029506a8(param_2,0x10);
      uVar8 = 3;
      switch(sVar7) {
      case 0xa1:
      case 0xb0:
      case 0xc5:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd5:
      case 0xe1:
      case 0xf1:
      case 0xf8:
      case 0x10a:
      case 0x10b:
        goto switchD_029cf258_caseD_a1;
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd4:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf0:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      case 0xff:
      case 0x100:
      case 0x101:
      case 0x102:
      case 0x103:
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x107:
      case 0x108:
      case 0x109:
        break;
      default:
        if (sVar7 == 0x79) {
          return 3;
        }
      }
      break;
    case 0x14:
      bVar2 = (*(byte *)(param_2 + 0x168) & 7) != 0;
      bVar11 = *(byte *)(param_2 + 0x2dc);
      bVar9 = *(byte *)(param_2 + 0x2dd);
      bVar3 = bVar9 != 0x12;
      bVar4 = bVar9 == 2;
      bVar10 = bVar9;
      if (*(char *)(param_2 + 0x389) < '\0') {
        if (bVar11 != 0x12 && (bVar11 != 2 || !bVar2)) {
          if (!bVar3 || bVar2 && bVar4) goto LAB_029cf358;
        }
        else {
          bVar11 = bVar9;
          if (!bVar3 || bVar2 && bVar4) {
            bVar11 = 0x12;
LAB_029cf358:
            bVar10 = bVar11;
          }
        }
      }
      else if (bVar11 != 0x12 && (bVar11 != 2 || !bVar2)) {
        if (!bVar3 || bVar2 && bVar4) goto LAB_029cf358;
      }
      else {
        bVar11 = 0;
        bVar10 = 0;
        if (bVar3 && (!bVar2 || !bVar4)) {
          bVar11 = bVar9;
          bVar10 = bVar9;
        }
      }
      if ((*(byte *)(param_2 + 0x2de) & 0x1f) == 0xb) {
        return 2;
      }
      if ((bVar11 & 0x1f) == 0xb) {
        return 2;
      }
      if ((bVar10 & 0x1f) == 0xb) {
        return 2;
      }
      break;
    case 0x1e:
      lVar12 = (*param_4 & 7) - 1;
      if (((uint)lVar12 < 4) &&
         (((uint)(*param_4 >> (*(ulong *)(&DAT_03888260 + lVar12 * 8) & 0x3f)) & 0xffff) == 0xa5)) {
        return 3;
      }
    }
  }
  uVar8 = 0;
switchD_029cf258_caseD_a1:
  return uVar8;
}


