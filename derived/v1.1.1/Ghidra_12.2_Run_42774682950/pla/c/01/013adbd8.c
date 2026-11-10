/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013adbd8; name: FUN_013adbd8
 */


ulong FUN_013adbd8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == 8) {
    uVar2 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),4);
    if ((uVar2 & 1) != 0) {
LAB_013adc58:
      uVar2 = 0x400000000;
      if (*(int *)(param_1 + 0xb4) != 0) {
        uVar2 = 0x300000000;
      }
      uVar4 = 1;
      goto LAB_013adc38;
    }
    uVar2 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),5);
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      uVar4 = 1;
      goto LAB_013adc38;
    }
  }
  else {
    if (iVar1 == 7) {
      uVar2 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),3);
      if ((uVar2 & 1) == 0) goto LAB_013adc30;
      uVar3 = 8;
    }
    else {
      if (iVar1 != 6) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar2 = FUN_01396eb0(*(undefined8 *)(param_1 + 0xa0));
      if ((uVar2 & 1) == 0) goto LAB_013adc58;
      uVar3 = 7;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar3;
  }
LAB_013adc30:
  uVar4 = 0;
  uVar2 = 0;
LAB_013adc38:
  return uVar2 | uVar4;
}


