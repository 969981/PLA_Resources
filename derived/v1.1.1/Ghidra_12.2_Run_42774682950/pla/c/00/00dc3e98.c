/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc3e98; name: FUN_00dc3e98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc3e98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  code *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = PTR_DAT_0437b6f0;
  uRam00000000043ad2d8 = _UNK_03889fd8;
  _DAT_043ad2d0 = _DAT_03889fd0;
  DAT_043ad280 = *(undefined8 *)PTR_DAT_0437b6e8;
  DAT_043ad288 = *(undefined8 *)(PTR_DAT_0437b6e8 + 8);
  local_b0 = &LAB_00dc4260;
  local_a8 = FUN_00dc4324;
  local_a0 = &LAB_00dc44a8;
  puStack_98 = &LAB_00dc44ac;
  DAT_043ad290 = DAT_043ad280;
  DAT_043ad298 = DAT_043ad288;
  if (((*PTR_DAT_0437b6f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar5 != 0))
  {
    FUN_00100250(&LAB_00dc41b4,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  puVar3 = PTR_DAT_0437b700;
  puVar2 = PTR_DAT_0437b6f8;
  uVar6 = *(undefined8 *)PTR_DAT_0437b6f8;
  *(undefined8 *)PTR_DAT_0437b700 = uVar6;
  FUN_00dc4020(uVar6,&local_b0);
  local_108 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = FUN_00dc40bc;
  uStack_e8 = 0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar5 != 0)) {
    FUN_00100250(&LAB_00dc41b4,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar7 = *(long *)puVar2;
  *(long *)puVar3 = lVar7;
  FUN_02c9cd0c(*(undefined8 *)(lVar7 + 0x58),0,&local_108);
  pcVar4 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(auStack_90);
  }
  return;
}


