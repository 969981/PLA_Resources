/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123354c; name: FUN_0123354c
 */


void FUN_0123354c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    uVar4 = param_3[7];
    param_2[5] = param_3[5];
    param_2[7] = uVar4;
    uVar4 = param_3[3];
    param_2[1] = param_3[1];
    param_2[3] = uVar4;
    uVar4 = *param_3;
    param_2[2] = param_3[2];
    *param_2 = uVar4;
    uVar4 = param_3[4];
    param_2[6] = param_3[6];
    param_2[4] = uVar4;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar4 = param_3[7];
    param_2[5] = param_3[5];
    param_2[7] = uVar4;
    uVar4 = param_3[3];
    param_2[1] = param_3[1];
    param_2[3] = uVar4;
    uVar4 = *param_3;
    param_2[2] = param_3[2];
    *param_2 = uVar4;
    uVar4 = param_3[4];
    param_2[6] = param_3[6];
    param_2[4] = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


