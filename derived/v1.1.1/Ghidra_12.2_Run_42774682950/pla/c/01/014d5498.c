/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d5498; name: FUN_014d5498
 */


ulong FUN_014d5498(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(long *)(param_1 + 0xa8) == 0) || (lVar1 = FUN_014d4b64(), lVar1 == 0)) {
LAB_014d5554:
    uVar2 = 0x900000000;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        uVar2 = FUN_014de850(lVar1,1);
        if ((uVar2 & 1) != 0) {
LAB_014d551c:
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0xa4) = 2;
          uVar2 = 0;
          goto LAB_014d555c;
        }
      }
      else {
        if (iVar3 != 0) {
LAB_014d55c4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        uVar2 = FUN_014de850(lVar1,1);
        if ((uVar2 & 1) != 0) goto LAB_014d551c;
        uVar2 = FUN_014de744(lVar1,1);
        if ((uVar2 & 1) != 0) {
          uVar4 = 0;
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0xa4) = 1;
          goto LAB_014d555c;
        }
      }
LAB_014d55a8:
      uVar4 = 0;
      uVar2 = 0;
      goto LAB_014d555c;
    }
    uVar2 = FUN_014de870(lVar1,1);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_014de870(lVar1,2);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_014de880(lVar1), (uVar2 & 0xff) == 0))
      goto LAB_014d55a8;
      iVar3 = (int)(uVar2 >> 0x20);
      if (iVar3 == 0) {
        uVar2 = 0x100000000;
      }
      else {
        if (iVar3 != 1) goto LAB_014d55c4;
        uVar2 = 0x200000000;
      }
    }
    else {
      if ((*(long *)(param_1 + 0x78) != 0) && (lVar1 = FUN_014d472c(), lVar1 != 0)) {
        FUN_014db880();
        goto LAB_014d5554;
      }
      uVar2 = 0x800000000;
    }
  }
  uVar4 = 1;
LAB_014d555c:
  return uVar2 | uVar4;
}


