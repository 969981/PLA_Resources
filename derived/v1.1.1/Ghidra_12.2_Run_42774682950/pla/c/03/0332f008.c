/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332f008; name: FUN_0332f008
 */


void FUN_0332f008(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),true,0);
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar3 + 0xfc0) = *param_1;
  *param_1 = lVar3;
  *(long *)(lVar3 + 0xfb8) = param_1[1];
  param_1[1] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0xfc8,0);
  FUN_03338cb8();
  *(long *)(lVar2 + 0xfc0) = *param_1;
  *param_1 = lVar2;
  *(long *)(lVar2 + 0xfb8) = param_1[1];
  param_1[1] = lVar2;
  return;
}


