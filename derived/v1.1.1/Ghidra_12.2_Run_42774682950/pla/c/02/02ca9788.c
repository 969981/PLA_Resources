/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca9788; name: FUN_02ca9788
 */


void FUN_02ca9788(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(param_1 + 0x90) = param_3;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x78,8);
  if (plVar3 == (long *)0x0) {
    param_2 = (long *)0x0;
    uVar7 = 0;
    uVar5 = 0;
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
    lVar6 = *(long *)(param_1 + 0x90);
    *plVar3 = (long)(PTR_DAT_04387fc8 + 0x10);
    FUN_028c4878(plVar3 + 1);
    plVar3[0xe] = lVar6;
    FUN_028c4a3c(plVar3,param_2);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    uVar5 = 8;
    uVar7 = 0x78;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  *(long **)(param_1 + 0x40) = plVar3;
  if (lVar4 != 0) {
    FUN_028c9150(param_1 + 0x48);
  }
  *(long **)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  return;
}


