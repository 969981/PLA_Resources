/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e530c; name: FUN_014e530c
 */


void FUN_014e530c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_50 = &DAT_7167f64cea5b86b8;
  local_48 = "execute";
  local_40 = 7;
  FUN_00d18d1c(&local_28,&local_50);
  plVar3 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_28;
  lVar4 = FUN_014e56bc(*(undefined8 *)(param_1 + 0x78));
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + 0x68);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0))
  {
    uVar5 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar5;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar3 != (long *)PTR_DAT_04379c98) {
    for (plVar3 = (long *)*plVar3; plVar3 != (long *)PTR_DAT_04379c98; plVar3 = (long *)*plVar3) {
    }
  }
  local_50 = &DAT_753f74378b49da9c;
  local_48 = "View_Top";
  local_40 = 8;
  uStack_38 = 0;
  lVar4 = FUN_014e5800(puVar6[0x8f],&local_50);
  *(long *)(param_1 + 0x90) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_014e9558(lVar4,uVar1);
  return;
}


