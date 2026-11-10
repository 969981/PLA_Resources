/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf0820; name: FUN_01bf0820
 */


void FUN_01bf0820(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  case 0:
    uVar2 = 4;
    break;
  case 1:
    uVar2 = 5;
    break;
  case 2:
    uVar2 = 8;
    break;
  case 3:
    uVar2 = 1;
    break;
  case 4:
    uVar2 = 9;
    break;
  case 5:
    uVar2 = 2;
    break;
  case 6:
    lVar1 = FUN_01bf10a0();
    FUN_01bf094c(param_1,*(undefined4 *)(&DAT_03a7cc90 + lVar1 * 4));
    return;
  case 7:
    uVar2 = 6;
    break;
  case 8:
    uVar2 = 7;
    break;
  default:
    return;
  }
  FUN_01a51334(param_1,&DAT_03a7cca8,uVar2);
  FUN_01a4f4d4(param_1,&DAT_03a7ccb0,0);
  FUN_01a4f4d4(param_1,&DAT_03a7ccb8,1);
  return;
}


