/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a09bf0; name: FUN_02a09bf0
 */


void FUN_02a09bf0(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_042791a0;
  param_1[1] = lVar4;
  param_1[9] = (long)&PTR_LAB_042791d8;
  *(undefined1 *)((long)param_1 + 0x54) = 0x2c;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xe] = param_5;
  param_1[0x98] = 5;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_4;
  lVar3 = DAT_043ecde0;
  *(undefined8 *)(DAT_043ecde0 + 8) = param_3;
  *(undefined8 *)(lVar3 + 0x10) = 0x82a2b175229d6a5b;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  FUN_02a09d90(param_1,param_6);
  FUN_02a0a27c(param_1,param_6);
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}


