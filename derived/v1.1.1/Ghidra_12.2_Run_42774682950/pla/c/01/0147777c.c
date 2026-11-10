/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147777c; name: FUN_0147777c
 */


void FUN_0147777c(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_4 == 0) {
    return;
  }
  bVar1 = *(byte *)(*param_2 + 0x88);
  if ((param_3 == (undefined8 *)0x0) || (bVar1 == 0)) {
LAB_01477ac8:
    FUN_01477bc4(param_1,0,0);
    if (param_3 != (undefined8 *)0x0) goto LAB_014777e0;
LAB_01477adc:
    FUN_01477bc4(param_1,1,0);
    if (param_3 == (undefined8 *)0x0) goto LAB_01477af0;
LAB_01477818:
    if (bVar1 < 3) goto LAB_01477af0;
    if (*(int *)(param_3 + 2) == 0) {
      if (*(char *)((long)param_3 + 0x27) == '\0') {
        lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,2);
        if ((lVar5 == 0) || (iVar3 = FUN_02c5fb2c(), iVar3 == 100)) goto LAB_01477828;
        if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar5);
          if (sVar2 == 0) goto LAB_01477828;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 == 0) goto LAB_01477828;
        }
      }
      goto LAB_01477af0;
    }
LAB_01477828:
    uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,2);
    FUN_01477d78(param_1,uVar4,2);
    if (param_3 != (undefined8 *)0x0) goto LAB_01477850;
LAB_01477b04:
    FUN_01477bc4(param_1,3,0);
    if (param_3 == (undefined8 *)0x0) goto LAB_01477b18;
LAB_01477888:
    if (bVar1 < 5) goto LAB_01477b18;
    if (*(int *)(param_3 + 3) == 0) {
      if (*(char *)((long)param_3 + 0x27) == '\0') {
        lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,4);
        if ((lVar5 == 0) || (iVar3 = FUN_02c5fb2c(), iVar3 == 100)) goto LAB_01477898;
        if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar5);
          if (sVar2 == 0) goto LAB_01477898;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 == 0) goto LAB_01477898;
        }
      }
      goto LAB_01477b18;
    }
LAB_01477898:
    uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,4);
    FUN_01477d78(param_1,uVar4,4);
  }
  else {
    if (*(int *)(param_3 + 1) == 0) {
      if (*(char *)((long)param_3 + 0x27) != '\0') goto LAB_01477ac8;
      lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,0);
      if ((lVar5 != 0) && (iVar3 = FUN_02c5fb2c(), iVar3 != 100)) {
        if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar5);
          if (sVar2 != 0) goto LAB_01477ac8;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 != 0) goto LAB_01477ac8;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,0);
    FUN_01477d78(param_1,uVar4,0);
    if (param_3 == (undefined8 *)0x0) goto LAB_01477adc;
LAB_014777e0:
    if (bVar1 < 2) goto LAB_01477adc;
    if (*(int *)((long)param_3 + 0xc) == 0) {
      if (*(char *)((long)param_3 + 0x27) != '\0') goto LAB_01477adc;
      lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,1);
      if ((lVar5 != 0) && (iVar3 = FUN_02c5fb2c(), iVar3 != 100)) {
        if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar5);
          if (sVar2 != 0) goto LAB_01477adc;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 != 0) goto LAB_01477adc;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,1);
    FUN_01477d78(param_1,uVar4,1);
    if (param_3 != (undefined8 *)0x0) goto LAB_01477818;
LAB_01477af0:
    FUN_01477bc4(param_1,2,0);
    if (param_3 == (undefined8 *)0x0) goto LAB_01477b04;
LAB_01477850:
    if (bVar1 < 4) goto LAB_01477b04;
    if (*(int *)((long)param_3 + 0x14) == 0) {
      if (*(char *)((long)param_3 + 0x27) != '\0') goto LAB_01477b04;
      lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,3);
      if ((lVar5 != 0) && (iVar3 = FUN_02c5fb2c(), iVar3 != 100)) {
        if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
          sVar2 = FUN_02c5e31c(lVar5);
          if (sVar2 != 0) goto LAB_01477b04;
        }
        else {
          iVar3 = FUN_02c66b3c();
          if (iVar3 != 0) goto LAB_01477b04;
        }
      }
    }
    uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,3);
    FUN_01477d78(param_1,uVar4,3);
    if (param_3 != (undefined8 *)0x0) goto LAB_01477888;
LAB_01477b18:
    FUN_01477bc4(param_1,4,0);
  }
  if ((param_3 != (undefined8 *)0x0) && (5 < bVar1)) {
    if (*(int *)((long)param_3 + 0x1c) != 0) {
LAB_014778d0:
      uVar4 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,5);
      FUN_01477d78(param_1,uVar4,5);
      return;
    }
    if (*(char *)((long)param_3 + 0x27) == '\0') {
      lVar5 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,5);
      if ((lVar5 == 0) || (iVar3 = FUN_02c5fb2c(), iVar3 == 100)) goto LAB_014778d0;
      if (*(long *)(*(long *)(lVar5 + 0x98) + 8) == 0) {
        sVar2 = FUN_02c5e31c(lVar5);
        if (sVar2 == 0) goto LAB_014778d0;
      }
      else {
        iVar3 = FUN_02c66b3c();
        if (iVar3 == 0) goto LAB_014778d0;
      }
    }
  }
  FUN_01477bc4(param_1,5,0);
  return;
}


