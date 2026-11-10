/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01940e14; name: FUN_01940e14
 */


void FUN_01940e14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined2 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar1 = *param_4;
  uVar3 = *param_5;
  uVar2 = *param_6;
  param_2[1] = param_3[1];
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined2 *)((long)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar2;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


