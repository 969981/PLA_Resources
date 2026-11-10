/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b44130; name: FUN_02b44130
 */


void FUN_02b44130(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar1 = param_3[2];
  plVar2 = (long *)param_3[3];
  param_3[3] = 0;
  uVar3 = param_3[1];
  uVar4 = *param_4;
  *param_2 = *param_3;
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    *(undefined1 *)(param_2 + 4) = uVar4;
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(undefined1 *)(param_2 + 4) = uVar4;
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


