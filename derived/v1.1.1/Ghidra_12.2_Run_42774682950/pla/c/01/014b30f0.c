/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b30f0; name: FUN_014b30f0
 */


void FUN_014b30f0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0xea8bbf6b79c35695;
  local_38 = "Credits";
  local_30 = 7;
  FUN_00d18d1c(&local_48,&local_40);
  plVar2 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_48;
  if (((*PTR_DAT_04379e28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e28);
  }
  uVar3 = *(undefined8 *)PTR_DAT_04379e30;
  *(undefined8 *)PTR_DAT_04379e38 = uVar3;
  FUN_00d265c8(uVar3,0,0);
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar1 != 0))
  {
    uVar3 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar3;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar2 != (long *)PTR_DAT_04379c98) {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)PTR_DAT_04379c98; plVar2 = (long *)*plVar2) {
    }
  }
  local_40 = 0x4c2e1a595c658a5a;
  local_38 = "ViewCredits";
  local_30 = 0xb;
  uStack_28 = 0;
  uVar3 = FUN_014b372c(puVar5[0x8f],&local_40);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_014b16d0();
  }
  lVar4 = FUN_014afcc0();
  *(long *)(param_1 + 0x98) = lVar4;
  if ((*(long *)(param_1 + 0x90) == 0) || (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  nn::oe::DisableScreenShot();
  nn::oe::DisableRecording();
  nn::oe::SetUserInactivityDetectionTimeExtended(true);
  return;
}


