/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018caec8; name: FUN_018caec8
 */


void FUN_018caec8(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  byte *pbStack_e8;
  size_t local_e0;
  long *local_d8;
  byte local_d0 [128];
  
  snprintf((char *)local_d0,0x80,DAT_043d18b0,(ulong)param_2);
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar8 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar8;
  local_e0 = strlen((char *)local_d0);
  if (local_d0[0] == 0) {
    local_f0 = &DAT_cbf29ce484222645;
  }
  else {
    local_f0 = &DAT_cbf29ce484222645;
    pbVar7 = (byte *)((ulong)local_d0 | 1);
    do {
      local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)local_d0[0]) * 0x100000001b3);
      local_d0[0] = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (local_d0[0] != 0);
  }
  local_d8 = (long *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  pbStack_e8 = local_d0;
  FUN_02913338(uVar8,&local_f0,&local_170,0,0,0);
  pcVar4 = local_168;
  if (local_168 == (code *)0x0) {
    local_168 = (code *)0x0;
  }
  else {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar4)(&local_150);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  puVar1 = PTR_DAT_0437a780;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar3 = PTR_DAT_0437a790;
  puVar2 = PTR_DAT_0437a788;
  uVar8 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar8;
  lVar6 = FUN_01e65c40(uVar8,param_1 + 0x78);
  if (*(undefined1 **)(lVar6 + 0xf8) != &DAT_cbf29ce484222645) {
    FUN_018cb180((undefined8 *)(lVar6 + 0xf8),param_2);
  }
  if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    uVar8 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar8;
    lVar6 = FUN_01e65c40(uVar8,(long *)(param_1 + 0x70));
    if (*(undefined1 **)(lVar6 + 0xf8) != &DAT_cbf29ce484222645) {
      FUN_018cb180((undefined8 *)(lVar6 + 0xf8),param_2);
    }
  }
  return;
}


