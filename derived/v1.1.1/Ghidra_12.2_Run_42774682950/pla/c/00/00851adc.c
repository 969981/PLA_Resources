/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851adc; name: FUN_00851adc
 */


void FUN_00851adc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x70) != 0) && (lVar1 = FUN_00847388(), lVar1 != 0)) {
    FUN_00851b2c(param_1);
    uVar2 = FUN_0084bbb0(*(undefined8 *)(param_1 + 0x70));
    if ((uVar2 & 1) != 0) {
      FUN_00851c58(param_1);
      FUN_00852b68(param_1);
      FUN_008498fc(param_1);
      return;
    }
  }
  return;
}


