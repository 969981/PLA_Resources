/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ee34; name: FUN_0283ee34
 */


void FUN_0283ee34(long *param_1,undefined8 param_2,long param_3,byte param_4,byte param_5)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_043796d0 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04379520;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_0426f600;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_0426f640;
  param_1[0xb] = (long)(PTR_DAT_043879a8 + 0x10);
  FUN_00d31758(param_1 + 0xc,param_3 + 8);
  lVar6 = *(long *)(param_3 + 0x18);
  param_1[0xe] = lVar6;
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *(long *)(param_3 + 0x20);
  param_1[0xf] = lVar6;
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *(long *)(param_3 + 0x28);
  param_1[0x10] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar1 = PTR_DAT_0437b4c0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x22) = param_5 & 1;
  param_1[0xb] = (long)(puVar1 + 0x10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(byte *)((long)param_1 + 0x111) = (param_4 | param_5) & 1;
  *(undefined1 *)((long)param_1 + 0x112) = 0;
  return;
}


