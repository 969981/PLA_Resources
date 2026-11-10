/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a3364; name: FUN_011a3364
 */


byte FUN_011a3364(undefined8 param_1,long param_2,short param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = FUN_02c6df60(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar4 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar4 & 1) == 0) && (uVar3 = FUN_02c6bbd4(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
LAB_011a33cc:
    bVar1 = (&DAT_03888b60)[lVar5 * 4] == param_3;
  }
  else {
    if (uVar2 < 6) {
      lVar5 = 1;
      goto LAB_011a33cc;
    }
    if (uVar2 < 9) {
      lVar5 = 2;
      goto LAB_011a33cc;
    }
    if (uVar2 == 9) {
      lVar5 = 3;
      goto LAB_011a33cc;
    }
    bVar1 = false;
  }
  uVar2 = FUN_02c6e298(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar3 >> 1 & 1) == 0) &&
     (uVar3 = FUN_02c6bf10(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
LAB_011a341c:
    bVar1 = bVar1 | ((&DAT_03888b60)[lVar5 * 4] == param_3) << 1;
  }
  else {
    if (uVar2 < 6) {
      lVar5 = 1;
      goto LAB_011a341c;
    }
    if (uVar2 < 9) {
      lVar5 = 2;
      goto LAB_011a341c;
    }
    if (uVar2 == 9) {
      lVar5 = 3;
      goto LAB_011a341c;
    }
  }
  uVar2 = FUN_02c6e5d0(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar3 >> 2 & 1) == 0) &&
     (uVar3 = FUN_02c6c24c(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
LAB_011a3470:
    bVar1 = bVar1 | ((&DAT_03888b60)[lVar5 * 4] == param_3) << 2;
  }
  else {
    if (uVar2 < 6) {
      lVar5 = 1;
      goto LAB_011a3470;
    }
    if (uVar2 < 9) {
      lVar5 = 2;
      goto LAB_011a3470;
    }
    if (uVar2 == 9) {
      lVar5 = 3;
      goto LAB_011a3470;
    }
  }
  uVar2 = FUN_02c6ec40(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar3 >> 3 & 1) == 0) &&
     (uVar3 = FUN_02c6c588(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
LAB_011a34c4:
    bVar1 = bVar1 | ((&DAT_03888b60)[lVar5 * 4] == param_3) << 3;
  }
  else {
    if (uVar2 < 6) {
      lVar5 = 1;
      goto LAB_011a34c4;
    }
    if (uVar2 < 9) {
      lVar5 = 2;
      goto LAB_011a34c4;
    }
    if (uVar2 == 9) {
      lVar5 = 3;
      goto LAB_011a34c4;
    }
  }
  uVar2 = FUN_02c6ef78(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar3 >> 4 & 1) == 0) &&
     (uVar3 = FUN_02c6c8c4(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
  }
  else if (uVar2 < 6) {
    lVar5 = 1;
  }
  else if (uVar2 < 9) {
    lVar5 = 2;
  }
  else {
    if (uVar2 != 9) goto LAB_011a352c;
    lVar5 = 3;
  }
  bVar1 = bVar1 | ((&DAT_03888b60)[lVar5 * 4] == param_3) << 4;
LAB_011a352c:
  uVar2 = FUN_02c6e908(*(undefined8 *)(param_2 + 0x98));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_02c8b05c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar3 >> 5 & 1) == 0) &&
     (uVar3 = FUN_02c6cc00(*(undefined8 *)(param_2 + 0x98)), uVar3 < 0x1f)) {
    if (uVar3 < 0x1a) {
      if (0x13 < uVar3) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = uVar2 + 3;
  }
  if (9 < uVar2) {
    uVar2 = 10;
  }
  if (uVar2 < 3) {
    lVar5 = 0;
  }
  else if (uVar2 < 6) {
    lVar5 = 1;
  }
  else if (uVar2 < 9) {
    lVar5 = 2;
  }
  else {
    if (uVar2 != 9) {
      return bVar1;
    }
    lVar5 = 3;
  }
  return bVar1 | ((&DAT_03888b60)[lVar5 * 4] == param_3) << 5;
}


