/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196e74; name: FUN_03196e74
 */


void FUN_03196e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  iVar6 = *(int *)(param_1 + 0xa8);
  if (0 < iVar6) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0xa0) + lVar8 * 4) != -1) {
        FUN_031974a0(param_1,param_2,*(long *)(param_1 + 0xb0) + lVar7,param_3);
        *(undefined4 *)
         (*(long *)(param_1 + 0x90) + (long)*(int *)(*(long *)(param_1 + 0xa0) + lVar8 * 4) * 4) =
             0xffffffff;
        iVar6 = *(int *)(param_1 + 0xa8);
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < iVar6);
  }
  lVar12 = (long)DAT_0444b53c;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  iVar6 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    lVar7 = 0;
    do {
      if ((*(int *)(param_1 + 0x108) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x100) + (long)((int)lVar7 + *(int *)(param_1 + 0x20))) & 1
          ) == 0)) {
        FUN_031974a0(param_1,param_2,*(long *)(param_1 + 0xd0) + lVar12,param_3);
        lVar10 = (long)DAT_0444b53c;
        lVar9 = *(long *)(lVar8 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar9;
        }
        if (*(long *)(lVar9 + lVar10 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        iVar6 = *(int *)(param_1 + 0xd8);
      }
      lVar7 = lVar7 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar7 < iVar6);
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x70) + lVar7 * 4) = 0xffffffff;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xbc)) && (*(long *)(param_1 + 0xb0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xb0),((ulong)*(uint *)(param_1 + 0xbc) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 200) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xcc)) && (*(long *)(param_1 + 0xc0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xc0),
               ((ulong)*(uint *)(param_1 + 0xcc) & 0x3fffffff) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xdc)) && (*(long *)(param_1 + 0xd0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xd0),((ulong)*(uint *)(param_1 + 0xdc) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xec)) && (*(long *)(param_1 + 0xe0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xe0),
               ((ulong)*(uint *)(param_1 + 0xec) & 0x3fffffff) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x80000000;
  lVar12 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xfc)) && (*(long *)(param_1 + 0xf0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0xf0),((ulong)*(uint *)(param_1 + 0xfc) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x11c)) && (*(long *)(param_1 + 0x110) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x110),(*(uint *)(param_1 + 0x11c) & 0x3fffffff) << 1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((-1 < *(int *)(param_1 + 300)) && (*(long *)(param_1 + 0x120) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x120),*(int *)(param_1 + 300) << 2);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < *(int *)(param_1 + 0x13c)) && (*(long *)(param_1 + 0x130) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x130),*(int *)(param_1 + 0x13c) << 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((-1 < *(int *)(param_1 + 0x14c)) && (*(long *)(param_1 + 0x140) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x140),*(int *)(param_1 + 0x14c) << 2);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((-1 < *(int *)(param_1 + 0x15c)) && (*(long *)(param_1 + 0x150) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x150),*(int *)(param_1 + 0x15c) << 2);
  }
  uVar5 = *(uint *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar1) {
    uVar11 = *(undefined8 *)(param_1 + 0x100);
    uVar2 = *(undefined4 *)(param_1 + 0x108);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar5 = *(uint *)(param_1 + 0x10c);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar3 = uVar1;
    if ((int)uVar1 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar11 = FUN_032bd1d4(puVar4,uVar3,1,uVar11,uVar2,(uint *)(param_1 + 0x10c));
    *(undefined8 *)(param_1 + 0x100) = uVar11;
  }
  uVar5 = *(uint *)(param_1 + 0x108);
  if (uVar5 != uVar1) {
    *(uint *)(param_1 + 0x108) = uVar1;
    uVar5 = uVar1;
  }
  if (0 < (int)uVar5) {
    lVar8 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar8) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x108));
  }
  uVar5 = *(uint *)(param_1 + 0x174);
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar1) {
    uVar11 = *(undefined8 *)(param_1 + 0x168);
    uVar2 = *(undefined4 *)(param_1 + 0x170);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar5 = *(uint *)(param_1 + 0x174);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar3 = uVar1;
    if ((int)uVar1 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar11 = FUN_032bd1d4(puVar4,uVar3,4,uVar11,uVar2,(uint *)(param_1 + 0x174));
    *(undefined8 *)(param_1 + 0x168) = uVar11;
  }
  if (*(uint *)(param_1 + 0x170) != uVar1) {
    *(uint *)(param_1 + 0x170) = uVar1;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar8 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x168) + lVar8 * 4) = 0xffffffff;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_0318e6a8(param_1 + 0x188);
  return;
}


