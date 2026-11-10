/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d0228; name: FUN_018d0228
 */


void FUN_018d0228(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  long *local_38;
  
  local_78 = 0xf789d20355f19446;
  pcStack_70 = "CAUTION";
  local_68 = 7;
  local_60 = (long *)0x0;
  FUN_02928390(auStack_58,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  puVar1 = PTR_DAT_04379e40;
  local_78 = 0x6bb320fce54b1b9b;
  pcStack_70 = "PLAY_BGM_HA_FI_CMN_CAUTION";
  local_68 = 0x1a;
  local_60 = (long *)0x0;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar3 = PTR_DAT_04379e50;
  puVar2 = PTR_DAT_04379e48;
  uVar5 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar5;
  FUN_02928520(uVar5,auStack_50,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_02928980(uVar5,auStack_50,0,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


