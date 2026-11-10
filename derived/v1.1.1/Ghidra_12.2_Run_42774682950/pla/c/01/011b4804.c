/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b4804; name: FUN_011b4804
 */


undefined8 FUN_011b4804(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar3 = FUN_011b2bb4();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 == '\0') {
    uVar4 = FUN_011b1f60();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_00d681d0();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      FUN_00d6802c(*(undefined8 *)(param_1 + 0x98),1);
      iVar2 = FUN_00d686a0(*(undefined8 *)(param_1 + 0x98));
      uVar6 = 1;
      if (iVar2 != 0) {
        uVar6 = 2;
      }
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      goto LAB_011b48b4;
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar4 = FUN_00d6868c(*(undefined8 *)(param_1 + 0x98));
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    if (cVar1 != '\x01') {
      return 0;
    }
    uVar4 = FUN_011b1f60();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_00d6868c(uVar5);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xbc) = 2;
      goto LAB_011b48b4;
    }
  }
  FUN_00d68088(uVar5,1);
LAB_011b48b4:
  *(undefined1 *)(param_1 + 0xb8) = 2;
  return 0;
}


