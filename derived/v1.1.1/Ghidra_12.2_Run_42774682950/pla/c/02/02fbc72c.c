/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc72c; name: FUN_02fbc72c
 */


void FUN_02fbc72c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  
  *param_1 = (long)&PTR_LAB_042b9320;
  plVar4 = param_1 + 0xb;
  if (((*plVar4 != 0) && (*plVar4 != -0x58 - (long)param_1)) && ((char)param_1[0xc] != '\0')) {
    lVar3 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 3) * 0x200 + 0x48))(param_1);
    FUN_02f6e6bc(lVar3 + 8,param_1);
  }
  if (param_1[10] != 0) {
    FUN_032d647c();
    param_1[10] = 0;
  }
  if (*plVar4 != 0 && *plVar4 + (long)plVar4 != 0) {
    FUN_032d647c();
    *plVar4 = 0;
  }
  *param_1 = (long)&PTR_LAB_042bb140;
  plVar4 = param_1 + 6;
  iVar6 = (int)param_1[7];
  if (0 < iVar6) {
    lVar3 = 0;
    if (*plVar4 != 0) {
      lVar3 = *plVar4 + (long)plVar4;
    }
    lVar3 = lVar3 + (long)iVar6 * 8;
    do {
      lVar3 = lVar3 + -8;
      FUN_02ff98b4(lVar3);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 7)) {
      uVar1 = *(uint *)(param_1 + 7);
    }
    lVar3 = 0;
    if (param_1[6] != 0) {
      lVar3 = param_1[6] + (long)plVar4;
    }
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1,(ulong)uVar1 << 3);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,(ulong)uVar1 << 3);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


