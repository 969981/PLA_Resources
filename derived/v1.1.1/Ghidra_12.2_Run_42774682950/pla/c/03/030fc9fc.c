/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fc9fc; name: FUN_030fc9fc
 */


void FUN_030fc9fc(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_042b56f8;
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x2dd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16ec)) && (param_1[0x2dc] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2dc],((ulong)*(uint *)((long)param_1 + 0x16ec) & 0x3fffffff) * 0x30)
    ;
  }
  param_1[0x2dc] = 0;
  *(undefined4 *)((long)param_1 + 0x16ec) = 0x80000000;
  lVar7 = param_1[0x2da];
  while (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 8);
    FUN_032cf640(lVar7,0x310);
    lVar7 = lVar8;
  }
  *(undefined4 *)(param_1 + 0x2d9) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x16cc)) && (param_1[0x2d8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2d8],*(int *)((long)param_1 + 0x16cc) << 2);
  }
  plVar6 = (long *)param_1[0x2d7];
  param_1[0x2d8] = 0;
  *(undefined4 *)((long)param_1 + 0x16cc) = 0x80000000;
  if (plVar6 != (long *)0x0) {
    if ((long *)plVar6[0x11] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0x11] + 0x10))();
    }
    if ((long *)plVar6[0x10] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0x10] + 0x10))();
    }
    if ((long *)plVar6[0xf] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0xf] + 0x10))();
    }
    if ((long *)plVar6[0xe] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0xe] + 0x10))();
    }
    if ((long *)plVar6[0xd] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0xd] + 0x10))();
    }
    if ((long *)plVar6[0xc] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0xc] + 0x10))();
    }
    if ((long *)plVar6[0xb] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[0xb] + 0x10))();
    }
    if ((long *)plVar6[10] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[10] + 0x10))();
    }
    if ((long *)plVar6[9] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[9] + 0x10))();
    }
    if ((long *)plVar6[8] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[8] + 0x10))();
    }
    if ((long *)plVar6[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[7] + 0x10))();
    }
    if ((long *)plVar6[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[6] + 0x10))();
    }
    if ((long *)plVar6[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[5] + 0x10))();
    }
    if ((long *)plVar6[4] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[4] + 0x10))();
    }
    if ((long *)plVar6[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[3] + 0x10))();
    }
    if ((long *)plVar6[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[2] + 0x10))();
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[1] + 0x10))();
    }
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 0x10))();
    }
    FUN_032cf640(plVar6,0x90);
  }
  *(undefined4 *)(param_1 + 0x2d6) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x16b4)) && (param_1[0x2d5] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2d5],*(int *)((long)param_1 + 0x16b4) << 2);
  }
  param_1[0x2d5] = 0;
  *(undefined4 *)((long)param_1 + 0x16b4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x169c)) && (param_1[0x2d2] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2d2],*(uint *)((long)param_1 + 0x169c) & 0x3fffffff);
  }
  lVar7 = param_1[0x2cf];
  param_1[0x2d2] = 0;
  *(undefined4 *)((long)param_1 + 0x169c) = 0x80000000;
  if (lVar7 != 0) {
    FUN_030ffcdc(lVar7);
    FUN_032cf640(lVar7,0x78);
  }
  lVar7 = param_1[0x2ce];
  if (lVar7 != 0) {
    FUN_030fecd4(lVar7);
    FUN_032cf640(lVar7,0x50);
  }
  plVar6 = (long *)param_1[0x2cc];
  if (plVar6 != (long *)0x0) {
    if ((int)*(uint *)((long)plVar6 + 0xc) < 0) {
      uVar1 = *(uint *)((long)plVar6 + 0xc) & 0x7fffffff;
      lVar7 = *plVar6;
      if ((int)uVar1 <= (int)*(uint *)(plVar6 + 1)) {
        uVar1 = *(uint *)(plVar6 + 1);
      }
      if (lVar7 != 0) {
        lVar7 = lVar7 + (long)plVar6;
      }
      lVar8 = tpidr_el0;
      lVar5 = *(long *)(lVar8 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1,(ulong)uVar1 << 7);
        *(long *)(lVar8 + 0x38d490) = lVar5;
      }
      plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,(ulong)uVar1 << 7);
    }
    FUN_032cf640(plVar6,0x18);
  }
  *(undefined4 *)(param_1 + 0x2ca) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x1654)) && (param_1[0x2c9] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2c9],*(int *)((long)param_1 + 0x1654) << 2);
  }
  param_1[0x2c9] = 0;
  *(undefined4 *)((long)param_1 + 0x1654) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1644)) && (param_1[0x2c7] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2c7],((ulong)*(uint *)((long)param_1 + 0x1644) & 0x3fffffff) << 4);
  }
  param_1[0x2c7] = 0;
  *(undefined4 *)((long)param_1 + 0x1644) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1634)) && (param_1[0x2c5] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2c5],((ulong)*(uint *)((long)param_1 + 0x1634) & 0x3fffffff) << 5);
  }
  lVar7 = param_1[0x2c4];
  param_1[0x2c5] = 0;
  *(undefined4 *)((long)param_1 + 0x1634) = 0x80000000;
  if (lVar7 != 0) {
    FUN_030feb84(lVar7);
    FUN_032cf640(lVar7,0x1ae0);
  }
  *(undefined4 *)(param_1 + 0x2b9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x15cc)) && (param_1[0x2b8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2b8],((ulong)*(uint *)((long)param_1 + 0x15cc) & 0x3fffffff) * 0x14)
    ;
  }
  param_1[0x2b8] = 0;
  *(undefined4 *)((long)param_1 + 0x15cc) = 0x80000000;
  if ((int)param_1[0x37] != 0) {
    lVar8 = param_1[0x36];
    lVar7 = (long)(int)param_1[0x37] * 0x280;
    do {
      lVar5 = lVar8 + lVar7;
      *(undefined4 *)(lVar5 + -0x108) = 0;
      uVar1 = *(uint *)(lVar5 + -0x104);
      if ((-1 < (int)uVar1) && (*(long *)(lVar5 + -0x110) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar5 + -0x110),((ulong)uVar1 & 0x3fffffff) << 3);
      }
      *(undefined8 *)(lVar5 + -0x110) = 0;
      *(uint *)(lVar5 + -0x104) = 0x80000000;
      *(undefined4 *)(lVar5 + -0x198) = 0;
      iVar2 = *(int *)(lVar5 + -0x194);
      if ((-1 < iVar2) && (*(long *)(lVar5 + -0x1a0) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(lVar5 + -0x1a0),iVar2 << 2);
      }
      *(undefined8 *)(lVar5 + -0x1a0) = 0;
      *(int *)(lVar5 + -0x194) = -0x80000000;
      *(undefined4 *)(lVar5 + -0x228) = 0;
      iVar2 = *(int *)(lVar5 + -0x224);
      if ((-1 < iVar2) && (*(long *)(lVar5 + -0x230) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(lVar5 + -0x230),iVar2 << 2);
      }
      lVar7 = lVar7 + -0x280;
      *(undefined8 *)(lVar5 + -0x230) = 0;
      *(int *)(lVar5 + -0x224) = -0x80000000;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1bc)) && (param_1[0x36] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x36],((ulong)*(uint *)((long)param_1 + 0x1bc) & 0x3fffffff) * 0x280);
  }
  param_1[0x36] = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x30],((ulong)*(uint *)((long)param_1 + 0x18c) & 0x3fffffff) << 3);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[0x2e],*(int *)((long)param_1 + 0x17c) << 2)
    ;
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[0x2c],*(int *)((long)param_1 + 0x16c) << 2)
    ;
  }
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  FUN_03340f78(param_1 + 0x27);
  FUN_03340f78(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x24],((ulong)*(uint *)((long)param_1 + 300) & 0x3fffffff) << 4);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x22],((ulong)*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) << 5);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


