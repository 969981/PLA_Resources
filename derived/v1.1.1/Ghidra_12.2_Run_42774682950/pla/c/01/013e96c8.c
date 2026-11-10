/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e96c8; name: FUN_013e96c8
 */


undefined8 * FUN_013e96c8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xce0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *(undefined1 *)((long)puVar4 + 0x5ab) = 1;
  *puVar4 = &PTR_LAB_0420cbe8;
  puVar4[0xc6] = 0;
  puVar4[9] = &PTR_LAB_0420ccb0;
  puVar4[10] = &PTR_LAB_0420ccf8;
  puVar4[199] = 0;
  puVar4[200] = 0;
  puVar4[0xc9] = 0;
  puVar4[0xd6] = 0;
  puVar4[0xd7] = 0;
  puVar4[0xd8] = 0;
  puVar4[0xd9] = 0;
  *(undefined4 *)((long)puVar4 + 0x794) = 0;
  *(undefined4 *)((long)puVar4 + 0x5cc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5ac) = 0;
  *(undefined8 *)((long)puVar4 + 0x5b4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5bc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c4) = 0;
  *(undefined2 *)(puVar4 + 0xf2) = 0;
  puVar4[0xf1] = 0;
  puVar4[0xf0] = 0;
  puVar4[0xef] = 0;
  puVar4[0xee] = 0;
  puVar4[0xed] = 0;
  puVar4[0xec] = 0;
  puVar4[0xeb] = 0;
  puVar4[0xea] = 0;
  puVar4[0xe9] = 0;
  puVar4[0xe8] = 0;
  puVar4[0xe7] = 0;
  puVar4[0xe6] = 0;
  FUN_013e98a0(puVar4 + 0xf3);
  *(undefined4 *)(puVar4 + 0x19a) = 0;
  *(undefined1 *)((long)puVar4 + 0xcd4) = 0;
  *(undefined4 *)(puVar4 + 0x19b) = 0;
  *(undefined1 *)((long)puVar4 + 0xcdc) = 0;
  puVar4[0x198] = 0;
  *(undefined8 *)((long)puVar4 + 0xcc6) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0xce0;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


