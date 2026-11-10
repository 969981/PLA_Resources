/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014273f8; name: FUN_014273f8
 */


undefined8 * FUN_014273f8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x830,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  puVar4[0xb6] = 0;
  puVar4[0xb7] = 0;
  *puVar4 = &PTR_FUN_0420f550;
  puVar4[1] = param_1;
  puVar4[0xb8] = 0;
  puVar4[0xb9] = 0;
  puVar4[0xba] = 0;
  puVar4[0xbb] = 0;
  puVar4[0xbc] = 0;
  puVar4[0xbd] = 0;
  *(undefined1 *)(puVar4 + 0xbe) = 0;
  puVar4[0xbf] = 0;
  puVar4[0xc0] = 0;
  puVar4[0xc1] = 0;
  puVar4[0xc2] = 0;
  puVar4[0xc3] = 0;
  puVar4[0xc4] = 0;
  puVar4[0xc5] = 0;
  *(undefined1 *)(puVar4 + 0xc6) = 0;
  *(undefined1 *)(puVar4 + 0xce) = 0;
  puVar4[0xcd] = 0;
  puVar4[0xcc] = 0;
  puVar4[0xcb] = 0;
  puVar4[0xca] = 0;
  puVar4[0xc9] = 0;
  puVar4[200] = 0;
  puVar4[199] = 0;
  puVar4[0xcf] = 0;
  puVar4[0xd0] = 0;
  puVar4[0xd1] = 0;
  puVar4[0xd2] = 0;
  puVar4[0xd3] = 0;
  puVar4[0xd4] = 0;
  puVar4[0xd5] = 0;
  *(undefined1 *)(puVar4 + 0xd6) = 0;
  puVar4[0xd7] = 0;
  puVar4[0xd8] = 0;
  puVar4[0xd9] = 0;
  puVar4[0xda] = 0;
  puVar4[0xdb] = 0;
  puVar4[0xdc] = 0;
  puVar4[0xdd] = 0;
  *(undefined1 *)(puVar4 + 0xde) = 0;
  *(undefined1 *)(puVar4 + 0xe6) = 0;
  puVar4[0xe5] = 0;
  puVar4[0xe4] = 0;
  puVar4[0xe3] = 0;
  puVar4[0xe2] = 0;
  puVar4[0xe1] = 0;
  puVar4[0xe0] = 0;
  puVar4[0xdf] = 0;
  *(undefined1 *)(puVar4 + 0xf0) = 0;
  puVar4[0xef] = 0;
  puVar4[0xee] = 0;
  puVar4[0xed] = 0;
  puVar4[0xec] = 0;
  puVar4[0xeb] = 0;
  puVar4[0xea] = 0;
  puVar4[0xe9] = 0;
  puVar4[0xe8] = 0;
  puVar4[0xe7] = 0;
  *(undefined1 *)(puVar4 + 0xf5) = 0;
  puVar4[0xf4] = 0;
  puVar4[0xf3] = 0;
  puVar4[0xf2] = 0;
  puVar4[0xf1] = 0;
  *(undefined1 *)(puVar4 + 0xfa) = 0;
  puVar4[0xf9] = 0;
  puVar4[0xf8] = 0;
  puVar4[0xf7] = 0;
  puVar4[0xf6] = 0;
  *(undefined1 *)(puVar4 + 0xff) = 0;
  puVar4[0xfe] = 0;
  puVar4[0xfd] = 0;
  puVar4[0xfc] = 0;
  puVar4[0xfb] = 0;
  *(undefined2 *)((long)puVar4 + 0x804) = 0;
  *(undefined4 *)(puVar4 + 0x101) = 0;
  puVar4[0x104] = 0;
  puVar4[0x103] = 0;
  puVar4[0x102] = 0;
  puVar4[9] = &PTR_LAB_0420f5f0;
  puVar4[10] = &PTR_LAB_0420f638;
  *(undefined4 *)(puVar4 + 0x100) = 3;
  puVar4[2] = puVar4;
  puVar4[3] = 0x830;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


