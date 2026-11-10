/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146a850; name: FUN_0146a850
 */


void FUN_0146a850(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    local_50 = 0x75e8a7ee10d4a80;
    pcStack_48 = "PokedexView";
    local_40 = 0xb;
    local_38 = (long *)0x0;
    lVar1 = FUN_01470c50(*(undefined8 *)(param_1 + 0x4c8),&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_50 = 0xc63b8b496c6c79f0;
    pcStack_48 = "FSYS_X_MENU_ZUKAN_DISABLE";
    local_40 = 0x19;
    local_38 = (long *)0x0;
    uVar2 = FUN_028501c4(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((uVar2 & 1) == 0) {
      FUN_01480448(lVar1,param_2);
    }
  }
  return;
}


