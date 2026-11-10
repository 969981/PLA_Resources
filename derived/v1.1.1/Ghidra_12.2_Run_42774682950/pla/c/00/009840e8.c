/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009840e8; name: FUN_009840e8
 */


void FUN_009840e8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_58;
  
  if ((param_1[9] != 0) && (*(char *)(param_1[9] + 0x1e1) != '\0')) {
    FUN_0098432c(param_1 + 8);
  }
  if ((param_1[0xf] != 0) && (*(char *)(param_1[0xf] + 0x1e1) != '\0')) {
    FUN_0098444c(param_1 + 0xe);
  }
  if ((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x1e1) != '\0')) {
    FUN_0098456c(param_1 + 0x14);
  }
  if ((param_1[0x1b] != 0) && (*(char *)(param_1[0x1b] + 0x1e1) != '\0')) {
    FUN_00937d80(param_1 + 0x1a);
  }
  if ((param_1[0x21] != 0) && (*(char *)(param_1[0x21] + 0x1e1) != '\0')) {
    FUN_0098468c(param_1 + 0x20);
  }
  if ((param_1[0x27] != 0) && (*(char *)(param_1[0x27] + 0x1e1) != '\0')) {
    FUN_009847ac(param_1 + 0x26);
  }
  if ((param_1[0x2d] == 0) || (*(char *)(param_1[0x2d] + 0x1e1) == '\0')) {
    puVar5 = (undefined8 *)param_1[0x33];
  }
  else {
    FUN_00937d80(param_1 + 0x2c);
    puVar5 = (undefined8 *)param_1[0x33];
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_58 = *puVar5;
      FUN_02a44274(lVar6 + 0xd8,&local_58);
    }
  }
  FUN_00936104(param_1 + 0x2c);
  FUN_009848d0(param_1 + 0x26);
  FUN_009849e8(param_1 + 0x20);
  FUN_00936104(param_1 + 0x1a);
  FUN_00984b00(param_1 + 0x14);
  FUN_00984c18(param_1 + 0xe);
  FUN_00984d30(param_1 + 8);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00984260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}


