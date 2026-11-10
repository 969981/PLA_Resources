/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef3618; name: FUN_01ef3618
 */


void FUN_01ef3618(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  long *local_60;
  undefined1 local_58;
  byte local_57;
  long local_50 [3];
  long *local_38;
  
  FUN_01669d90(&local_58);
  *(byte *)(param_2 + 0xf9) = *(byte *)(param_2 + 0xf9) | local_57;
  *(undefined1 *)(param_2 + 0xfb) = local_58;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar1 = PTR_DAT_04379e40;
  if (local_50[0] != *(long *)PTR_DAT_0437a0d8) {
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40,local_50), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar3 = PTR_DAT_04379e50;
    puVar2 = PTR_DAT_04379e48;
    uVar5 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar5;
    FUN_029278b4(auStack_80,uVar5,local_50);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_02928f7c(uVar5,auStack_78);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


