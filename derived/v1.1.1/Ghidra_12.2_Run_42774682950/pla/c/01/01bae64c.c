/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bae64c; name: FUN_01bae64c
 */


void FUN_01bae64c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00af7e30(&local_38);
  FUN_01a4c750(param_1,&local_38,param_3);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_38[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  *param_1 = &PTR_FUN_04243700;
  param_1[0x16a] = 0;
  param_1[9] = &PTR_LAB_04243af8;
  param_1[10] = &PTR_LAB_04243bd8;
  param_1[0x16b] = 0;
  param_1[0x16c] = &DAT_cbf29ce484222645;
  param_1[0x16d] = &DAT_03996322;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  *(undefined1 *)(param_1 + 0x172) = 0;
  if (*(char *)(param_3 + 0x4b8) != '\0') {
    FUN_0135df50(param_1 + 0x172,param_3 + 0x4c0);
  }
  *(undefined4 *)(param_1 + 0x17e) = 0;
  *(undefined1 *)((long)param_1 + 0xbf4) = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0;
  *(undefined1 *)((long)param_1 + 0xbfc) = 0;
  param_1[0x180] = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  FUN_01bae7c0(param_1);
  *(undefined1 *)(param_1 + 0xd1) = 1;
  return;
}


