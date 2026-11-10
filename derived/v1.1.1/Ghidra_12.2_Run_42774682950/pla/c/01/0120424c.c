/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120424c; name: FUN_0120424c
 */


void FUN_0120424c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *local_48;
  char *local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  
  local_48 = (undefined1 *)0xd409633696fefd9d;
  local_40 = "change";
  local_38 = 6;
  FUN_00d18d1c(&local_28,&local_48);
  plVar2 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_28;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar1 != 0))
  {
    uVar4 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar4;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar2 != (long *)PTR_DAT_04379c98) {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)PTR_DAT_04379c98; plVar2 = (long *)*plVar2) {
    }
  }
  local_48 = &DAT_753f74378b49da9c;
  local_40 = "View_Top";
  local_38 = 8;
  local_30 = (long *)0x0;
  lVar3 = FUN_011f88bc(puVar5[0x8f],&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  *(long *)(param_1 + 0x90) = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00d42438(lVar3,0,1);
  return;
}


