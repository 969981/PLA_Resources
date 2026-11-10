/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3a0ec; name: FUN_02b3a0ec
 */


void FUN_02b3a0ec(long *param_1,long *param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
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
  *param_1 = (long)&PTR_LAB_04284920;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_04284958;
  lVar6 = *param_2;
  param_1[0xb] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = param_1[1];
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)&DAT_cbf29ce484222645;
  param_1[0xe] = (long)&DAT_03996322;
  param_1[0xf] = 0;
  param_1[0x12] = (long)&DAT_cbf29ce484222645;
  param_1[0x13] = (long)&DAT_03996322;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = PTR_DAT_04388130 + 0x10;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x16] = (long)puVar2;
  param_1[0x17] = 0;
  param_1[0x20] = lVar7;
  param_1[0x21] = 0x1fffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = lVar7;
  param_1[0x2a] = 0x1555555555555555;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}


