/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d58f0; name: FUN_014d58f0
 */


ulong FUN_014d58f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0xa8) == 0) || (lVar1 = FUN_014d4b64(), lVar1 == 0)) {
    uVar2 = 0x900000000;
    uVar3 = 1;
    goto LAB_014d594c;
  }
  if (*(int *)(param_1 + 0xa4) == 0xf) {
    uVar2 = FUN_014de850(lVar1,4);
    if ((uVar2 & 1) == 0) goto LAB_014d5980;
    uVar3 = 1;
    uVar2 = FUN_014de870(lVar1,1);
    if ((uVar2 & 1) == 0) goto LAB_014d5980;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0xe) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar2 = FUN_014de744(lVar1,4);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0xf;
    }
LAB_014d5980:
    uVar3 = 0;
  }
  uVar2 = 0;
LAB_014d594c:
  return uVar2 | uVar3;
}


