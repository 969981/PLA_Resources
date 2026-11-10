/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1b044; name: FUN_02b1b044
 */


void FUN_02b1b044(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
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
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar7 = param_3[0xd];
  uVar3 = *(undefined1 *)(param_3 + 0xe);
  param_2[0xb] = param_3[0xb];
  param_2[0xd] = uVar7;
  uVar7 = param_3[9];
  param_2[7] = param_3[7];
  param_2[9] = uVar7;
  uVar7 = param_3[5];
  param_2[3] = param_3[3];
  param_2[5] = uVar7;
  param_2[1] = param_3[1];
  uVar7 = *param_3;
  param_2[2] = param_3[2];
  *param_2 = uVar7;
  uVar7 = param_3[4];
  param_2[6] = param_3[6];
  param_2[4] = uVar7;
  uVar7 = param_3[8];
  param_2[10] = param_3[10];
  param_2[8] = uVar7;
  uVar7 = param_3[0xc];
  *(undefined1 *)(param_2 + 0xe) = uVar3;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xc] = uVar7;
  uVar7 = param_3[0x12];
  uVar1 = param_3[0x13];
  uVar2 = param_3[0x15];
  param_2[0x14] = param_3[0x14];
  param_2[0x15] = uVar2;
  param_2[0x12] = uVar7;
  param_2[0x13] = uVar1;
  param_2[0xf] = param_3[0xf];
  param_2[0x10] = param_3[0x10];
  param_2[0x11] = param_3[0x11];
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  uVar7 = param_3[0x19];
  uVar1 = param_3[0x1a];
  uVar2 = param_3[0x1c];
  param_2[0x1b] = param_3[0x1b];
  param_2[0x1c] = uVar2;
  param_2[0x19] = uVar7;
  param_2[0x1a] = uVar1;
  param_2[0x16] = param_3[0x16];
  param_2[0x17] = param_3[0x17];
  param_2[0x18] = param_3[0x18];
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


