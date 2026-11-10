/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00860900; name: FUN_00860900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00860900(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    break;
  case 1:
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0xb8);
    lVar5 = 0;
    uVar6 = 0;
    plVar9 = (long *)(lVar10 + 0x10);
    while (*plVar9 != *(long *)(param_2 + 0x10)) {
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x100000000;
      plVar9 = plVar9 + 0xf;
      if (*(uint *)(param_1 + 0xc0) == uVar6) {
        return;
      }
    }
    if ((int)uVar6 < 0) {
      return;
    }
    lVar5 = lVar5 >> 0x20;
    if (lVar10 + lVar5 * 0x78 == 0) {
      return;
    }
    lVar11 = lVar10 + lVar5 * 0x78;
    if (5 < *(int *)(lVar11 + 0x20)) {
      return;
    }
    lVar12 = lVar10 + lVar5 * 0x78;
    lVar2 = param_2 + 0x20;
    FUN_007e346c(lVar12 + 0x28,lVar2);
    FUN_007e346c(lVar12 + 0x48,param_2 + 0x40);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_2 + 0x60);
    uVar6 = FUN_007e4430(param_1 + 0x80);
    if (((uVar6 & 1) != 0) &&
       (uVar6 = FUN_007e440c(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0)) {
      uVar6 = FUN_007e44ac(param_1 + 0x60);
      if ((((uVar6 & 1) != 0) && (uVar6 = FUN_007e44ac(lVar2), (uVar6 & 1) != 0)) ||
         ((uVar6 = FUN_007e362c(param_1 + 0x60), (uVar6 & 1) != 0 &&
          (uVar6 = FUN_007e362c(lVar2), (uVar6 & 1) != 0)))) {
        *(undefined1 *)(lVar10 + lVar5 * 0x78 + 0x68) = 1;
      }
    }
    plVar9 = (long *)(lVar11 + 0x10);
    if ((*(char *)(lVar10 + lVar5 * 0x78 + 0x68) == '\0') &&
       ((*(char *)(param_1 + 0xa9) == '\0' ||
        (uVar6 = FUN_007e362c(param_1 + 0x60), (uVar6 & 1) != 0)))) {
      uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc0) == 0) {
        lVar5 = 0;
LAB_00860e74:
        uVar3 = *(uint *)(lVar5 + 0x20);
      }
      else {
        lVar5 = *(long *)(param_1 + 0xb8);
        do {
          if (*(long *)(lVar5 + 0x10) == *plVar9) goto LAB_00860e74;
          lVar5 = lVar5 + 0x78;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        lVar5 = 0;
        uVar3 = _DAT_00000020;
      }
      if (((int)uVar3 < 0xc) && (*(undefined4 *)(lVar5 + 0x74) = 0, uVar3 == 2)) {
        *(undefined4 *)(lVar5 + 0x20) = 0xc;
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
      return;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      lVar5 = 0;
LAB_00860e34:
      uVar3 = *(uint *)(lVar5 + 0x20);
    }
    else {
      lVar5 = *(long *)(param_1 + 0xb8);
      do {
        if (*(long *)(lVar5 + 0x10) == *plVar9) goto LAB_00860e34;
        lVar5 = lVar5 + 0x78;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar5 = 0;
      uVar3 = _DAT_00000020;
    }
    if (6 < (int)uVar3) {
      return;
    }
    *(undefined4 *)(lVar5 + 0x74) = 0;
    if (6 < uVar3) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & 0x74U) == 0) {
      return;
    }
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  default:
    return;
  case 3:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xb8);
    plVar9 = (long *)(lVar5 + 0x10);
    uVar7 = uVar6;
    while (*plVar9 != *(long *)(param_2 + 0x10)) {
      plVar9 = plVar9 + 0xf;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return;
      }
    }
    if (plVar9 == (long *)&DAT_00000010) {
      return;
    }
    do {
      if (*(long *)(lVar5 + 0x10) == *plVar9) goto LAB_008609c4;
      lVar5 = lVar5 + 0x78;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar5 = 0;
LAB_008609c4:
    uVar3 = *(uint *)(lVar5 + 0x20);
    if ((((int)uVar3 < 9) && (*(undefined4 *)(lVar5 + 0x74) = 0, uVar3 < 9)) &&
       ((1 << (ulong)(uVar3 & 0x1f) & 0x1a0U) != 0)) {
      *(undefined4 *)(lVar5 + 0x20) = 9;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return;
    }
    return;
  case 4:
    uVar3 = *(uint *)(param_1 + 0xc0);
    uVar6 = (ulong)uVar3;
    if (uVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0xb8);
      uVar7 = uVar6;
      do {
        if (*(long *)(lVar5 + 0x10) == *(long *)(param_2 + 0x10)) {
          if (lVar5 != 0) goto joined_r0x00860efc;
          break;
        }
        lVar5 = lVar5 + 0x78;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar6 = FUN_0085f490(param_1);
    if ((uVar6 & 1) != 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc0) != 0) {
        lVar5 = *(long *)(param_1 + 0xb8);
        do {
          if (*(long *)(lVar5 + 0x10) == *(long *)(param_2 + 0x10)) goto LAB_00860fa8;
          lVar5 = lVar5 + 0x78;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar5 = 0;
LAB_00860fa8:
      FUN_007e346c(lVar5 + 0x28,param_2 + 0x20);
      FUN_007e346c(lVar5 + 0x48,param_2 + 0x40);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x60);
      uVar6 = FUN_007e4430(param_1 + 0x80);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_007e440c(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0)) {
        *(undefined1 *)(lVar5 + 0x68) = 1;
      }
      *(undefined1 *)(param_1 + 0x5a) = 1;
      uVar3 = *(uint *)(param_1 + 0xc0);
      uVar6 = (ulong)uVar3;
joined_r0x00860efc:
      if (uVar3 == 0) {
        lVar10 = 0;
        uVar3 = _DAT_00000020;
      }
      else {
        lVar10 = *(long *)(param_1 + 0xb8);
        do {
          if (*(long *)(lVar10 + 0x10) == *(long *)(lVar5 + 0x10)) goto LAB_00860f28;
          lVar10 = lVar10 + 0x78;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        lVar10 = 0;
LAB_00860f28:
        uVar3 = *(uint *)(lVar10 + 0x20);
      }
      if ((((int)uVar3 < 0xb) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar3 < 0xb)) &&
         ((1 << (ulong)(uVar3 & 0x1f) & 0x701U) != 0)) {
        *(undefined4 *)(lVar10 + 0x20) = 0xb;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        return;
      }
    }
    return;
  case 5:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xb8);
    plVar9 = (long *)(lVar5 + 0x10);
    uVar7 = uVar6;
    while (*plVar9 != *(long *)(param_2 + 0x10)) {
      plVar9 = plVar9 + 0xf;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return;
      }
    }
    if (plVar9 == (long *)&DAT_00000010) {
      return;
    }
    lVar10 = lVar5;
    uVar7 = uVar6;
    do {
      if (*(long *)(lVar10 + 0x10) == *plVar9) goto LAB_00860a30;
      lVar10 = lVar10 + 0x78;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    lVar10 = 0;
LAB_00860a30:
    if (0xc < (int)*(uint *)(lVar10 + 0x20)) {
      return;
    }
    *(undefined4 *)(lVar10 + 0x74) = 0;
    if ((*(uint *)(lVar10 + 0x20) & 0xfffffffe) != 10) {
      return;
    }
    *(undefined4 *)(lVar10 + 0x20) = 0xd;
    piVar8 = (int *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x10) != -1) goto LAB_00860a7c;
    do {
      do {
        uVar6 = uVar6 - 1;
        piVar1 = piVar8 + 0x1e;
        if (uVar6 == 0) {
          *(undefined1 *)(param_1 + 0x5a) = 0;
          goto LAB_00860a94;
        }
        plVar9 = (long *)(piVar8 + 0x1a);
        piVar8 = piVar1;
      } while (*plVar9 == -1);
LAB_00860a7c:
    } while (*piVar8 - 0xdU < 2);
