/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e328d4; name: FUN_02e328d4
 */


void FUN_02e328d4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 0:
    if (*(char *)(param_1 + 0x168) == '\0') {
      uVar1 = param_2 >> 0xc & 0xfffffff7;
      *(uint *)(param_1 + 0x1c0) =
           param_2 & 0xf00 | uVar1 << 0xc | param_2 - ((param_2 >> 0xc) - uVar1 >> 3) & 0xff;
      return;
    }
    *(uint *)(param_1 + 0x1c0) = param_2;
    return;
  case 1:
    uVar1 = 4;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar1 = 0xc;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 4);
    break;
  case 2:
    uVar1 = 3;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar1 = 0xb;
    }
    goto LAB_02e329fc;
  case 3:
    uVar1 = 7;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar1 = 0xf;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 0xfffffffd);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar1 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar1 << 0xc;
    goto LAB_02e32a30;
  case 4:
    uVar1 = 0x603;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar1 = 0x60b;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 0x1ff);
    break;
  case 5:
    uVar1 = 0x607;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar1 = 0x60f;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 0xfdfdfdfd);
    break;
  case 6:
    uVar1 = 9;
    if (*(char *)(param_1 + 0x168) == '\0') {
      uVar1 = 1;
    }
LAB_02e329fc:
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1);
    break;
  default:
    goto switchD_02e328f4_default;
  }
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar1 = uVar1 << 0xc | (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
LAB_02e32a30:
  *(uint *)(param_1 + 0x1c0) = uVar1 | 0x100;
switchD_02e328f4_default:
  return;
}


