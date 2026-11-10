/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad6f8c; name: FUN_01ad6f8c
 */


void FUN_01ad6f8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
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
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[2] = 0;
  param_2[1] = 0;
  FUN_0095e070(param_2 + 1,param_3 + 1);
  param_2[4] = 0;
  param_2[3] = 0;
  FUN_008c4b3c(param_2 + 3,param_3 + 3);
  param_2[6] = 0;
  param_2[5] = 0;
  FUN_0195cb34(param_2 + 5,param_3 + 5);
  uVar6 = param_3[0xb];
  param_2[9] = param_3[9];
  param_2[0xb] = uVar6;
  uVar6 = param_3[8];
  param_2[10] = param_3[10];
  param_2[8] = uVar6;
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  param_2[0xd] = 0;
  FUN_00b63974(param_2 + 0xd,param_3 + 0xd);
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  FUN_00cfa028(param_2 + 0xf,param_3 + 0xf);
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  FUN_0095aa3c(param_2 + 0x11,param_3 + 0x11);
  param_2[0x13] = param_3[0x13];
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  FUN_00bd10a0(param_2 + 0x14,param_3 + 0x14);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_3 + 0x16);
  uVar2 = *(undefined2 *)(param_3 + 0x17);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x17) = uVar2;
  FUN_0095aa3c(param_2 + 0x18,param_3 + 0x18);
  param_2[0x1a] = param_3[0x1a];
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


