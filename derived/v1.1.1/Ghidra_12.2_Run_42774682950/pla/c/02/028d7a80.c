/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d7a80; name: FUN_028d7a80
 */


undefined8 * FUN_028d7a80(undefined8 param_1,long *param_2,undefined8 *param_3)

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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar5 = *param_3;
  FUN_028d7bc0(puVar4);
  puVar4[9] = &PTR_LAB_04273650;
  puVar1 = PTR_DAT_04387ff0;
  *puVar4 = &PTR_LAB_042735f8;
  puVar4[1] = param_2;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[2] = puVar4;
  puVar4[3] = 0x90;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = uVar5;
  puVar4[4] = 8;
  puVar4[0xb] = puVar1 + 0x10;
  puVar4[0xc] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


