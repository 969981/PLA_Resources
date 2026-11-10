/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b67c00; name: FUN_01b67c00
 */


void FUN_01b67c00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  uVar6 = param_3[3];
  param_2[1] = param_3[1];
  param_2[3] = uVar6;
  uVar6 = *param_3;
  param_2[2] = param_3[2];
  *param_2 = uVar6;
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  plVar5 = (long *)param_3[7];
  param_2[7] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar6 = param_3[0xd];
  uVar1 = *(undefined4 *)(param_3 + 0xe);
  param_2[0xb] = param_3[0xb];
  param_2[0xd] = uVar6;
  param_2[9] = param_3[9];
  uVar6 = param_3[8];
  param_2[10] = param_3[10];
  param_2[8] = uVar6;
  uVar6 = param_3[0xc];
  *(undefined4 *)(param_2 + 0xe) = uVar1;
  param_2[0xc] = uVar6;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


