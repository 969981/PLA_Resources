/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099cba0; name: FUN_0099cba0
 */


void FUN_0099cba0(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_0437a0d0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar3 = PTR_DAT_0437a0d8;
  param_1[4] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[5] = *(undefined8 *)(puVar3 + 8);
  plVar1 = *(long **)(puVar3 + 0x18);
  param_1[6] = *(undefined8 *)(puVar3 + 0x10);
  param_1[7] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  param_1[0x1a] = *(undefined8 *)puVar3;
  param_1[0x1b] = *(undefined8 *)(puVar3 + 8);
  plVar1 = *(long **)(puVar3 + 0x18);
  param_1[0x1c] = *(undefined8 *)(puVar3 + 0x10);
  param_1[0x1d] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined2 *)(param_1 + 0x1e) = 0;
  FUN_009ab478(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x14c) = 1;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}


