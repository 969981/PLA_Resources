/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01280818; name: FUN_01280818
 */


undefined8 * FUN_01280818(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1790,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *puVar4 = &PTR_FUN_041eb370;
  puVar4[9] = &PTR_LAB_041eb598;
  puVar4[10] = &PTR_LAB_041eb5e0;
  *(undefined8 *)((long)puVar4 + 0x5ac) = 0;
  *(undefined8 *)((long)puVar4 + 0x5b4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5bc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5ec) = 0;
  *(undefined8 *)((long)puVar4 + 0x5cc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5d4) = 0;
  *(undefined8 *)((long)puVar4 + 0x5dc) = 0;
  *(undefined8 *)((long)puVar4 + 0x5e4) = 0;
  puVar4[0xbf] = &DAT_cbf29ce484222645;
  puVar4[0xc0] = &DAT_03996322;
  puVar4[0xc1] = 0;
  puVar4[0xc2] = 0;
  puVar4[0xc3] = 0;
  puVar4[0xc4] = 0;
  puVar4[0xc5] = 0;
  puVar4[0xc6] = 0;
  puVar4[199] = 0;
  puVar4[200] = 0;
  puVar4[0xc9] = 0x4407000044700000;
  puVar4[0xca] = 0;
  *(undefined4 *)(puVar4 + 0xcb) = 0;
  *(undefined8 *)((long)puVar4 + 0x65c) = 0x4407000044700000;
  *(undefined4 *)((long)puVar4 + 0x664) = 0x1000001;
  *(undefined1 *)(puVar4 + 0xcd) = 0;
  *(undefined4 *)((long)puVar4 + 0x66c) = 0;
  *(undefined2 *)(puVar4 + 0xce) = 1;
  *(undefined1 *)((long)puVar4 + 0x672) = 0;
  *(undefined4 *)((long)puVar4 + 0x6a4) = 0;
  *(undefined8 *)((long)puVar4 + 0x674) = 0;
  *(undefined8 *)((long)puVar4 + 0x67c) = 0;
  *(undefined8 *)((long)puVar4 + 0x684) = 0;
  *(undefined8 *)((long)puVar4 + 0x68c) = 0;
  *(undefined8 *)((long)puVar4 + 0x694) = 0;
  *(undefined8 *)((long)puVar4 + 0x69c) = 0;
  puVar4[0xd5] = 0x4407000044700000;
  puVar4[0xd6] = 0;
  *(undefined4 *)(puVar4 + 0xd7) = 0;
  *(undefined8 *)((long)puVar4 + 0x6bc) = 0x4407000044700000;
  *(undefined4 *)((long)puVar4 + 0x6c4) = 0x1000001;
  *(undefined1 *)(puVar4 + 0xd9) = 0;
  *(undefined4 *)((long)puVar4 + 0x6cc) = 0;
  *(undefined2 *)(puVar4 + 0xda) = 1;
  *(undefined1 *)((long)puVar4 + 0x6d2) = 0;
  *(undefined8 *)((long)puVar4 + 0x6d4) = 0;
  *(undefined2 *)((long)puVar4 + 0x6dc) = 1;
  *(undefined1 *)((long)puVar4 + 0x6de) = 0;
  puVar4[0xdc] = 0;
  FUN_0118b30c(puVar4 + 0xdd);
  *(undefined4 *)(puVar4 + 0x2c1) = 2;
  *(undefined8 *)((long)puVar4 + 0x160c) = 0;
  *(undefined8 *)((long)puVar4 + 0x1614) = 0;
  *(undefined8 *)((long)puVar4 + 0x161a) = 0;
  *(undefined8 *)((long)puVar4 + 0x1624) = 2;
  *(undefined1 *)((long)puVar4 + 0x162c) = 0;
  uVar5 = FUN_00d73f40();
  puVar4[0x2c7] = 0;
  puVar4[0x2c6] = uVar5;
  *(undefined8 *)((long)puVar4 + 0x163f) = 0;
  *puVar4 = &PTR_LAB_04201c38;
  puVar4[0x2de] = 0;
  puVar4[0x2df] = 0;
  puVar4[0x2e0] = 0;
  puVar4[0x2e1] = 0;
  *(undefined4 *)(puVar4 + 0x2ee) = 0;
  puVar4[0x2c9] = 0;
  puVar4[0x2ca] = 0;
  puVar4[0x2cb] = 0;
  puVar4[0x2cc] = 0;
  puVar4[0x2cd] = 0;
  *(undefined2 *)(puVar4 + 0x2ce) = 0;
  puVar4[9] = &PTR_LAB_04201e60;
  puVar4[10] = &PTR_LAB_04201ea8;
  *(undefined8 *)((long)puVar4 + 0x1674) = 0;
  *(undefined8 *)((long)puVar4 + 0x167c) = 0;
  *(undefined8 *)((long)puVar4 + 0x1684) = 0;
  *(undefined8 *)((long)puVar4 + 0x168c) = 0;
  *(undefined8 *)((long)puVar4 + 0x1694) = 0;
  *(undefined8 *)((long)puVar4 + 0x169c) = 0;
  *(undefined8 *)((long)puVar4 + 0x16a4) = 0;
  *(undefined8 *)((long)puVar4 + 0x16ac) = 0;
  *(undefined8 *)((long)puVar4 + 0x16b4) = 0;
  *(undefined8 *)((long)puVar4 + 0x16bc) = 0;
  *(undefined8 *)((long)puVar4 + 0x16c4) = 0;
  *(undefined8 *)((long)puVar4 + 0x16cc) = 0;
  *(undefined8 *)((long)puVar4 + 0x16d4) = 0;
  *(undefined8 *)((long)puVar4 + 0x16dc) = 0;
  uVar5 = FUN_00d73f40();
  puVar4[0x2ef] = uVar5;
  *(undefined4 *)(puVar4 + 0x2f0) = 0;
  *(undefined4 *)((long)puVar4 + 0x1783) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x1790;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


