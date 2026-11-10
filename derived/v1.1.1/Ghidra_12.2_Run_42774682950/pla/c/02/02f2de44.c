/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2de44; name: FUN_02f2de44
 */


undefined8 FUN_02f2de44(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0xf0);
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[3], lVar4 != 0)) {
    uVar3 = (**(code **)(*plVar1 + 0x90))();
    uVar2 = FUN_02f19a7c(lVar4,param_2,uVar3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0xf8);
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[3], lVar4 != 0)) {
    uVar3 = (**(code **)(*plVar1 + 0x90))();
    uVar2 = FUN_02f19a7c(lVar4,param_2,uVar3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x100);
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[3], lVar4 != 0)) {
    uVar3 = (**(code **)(*plVar1 + 0x90))();
    uVar2 = FUN_02f19a7c(lVar4,param_2,uVar3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x108);
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[3], lVar4 != 0)) {
    uVar3 = (**(code **)(*plVar1 + 0x90))();
    uVar2 = FUN_02f19a7c(lVar4,param_2,uVar3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x128);
  if (((plVar1 == (long *)0x0) ||
      (uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,param_2), (uVar2 & 1) == 0)) &&
     ((plVar1 = *(long **)(param_1 + 0x130), plVar1 == (long *)0x0 ||
      (uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,param_2), (uVar2 & 1) == 0)))) {
    return 0;
  }
  return 1;
}


