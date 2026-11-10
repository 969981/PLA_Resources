/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a9314; name: FUN_014a9314
 */


undefined8 * FUN_014a9314(long *param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
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
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x98,8);
  if (puVar6 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uVar1 = *param_3;
  uVar2 = *param_4;
  FUN_00d894e4(puVar6);
  *puVar6 = &PTR_FUN_04213da0;
  puVar6[9] = &PTR_LAB_04213e10;
  puVar6[10] = &PTR_FUN_04213e58;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = *param_2;
  *(undefined1 *)(puVar6 + 0x12) = uVar2;
  *(undefined1 *)((long)puVar6 + 0x91) = uVar1;
  puVar6[1] = param_1;
  puVar6[2] = puVar6;
  puVar6[3] = 0x98;
  puVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return puVar6;
}


