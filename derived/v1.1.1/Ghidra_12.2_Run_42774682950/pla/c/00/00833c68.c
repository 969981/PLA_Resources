/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833c68; name: FUN_00833c68
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00833c68(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  lVar5 = (**(code **)(*param_3 + 0xe0))(param_3);
  puVar3 = PTR_DAT_043773c0;
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(*param_3 + 0xe0))(param_3);
    uVar7 = (**(code **)(*plVar6 + 0x158))();
    if ((uVar7 & 1) != 0) {
      if (*(char *)(*(long *)puVar3 + 0x38) == '\0') {
        lVar5 = *(long *)puVar3 + 0x10;
        puVar8 = (undefined8 *)FUN_008477c4(lVar5,0x108);
        FUN_0083da78();
        iVar4 = FUN_00847840(lVar5,puVar8,0xa0000000);
        if (iVar4 == *(int *)PTR_DAT_043779d0) {
          (**(code **)*puVar8)(puVar8);
          FUN_008477a0(lVar5,puVar8);
        }
      }
      else {
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x128) = iVar4;
      lVar5 = FUN_00847ad0(*(long *)puVar3 + 0x10,iVar4,0xa0);
      *(long *)(param_2 + 0x130) = lVar5;
      *(long *)(lVar5 + 0xf0) = param_2 + 0x60;
    }
  }
  if (*(long *)(param_2 + 0xa0) == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0x78,uVar9);
    if (lVar5 != 0) {
      FUN_0083c498(lVar5,param_2);
    }
    *(long *)(param_2 + 0xa0) = lVar5;
    lVar5 = *(long *)(param_2 + 0xa8);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xa8);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0xc0,uVar9);
    if (lVar5 != 0) {
      FUN_0083a890(lVar5,param_2);
    }
    *(long *)(param_2 + 0xa8) = lVar5;
    lVar5 = *(long *)(param_2 + 0xb0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xb0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0x78,uVar9);
    if (lVar5 != 0) {
      FUN_0083b7c4(lVar5,param_2);
    }
    *(long *)(param_2 + 0xb0) = lVar5;
    lVar5 = *(long *)(param_2 + 0xb8);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xb8);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0xe0,uVar9);
    if (lVar5 != 0) {
      FUN_0083ee10(lVar5,param_2);
    }
    *(long *)(param_2 + 0xb8) = lVar5;
    lVar5 = *(long *)(param_2 + 0xc0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xc0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0xf0,uVar9);
    if (lVar5 != 0) {
      FUN_0083bc1c(lVar5,param_2);
    }
    *(long *)(param_2 + 0xc0) = lVar5;
    lVar5 = *(long *)(param_2 + 200);
  }
  else {
    lVar5 = *(long *)(param_2 + 200);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0x238,uVar9);
    if (lVar5 != 0) {
      FUN_0083c948(lVar5,param_2);
    }
    *(long *)(param_2 + 200) = lVar5;
    lVar5 = *(long *)(param_2 + 0xd0);
  }
  else {
    lVar5 = *(long *)(param_2 + 0xd0);
  }
  if (lVar5 == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(0xa0,uVar9);
    if (lVar5 != 0) {
      FUN_0083d2b4(lVar5);
    }
    *(long *)(param_2 + 0xd0) = lVar5;
    uVar2 = *(ushort *)(*(long *)puVar3 + 0x50);
    lVar5 = *(long *)(param_2 + 0x130);
  }
  else {
    uVar2 = *(ushort *)(*(long *)puVar3 + 0x50);
    lVar5 = *(long *)(param_2 + 0x130);
  }
  uVar7 = (ulong)uVar2;
  if (lVar5 != 0) {
    FUN_0083db20(local_60);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x178);
  uVar12 = (uint)uVar2;
  if (puVar8 == (undefined8 *)0x0) {
    lVar5 = uVar7 * 0x2d8;
    uVar9 = FUN_007e336c();
    puVar8 = (undefined8 *)FUN_0081a750(lVar5,uVar9);
    if ((uVar12 != 0) && (puVar8 != (undefined8 *)0x0)) {
      lVar15 = (long)puVar8 + 3;
      do {
        *(undefined4 *)(lVar15 + -3) = 0;
        lVar15 = lVar15 + 4;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(param_2 + 0x178) = puVar8;
  }
  puVar1 = (undefined8 *)(param_2 + 0x138);
  if ((uVar12 != 0) && (puVar8 != (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0x168) = puVar8;
    lVar5 = param_2 + 0x150;
    *(uint *)(param_2 + 0x170) = uVar12;
    *puVar8 = 0;
    puVar8[1] = 0;
    FUN_007e8fa0(lVar5,lVar5,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
    if (uVar12 != 1) {
      lVar13 = uVar7 - 1;
      lVar15 = 0x2d8;
      do {
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x168) + lVar15);
        *puVar8 = 0;
        puVar8[1] = 0;
        FUN_007e8fa0(lVar5,lVar5,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
        lVar15 = lVar15 + 0x2d8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  if (*(undefined8 **)(param_2 + 0x140) != puVar1) {
    puVar8 = *(undefined8 **)(param_2 + 0x140);
    do {
      puVar14 = (undefined8 *)puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      FUN_007e8fc4(param_2 + 0x150,param_2 + 0x150,(long)*(int *)(param_2 + 0x164) + (long)puVar8);
      puVar8 = puVar14;
    } while (puVar14 != puVar1);
  }
  FUN_007e8f94(puVar1);
  FUN_00840094(local_60,param_2 + 0x180,*(undefined2 *)(*(long *)puVar3 + 0x50));
  if (*(long *)(param_2 + 0x788) == 0) {
    uVar9 = FUN_007e336c();
    lVar5 = FUN_0081a750(uVar7,uVar9);
    if ((uVar12 != 0) && (lVar5 != 0)) {
      uVar10 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        do {
          *(undefined4 *)(lVar5 + lVar15) = 0;
          lVar15 = lVar15 + 4;
        } while (uVar7 - uVar10 != lVar15);
      }
      if ((uVar2 & 3) != 0) {
        puVar11 = (undefined1 *)(lVar5 + lVar15);
        do {
          uVar10 = uVar10 - 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    *(long *)(param_2 + 0x788) = lVar5;
    if (uVar12 != 0) {
      uVar10 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        do {
          *(undefined4 *)(lVar5 + lVar15) = 0;
          lVar15 = lVar15 + 4;
        } while (uVar7 - uVar10 != lVar15);
      }
      if ((uVar2 & 3) != 0) {
        puVar11 = (undefined1 *)(lVar5 + lVar15);
        do {
          uVar10 = uVar10 - 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
    }
  }
  *(undefined2 *)(param_2 + 0x790) = 0;
  local_60[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_60);
  return;
}


