/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00811cb0; name: FUN_00811cb0
 */


void FUN_00811cb0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *local_48 [2];
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_28 [2];
  
  FUN_00811f30();
  if (DAT_043a4219 == '\x01') {
    local_38 = (undefined *)CONCAT44(local_38._4_4_,0x10402);
    local_48[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_48);
    ppuVar1 = &local_38;
  }
  else {
    local_38 = PTR_DAT_043773d0 + 0x10;
    pcStack_30 = "pia lan heap";
    FUN_007e324c(5,0,&local_38);
    DAT_043a4219 = '\x01';
    FUN_007ee41c(&local_38,5);
    if ((int)local_38 == 0) {
      local_48[0]._0_4_ = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      ppuVar1 = local_48;
    }
    else {
      ppuVar1 = &local_38;
    }
  }
  FUN_007ee578(param_1,ppuVar1);
  return;
}


