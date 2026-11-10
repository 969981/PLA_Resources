/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825790; name: FUN_00825790
 */


void FUN_00825790(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_28 [2];
  
  FUN_008290b0();
  uVar1 = FUN_007e2d00();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10408;
  }
  else {
    if (DAT_043a5589 != '\x01') {
      local_38 = PTR_DAT_043773d0 + 0x10;
      pcStack_30 = "pia session heap";
      FUN_007e324c(0x12,0,&local_38);
      DAT_043a5589 = '\x01';
      FUN_007ee41c(&local_38,0x12);
      local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
      goto LAB_00825828;
    }
    uVar2 = 0x10402;
  }
  local_38 = (undefined *)CONCAT44(local_38._4_4_,uVar2);
LAB_00825828:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,&local_38);
  return;
}


