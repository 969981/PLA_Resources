/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3146c; name: FUN_01c3146c
 */


void FUN_01c3146c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar12 != 0) {
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar14;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined2 *)(param_2 + 2) = *param_4;
  uVar14 = *(undefined8 *)(param_4 + 8);
  uVar4 = *(undefined8 *)(param_4 + 0xc);
  uVar13 = *(undefined8 *)(param_4 + 0x18);
  uVar5 = *(undefined8 *)(param_4 + 0x1c);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar6 = *(undefined8 *)(param_4 + 0x14);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  uVar7 = *(undefined8 *)(param_4 + 0x2c);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  uVar8 = *(undefined8 *)(param_4 + 0x24);
  param_2[0xe] = 0;
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar7;
  param_2[10] = uVar3;
  param_2[0xb] = uVar8;
  param_2[0xf] = 0;
  param_2[6] = uVar1;
  param_2[7] = uVar6;
  param_2[8] = uVar13;
  param_2[9] = uVar5;
  param_2[4] = uVar14;
  param_2[5] = uVar4;
  FUN_008c4b3c(param_2 + 0xe,param_4 + 0x30);
  uVar9 = *(undefined4 *)(param_4 + 0x4c);
  param_2[0x13] = *(undefined8 *)(param_4 + 0x44);
  param_2[0x11] = *(undefined8 *)(param_4 + 0x3c);
  param_2[0x10] = *(undefined8 *)(param_4 + 0x38);
  uVar14 = *(undefined8 *)(param_4 + 0x40);
  uVar13 = *(undefined8 *)(param_4 + 0x48);
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  param_2[0x14] = uVar13;
  param_2[0x12] = uVar14;
  if (lVar12 != 0) {
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  return;
}


