/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026b5f64; name: FUN_026b5f64
 */


void FUN_026b5f64(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_042689e8;
  param_1[1] = lVar6;
  uVar2 = DAT_03a7dce4;
  *(undefined8 *)((long)param_1 + 0x54) = DAT_03a7dcec;
  uVar1 = DAT_03a7dcdc;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x44) = uVar1;
  return;
}


