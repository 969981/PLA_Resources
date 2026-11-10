/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01448cbc; name: FUN_01448cbc
 */


void FUN_01448cbc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_38;
  
  puVar4 = PTR_DAT_04379558;
  local_c0 = 0xda95fd34afa2a052;
  local_b8 = 0;
  local_b0 = 0xda95fc34afa29e9f;
  local_a8 = 0x100000000;
  local_a0 = 0xda95fb34afa29cec;
  local_98 = 0x100000001;
  local_90 = 0xda95fa34afa29b39;
  local_88 = 1;
  local_80 = 0xd9a6540bd62c8d7d;
  local_78 = 2;
  local_70 = 0xd9a6510bd62c8864;
  local_68 = 0x100000002;
  local_60 = 0xd9a6520bd62c8a17;
  local_58 = 0x100000003;
  local_50 = 0xd9a64f0bd62c84fe;
  local_48 = 3;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_38);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5b0);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_01148cdc(&local_c8);
  iVar7 = (int)((ulong)uVar10 >> 0x20);
  iVar9 = (int)uVar10;
  FUN_01123f94(local_c8,iVar9 + iVar7 * 4);
  if (((int)local_b8 == iVar9) && (local_b8._4_4_ == iVar7)) {
    lVar8 = 0;
  }
  else if (((int)local_a8 == iVar9) && (local_a8._4_4_ == iVar7)) {
    lVar8 = 1;
  }
  else if (((int)local_98 == iVar9) && (local_98._4_4_ == iVar7)) {
    lVar8 = 2;
  }
  else if (((int)local_88 == iVar9) && (local_88._4_4_ == iVar7)) {
    lVar8 = 3;
  }
  else if (((int)local_78 == iVar9) && (local_78._4_4_ == iVar7)) {
    lVar8 = 4;
  }
  else if (((int)local_68 == iVar9) && (local_68._4_4_ == iVar7)) {
    lVar8 = 5;
  }
  else if (((int)local_58 == iVar9) && (local_58._4_4_ == iVar7)) {
    lVar8 = 6;
  }
  else {
    if (((int)local_48 != iVar9) || (local_48._4_4_ != iVar7)) goto LAB_01448ee0;
    lVar8 = 7;
  }
  FUN_0111b748(local_38,0xb,(&local_c0)[lVar8 * 2]);
LAB_01448ee0:
  if (local_c8 != (long *)0x0) {
    lVar8 = local_c8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


