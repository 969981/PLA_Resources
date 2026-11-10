/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011be970; name: FUN_011be970
 */


undefined8 * FUN_011be970(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x950,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *puVar4 = &PTR_FUN_041f71c0;
  *(undefined4 *)(puVar4 + 0xb9) = 0;
  puVar4[9] = &PTR_LAB_041f7260;
  puVar4[10] = &PTR_LAB_041f72a8;
  *(undefined1 *)((long)puVar4 + 0x5cc) = 0;
  *(undefined4 *)((long)puVar4 + 0x5ac) = 0;
  *(undefined4 *)((long)puVar4 + 0x5af) = 0;
  *(undefined4 *)(puVar4 + 0xba) = 9;
  *(undefined2 *)((long)puVar4 + 0x5be) = 0;
  *(undefined1 *)(puVar4 + 0xb8) = 0;
  *(undefined2 *)((long)puVar4 + 0x5c2) = 0;
  *(undefined1 *)((long)puVar4 + 0x5c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5b4) = 0;
  *(undefined1 *)((long)puVar4 + 0x5bc) = 0;
  *(undefined4 *)((long)puVar4 + 0x5f4) = 0;
  *(undefined1 *)(puVar4 + 0xbf) = 0;
  *(undefined8 *)((long)puVar4 + 0x5d4) = 0;
  *(undefined4 *)((long)puVar4 + 0x5db) = 0;
  *(undefined4 *)((long)puVar4 + 0x5fc) = 9;
  *(undefined2 *)((long)puVar4 + 0x5ea) = 0;
  *(undefined1 *)((long)puVar4 + 0x5ec) = 0;
  *(undefined2 *)((long)puVar4 + 0x5ee) = 0;
  *(undefined1 *)(puVar4 + 0xbe) = 0;
  puVar4[0xbc] = 0;
  *(undefined1 *)(puVar4 + 0xbd) = 0;
  *(undefined4 *)(puVar4 + 0xc4) = 0;
  *(undefined1 *)((long)puVar4 + 0x624) = 0;
  puVar4[0xc0] = 0;
  *(undefined4 *)((long)puVar4 + 0x607) = 0;
  *(undefined4 *)(puVar4 + 0xc5) = 9;
  *(undefined2 *)((long)puVar4 + 0x616) = 0;
  *(undefined1 *)(puVar4 + 0xc3) = 0;
  *(undefined2 *)((long)puVar4 + 0x61a) = 0;
  *(undefined1 *)((long)puVar4 + 0x61c) = 0;
  *(undefined1 *)((long)puVar4 + 0x614) = 0;
  *(undefined8 *)((long)puVar4 + 0x60c) = 0;
  *(undefined4 *)((long)puVar4 + 0x64c) = 0;
  *(undefined1 *)(puVar4 + 0xca) = 0;
  *(undefined4 *)((long)puVar4 + 0x633) = 0;
  *(undefined8 *)((long)puVar4 + 0x62c) = 0;
  *(undefined8 *)((long)puVar4 + 0x654) = 9;
  *(undefined2 *)((long)puVar4 + 0x642) = 0;
  *(undefined1 *)((long)puVar4 + 0x644) = 0;
  *(undefined2 *)((long)puVar4 + 0x646) = 0;
  *(undefined1 *)(puVar4 + 0xc9) = 0;
  *(undefined1 *)(puVar4 + 200) = 0;
  puVar4[199] = 0;
  *(undefined4 *)(puVar4 + 0xd4) = 0;
  *(undefined1 *)((long)puVar4 + 0x6a4) = 0;
  *(undefined4 *)((long)puVar4 + 0x684) = 0;
  *(undefined4 *)((long)puVar4 + 0x687) = 0;
  *(undefined1 *)(puVar4 + 0xd0) = 0;
  puVar4[0xcf] = 0;
  puVar4[0xce] = 0;
  puVar4[0xcd] = 0;
  puVar4[0xcc] = 0;
  *(undefined4 *)(puVar4 + 0xd5) = 9;
  *(undefined2 *)((long)puVar4 + 0x696) = 0;
  *(undefined1 *)(puVar4 + 0xd3) = 0;
  *(undefined2 *)((long)puVar4 + 0x69a) = 0;
  *(undefined1 *)((long)puVar4 + 0x69c) = 0;
  *(undefined1 *)((long)puVar4 + 0x694) = 0;
  *(undefined8 *)((long)puVar4 + 0x68c) = 0;
  *(undefined4 *)(puVar4 + 0xde) = 0;
  *(undefined1 *)((long)puVar4 + 0x6f4) = 0;
  *(undefined4 *)((long)puVar4 + 0x6d7) = 0;
  *(undefined4 *)((long)puVar4 + 0x6d4) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c9) = 0;
  *(undefined8 *)((long)puVar4 + 0x6bc) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x6ac) = 0;
  *(undefined8 *)((long)puVar4 + 0x6b4) = 0;
  *(undefined4 *)(puVar4 + 0xdf) = 9;
  *(undefined2 *)((long)puVar4 + 0x6e6) = 0;
  *(undefined1 *)(puVar4 + 0xdd) = 0;
  *(undefined2 *)((long)puVar4 + 0x6ea) = 0;
  *(undefined1 *)((long)puVar4 + 0x6ec) = 0;
  *(undefined1 *)((long)puVar4 + 0x6e4) = 0;
  *(undefined8 *)((long)puVar4 + 0x6dc) = 0;
  *(undefined4 *)(puVar4 + 0xe8) = 0;
  *(undefined1 *)((long)puVar4 + 0x744) = 0;
  *(undefined4 *)((long)puVar4 + 0x727) = 0;
  *(undefined4 *)((long)puVar4 + 0x724) = 0;
  *(undefined8 *)((long)puVar4 + 0x719) = 0;
  *(undefined8 *)((long)puVar4 + 0x70c) = 0;
  *(undefined8 *)((long)puVar4 + 0x714) = 0;
  *(undefined8 *)((long)puVar4 + 0x6fc) = 0;
  *(undefined8 *)((long)puVar4 + 0x704) = 0;
  *(undefined4 *)(puVar4 + 0xe9) = 9;
  *(undefined2 *)((long)puVar4 + 0x736) = 0;
  *(undefined1 *)(puVar4 + 0xe7) = 0;
  *(undefined2 *)((long)puVar4 + 0x73a) = 0;
  *(undefined1 *)((long)puVar4 + 0x73c) = 0;
  *(undefined1 *)((long)puVar4 + 0x734) = 0;
  *(undefined8 *)((long)puVar4 + 0x72c) = 0;
  *(undefined4 *)(puVar4 + 0xf2) = 0;
  *(undefined1 *)((long)puVar4 + 0x794) = 0;
  *(undefined4 *)((long)puVar4 + 0x777) = 0;
  *(undefined4 *)((long)puVar4 + 0x774) = 0;
  *(undefined8 *)((long)puVar4 + 0x769) = 0;
  *(undefined8 *)((long)puVar4 + 0x75c) = 0;
  *(undefined8 *)((long)puVar4 + 0x764) = 0;
  *(undefined8 *)((long)puVar4 + 0x74c) = 0;
  *(undefined8 *)((long)puVar4 + 0x754) = 0;
  *(undefined4 *)(puVar4 + 0xf3) = 9;
  *(undefined2 *)((long)puVar4 + 0x786) = 0;
  *(undefined1 *)(puVar4 + 0xf1) = 0;
  *(undefined2 *)((long)puVar4 + 0x78a) = 0;
  *(undefined1 *)((long)puVar4 + 0x78c) = 0;
  *(undefined1 *)((long)puVar4 + 0x784) = 0;
  *(undefined8 *)((long)puVar4 + 0x77c) = 0;
  *(undefined4 *)((long)puVar4 + 0x7ec) = 0;
  *(undefined1 *)(puVar4 + 0xfe) = 0;
  *(undefined4 *)((long)puVar4 + 0x7d3) = 0;
  *(undefined8 *)((long)puVar4 + 0x79c) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x7cc) = 0;
  *(undefined8 *)((long)puVar4 + 0x7b4) = 0;
  *(undefined8 *)((long)puVar4 + 0x7bc) = 0;
  *(undefined8 *)((long)puVar4 + 0x7a4) = 0;
  *(undefined8 *)((long)puVar4 + 0x7ac) = 0;
  *(undefined4 *)((long)puVar4 + 0x7f4) = 9;
  *(undefined2 *)((long)puVar4 + 0x7e2) = 0;
  *(undefined1 *)((long)puVar4 + 0x7e4) = 0;
  *(undefined2 *)((long)puVar4 + 0x7e6) = 0;
  *(undefined1 *)(puVar4 + 0xfd) = 0;
  *(undefined1 *)(puVar4 + 0xfc) = 0;
  puVar4[0xfb] = 0;
  *(undefined1 *)(puVar4 + 0x100) = 0;
  puVar4[0xff] = 0;
  *(undefined8 *)((long)puVar4 + 0x824) = 0;
  *(undefined2 *)(puVar4 + 0x104) = 0;
  puVar4[0x103] = 0;
  puVar4[0x102] = 0;
  puVar4[0x101] = 0;
  *(undefined8 *)((long)puVar4 + 0x82c) = 0x300000009;
  *(undefined2 *)(puVar4 + 0x128) = 0x100;
  puVar4[0x10b] = 0;
  puVar4[0x10a] = 0;
  puVar4[0x109] = 0;
  puVar4[0x108] = 0;
  puVar4[0x11b] = 0;
  puVar4[0x11a] = 0;
  puVar4[0x119] = 0;
  puVar4[0x118] = 0;
  puVar4[0x129] = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x950;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


