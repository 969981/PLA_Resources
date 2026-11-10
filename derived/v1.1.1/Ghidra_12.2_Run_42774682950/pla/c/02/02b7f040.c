/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7f040; name: FUN_02b7f040
 */


void FUN_02b7f040(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
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
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *plVar3 = param_2;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[6] = 0;
    *(undefined4 *)(plVar3 + 7) = 0;
    plVar3[4] = (long)plVar5;
    plVar3[5] = 0x1fffffffffffffff;
    *param_1 = plVar3;
    param_1[1] = plVar5;
    param_1[2] = 0x40;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


