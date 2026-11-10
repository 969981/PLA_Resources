/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263bac; name: FUN_00263bac
 */


void FUN_00263bac(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0087eed4(param_1 + 0x178);
  (**(code **)PTR_DAT_04372d80)
            (*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
             *(undefined8 *)(param_1 + 0x170),0,*(undefined8 *)PTR_DAT_04372d78,0);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_0087dfa4(*(long *)(param_1 + 0x1c8),param_2);
    lVar2 = *(long *)(param_1 + 0x1c8);
    if (lVar2 != 0) {
      FUN_0087ddd8(lVar2);
      FUN_00232674(lVar2);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x1c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 0x1c0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00232674(plVar1);
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}


