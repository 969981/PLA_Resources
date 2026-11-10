/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ddc944; name: FUN_01ddc944
 */


undefined8 * FUN_01ddc944(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x7b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_01b6ef10(puVar6,param_2);
  *puVar6 = &PTR_FUN_04237168;
  *(undefined4 *)(puVar6 + 0xd0) = 0;
  puVar6[9] = &PTR_LAB_042372b0;
  puVar6[10] = &PTR_LAB_04237390;
  puVar6[0x3e] = &PTR_LAB_042373b8;
  puVar6[0x41] = &PTR_LAB_04237458;
  puVar3 = PTR_DAT_0437b6e8;
  *(undefined8 *)((long)puVar6 + 0x684) = 0;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(undefined8 *)(puVar3 + 8);
  puVar6[0xd3] = uVar2;
  puVar6[0xd5] = uVar2;
  puVar6[0xd6] = 0x40a000003f800000;
  puVar6[0xd7] = 0x41a000003f800000;
  puVar6[0xd2] = uVar1;
  puVar6[0xd4] = uVar1;
  *(undefined1 *)(puVar6 + 0xd8) = 0;
  puVar6[0xda] = 0;
  puVar6[0xdb] = 4;
  puVar3 = PTR_DAT_043829e8;
  puVar6[0xdd] = 0;
  puVar6[0xde] = 0;
  puVar6[0xe0] = 0;
  puVar6[0xdc] = puVar3 + 0x10;
  puVar6[0xe1] = 0;
  puVar6[0xe2] = 0;
  puVar6[0xe3] = 0;
  puVar3 = PTR_DAT_0437a6d0;
  puVar6[0xe4] = 0;
  *(undefined1 *)(puVar6 + 0xe6) = 0;
  *(undefined1 *)(puVar6 + 0xea) = 0;
  *(undefined1 *)(puVar6 + 0xee) = 0;
  *(undefined2 *)(puVar6 + 0xf0) = 0;
  *(undefined1 *)((long)puVar6 + 0x782) = 0;
  puVar6[0xf5] = 0;
  puVar6[0xf4] = 0;
  puVar6[0xf3] = 0;
  puVar6[0xf2] = 0;
  puVar6[0xdf] = puVar3 + 0x10;
  *(undefined1 *)(puVar6 + 0xef) = 1;
  puVar6[1] = param_1;
  puVar6[2] = puVar6;
  puVar6[3] = 0x7b0;
  puVar6[4] = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return puVar6;
}


