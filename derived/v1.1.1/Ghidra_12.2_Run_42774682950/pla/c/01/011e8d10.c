/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e8d10; name: FUN_011e8d10
 */


void FUN_011e8d10(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_c4;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379690), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  uVar4 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar4;
  uVar3 = FUN_0286b0c0(uVar4,0x24);
  if ((uVar3 & 1) != 0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    FUN_0286b22c(uVar4,0x24,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(auStack_80);
    }
  }
  local_c0 = 0xdca5acb5512330bd;
  pcStack_b8 = "HayabusaSkyEnable";
  local_b0 = 0x1f;
  local_a8 = (long *)0x0;
  local_c4 = 1;
  FUN_02ad63f8(&local_c0,&local_c4);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  return;
}


