/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809b10; name: FUN_00809b10
 */


void FUN_00809b10(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *local_30;
  char *pcStack_28;
  undefined4 local_18 [2];
  
  FUN_00809e00();
  uVar1 = FUN_007e2d00();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10408;
  }
  else {
    if (DAT_043a4018 != '\x01') {
      local_30 = PTR_DAT_043773d0 + 0x10;
      pcStack_28 = "pia local heap";
      FUN_007e324c(6,0,&local_30);
      DAT_043a4018 = '\x01';
      FUN_007ee41c(&local_30,6);
      local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
      goto LAB_00809ba4;
    }
    uVar2 = 0x10402;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,uVar2);
LAB_00809ba4:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,&local_30);
  return;
}


