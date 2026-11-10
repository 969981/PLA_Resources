/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011da0c8; name: FUN_011da0c8
 */


void FUN_011da0c8(long param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = FUN_029506a8(*(undefined8 *)(param_3 + 0x70),0xd);
  uVar2 = FUN_029506a8(*(undefined8 *)(param_3 + 0x70),0xe);
  switch(param_2) {
  case 1:
    lVar3 = param_1 + 0x5b0;
    break;
  case 2:
    lVar3 = param_1 + 0x5f8;
    break;
  case 3:
    lVar3 = param_1 + 0x640;
    break;
  case 4:
    lVar3 = param_1 + 0x688;
    break;
  case 5:
    lVar3 = param_1 + 0x6d0;
    break;
  default:
    return;
  }
  FUN_011d83c8(lVar3,*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 8),uVar1,uVar2,0x14)
  ;
  return;
}


