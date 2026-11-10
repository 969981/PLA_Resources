/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01464eb0; name: FUN_01464eb0
 */


void FUN_01464eb0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar1 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView");
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_40 = DAT_04270880;
    puStack_38 = PTR_s_FSYS_X_MENU_BAG_DISABLE_04270888;
    local_30 = DAT_04270890;
    local_28 = (long *)0x0;
    uVar2 = FUN_028501c4(&local_40);
    if ((uVar2 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      local_60 = DAT_04270898;
      puStack_58 = PTR_s_FSYS_S3_CAPTURE_EVENT_042708a0;
      local_50 = DAT_042708a8;
      local_48 = (long *)0x0;
      uVar2 = FUN_028501c4(&local_60);
      uVar2 = uVar2 & 0xffffffff;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar2 & 1) != 0) {
      FUN_0257ca08(lVar1);
      return;
    }
  }
  return;
}


