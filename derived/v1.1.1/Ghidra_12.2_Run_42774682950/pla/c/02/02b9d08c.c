/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9d08c; name: FUN_02b9d08c
 */


void FUN_02b9d08c(long *param_1,uint param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((*param_4 == '\0') ||
     (uVar2 = (*DAT_043f0090)(*param_1 + 0x10,*(undefined4 *)(*(long *)(param_4 + 8) + 0x84)),
     param_2 == 0)) {
    return;
  }
  uVar4 = 1;
  uVar1 = param_2 & 1;
  do {
    if (uVar1 != 0) {
      uVar3 = 0;
      switch(uVar4) {
      case 1:
        break;
      default:
        uVar3 = 1;
        break;
      case 4:
        uVar3 = 2;
        break;
      case 8:
        uVar3 = 3;
        break;
      case 0x10:
        uVar3 = 4;
        break;
      case 0x20:
        uVar3 = 5;
      }
      (*DAT_043f0c58)(param_1[2],uVar3,param_3,uVar2);
    }
    uVar4 = uVar4 * 2;
    if (param_2 < uVar4) {
      return;
    }
    uVar1 = uVar4 & param_2;
  } while( true );
}


