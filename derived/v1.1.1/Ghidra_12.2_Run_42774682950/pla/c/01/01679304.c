/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01679304; name: FUN_01679304
 */


void FUN_01679304(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_0437a0d0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar3 = PTR_DAT_0437a0d8;
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = *(undefined8 *)(puVar3 + 8);
  param_1[2] = *(undefined8 *)(puVar3 + 0x10);
  plVar5 = *(long **)(puVar3 + 0x18);
  param_1[3] = plVar5;
  if (plVar5 == (long *)0x0) {
    bVar1 = *puVar2;
  }
  else {
    (**(code **)(*plVar5 + 0x18))();
    bVar1 = *puVar2;
  }
  if (((bVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  param_1[4] = *(undefined8 *)puVar3;
  param_1[5] = *(undefined8 *)(puVar3 + 8);
  plVar5 = *(long **)(puVar3 + 0x18);
  param_1[6] = *(undefined8 *)(puVar3 + 0x10);
  param_1[7] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = &DAT_cbf29ce484222645;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x7d) = 0;
  return;
}


