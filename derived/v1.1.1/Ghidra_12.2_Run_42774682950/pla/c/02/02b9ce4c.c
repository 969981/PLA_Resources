/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9ce4c; name: FUN_02b9ce4c
 */


void FUN_02b9ce4c(long param_1,uint param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  if ((*param_4 == '\0') || (param_2 == 0)) {
    return;
  }
  lVar7 = *(long *)(param_4 + 8);
  uVar8 = 1;
  uVar3 = *(undefined8 *)(lVar7 + 0x20);
  uVar1 = param_2 & 1;
  do {
    if (uVar1 != 0) {
      uVar4 = 0;
      switch(uVar8) {
      case 1:
        break;
      default:
        uVar4 = 1;
        break;
      case 4:
        uVar4 = 2;
        break;
      case 8:
        uVar4 = 3;
        break;
      case 0x10:
        uVar4 = 4;
        break;
      case 0x20:
        uVar4 = 5;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = *(undefined8 *)(lVar7 + 0x40);
      uVar2 = (*DAT_043f04a0)(uVar3);
      (*DAT_043f0c38)(uVar5,uVar4,param_3,uVar6,uVar2);
    }
    uVar8 = uVar8 * 2;
    if (param_2 < uVar8) {
      return;
    }
    uVar1 = uVar8 & param_2;
  } while( true );
}


