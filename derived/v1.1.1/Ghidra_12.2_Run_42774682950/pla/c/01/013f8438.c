/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f8438; name: FUN_013f8438
 */


void FUN_013f8438(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar2 = FUN_013f80d4();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar1 != 0))
  {
    uVar4 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar4;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar3 != (long *)PTR_DAT_04379c98) {
    for (plVar3 = (long *)*plVar3; plVar3 != (long *)PTR_DAT_04379c98; plVar3 = (long *)*plVar3) {
    }
  }
  local_40 = 0xb7bb79e53203acd4;
  pcStack_38 = "View_Detail";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  uVar4 = FUN_013eaef0(puVar5[0x8f],&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  iVar1 = (uint)(*(int *)(lVar2 + 0x74) == 2) << 1;
  if (*(int *)(lVar2 + 0x74) == 1) {
    iVar1 = 1;
  }
  FUN_013fdee8(uVar4,iVar1);
  return;
}


