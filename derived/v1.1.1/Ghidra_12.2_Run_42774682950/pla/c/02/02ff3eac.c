/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff3eac; name: FUN_02ff3eac
 */


void FUN_02ff3eac(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_042b7448;
  lVar4 = param_1[0xd];
  if ((lVar4 != 0) && (lVar4 + (long)(param_1 + 0xd) != 0)) {
    FUN_032d647c();
  }
  lVar4 = param_1[0x14];
  param_1[9] = 0;
  if ((int)*(uint *)((long)param_1 + 0xac) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0xac) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x15)) {
      uVar1 = *(uint *)(param_1 + 0x15);
    }
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 0x14);
    }
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,(ulong)uVar1 << 2);
  }
  FUN_02ff62ac(param_1 + 0xe);
  FUN_02ff2398(param_1);
  return;
}


