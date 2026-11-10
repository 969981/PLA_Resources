/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01464cc8; name: FUN_01464cc8
 */


void FUN_01464cc8(long param_1)

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
    if (lVar2 == 0) goto LAB_01464e98;
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
    if (lVar2 == 0) goto LAB_01464e98;
    FUN_0148d248();
  }
  *(undefined2 *)(param_1 + 0x6a0) = 0x101;
  bVar1 = FUN_0195323c(1);
  *(byte *)(param_1 + 0x6a3) = bVar1 & 1;
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 == 0) goto LAB_01464e98;
    FUN_014610bc(*(undefined8 *)(lVar2 + 0x3f50));
  }
  FUN_014667f0(param_1);
  FUN_01466924(param_1);
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    local_50 = 0x9104efa44142b95e;
    pcStack_48 = "GuideView";
    local_40 = 9;
    local_38 = (long *)0x0;
    lVar2 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (lVar2 == 0) {
LAB_01464e98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_0147572c(lVar2);
  }
  return;
}


