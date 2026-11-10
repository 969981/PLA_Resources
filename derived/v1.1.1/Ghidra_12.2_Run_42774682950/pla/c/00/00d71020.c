/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d71020; name: FUN_00d71020
 */


void FUN_00d71020(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10);
  if (plVar3 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    FUN_0284d344(plVar3);
    *plVar3 = (long)(PTR_DAT_0437b450 + 0x10);
    *param_1 = plVar3;
    param_1[1] = param_2;
    param_1[2] = 0xc0;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


