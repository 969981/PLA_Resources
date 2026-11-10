/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7cfa0; name: FUN_01b7cfa0
 */


void FUN_01b7cfa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 != 0) {
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar13;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  }
  uVar13 = param_3[2];
  uVar2 = param_3[3];
  uVar12 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar12;
  param_2[2] = uVar13;
  param_2[3] = uVar2;
  param_2[4] = param_3[4];
  uVar13 = param_3[5];
  uVar2 = param_3[6];
  uVar12 = param_3[8];
  param_2[7] = param_3[7];
  param_2[8] = uVar12;
  param_2[5] = uVar13;
  param_2[6] = uVar2;
  uVar12 = param_3[9];
  uVar13 = param_3[10];
  uVar2 = param_3[0xb];
  uVar7 = *(undefined4 *)(param_3 + 0xc);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xc) = uVar7;
  param_2[0xb] = uVar2;
  param_2[9] = uVar12;
  param_2[10] = uVar13;
  param_2[0xd] = 0;
  FUN_00b63974(param_2 + 0xd,param_3 + 0xd);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  FUN_00cfa028(param_2 + 0xf,param_3 + 0xf);
  param_2[0x11] = param_3[0x11];
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = param_3[0x13];
  plVar11 = (long *)param_3[0x14];
  param_2[0x14] = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))();
  }
  uVar7 = *(undefined4 *)(param_3 + 0x1e);
  uVar13 = param_3[0x18];
  uVar3 = param_3[0x19];
  uVar2 = param_3[0x16];
  uVar4 = param_3[0x17];
  uVar12 = param_3[0x1c];
  uVar5 = param_3[0x1d];
  uVar1 = param_3[0x1a];
  uVar6 = param_3[0x1b];
  param_2[0x1f] = 0;
  param_2[0x1a] = uVar1;
  param_2[0x1b] = uVar6;
  param_2[0x1c] = uVar12;
  param_2[0x1d] = uVar5;
  *(undefined4 *)(param_2 + 0x1e) = uVar7;
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar4;
  param_2[0x20] = 0;
  param_2[0x18] = uVar13;
  param_2[0x19] = uVar3;
  FUN_00b63974(param_2 + 0x1f,param_3 + 0x1f);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  FUN_00cfa028(param_2 + 0x21,param_3 + 0x21);
  param_2[0x23] = param_3[0x23];
  param_2[0x24] = param_3[0x24];
  param_2[0x25] = param_3[0x25];
  plVar11 = (long *)param_3[0x26];
  param_2[0x26] = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))();
  }
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  return;
}


