/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23768; name: FUN_02e23768
 */


void FUN_02e23768(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x84) == 0) {
    if (*(char *)(param_1 + 0x94) == '\0') {
      uVar1 = (uint)(param_2 >> 0xc);
      uVar3 = uVar1 & 0xffff7;
      uVar2 = uVar2 & 0xf00 | uVar3 << 0xc | uVar2 - ((uVar1 & 0xfffff) - uVar3 >> 3) & 0xff;
    }
    *(uint *)(param_1 + 0xc0) = uVar2;
    return;
  }
  switch(*(int *)(param_1 + 0x84)) {
  case 1:
    uVar3 = 4;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & uVar2 >> 0xc;
    uVar2 = uVar3 >> 1 & 4;
    break;
  case 2:
    uVar3 = 3;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xb;
    }
    uVar3 = uVar3 & uVar2 >> 0xc;
    uVar2 = uVar3 - (uVar3 >> 1);
    goto LAB_02e238a0;
  case 3:
    uVar3 = 7;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xf;
    }
    uVar3 = uVar3 & uVar2 >> 0xc;
    uVar2 = uVar3 - (uVar3 >> 1 & 0xfffffffd);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar3 << 0xc;
    goto LAB_02e238cc;
  case 4:
    uVar3 = 0x603;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0x60b;
    }
    uVar3 = uVar3 & uVar2 >> 0xc;
    uVar2 = uVar3 >> 1 & 0x1ff;
    break;
  case 5:
    uVar3 = 0x607;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0x60f;
    }
    uVar3 = uVar3 & uVar2 >> 0xc;
    uVar2 = uVar3 >> 1 & 0xfdfdfdfd;
    break;
  default:
    goto switchD_02e237bc_default;
  }
  uVar2 = uVar3 - uVar2;
LAB_02e238a0:
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = uVar3 << 0xc | (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
LAB_02e238cc:
  *(uint *)(param_1 + 0xc0) = uVar2 | 0x100;
switchD_02e237bc_default:
  return;
}


