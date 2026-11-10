/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b75ea0; name: FUN_00b75ea0
 */


void FUN_00b75ea0(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x30,8);
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
    puVar1 = PTR_DAT_0437ace8 + 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *plVar3 = (long)puVar1;
    FUN_00b57f6c(plVar3 + 1,param_3 + 8);
    lVar5 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    plVar3[3] = lVar5;
    lVar5 = *(long *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = 0;
    plVar3[4] = lVar5;
    lVar5 = *(long *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = 0;
    puVar1 = PTR_DAT_0437a508;
    plVar3[5] = lVar5;
    *plVar3 = (long)(puVar1 + 0x10);
    *param_1 = plVar3;
    param_1[1] = param_2;
    param_1[2] = 0x30;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


