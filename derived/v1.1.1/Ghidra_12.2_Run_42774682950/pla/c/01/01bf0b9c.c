/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf0b9c; name: FUN_01bf0b9c
 */


void FUN_01bf0b9c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    uVar3 = 1;
    break;
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    lVar1 = FUN_01bf10a0();
    uVar2 = *(undefined4 *)(&DAT_03a7cc90 + lVar1 * 4);
    goto LAB_01bf0c68;
  case 4:
    uVar2 = 0;
LAB_01bf0c68:
    FUN_01bf094c(param_1,uVar2);
    return;
  default:
    return;
  }
  FUN_01a51334(param_1,&DAT_03a7ccc0,uVar3);
  FUN_01a4f4d4(param_1,&DAT_03a7ccc8,0);
  FUN_01a4f4d4(param_1,&DAT_03a7ccd0,1);
  return;
}


