/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300a9e8; name: FUN_0300a9e8
 */


void FUN_0300a9e8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_042c0e08;
  if (param_1[0x53] != 0 && (long)param_1 + param_1[0x53] + 0x298 != 0) {
    FUN_032d647c();
  }
  if ((param_1[0x26] != 0) && ((long)param_1 + param_1[0x26] + 0x130 != 0)) {
    FUN_032d647c();
  }
  lVar4 = param_1[0x57];
  if ((lVar4 != 0) && (lVar4 + (long)(param_1 + 0x57) != 0)) {
    FUN_032d647c();
  }
  if ((param_1[0x27] != 0) && ((long)param_1 + param_1[0x27] + 0x138 != 0)) {
    FUN_032d647c();
  }
  lVar4 = param_1[0x5b];
  if ((lVar4 != 0) && (lVar4 + (long)(param_1 + 0x5b) != 0)) {
    FUN_032d647c();
  }
  if ((param_1[0x28] != 0) && ((long)param_1 + param_1[0x28] + 0x140 != 0)) {
    FUN_032d647c();
  }
  if ((int)*(uint *)((long)param_1 + 0x3fc) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x3fc) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x7f)) {
      uVar1 = *(uint *)(param_1 + 0x7f);
    }
    lVar4 = 0;
    if (param_1[0x7e] != 0) {
      lVar4 = (long)param_1 + param_1[0x7e] + 0x3f0;
    }
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,uVar1);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


