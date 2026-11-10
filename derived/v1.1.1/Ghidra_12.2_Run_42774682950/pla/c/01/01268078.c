/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01268078; name: FUN_01268078
 */


void FUN_01268078(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xbb0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *puVar4 = &PTR_FUN_04200550;
  puVar4[0xb6] = 0;
  puVar4[9] = &PTR_LAB_042005f0;
  puVar4[10] = &PTR_LAB_04200638;
  puVar4[0xb7] = 0;
  puVar4[0xb8] = 0;
  puVar4[0xb9] = 0;
  FUN_01268414(puVar4 + 0xba);
  puVar4[0xc0] = 0;
  puVar4[0xbf] = 0;
  puVar4[0xbe] = 0;
  FUN_01268414(puVar4 + 0xc1);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(puVar4 + 0xc5);
}


