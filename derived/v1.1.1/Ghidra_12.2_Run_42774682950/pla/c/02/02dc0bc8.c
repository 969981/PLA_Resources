/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc0bc8; name: FUN_02dc0bc8
 */


void FUN_02dc0bc8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  
  FUN_00afa5ac();
  puVar4 = PTR_DAT_0437a7b8;
  *param_1 = (long)(PTR_DAT_0437a7b8 + 0x10);
  param_1[9] = (long)(puVar4 + 0x88);
  param_1[10] = (long)(puVar4 + 0x128);
  nn::os::InitializeLightEvent((long)param_1 + 0x6c,0,1);
  *param_1 = (long)&PTR_LAB_0429acf0;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[9] = (long)&PTR_LAB_0429ad80;
  param_1[10] = (long)&PTR_LAB_0429ae20;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  param_1[0x12] = *(long *)PTR_DAT_0437a0d8;
  param_1[0x13] = *(long *)(puVar4 + 8);
  plVar2 = *(long **)(puVar4 + 0x18);
  param_1[0x14] = *(long *)(puVar4 + 0x10);
  param_1[0x15] = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = -0x417fffffc1800000;
  param_1[0x1e] = 0x3e800000be800000;
  puVar4 = PTR_DAT_04379570;
  *(undefined4 *)(param_1 + 0x18) = 0x3f000000;
  param_1[0x16] = 0x4170000041f00000;
  param_1[0x17] = 1;
  param_1[0x1f] = -0xfffffffe;
  lVar1 = *(long *)puVar4;
  lVar3 = *(long *)(puVar4 + 8);
  *(undefined1 *)((long)param_1 + 0x102) = 1;
  *(undefined4 *)((long)param_1 + 0x104) = 0x40a00000;
  param_1[0x1a] = lVar1;
  param_1[0x1b] = lVar3;
  param_1[0x1c] = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0x3f000000;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x32] = 0;
  param_1[0x26] = lVar1;
  param_1[0x27] = lVar3;
  param_1[0x2c] = lVar1;
  param_1[0x2d] = lVar3;
  param_1[0x30] = 5;
  param_1[0x31] = 5;
  return;
}


