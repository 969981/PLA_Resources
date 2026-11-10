/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a8e54; name: FUN_014a8e54
 */


undefined8 * FUN_014a8e54(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x98,8);
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uVar1 = *param_3;
  FUN_00d894e4(puVar5);
  *puVar5 = &PTR_FUN_04213da0;
  puVar5[9] = &PTR_LAB_04213e10;
  puVar5[10] = &PTR_FUN_04213e58;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = *param_2;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((long)puVar5 + 0x91) = uVar1;
  puVar5[1] = param_1;
  puVar5[2] = puVar5;
  puVar5[3] = 0x98;
  puVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return puVar5;
}


