/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1057c; name: FUN_02b1057c
 */


void FUN_02b1057c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  param_1[7] = 0;
  puVar4 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04283dd0;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_04283e08;
  lVar6 = *param_2;
  param_1[0xb] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02b106d0(param_1 + 0xc);
  FUN_00d7a610(param_1 + 0x13);
  FUN_008c2014(param_1 + 0x20);
  FUN_02b107c0(param_1 + 0x27);
  param_1[0x34] = (long)&DAT_6723799257d05608;
  param_1[0x35] = (long)&DAT_0393acb9;
  param_1[0x36] = 4;
  param_1[0x37] = 0;
  FUN_02b10984(param_1,param_1 + 0x34);
  return;
}


