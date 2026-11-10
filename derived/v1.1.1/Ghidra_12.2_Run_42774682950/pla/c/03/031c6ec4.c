/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c6ec4; name: FUN_031c6ec4
 */


void FUN_031c6ec4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x60,0);
  FUN_032bd56c(uVar3,0,0);
  lVar4 = *(long *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = uVar3;
  if (lVar4 != 0) {
    FUN_032d647c();
  }
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x60,0);
  FUN_032be30c(uVar3,*(undefined8 *)(param_1 + 0x4c8));
  *(undefined8 *)(param_1 + 0x4d0) = uVar3;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  return;
}


