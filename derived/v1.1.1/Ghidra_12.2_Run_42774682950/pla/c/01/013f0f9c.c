/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f0f9c; name: FUN_013f0f9c
 */


undefined8 * FUN_013f0f9c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xc30,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *(undefined8 *)((long)puVar4 + 0x5ac) = 0;
  *puVar4 = &PTR_LAB_0420c558;
  puVar4[9] = &PTR_LAB_0420c620;
  puVar4[10] = &PTR_LAB_0420c668;
  puVar4[0xd7] = 0x4487000044f00000;
  puVar4[0xda] = 0xffffffff00000000;
  *(undefined4 *)((long)puVar4 + 0x5b4) = 0;
  puVar4[0xba] = 0;
  puVar4[0xbb] = 0;
  puVar4[0xbc] = 0;
  puVar4[0xbd] = 0;
  puVar4[0xb7] = 0;
  puVar4[0xb8] = 0;
  puVar4[0xca] = 0;
  puVar4[0xcb] = 0;
  puVar4[0xcc] = 0;
  puVar4[0xcd] = 0;
  puVar4[0xce] = 0;
  puVar4[0xcf] = 0;
  puVar4[0xd0] = 0;
  puVar4[0xd1] = 0;
  puVar4[0xd2] = 0;
  puVar4[0xd3] = 0;
  puVar4[0xd4] = 0;
  puVar4[0xd5] = 0;
  puVar4[0xd6] = 0;
  *(undefined4 *)(puVar4 + 0xd8) = 0;
  *(undefined2 *)((long)puVar4 + 0x6c4) = 0;
  *(undefined4 *)(puVar4 + 0xd9) = 0;
  *(undefined2 *)((long)puVar4 + 0x6cc) = 0;
  *(undefined2 *)(puVar4 + 0xdb) = 0;
  *(undefined4 *)((long)puVar4 + 0x6ec) = 0;
  *(undefined2 *)(puVar4 + 0xde) = 0;
  *(undefined8 *)((long)puVar4 + 0x6dc) = 0;
  *(undefined8 *)((long)puVar4 + 0x6e2) = 0;
  FUN_013e98a0((long)puVar4 + 0x6f4);
  *(undefined1 *)((long)puVar4 + 0xc24) = 0;
  *(undefined8 *)((long)puVar4 + 0xc1c) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0xc30;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


