/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026054f0; name: FUN_026054f0
 */


void FUN_026054f0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined5 uVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long *local_18;
  
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar7 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar7;
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (FUN_00cfac20(&local_18,*(long *)(param_1 + 0xd0)), local_18 != (long *)0x0)) {
    local_50 = 1;
    bVar6 = 0;
    bVar8 = 0;
    local_20 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    uVar9 = *(ulong *)(lVar7 + 0x118);
    local_48._0_4_ = (uint)((byte)(uVar9 >> 0x23) & 1);
    uVar4 = CONCAT14((char)(uVar9 >> 0x27),(uint)local_48);
    if (*(int *)(param_1 + 0x1ac) == 0) {
      bVar6 = (byte)(*(ulong *)(param_1 + 0x1b8) >> 0x25) & 1;
      bVar8 = (byte)(*(ulong *)(param_1 + 0x1b8) >> 0x26) & 1;
    }
    local_48 = (ulong)(CONCAT16(bVar8,CONCAT15(bVar6,uVar4)) & 0xffff01ffffffff);
    FUN_01aef8d8(local_18,&local_50);
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


