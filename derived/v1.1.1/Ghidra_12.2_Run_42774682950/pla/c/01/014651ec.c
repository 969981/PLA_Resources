/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014651ec; name: FUN_014651ec
 */


void FUN_014651ec(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*(byte *)(param_1 + 0x6d0) & 3) == 0) && (lVar2 = FUN_0146819c(), lVar2 != 0)) {
    FUN_00d42690(lVar2,1,1);
  }
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 == 0) goto LAB_01465400;
    FUN_0148d248();
  }
  *(undefined2 *)(param_1 + 0x6a0) = 0x101;
  bVar1 = FUN_0195323c(1);
  *(byte *)(param_1 + 0x6a3) = bVar1 & 1;
  if (((*(byte *)(param_1 + 0x6d0) & 3) == 0) && (uVar3 = FUN_0195323c(1), (uVar3 & 1) == 0)) {
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 == 0) goto LAB_01465400;
    if ((*(long *)(lVar2 + 0x3f30) != 0) && (*(char *)(*(long *)(lVar2 + 0x3f30) + 0xd0) == '\0')) {
      FUN_0145f344();
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x6d0);
  if ((uVar3 & 3) == 0) {
    local_40 = 0x7f7e4efd5cc9936b;
    pcStack_38 = "FabhView";
    local_30 = 8;
    local_28 = (long *)0x0;
    lVar2 = FUN_0146fe3c(*(undefined8 *)(param_1 + 0x4c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (lVar2 == 0) goto LAB_01465400;
    FUN_014743c8(lVar2);
    uVar3 = *(ulong *)(param_1 + 0x6d0);
  }
  if ((uVar3 & 3) == 0) {
    local_40 = 0x5e6b838ab8d8ec70;
    pcStack_38 = "QIconView";
    local_30 = 9;
    local_28 = (long *)0x0;
    lVar2 = FUN_01470560(*(undefined8 *)(param_1 + 0x4c8),&local_40);
    if (lVar2 == 0) goto LAB_01465400;
    FUN_01482f84();
    uVar3 = *(ulong *)(param_1 + 0x6d0);
  }
  if ((uVar3 & 3) == 0) {
    local_40 = 0x9104efa44142b95e;
    pcStack_38 = "GuideView";
    local_30 = 9;
    local_28 = (long *)0x0;
    lVar2 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (lVar2 == 0) goto LAB_01465400;
    FUN_0147572c(lVar2);
  }
  lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x2b90) != '\0') && (*(long *)(lVar2 + 11000) == 0)) {
      *(char *)(lVar2 + 0x2b90) = '\0';
    }
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 != 0) {
      FUN_01490454();
      FUN_01466924(param_1);
      return;
    }
  }
LAB_01465400:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


