/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012efde8; name: FUN_012efde8
 */


void FUN_012efde8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    uVar6 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar6;
    uVar6 = param_3[2];
    uVar1 = param_3[3];
    uVar2 = param_3[5];
    param_2[4] = param_3[4];
    param_2[5] = uVar2;
    param_2[2] = uVar6;
    param_2[3] = uVar1;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar6 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar6;
    uVar6 = param_3[2];
    uVar1 = param_3[3];
    uVar2 = param_3[5];
    param_2[4] = param_3[4];
    param_2[5] = uVar2;
    param_2[2] = uVar6;
    param_2[3] = uVar1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


