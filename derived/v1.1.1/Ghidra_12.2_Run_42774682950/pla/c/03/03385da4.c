/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385da4; name: FUN_03385da4
 */


void FUN_03385da4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = &PTR_LAB_0436e920;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x288,0);
  FUN_03381bf8();
  param_1[3] = uVar3;
  return;
}


