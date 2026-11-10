/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2ee4c; name: FUN_02b2ee4c
 */


void FUN_02b2ee4c(long *param_1,long *param_2)

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
  *param_1 = (long)&PTR_FUN_04284490;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_042844c8;
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
    lVar7 = param_1[1];
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = lVar7;
  param_1[0xf] = 0x38e38e38e38e38e;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x14] = 0x38e38e38e38e38e;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = lVar7;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = lVar7;
  param_1[0x1c] = 0x666666666666666;
  param_1[0x1f] = 0;
  param_1[0x20] = lVar7;
  param_1[0x21] = 0x666666666666666;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = lVar7;
  param_1[0x29] = 0x666666666666666;
  param_1[0x2c] = 0;
  param_1[0x2d] = lVar7;
  param_1[0x2e] = 0x666666666666666;
  param_1[0x2f] = 0;
  return;
}


