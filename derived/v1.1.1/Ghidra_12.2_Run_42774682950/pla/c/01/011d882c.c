/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d882c; name: FUN_011d882c
 */


void FUN_011d882c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar1 = &DAT_041f87a8;
  }
  else {
    puVar1 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar1 = &DAT_041f8af0;
      break;
    case 3:
      puVar1 = &DAT_041f8e38;
      break;
    case 4:
      puVar1 = &DAT_041f9180;
      break;
    case 5:
      puVar1 = &DAT_041f94c8;
    }
  }
  local_30 = puVar1[0x2d];
  uStack_28 = puVar1[0x2e];
  local_20 = puVar1[0x2f];
  uStack_18 = 0;
  FUN_0283b1e8(*param_1,&local_30);
  return;
}


