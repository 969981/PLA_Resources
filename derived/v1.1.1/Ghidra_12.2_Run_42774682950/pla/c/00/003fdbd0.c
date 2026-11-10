/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fdbd0; name: FUN_003fdbd0
 */


long FUN_003fdbd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    lVar1 = FUN_002ebd50(0x30);
    FUN_002ef5c0(lVar1,1);
    *(undefined8 *)(lVar1 + 8) = param_3;
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    *(undefined8 *)(lVar1 + 0x28) = 1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    return lVar1;
  }
  lVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_5);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_2 + 8),param_5);
    uVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_2 + 0x10),param_5);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar1 < 1) {
      if (lVar6 != 0) {
        FUN_002ef5d0(lVar6);
      }
      lVar1 = FUN_003fdbd0(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4,param_5);
    }
    else {
      lVar6 = FUN_003fdbd0(param_1,lVar6,param_3,param_4,param_5);
      lVar1 = *(long *)(param_2 + 0x20);
      if (lVar1 != 0) {
        FUN_002ef5d0(lVar1);
      }
    }
    lVar1 = FUN_003fe170(param_1,uVar2,uVar3,lVar6,lVar1,param_5);
    return lVar1;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    FUN_002ef5d0(lVar1);
  }
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    FUN_002ef5d0(lVar6);
  }
  lVar4 = FUN_002ebd50(0x30);
  FUN_002ef5c0(lVar4,1);
  *(undefined8 *)(lVar4 + 8) = param_3;
  *(undefined8 *)(lVar4 + 0x10) = param_4;
  uVar2 = FUN_003fda50(lVar1);
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  uVar2 = FUN_003fda50(lVar6);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  if (lVar1 == 0) {
    lVar5 = 0;
    if (lVar6 == 0) goto LAB_003fdd88;
LAB_003fdd14:
    if (*(long *)(lVar6 + 0x28) < lVar5) goto LAB_003fdd20;
LAB_003fdd94:
    if (lVar6 != 0) {
      lVar1 = *(long *)(lVar6 + 0x28);
      goto LAB_003fdda4;
    }
  }
  else {
    lVar5 = *(long *)(lVar1 + 0x28);
    if (lVar6 != 0) goto LAB_003fdd14;
LAB_003fdd88:
    if (lVar5 < 1) goto LAB_003fdd94;
LAB_003fdd20:
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x28);
      goto LAB_003fdda4;
    }
  }
  lVar1 = 0;
LAB_003fdda4:
  *(long *)(lVar4 + 0x28) = lVar1 + 1;
  return lVar4;
}


