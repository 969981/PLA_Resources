/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0270e318; name: FUN_0270e318
 */


void FUN_0270e318(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined8 *)((long)param_1 + 0x44) = 0x14000003e8;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f40000000000014;
  *param_1 = (long)&PTR_LAB_04269fb8;
  param_1[1] = lVar5;
  *(undefined4 *)((long)param_1 + 100) = DAT_03a7df88;
  uVar1 = DAT_03a7df78;
  *(undefined8 *)((long)param_1 + 0x5c) = DAT_03a7df80;
  *(undefined8 *)((long)param_1 + 0x54) = uVar1;
  lVar5 = DAT_03a7df94;
  lVar4 = DAT_03a7df8c;
  *(undefined4 *)(param_1 + 0xf) = DAT_03a7df9c;
  param_1[0xd] = lVar4;
  param_1[0xe] = lVar5;
  uVar1 = DAT_0388a2e0;
  *(undefined8 *)((long)param_1 + 0x84) = DAT_0388a2e8;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


