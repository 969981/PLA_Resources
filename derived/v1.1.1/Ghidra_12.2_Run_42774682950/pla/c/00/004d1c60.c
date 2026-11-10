/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d1c60; name: FUN_004d1c60
 */


undefined8 FUN_004d1c60(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  
  piVar9 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)(*(long *)(piVar9 + 0x30) + 0x60);
  if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar9)) && (*piVar9 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 1:
      if (*(int *)(param_1 + 0x744) != -1) {
LAB_004d2094:
        *(undefined4 *)(param_1 + 0x5c) = 0x2a;
        return 1;
      }
      if (*(int *)(param_1 + 0x748) == 3) goto LAB_004d1e94;
      goto switchD_004d1cf8_caseD_0;
    default:
      uVar5 = 600;
      uVar6 = 0x19c;
      goto LAB_004d1f94;
    case 0x14:
switchD_004d1cb4_caseD_14:
      *(undefined4 *)(param_1 + 0x5c) = 0x16;
      return 1;
    case 0x16:
      if ((*(byte *)(param_1 + 0x5ce) >> 4 & 1) == 0) {
        if (*(int *)(param_1 + 0x4d8) == 1) goto switchD_004d1cb4_caseD_24;
      }
      else if (*(int *)(param_1 + 0x4d8) != 2) goto switchD_004d1cf8_caseD_21;
      *(undefined4 *)(param_1 + 0x5c) = 0x25;
      return 1;
    case 0x17:
      *(undefined4 *)(param_1 + 0x5c) = 0x28;
      return 1;
    case 0x19:
      if (*(int *)(param_1 + 0x748) == 3) {
        *(undefined4 *)(param_1 + 0x748) = 4;
        *(undefined4 *)(param_1 + 0x5c) = 1;
        return 1;
      }
      goto LAB_004d2180;
    case 0x20:
      if (*(int *)(param_1 + 0x748) == 4) {
        *(undefined4 *)(param_1 + 0x748) = 2;
      }
      else if (*(int *)(param_1 + 0x678) == 0) break;
      uVar8 = 0x21;
      if (*(ulong *)(param_1 + 0x1810) <= *(ulong *)(param_1 + 0x1818)) {
        uVar8 = 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      return 1;
    case 0x21:
      if ((*(int *)(param_1 + 200) == 0) &&
         (*(ulong *)(param_1 + 0x1818) < *(ulong *)(param_1 + 0x1810))) {
        return 1;
      }
      break;
    case 0x23:
      bVar3 = *(int *)(param_1 + 0x4d8) == 1;
      uVar7 = 0x25;
      uVar8 = 0x2e;
LAB_004d2058:
      if (!bVar3) {
        uVar8 = uVar7;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      return 1;
    case 0x24:
switchD_004d1cb4_caseD_24:
      *(undefined4 *)(param_1 + 0x5c) = 0x2e;
      return 1;
    case 0x25:
      if (*(int *)(param_1 + 200) != 0) goto switchD_004d1cb4_caseD_28;
      uVar4 = *(uint *)(param_1 + 0x558);
      if (((((uVar4 & 1) != 0) && (((uVar4 >> 3 & 1) == 0 || (*(int *)(param_1 + 0x748) == 3)))) &&
          (((uVar4 >> 2 & 1) == 0 || (*(int *)(param_1 + 0x760) < 1)))) &&
         ((uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20),
          (uVar2 & 0x50) == 0 && ((uVar2 & 4) == 0 || (uVar4 & 2) != 0)))) goto LAB_004d1e94;
LAB_004d2180:
      *(undefined4 *)(param_1 + 0x5c) = 0x17;
      return 1;
    case 0x28:
switchD_004d1cb4_caseD_28:
      *(undefined4 *)(param_1 + 0x5c) = 0x24;
      return 1;
    case 0x2a:
      break;
    case 0x2c:
      if (*(int *)(param_1 + 0x744) != -1) goto LAB_004d2094;
      break;
    case 0x2e:
      goto switchD_004d1cb4_caseD_2e;
    }
    goto switchD_004d1cb4_caseD_2a;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 0x60) == 0x13) {
      *(undefined8 *)(param_1 + 0x5c) = DAT_0388a838;
      return 1;
    }
    uVar5 = FUN_004d86c0(param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    break;
  default:
    uVar5 = 0x25c;
    uVar6 = 0x225;
LAB_004d1f94:
    FUN_004c99a0(param_1,0x50,uVar5,0x44,"external/openssl/ssl/statem/statem_srvr.c",uVar6);
    return 0;
  case 0x13:
    goto switchD_004d1cb4_caseD_2a;
  case 0x14:
    if ((((uVar4 >> 3 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x108) == 0)) &&
       (uVar4 = FUN_004c5320(param_1), (uVar4 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x15;
      return 1;
    }
    if (((*(int *)(param_1 + 0x740) != 0) || (*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) goto switchD_004d1cb4_caseD_14;
    goto switchD_004d1cb4_caseD_2a;
  case 0x15:
  case 0x1a:
    goto switchD_004d1cb4_caseD_2e;
  case 0x16:
    if (*(int *)(param_1 + 200) != 0) {
      if (*(int *)(param_1 + 0x678) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x21;
        return 1;
      }
      goto switchD_004d1cf8_caseD_21;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
    uVar2 = *(uint *)(lVar10 + 0x20);
    if ((uVar2 & 0x54) == 0) goto LAB_004d2180;
    uVar1 = *(uint *)(lVar10 + 0x1c);
    if (((uVar1 & 6) == 0) &&
       ((((uVar1 & 0x48) == 0 || (*(long *)(*(long *)(param_1 + 0x488) + 0x210) == 0)) &&
        ((uVar1 & 0x1a0) == 0)))) {
      uVar1 = *(uint *)(param_1 + 0x558);
      if ((((uVar1 & 1) != 0) &&
          ((((uVar4 >> 3 & 1) != 0 || ((uVar1 >> 3 & 1) == 0)) ||
           ((*piVar9 < 0x304 || ((*piVar9 == 0x10000 || (*(int *)(param_1 + 0x748) == 3)))))))) &&
         ((((uVar1 >> 2 & 1) == 0 || (*(int *)(param_1 + 0x760) < 1)) &&
          (((uVar2 & 0x50) == 0 && ((uVar2 & 4) == 0 || (uVar1 & 2) != 0)))))) goto LAB_004d1e94;
      goto switchD_004d1cf8_caseD_19;
    }
    goto LAB_004d1dc8;
  case 0x17:
    if (*(int *)(param_1 + 0x654) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x22;
      return 1;
    }
  case 0x22:
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x1c);
    if (((uVar2 & 6) != 0) ||
       ((((uVar2 & 0x48) != 0 && (*(long *)(*(long *)(param_1 + 0x488) + 0x210) != 0)) ||
        ((uVar2 & 0x1a0) != 0)))) {
LAB_004d1dc8:
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
switchD_004d1cf8_caseD_18:
    uVar2 = *(uint *)(param_1 + 0x558);
    if (((((uVar2 & 1) != 0) &&
         ((((uVar4 >> 3 & 1) != 0 || ((uVar2 >> 3 & 1) == 0)) ||
          ((*piVar9 < 0x304 || ((*piVar9 == 0x10000 || (*(int *)(param_1 + 0x748) == 3)))))))) &&
        (((uVar2 >> 2 & 1) == 0 || (*(int *)(param_1 + 0x760) < 1)))) &&
       ((uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20), (uVar4 & 0x50) == 0
        && ((uVar4 & 4) == 0 || (uVar2 & 2) != 0)))) {
LAB_004d1e94:
      *(undefined4 *)(param_1 + 0x5c) = 0x19;
      return 1;
    }
switchD_004d1cf8_caseD_19:
    *(undefined4 *)(param_1 + 0x5c) = 0x1a;
    return 1;
  case 0x18:
    goto switchD_004d1cf8_caseD_18;
  case 0x19:
    goto switchD_004d1cf8_caseD_19;
  case 0x20:
    if (*(int *)(param_1 + 200) == 0) {
      bVar3 = *(int *)(param_1 + 0x678) == 0;
      uVar7 = 0x21;
      uVar8 = 0x23;
      goto LAB_004d2058;
    }
switchD_004d1cb4_caseD_2a:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x21:
switchD_004d1cf8_caseD_21:
    *(undefined4 *)(param_1 + 0x5c) = 0x23;
    return 1;
  case 0x23:
    goto switchD_004d1cb4_caseD_28;
  case 0x24:
    if (*(int *)(param_1 + 200) == 0) goto switchD_004d1cb4_caseD_2a;
  }
switchD_004d1cf8_caseD_0:
switchD_004d1cb4_caseD_2e:
  return 2;
}


