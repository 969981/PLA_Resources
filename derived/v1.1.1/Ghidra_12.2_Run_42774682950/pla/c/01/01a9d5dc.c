/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9d5dc; name: FUN_01a9d5dc
 */


void FUN_01a9d5dc(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  FUN_01a9d678();
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_1 + 8);
  if ((lVar2 != param_2) && (param_1 != lVar3)) {
    do {
      uVar1 = *(undefined4 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar3 + 0x20) = uVar1;
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      lVar2 = *(long *)(lVar2 + 8);
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar2 != param_2 && param_1 != lVar3);
  }
  if (param_1 == lVar3) {
    FUN_01a9da04(param_1,param_1);
    return;
  }
  FUN_01a9dbe0(param_1,lVar3,param_1);
  return;
}


