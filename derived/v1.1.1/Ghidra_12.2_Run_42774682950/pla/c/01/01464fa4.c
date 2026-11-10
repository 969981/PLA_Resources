/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01464fa4; name: FUN_01464fa4
 */


void FUN_01464fa4(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar2 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView");
    if (lVar2 == 0) goto LAB_014651d4;
    local_50 = DAT_04270880;
    pcStack_48 = PTR_s_FSYS_X_MENU_BAG_DISABLE_04270888;
    local_40 = DAT_04270890;
    local_38 = (long *)0x0;
    uVar3 = FUN_028501c4(&local_50);
    if ((uVar3 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      local_70 = DAT_04270898;
      puStack_68 = PTR_s_FSYS_S3_CAPTURE_EVENT_042708a0;
      local_60 = DAT_042708a8;
      local_58 = (long *)0x0;
      uVar3 = FUN_028501c4(&local_70);
      uVar3 = uVar3 & 0xffffffff;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((uVar3 & 1) != 0) {
      FUN_0257ca08(lVar2);
    }
  }
  if (((*(byte *)(param_1 + 0x6d0) & 3) == 0) && (lVar2 = FUN_0146819c(), lVar2 != 0)) {
    FUN_00d42690(lVar2,1,1);
  }
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 == 0) goto LAB_014651d4;
    FUN_0148d248();
  }
  *(undefined2 *)(param_1 + 0x6a0) = 0x101;
  bVar1 = FUN_0195323c(1);
  *(byte *)(param_1 + 0x6a3) = bVar1 & 1;
  uVar3 = *(ulong *)(param_1 + 0x6d0);
  if ((uVar3 & 3) == 0) {
    local_50 = 0x7f7e4efd5cc9936b;
    pcStack_48 = "FabhView";
    local_40 = 8;
    local_38 = (long *)0x0;
    lVar2 = FUN_0146fe3c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (lVar2 == 0) goto LAB_014651d4;
    FUN_014743c8(lVar2);
    uVar3 = *(ulong *)(param_1 + 0x6d0);
  }
  if ((uVar3 & 3) == 0) {
    local_50 = 0x5e6b838ab8d8ec70;
    pcStack_48 = "QIconView";
    local_40 = 9;
    local_38 = (long *)0x0;
    lVar2 = FUN_01470560(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (lVar2 == 0) goto LAB_014651d4;
    FUN_01482f84();
  }
  lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x2b90) != '\0') && (*(long *)(lVar2 + 11000) == 0)) {
      *(char *)(lVar2 + 0x2b90) = '\0';
    }
    FUN_01466638();
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 != 0) {
      FUN_01490454();
      FUN_01466924(param_1);
      return;
    }
  }
LAB_014651d4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


