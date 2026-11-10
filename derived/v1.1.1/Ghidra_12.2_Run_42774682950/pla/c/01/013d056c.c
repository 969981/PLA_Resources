/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d056c; name: FUN_013d056c
 */


void FUN_013d056c(long param_1,long *param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x6d8) != *param_2) {
    *(long *)(param_1 + 0x6d8) = *param_2;
    FUN_013d06b0(param_1,param_1 + 0x6d8);
    if ((**(char **)(param_1 + 0x6c0) != '\0') && (lVar2 = FUN_013d0860(param_1), lVar2 != 0)) {
      uVar3 = FUN_013d08e0(param_1);
      if ((uVar3 & 1) != 0) {
        uVar4 = 0;
LAB_013d064c:
        FUN_013d2fec(lVar2,param_1 + 0x6b8,param_3,uVar4);
        return;
      }
      lVar2 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
      if (lVar2 != 0) {
        bVar1 = (*(byte *)(lVar2 + 0x5d0) & 1) != 0;
        if (bVar1) {
          FUN_013d34cc(lVar2,param_3,1);
        }
        else {
          FUN_013d2fec(lVar2,param_1 + 0x6b8,param_3,1);
        }
        FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
        lVar2 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_1");
        if (lVar2 != 0) {
          if ((*(byte *)(lVar2 + 0x5d0) & 1) != 0) {
            FUN_013d34cc(lVar2,param_3,1);
            return;
          }
          if (!bVar1) {
            return;
          }
          uVar4 = 1;
          goto LAB_013d064c;
        }
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


