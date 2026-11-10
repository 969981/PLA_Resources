/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4f950; name: FUN_02c4f950
 */


void FUN_02c4f950(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (((DAT_043f2370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2370), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_043f2328);
    FUN_00100250(&LAB_02c4f938,&DAT_043f2328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f2370);
  }
  nn::mem::StandardAllocator::Hash();
  if (((DAT_043f2370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2370), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_043f2328);
    FUN_00100250(&LAB_02c4f938,&DAT_043f2328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f2370);
  }
  uVar2 = nn::mem::StandardAllocator::GetTotalFreeSize();
  if (((DAT_043f2370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2370), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_043f2328);
    FUN_00100250(&LAB_02c4f938,&DAT_043f2328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f2370);
  }
  uVar3 = nn::mem::StandardAllocator::GetAllocatableSize();
  auVar4 = nn::os::GetVirtualAddressMemoryResourceUsage();
  *param_1 = local_58;
  param_1[1] = uStack_50;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = auVar4._8_8_;
  param_1[5] = auVar4._0_8_;
  return;
}


