/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02faf110; name: FUN_02faf110
 */


void FUN_02faf110(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  *param_1 = (long)&PTR_LAB_042b8cf0;
  lVar4 = param_1[9];
  if ((lVar4 != 0) && (lVar4 + (long)(param_1 + 9) != 0)) {
    FUN_032d647c();
  }
  plVar3 = param_1 + 0xe;
  iVar6 = (int)param_1[0xf];
  if (0 < iVar6) {
    lVar4 = 0;
    if (*plVar3 != 0) {
      lVar4 = *plVar3 + (long)plVar3;
    }
    lVar4 = lVar4 + (long)iVar6 * 0x40;
    do {
      lVar4 = lVar4 + -0x40;
      FUN_02fa24f0(lVar4);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((int)*(uint *)((long)param_1 + 0x7c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x7c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xf)) {
      uVar1 = *(uint *)(param_1 + 0xf);
    }
    lVar4 = 0;
    if (param_1[0xe] != 0) {
      lVar4 = param_1[0xe] + (long)plVar3;
    }
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1,(ulong)uVar1 << 6);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,(ulong)uVar1 << 6);
  }
  lVar4 = param_1[10];
  if ((int)*(uint *)((long)param_1 + 0x5c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xb)) {
      uVar1 = *(uint *)(param_1 + 0xb);
    }
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 10);
    }
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1,(ulong)uVar1 << 2);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,(ulong)uVar1 << 2);
  }
  *param_1 = (long)&PTR_LAB_042bb140;
  plVar3 = param_1 + 6;
  iVar6 = (int)param_1[7];
  if (0 < iVar6) {
    lVar4 = 0;
    if (*plVar3 != 0) {
      lVar4 = *plVar3 + (long)plVar3;
    }
    lVar4 = lVar4 + (long)iVar6 * 8;
    do {
      lVar4 = lVar4 + -8;
      FUN_02ff98b4(lVar4);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 7)) {
      uVar1 = *(uint *)(param_1 + 7);
    }
    lVar4 = 0;
    if (param_1[6] != 0) {
      lVar4 = param_1[6] + (long)plVar3;
    }
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1,(ulong)uVar1 << 3);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,(ulong)uVar1 << 3);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


