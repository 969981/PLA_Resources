/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025cf150; name: FUN_025cf150
 */


void FUN_025cf150(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 *local_a0;
  
  FUN_01aa8b2c();
  *param_1 = &PTR_LAB_0425fe28;
  param_1[100] = 0;
  param_1[99] = &PTR_LAB_04260090;
  param_1[9] = &PTR_LAB_0425ff88;
  param_1[10] = &PTR_LAB_04260068;
  param_1[0x65] = 0;
  FUN_00aeb228(param_1 + 100,param_2 + 0xa8);
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  FUN_00aeb228(param_1 + 0x66,param_2 + 0xb8);
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  FUN_00aeb228(param_1 + 0x68,param_2 + 200);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  FUN_00aeb228(param_1 + 0x6a,param_2 + 0xd8);
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  FUN_00aeb228(param_1 + 0x6c,param_2 + 0xe8);
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  FUN_00aeb228(param_1 + 0x6e,param_2 + 0xf8);
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  FUN_00aeb228(param_1 + 0x70,param_2 + 0x108);
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  FUN_00aeb228(param_1 + 0x72,param_2 + 0x118);
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  FUN_00aeb228(param_1 + 0x74,param_2 + 0x128);
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  FUN_00aeb228(param_1 + 0x76,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x78) = 0;
  plVar4 = (long *)param_1[1];
  param_1[0x79] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xf0,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  local_c0 = &LAB_025d17b0;
  puStack_b8 = &LAB_025d17c0;
  local_b0 = &LAB_025d17c4;
  puStack_a8 = &LAB_025d17d0;
  local_a0 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(&local_c0,lVar3);
}


