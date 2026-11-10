/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131b970; name: FUN_0131b970
 */


undefined4 FUN_0131b970(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  
  if ((int)param_2 < 7) {
    if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0131bd90();
    }
    lVar4 = 0;
    uVar3 = 0;
    piVar5 = (int *)(param_1 + (long)(int)param_2 * 0x400 + 0xe0);
    do {
      if (piVar5[-0xf] == param_3) {
        uVar2 = 0;
LAB_0131bad0:
        uVar1 = FUN_0131b6d0(param_2,uVar2 | (uint)lVar4);
        if ((uVar1 & 1) != 0) {
          uVar3 = 1;
        }
      }
      else {
        if (piVar5[-0xe] == param_3) {
          uVar2 = 1;
          goto LAB_0131bad0;
        }
        if (piVar5[-0xd] == param_3) {
          uVar2 = 2;
          goto LAB_0131bad0;
        }
        if (piVar5[-0xc] == param_3) {
          uVar2 = 3;
          goto LAB_0131bad0;
        }
        if (piVar5[-0xb] == param_3) {
          uVar2 = 4;
          goto LAB_0131bad0;
        }
        if (piVar5[-10] == param_3) {
          uVar2 = 5;
          goto LAB_0131bad0;
        }
        if (piVar5[-9] == param_3) {
          uVar2 = 6;
          goto LAB_0131bad0;
        }
        if (piVar5[-8] == param_3) {
          uVar2 = 7;
          goto LAB_0131bad0;
        }
        if (piVar5[-7] == param_3) {
          uVar2 = 8;
          goto LAB_0131bad0;
        }
        if (piVar5[-6] == param_3) {
          uVar2 = 9;
          goto LAB_0131bad0;
        }
        if (piVar5[-5] == param_3) {
          uVar2 = 10;
          goto LAB_0131bad0;
        }
        if (piVar5[-4] == param_3) {
          uVar2 = 0xb;
          goto LAB_0131bad0;
        }
        if (piVar5[-3] == param_3) {
          uVar2 = 0xc;
          goto LAB_0131bad0;
        }
        if (piVar5[-2] == param_3) {
          uVar2 = 0xd;
          goto LAB_0131bad0;
        }
        if (piVar5[-1] == param_3) {
          uVar2 = 0xe;
          goto LAB_0131bad0;
        }
        if (*piVar5 == param_3) {
          uVar2 = 0xf;
          goto LAB_0131bad0;
        }
      }
      lVar4 = lVar4 + 0x10;
      piVar5 = piVar5 + 0x10;
    } while (lVar4 != 0x100);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


