/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e40ed0; name: FUN_02e40ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e40ed0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  
  lVar5 = (*DAT_0442d138)(9,0xf0);
  if (lVar5 == 0) {
    DAT_04409a48 = 0;
    return 0x34;
  }
  FUN_02e4202c();
  _DAT_042a5c90 = *param_1;
  _DAT_042a5c98 = param_1[1];
  _DAT_042a5ca0 = param_1[2];
  _DAT_042a5ca8 = (undefined7)param_1[3];
  _DAT_042a5cb0 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x1f) >> 8);
  DAT_042a5caf = (undefined1)((ulong)param_1[3] >> 0x38);
  DAT_04409a48 = lVar5;
  iVar4 = FUN_02e45d24(lVar5);
  lVar5 = DAT_0440a128;
  if (iVar4 != 1) goto LAB_02e41f90;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0)) {
    lVar8 = (ulong)uVar2 * 0x18;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e40fa8;
      piVar11 = piVar10 + 6;
      piVar10 = piVar10 + 6;
    } while (*piVar11 != 0);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e40fa8:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(code **)piVar10 = FUN_02e42080;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 1)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41054;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 1);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41054:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 1;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(code **)piVar10 = FUN_02e421b0;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 2)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41104;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 2);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41104:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 2;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(code **)piVar10 = FUN_02e422a0;
  *(undefined1 **)(piVar10 + 2) = &LAB_02e423b0;
  lVar5 = DAT_0440a128;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 3)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e411bc;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 3);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e411bc:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 3;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42400;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 4)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e4126c;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 4);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e4126c:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 4;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e424e0;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 5)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e4131c;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 5);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e4131c:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 5;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e425e0;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 6)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e413cc;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 6);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e413cc:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 6;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42630;
  *(undefined1 **)(piVar10 + 2) = &LAB_02e42680;
  lVar5 = DAT_0440a128;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 7)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41484;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 7);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41484:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 7;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42690;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 8)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41534;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 8);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41534:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 8;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e426e0;
  *(undefined1 **)(piVar10 + 2) = &LAB_02e427c0;
  lVar5 = DAT_0440a128;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 9)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e415ec;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 9);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e415ec:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 9;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42810;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 10)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41698;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 10);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41698:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 10;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42860;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0xb)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41748;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 0xb);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41748:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0xb;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42930;
  *(undefined1 **)(piVar10 + 2) = &LAB_02e429b0;
  lVar5 = DAT_0440a128;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0xc)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41800;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 0xc);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41800:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0xc;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42a00;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0xd)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e418b0;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 0xd);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e418b0:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0xd;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42a50;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0xe)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41960;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 0xe);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41960:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0xe;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42b20;
  piVar10[2] = 0;
  lVar5 = DAT_0440a128;
  piVar10[3] = 0;
  piVar7 = *(int **)(DAT_0440a128 + 0xa8);
  uVar2 = *(uint *)(DAT_0440a128 + 0xb0);
  piVar10 = piVar7;
  if ((uVar2 != 0) && (*piVar7 != 0xf)) {
    lVar8 = (ulong)uVar2 * 0x18;
    piVar11 = piVar7;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_02e41a10;
      piVar10 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar10;
    } while (*piVar1 != 0xf);
  }
  if (piVar10 == piVar7 + (ulong)uVar2 * 6) {
LAB_02e41a10:
    uVar3 = *(uint *)(DAT_0440a128 + 0xb4);
    if (uVar3 <= uVar2) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar3 = uVar3 + iVar4;
      piVar7 = (int *)(*DAT_0442d148)(0,piVar7,(ulong)uVar3 * 0x18);
      if (piVar7 == (int *)0x0) goto LAB_02e41f90;
      *(int **)(lVar5 + 0xa8) = piVar7;
      *(uint *)(lVar5 + 0xb4) = uVar3;
    }
    if (uVar3 <= uVar2) goto LAB_02e41f90;
    uVar9 = (ulong)*(uint *)(lVar5 + 0xb0);
    *(uint *)(lVar5 + 0xb0) = *(uint *)(lVar5 + 0xb0) + 1;
    if (piVar7 + uVar9 * 6 == (int *)0x0) goto LAB_02e41f90;
    piVar10 = piVar7 + uVar9 * 6 + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    (piVar7 + uVar9 * 6 + 4)[0] = 0;
    (piVar7 + uVar9 * 6 + 4)[1] = 0;
    piVar7[uVar9 * 6] = 0xf;
  }
  else {
    piVar10 = piVar10 + 2;
  }
  *(undefined1 **)piVar10 = &LAB_02e42bf0;
  piVar10[2] = 0;
  piVar10[3] = 0;
  iVar4 = FUN_02e42d94();
  if ((((iVar4 == 1) && (iVar4 = FUN_02e782a0(&LAB_02e3f550,8,0,8,0,800), iVar4 == 1)) &&
      (iVar4 = FUN_02e782a0(&LAB_02e40bc0,0x10,0,8,0,800), iVar4 == 1)) &&
     (uVar6 = FUN_02e782a0(FUN_02e40bd0,0x80,0,0,0,0), (int)uVar6 == 1)) {
    fVar12 = (float)NEON_fminnm(DAT_042a5c9c,0x43340000);
    DAT_042a5e54 = (float)NEON_fminnm(DAT_042a5c98,0x40400000);
    if (DAT_042a5e54 <= 1.0) {
      DAT_042a5e54 = 1.0;
    }
    if (fVar12 <= 0.1) {
      fVar12 = 0.1;
    }
    DAT_042a5e50 = fVar12 * 0.017453294;
    DAT_0440aa78 = (char)uVar6;
    return uVar6;
  }
LAB_02e41f90:
  FUN_02e40bd0();
  return 2;
}


