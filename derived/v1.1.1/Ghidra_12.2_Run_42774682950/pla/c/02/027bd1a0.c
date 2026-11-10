/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bd1a0; name: FUN_027bd1a0
 */


void FUN_027bd1a0(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined5 uStack_38;
  undefined3 local_33;
  undefined5 uStack_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar2 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar2;
  if ((lVar2 == 0) || (FUN_01148cdc(&local_28), local_28 == (long *)0x0)) {
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)param_1 = 1;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x19) = 0;
  }
  else {
    uStack_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_33 = 0;
    local_48 = 0;
    uVar3 = FUN_01123fd8(local_28,&local_48,0x1d);
    if ((uVar3 & 1) == 0) {
      if ((param_2 & 1) == 0) {
        *(undefined8 *)((long)param_1 + 4) = 0;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        *(undefined4 *)param_1 = 1;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        *(undefined8 *)((long)param_1 + 0x19) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 4) = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
      }
    }
    else {
      *(undefined4 *)param_1 = 1;
      *(ulong *)((long)param_1 + 0x19) = CONCAT53(uStack_30,local_33);
      *(ulong *)((long)param_1 + 0x14) = CONCAT35(local_33,uStack_38);
      *(undefined8 *)((long)param_1 + 0xc) = local_40;
      *(undefined8 *)((long)param_1 + 4) = local_48;
    }
    if ((local_28 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_28[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


