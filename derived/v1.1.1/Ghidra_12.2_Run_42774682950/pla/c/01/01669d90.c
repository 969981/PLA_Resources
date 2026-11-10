/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01669d90; name: FUN_01669d90
 */


void FUN_01669d90(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  undefined8 in_x4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  byte *apbStack_90 [13];
  undefined8 local_28;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar3 = PTR_DAT_0437a0d8;
  uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)PTR_DAT_0437a0d8;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  plVar2 = *(long **)(puVar3 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar3 + 0x10);
  *(long **)(param_1 + 0x20) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  local_28 = 0x7e23ecd43ce201a1;
  local_b0 = &LAB_0166d288;
  local_a8 = FUN_0166d28c;
  local_a0 = &LAB_0166d538;
  local_98 = &LAB_0166d544;
  apbStack_90[0] = param_1;
  bVar5 = FUN_016698d0(&local_28,*param_2,&DAT_cbf29ce484222645,&DAT_cbf29ce484222645,in_x4,
                       &local_b0);
  pcVar4 = local_a8;
  *param_1 = bVar5 & 1;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(apbStack_90);
  }
  return;
}


