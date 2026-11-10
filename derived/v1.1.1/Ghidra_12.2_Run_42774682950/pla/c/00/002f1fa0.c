/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f1fa0; name: FUN_002f1fa0
 */


void FUN_002f1fa0(byte *param_1,long param_2,long *param_3,ulong *param_4,ulong *param_5)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  
  uVar4 = *param_4;
  if (uVar4 == *param_5) {
    uVar1 = 8;
    if (0xf < uVar4 * 3) {
      uVar1 = uVar4 * 3 >> 1;
    }
    *param_5 = uVar1;
    lVar3 = FUN_002ebdc0(*param_3);
    *param_3 = lVar3;
    uVar4 = *param_4;
  }
  else {
    lVar3 = *param_3;
  }
  *param_4 = uVar4 + 1;
  *(undefined1 *)(lVar3 + uVar4) = 0x22;
joined_r0x002f201c:
  do {
    while( true ) {
      if (param_2 == 0) {
        uVar4 = *param_4;
        if (uVar4 == *param_5) {
          uVar1 = 8;
          if (0xf < uVar4 * 3) {
            uVar1 = uVar4 * 3 >> 1;
          }
          *param_5 = uVar1;
          lVar3 = FUN_002ebdc0(*param_3);
          *param_3 = lVar3;
          uVar4 = *param_4;
        }
        else {
          lVar3 = *param_3;
        }
        *param_4 = uVar4 + 1;
        *(undefined1 *)(lVar3 + uVar4) = 0x22;
        return;
      }
      bVar5 = *param_1;
      uVar4 = *param_4;
      if (0x5e < bVar5 - 0x20) break;
      if (uVar4 != *param_5) goto LAB_002f20d0;
LAB_002f2040:
      uVar1 = 8;
      if (0xf < uVar4 * 3) {
        uVar1 = uVar4 * 3 >> 1;
      }
      *param_5 = uVar1;
      lVar3 = FUN_002ebdc0(*param_3);
      *param_3 = lVar3;
      uVar4 = *param_4;
LAB_002f2064:
      *param_4 = uVar4 + 1;
      *(byte *)(lVar3 + uVar4) = bVar5;
joined_r0x002f233c:
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    }
    if (uVar4 == *param_5) {
      uVar1 = 8;
      if (0xf < uVar4 * 3) {
        uVar1 = uVar4 * 3 >> 1;
      }
      *param_5 = uVar1;
      lVar3 = FUN_002ebdc0(*param_3);
      *param_3 = lVar3;
      uVar4 = *param_4;
    }
    else {
      lVar3 = *param_3;
    }
    *param_4 = uVar4 + 1;
    *(undefined1 *)(lVar3 + uVar4) = 0x5c;
    switch(*param_1) {
    case 8:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      *(undefined1 *)(lVar3 + uVar4) = 0x62;
      goto joined_r0x002f201c;
    case 9:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x74;
      break;
    case 10:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x6e;
      break;
    default:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x75;
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x30;
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x30;
      cVar2 = "0123456789abcdef"[*param_1 >> 4];
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(char *)(lVar3 + uVar4) = cVar2;
      bVar5 = "0123456789abcdef"[(ulong)*param_1 & 0xf];
      uVar4 = *param_4;
      if (uVar4 == *param_5) goto LAB_002f2040;
LAB_002f20d0:
      lVar3 = *param_3;
      goto LAB_002f2064;
    case 0xc:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x66;
      goto joined_r0x002f233c;
    case 0xd:
      uVar4 = *param_4;
      if (uVar4 == *param_5) {
        uVar1 = 8;
        if (0xf < uVar4 * 3) {
          uVar1 = uVar4 * 3 >> 1;
        }
        *param_5 = uVar1;
        lVar3 = FUN_002ebdc0(*param_3);
        *param_3 = lVar3;
        uVar4 = *param_4;
      }
      else {
        lVar3 = *param_3;
      }
      *param_4 = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x72;
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while( true );
}


