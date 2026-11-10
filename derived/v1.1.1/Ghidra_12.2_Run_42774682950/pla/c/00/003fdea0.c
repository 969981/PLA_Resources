/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fdea0; name: FUN_003fdea0
 */


long FUN_003fdea0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_4);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    lVar4 = *(long *)(param_2 + 0x20);
    if (lVar1 == 0) {
      if (lVar4 != 0) {
        FUN_002ef5d0(lVar4);
      }
      return lVar4;
    }
    if (lVar4 == 0) {
      FUN_002ef5d0(lVar1);
      return lVar1;
    }
    if (*(long *)(lVar1 + 0x28) < *(long *)(lVar4 + 0x28)) {
      do {
        lVar1 = lVar4;
        lVar4 = *(long *)(lVar1 + 0x18);
      } while (*(long *)(lVar1 + 0x18) != 0);
      uVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(lVar1 + 8),param_4);
      uVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(lVar1 + 0x10),param_4);
      lVar4 = *(long *)(param_2 + 0x18);
      if (lVar4 != 0) {
        FUN_002ef5d0(lVar4);
      }
      lVar1 = FUN_003fdea0(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar1 + 8),
                           param_4);
    }
    else {
      do {
        lVar4 = lVar1;
        lVar1 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      uVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(lVar4 + 8),param_4);
      uVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(lVar4 + 0x10),param_4);
      lVar4 = FUN_003fdea0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(lVar4 + 8),
                           param_4);
      lVar1 = *(long *)(param_2 + 0x20);
      if (lVar1 != 0) {
        FUN_002ef5d0(lVar1);
      }
    }
  }
  else {
    uVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_2 + 8),param_4);
    uVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_2 + 0x10),param_4);
    lVar4 = *(long *)(param_2 + 0x18);
    if (lVar1 < 1) {
      if (lVar4 != 0) {
        FUN_002ef5d0(lVar4);
      }
      lVar1 = FUN_003fdea0(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
    }
    else {
      lVar4 = FUN_003fdea0(param_1,lVar4,param_3,param_4);
      lVar1 = *(long *)(param_2 + 0x20);
      if (lVar1 != 0) {
        FUN_002ef5d0(lVar1);
      }
    }
  }
  lVar1 = FUN_003fe170(param_1,uVar2,uVar3,lVar4,lVar1,param_4);
  return lVar1;
}


