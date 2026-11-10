/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117a1bc; name: FUN_0117a1bc
 */


uint FUN_0117a1bc(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_28);
  local_50 = 0x52daf76250fe632a;
  pcStack_48 = "WSYS_U_RANK";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  uVar4 = FUN_010f5878(local_28,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar9 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  fVar10 = (float)FUN_0115e248(*(undefined8 *)(param_1 + 0x5b0),uVar4);
  uVar8 = (ulong)*(uint *)(param_1 + 0x618);
  if (*(uint *)(param_1 + 0x618) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    piVar9 = (int *)(param_1 + 0x5cc);
    do {
      uVar6 = *piVar9 + uVar6;
      if (0x98967e < uVar6) {
        uVar6 = 9999999;
        break;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 3;
    } while (uVar8 != 0);
  }
  uVar1 = (int)(fVar10 * (float)uVar6);
  if (0x98967e < (uint)(int)(fVar10 * (float)uVar6)) {
    uVar1 = 9999999;
  }
  return uVar1;
}


