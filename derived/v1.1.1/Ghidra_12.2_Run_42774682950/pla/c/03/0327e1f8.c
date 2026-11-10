/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327e1f8; name: FUN_0327e1f8
 */


void FUN_0327e1f8(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_04388f88 + 0x10);
  lVar5 = param_1[0x12];
  lVar2 = tpidr_el0;
  if ((int)*(uint *)((long)param_1 + 0x9c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x9c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x13)) {
      uVar1 = *(uint *)(param_1 + 0x13);
    }
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar5 + (long)(param_1 + 0x12);
    }
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 7);
  }
  puVar3 = PTR_PTR_0434a080;
  if ((int)param_1[0x11] != 0) {
    lVar7 = param_1[0x10];
    lVar5 = (long)(int)param_1[0x11] * 8;
    lVar6 = *(long *)(lVar7 + -8 + lVar5);
    while( true ) {
      if (lVar6 != 0) {
        FUN_032d647c();
      }
      if (lVar5 == 8) break;
      lVar5 = lVar5 + -8;
      lVar6 = *(long *)(lVar7 + -8 + lVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_032cf244(puVar3,param_1[0x10],8,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  lVar5 = param_1[0xd];
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if ((int)*(uint *)((long)param_1 + 0x74) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x74) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xe)) {
      uVar1 = *(uint *)(param_1 + 0xe);
    }
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar5 + (long)(param_1 + 0xd);
    }
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1,(ulong)uVar1 << 7);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 7);
  }
  if ((int)param_1[0xc] != 0) {
    lVar7 = param_1[0xb];
    lVar5 = (long)(int)param_1[0xc] * 8;
    lVar6 = *(long *)(lVar7 + -8 + lVar5);
    while( true ) {
      if (lVar6 != 0) {
        FUN_032d647c();
      }
      if (lVar5 == 8) break;
      lVar5 = lVar5 + -8;
      lVar6 = *(long *)(lVar7 + -8 + lVar5);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar3,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  lVar5 = param_1[8];
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  if ((int)*(uint *)((long)param_1 + 0x4c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 9)) {
      uVar1 = *(uint *)(param_1 + 9);
    }
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar5 + (long)(param_1 + 8);
    }
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1,(ulong)uVar1 << 7);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 7);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(puVar3,param_1[6],4,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_032cf244(puVar3,param_1[4],0xc,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


