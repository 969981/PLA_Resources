/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cf300; name: FUN_013cf300
 */


void FUN_013cf300(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 < 0x4e037850425419da) {
    if (lVar2 == 0x348c91cd988a31c) {
      uVar1 = 3;
    }
    else {
      if (lVar2 != 0x348ca1cd988a4cf) {
LAB_013cf3ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar1 = 4;
    }
  }
  else if (lVar2 == 0x4e037850425419da) {
    uVar1 = 1;
  }
  else {
    if (lVar2 != 0x4e03795042541b8d) goto LAB_013cf3ac;
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x5bc) = uVar1;
  return;
}


