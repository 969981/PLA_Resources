/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028f0b8; name: FUN_0028f0b8
 */


void FUN_0028f0b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_0028ef4c();
  *(long *)(param_1 + 8) = param_4;
  if (*(int *)(param_1 + 0x1c) == 2) {
    if (*(int *)(param_1 + 0x20) == 2) {
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar4 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x40);
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = (int)lVar4 / iVar1;
          }
          *(int *)(param_4 + lVar4 * 4) = (int)lVar4 - iVar3 * iVar1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x28));
      }
    }
    else if ((*(int *)(param_1 + 0x20) == 3) && (0 < *(int *)(param_1 + 0x40))) {
      lVar4 = 0;
      uVar5 = 2;
      do {
        *(int *)(param_4 + (ulong)(uVar5 - 2) * 4) = (int)lVar4;
        iVar1 = *(int *)(param_1 + 0x40);
        lVar4 = lVar4 + 1;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = (int)lVar4 / iVar1;
        }
        *(int *)(param_4 + (ulong)(uVar5 - 1) * 4) = (int)lVar4 - iVar3 * iVar1;
        *(undefined4 *)(param_4 + (ulong)uVar5 * 4) = *(undefined4 *)(param_1 + 0x40);
        uVar5 = uVar5 + 3;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    if (*(int *)(param_1 + 0x20) == 2) {
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar4 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x40);
          sVar2 = 0;
          if (iVar1 != 0) {
            sVar2 = (short)((int)lVar4 / iVar1);
          }
          *(short *)(param_4 + lVar4 * 2) = (short)lVar4 - sVar2 * (short)iVar1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x28));
      }
    }
    else if ((*(int *)(param_1 + 0x20) == 3) && (0 < *(int *)(param_1 + 0x40))) {
      lVar4 = 0;
      uVar5 = 2;
      do {
        *(short *)(param_4 + (ulong)(uVar5 - 2) * 2) = (short)lVar4;
        iVar1 = *(int *)(param_1 + 0x40);
        lVar4 = lVar4 + 1;
        sVar2 = 0;
        if (iVar1 != 0) {
          sVar2 = (short)((int)lVar4 / iVar1);
        }
        *(short *)(param_4 + (ulong)(uVar5 - 1) * 2) = (short)lVar4 - sVar2 * (short)iVar1;
        *(short *)(param_4 + (ulong)uVar5 * 2) = (short)*(undefined4 *)(param_1 + 0x40);
        uVar5 = uVar5 + 3;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}


