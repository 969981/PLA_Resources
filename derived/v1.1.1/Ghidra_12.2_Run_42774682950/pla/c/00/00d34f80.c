/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d34f80; name: FUN_00d34f80
 */


void FUN_00d34f80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  uVar7 = param_3[3];
  param_3[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = uVar7;
  param_2[7] = 0;
  if ((code *)param_3[7] != (code *)0x0) {
    (*(code *)param_3[7])(param_3 + 8,param_2 + 8);
    uVar4 = param_3[4];
    uVar7 = param_3[5];
    uVar6 = param_3[7];
    param_2[6] = param_3[6];
    param_2[7] = uVar6;
    param_2[4] = uVar4;
    param_2[5] = uVar7;
    pcVar5 = (code *)param_3[5];
    if (pcVar5 != (code *)0x0) {
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      (*pcVar5)(param_3 + 8);
    }
  }
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x15] = 0;
  if ((code *)param_3[0x17] != (code *)0x0) {
    (*(code *)param_3[0x17])(param_3 + 0x18,param_2 + 0x18);
    uVar4 = param_3[0x14];
    uVar6 = param_3[0x17];
    uVar7 = param_3[0x15];
    param_2[0x16] = param_3[0x16];
    param_2[0x17] = uVar6;
    param_2[0x14] = uVar4;
    param_2[0x15] = uVar7;
    pcVar5 = (code *)param_3[0x15];
    if (pcVar5 != (code *)0x0) {
      param_3[0x16] = 0;
      param_3[0x17] = 0;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      (*pcVar5)(param_3 + 0x18);
    }
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