LAB_00860a94:
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  case 6:
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar5 = 0;
    while (lVar10 = *(long *)(param_1 + 0xb8) + lVar5,
          *(long *)(lVar10 + 0x10) != *(long *)(param_2 + 0x10)) {
      lVar5 = lVar5 + 0x78;
      if ((ulong)*(uint *)(param_1 + 0xc0) * 0x78 == lVar5) {
        return;
      }
    }
    if (*(long *)(param_1 + 0xb8) + lVar5 == 0) {
      return;
    }
    FUN_007e346c(lVar10 + 0x28,param_2 + 0x20);
    FUN_007e346c(lVar10 + 0x48,param_2 + 0x40);
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(uint *)(param_1 + 0xc0);
    uVar6 = (ulong)uVar3;
    if (uVar3 == 0) {
      lVar5 = 0;
      uVar4 = _DAT_00000020;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xb8);
      uVar7 = uVar6;
      do {
        if (*(long *)(lVar5 + 0x10) == *(long *)(lVar10 + 0x10)) goto LAB_008610c8;
        lVar5 = lVar5 + 0x78;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      lVar5 = 0;
LAB_008610c8:
      uVar4 = *(uint *)(lVar5 + 0x20);
    }
    if (((0xd < (int)uVar4) || (*(undefined4 *)(lVar5 + 0x74) = 0, 0xc < uVar4)) ||
       ((1 << (ulong)(uVar4 & 0x1f) & 0x157dU) == 0)) {
      return;
    }
    *(undefined4 *)(lVar5 + 0x20) = 0xe;
    if (uVar3 == 0) {
LAB_0086115c:
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    else {
      piVar8 = (int *)(*(long *)(param_1 + 0xb8) + 0x20);
      if (*(long *)(*(long *)(param_1 + 0xb8) + 0x10) != -1) goto LAB_0086112c;
      do {
        do {
          uVar6 = uVar6 - 1;
          piVar1 = piVar8 + 0x1e;
          if (uVar6 == 0) goto LAB_0086115c;
          plVar9 = (long *)(piVar8 + 0x1a);
          piVar8 = piVar1;
        } while (*plVar9 == -1);
LAB_0086112c:
      } while (*piVar8 - 0xdU < 2);
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) != 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    do {
      if (*(ulong *)(lVar5 + 0x10) == *(ulong *)(param_2 + 0x10)) {
        if (lVar5 != 0) {
          if (*(ulong *)(param_2 + 0x10) < *(ulong *)(param_1 + 0xa0)) {
            return;
          }
          goto LAB_00860b2c;
        }
        break;
      }
      lVar5 = lVar5 + 0x78;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = FUN_0085f490(param_1);
  if ((uVar6 & 1) != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      lVar5 = 0;
      uVar3 = _DAT_00000020;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xb8);
      do {
        if (*(long *)(lVar5 + 0x10) == *(long *)(param_2 + 0x10)) goto LAB_00860b2c;
        lVar5 = lVar5 + 0x78;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar5 = 0;
LAB_00860b2c:
      uVar3 = *(uint *)(lVar5 + 0x20);
    }
    if ((int)uVar3 < 3) {
      lVar10 = param_2 + 0x20;
      FUN_007e346c(lVar5 + 0x28,lVar10);
      FUN_007e346c(lVar5 + 0x48,param_2 + 0x40);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x60);
      uVar6 = FUN_007e4430(param_1 + 0x80);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_007e440c(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0)) {
        uVar6 = FUN_007e44ac(param_1 + 0x60);
        if ((((uVar6 & 1) != 0) && (uVar6 = FUN_007e44ac(lVar10), (uVar6 & 1) != 0)) ||
           ((uVar6 = FUN_007e362c(param_1 + 0x60), (uVar6 & 1) != 0 &&
            (uVar6 = FUN_007e362c(lVar10), (uVar6 & 1) != 0)))) {
          *(undefined1 *)(lVar5 + 0x68) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x5a) = 1;
      uVar6 = FUN_007e44f0(param_1 + 0x60);
      if (((uVar6 & 1) != 0) || (uVar6 = FUN_007e44f0(lVar10), (uVar6 & 1) != 0)) {
        *(undefined1 *)(lVar5 + 0x68) = 0;
      }
      uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc0) == 0) {
        lVar10 = 0;
        uVar3 = _DAT_00000020;
      }
      else {
        lVar10 = *(long *)(param_1 + 0xb8);
        do {
          if (*(long *)(lVar10 + 0x10) == *(long *)(lVar5 + 0x10)) goto LAB_00860c20;
          lVar10 = lVar10 + 0x78;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        lVar10 = 0;
LAB_00860c20:
        uVar3 = *(uint *)(lVar10 + 0x20);
      }
      if (((int)uVar3 < 4) && (*(undefined4 *)(lVar10 + 0x74) = 0, uVar3 < 4)) {
        *(undefined4 *)(lVar10 + 0x20) = 4;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        return;
      }
    }
  }
  return;
}


