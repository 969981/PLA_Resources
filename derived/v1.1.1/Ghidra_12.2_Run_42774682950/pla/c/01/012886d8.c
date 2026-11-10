/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012886d8; name: FUN_012886d8
 */


void FUN_012886d8(long param_1,int param_2,undefined4 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long *local_48 [2];
  undefined4 local_34;
  
  local_34 = 0;
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_48);
    FUN_010db7c0(local_48[0],0,param_3,&local_34);
    if (local_48[0] != (long *)0x0) {
      lVar9 = local_48[0][0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x01288844;
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(local_48);
    plVar5 = local_48[0];
    uVar6 = FUN_0111d41c(local_48[0]);
    puVar8 = (uint *)FUN_0111d434(plVar5,uVar6,param_3);
    local_34 = *puVar8;
    if (local_48[0] != (long *)0x0) {
      lVar9 = local_48[0][0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x01288844:
      if (iVar7 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_48[0] + 0x20))();
        uVar4 = local_34;
        goto joined_r0x0128877c;
      }
    }
  }
  uVar4 = local_34;
joined_r0x0128877c:
  if (((short)local_34 != 0) && (local_34._2_2_ = (short)(uVar4 >> 0x10), local_34._2_2_ != 0)) {
    local_34 = uVar4;
    FUN_02c4fb44(local_48);
    iVar7 = FUN_02c4fc60(local_48,0x1d);
    uVar4 = local_34 >> 0x10;
    FUN_02c4fc5c(local_48);
    if ((param_4 & 1) == 0) {
      FUN_00d67394();
      FUN_0128f6d4(*(undefined8 *)(param_1 + 0x1a8));
    }
    else {
      FUN_00d67384(*(undefined8 *)(param_1 + 0x1b0),iVar7 * uVar4);
      FUN_0128f690(*(undefined8 *)(param_1 + 0x1a8));
    }
  }
  return;
}


