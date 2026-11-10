/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134e8e0; name: FUN_0134e8e0
 */


void FUN_0134e8e0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_40;
  long lStack_38;
  long *local_28;
  
  lVar2 = FUN_009ae864(&local_40,*(undefined8 *)(param_1 + 0x58));
  if (lVar2 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar2 + 0x58));
  }
  plVar4 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((plVar4 == (long *)0x0) || (uVar3 = FUN_02a43a5c(plVar4[0xb]), (uVar3 & 1) == 0)) {
    *(long *)(param_1 + 0x60) = lVar2;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    *(long *)(param_1 + 0x60) = lVar2;
  }
  if (lVar2 != 0) {
    lVar2 = FUN_0134ee74(lVar2,*(undefined8 *)(lVar2 + 8),&DAT_0393acb9);
    *(long *)(param_1 + 0x68) = lVar2;
    if (lVar2 != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04379678), iVar1 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar2 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar2;
      plVar4 = *(long **)(lVar2 + 0xc0);
      if (plVar4 != (long *)0x0) {
        FUN_02a439f4(plVar4[0xb]);
      }
      local_40 = plVar4[0x2e];
      lStack_38 = plVar4[0x2f];
      if ((plVar4 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar4[0xb]), (uVar3 & 1) != 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      local_28 = *(long **)(param_1 + 0x60);
      if (local_28 != (long *)0x0) {
        FUN_02a439f4(local_28[0xb]);
      }
      FUN_00da9be0(&local_28,&local_40);
      plVar4 = local_28;
      if ((local_28 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_28[0xb]), (uVar3 & 1) != 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


