/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025970c; name: FUN_0025970c
 */


void FUN_0025970c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[2] = param_2;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != param_3) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_3);
    lVar2 = FUN_00232654(0x38);
    if (lVar2 != 0) {
      FUN_00230150(lVar2);
    }
    param_1[1] = lVar2;
    for (lVar2 = *(long *)(param_3 + 8); param_3 != lVar2; lVar2 = *(long *)(lVar2 + 8)) {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x18) + 0x78))
                        (*(long **)(param_2 + 0x18),*(undefined8 *)(lVar2 + 0x10),1);
      FUN_0023024c(param_1[1],uVar1);
    }
    uVar1 = (**(code **)*param_1)(param_1);
    param_1[4] = uVar1;
  }
  return;
}


