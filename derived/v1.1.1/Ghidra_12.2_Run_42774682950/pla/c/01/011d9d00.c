/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d9d00; name: FUN_011d9d00
 */


void FUN_011d9d00(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 1:
    lVar1 = param_1 + 0x5b0;
    uVar2 = 1;
    break;
  case 2:
    lVar1 = param_1 + 0x5f8;
    uVar2 = 2;
    break;
  case 3:
    lVar1 = param_1 + 0x640;
    uVar2 = 3;
    break;
  case 4:
    lVar1 = param_1 + 0x688;
    uVar2 = 4;
    break;
  case 5:
    lVar1 = param_1 + 0x6d0;
    uVar2 = 5;
    break;
  default:
    goto switchD_011d9d30_default;
  }
  FUN_011d6b20(lVar1,param_2,uVar2);
switchD_011d9d30_default:
  *(undefined1 *)(param_1 + 0x721) = 1;
  return;
}


