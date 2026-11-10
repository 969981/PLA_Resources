/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469774; name: FUN_01469774
 */


void FUN_01469774(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x9104efa44142b95e;
  pcStack_48 = "GuideView";
  local_40 = 9;
  lVar1 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x5b0);
  FUN_0145c9cc(uVar2,param_2);
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    FUN_0145d49c(uVar2);
  }
  return;
}


