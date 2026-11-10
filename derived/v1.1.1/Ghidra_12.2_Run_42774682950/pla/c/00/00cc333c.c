/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cc333c; name: FUN_00cc333c
 */


undefined8 FUN_00cc333c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar1 = FUN_00cc33b4();
  uVar3 = 0;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *param_3;
    *(undefined8 *)(lVar1 + 0x20) = param_3[1];
    *(undefined8 *)(lVar1 + 0x28) = param_3[2];
    plVar4 = (long *)param_3[3];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar2 = *(long **)(lVar1 + 0x30);
    *(long **)(lVar1 + 0x30) = plVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    uVar3 = 1;
  }
  return uVar3;
}


