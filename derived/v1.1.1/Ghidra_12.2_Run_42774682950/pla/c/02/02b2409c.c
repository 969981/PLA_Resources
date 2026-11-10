/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2409c; name: FUN_02b2409c
 */


void FUN_02b2409c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar8 = *param_3;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  puVar5 = PTR_DAT_0437a120;
  puVar4 = PTR_DAT_04379570;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03996322;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03996322;
  uVar9 = *(undefined8 *)puVar5;
  uVar2 = *(undefined8 *)(puVar5 + 8);
  uVar1 = *(undefined8 *)puVar4;
  uVar3 = *(undefined8 *)(puVar4 + 8);
  param_2[0x12] = 0;
  param_2[8] = uVar9;
  param_2[9] = uVar2;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0x3f800000;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
  param_2[10] = uVar1;
  param_2[0xb] = uVar3;
  param_2[0x10] = uVar8;
  param_2[0x11] = 0x666666666666666;
  param_2[0x14] = 0;
  param_2[0x15] = uVar8;
  param_2[0x1d] = uVar8;
  param_2[0x1e] = 0x555555555555555;
  param_2[0x21] = 0;
  param_2[0x22] = uVar8;
  param_2[0x2a] = uVar8;
  param_2[0x2b] = 0x666666666666666;
  param_2[0x2e] = 0;
  param_2[0x2f] = uVar8;
  *(undefined2 *)(param_2 + 0x35) = 1;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x16] = 0x666666666666666;
  param_2[0x17] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x23] = 0x555555555555555;
  param_2[0x24] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x30] = 0x666666666666666;
  param_2[0x31] = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


