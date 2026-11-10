/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132ae90; name: FUN_0132ae90
 */


undefined8 * FUN_0132ae90(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xb50,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *(undefined8 *)((long)puVar4 + 0x5ac) = 0;
  *(undefined8 *)((long)puVar4 + 0x5b4) = 0;
  *(undefined1 *)((long)puVar4 + 0x5bc) = 1;
  *puVar4 = &PTR_LAB_04206778;
  puVar4[0xb8] = 0;
  *(undefined4 *)(puVar4 + 0xb9) = 0;
  puVar4[0xba] = 0;
  puVar4[0xbb] = 0;
  puVar4[0xbc] = 0;
  puVar4[0xbd] = 0;
  puVar4[0xca] = 0;
  puVar4[0xcb] = 0;
  puVar4[0xcc] = 0;
  puVar4[0xcd] = 0;
  puVar4[0xda] = 0;
  puVar4[0xdb] = 0;
  puVar4[0xdc] = 0;
  puVar4[0xdd] = 0;
  puVar4[0xed] = 0;
  puVar4[0xec] = 0;
  puVar4[0xeb] = 0;
  puVar4[0xea] = 0;
  puVar4[0xfa] = 0;
  puVar4[0xfb] = 0;
  puVar4[0xfc] = 0;
  puVar4[0xfd] = 0;
  puVar4[0x10a] = 0;
  puVar4[0x10b] = 0;
  puVar4[0x10c] = 0;
  puVar4[0x10d] = 0;
  puVar4[0x11a] = 0;
  puVar4[0x11b] = 0;
  puVar4[0x11c] = 0;
  puVar4[0x11d] = 0;
  *(undefined4 *)(puVar4 + 300) = 0;
  puVar4[299] = 0;
  puVar4[0x12a] = 0;
  puVar4[0x12f] = 0;
  puVar4[9] = &PTR_LAB_04206860;
  puVar4[10] = &PTR_LAB_042068a8;
  puVar4[0x12d] = &PTR_LAB_042054c8;
  puVar4[0x12e] = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x130) = 0x3f800000;
  *(undefined1 *)((long)puVar4 + 0x98c) = 0;
  *(undefined8 *)((long)puVar4 + 0x984) = 0;
  puVar4[0x13b] = 0;
  puVar4[0x13a] = 0;
  puVar4[0x139] = 0;
  puVar4[0x138] = 0;
  puVar4[0x137] = 0;
  puVar4[0x136] = 0;
  puVar4[0x135] = 0;
  puVar4[0x134] = 0;
  puVar4[0x133] = 0;
  puVar4[0x132] = 0;
  puVar4[0x14b] = 0;
  puVar4[0x14a] = 0;
  puVar4[0x149] = 0;
  puVar4[0x148] = 0;
  puVar4[0x15b] = 0;
  puVar4[0x15a] = 0;
  puVar4[0x159] = 0;
  puVar4[0x158] = 0;
  *(undefined4 *)(puVar4 + 0x168) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0xb50;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


