/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161663c; name: FUN_0161663c
 */


void FUN_0161663c(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *local_48;
  long *local_40;
  int local_38;
  int iStack_34;
  
  puVar3 = PTR_DAT_04379558;
  local_38 = param_3;
  iStack_34 = param_2;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar5 = PTR_DAT_04379568;
  puVar4 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148e38(&local_40);
  if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
  FUN_01148b0c(&local_48);
  iVar6 = iStack_34;
  iVar8 = local_38;
  iVar7 = FUN_0111e0d0(local_48,iStack_34,local_38);
  if (iVar7 != 0) {
    iVar8 = iVar8 - iVar7;
    local_38 = iVar8;
  }
  lVar10 = *(long *)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60) - lVar10;
  if (lVar1 != 0) {
    uVar9 = 0;
    piVar11 = (int *)(lVar10 + 4);
    do {
      if (piVar11[-1] == iVar6) {
        *piVar11 = *piVar11 + iVar8;
        goto joined_r0x01616758;
      }
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 2;
    } while (uVar9 < (ulong)(lVar1 >> 3));
  }
  FUN_01616808((long *)(param_1 + 0x58),&iStack_34,&local_38);
joined_r0x01616758:
  plVar2 = local_40;
  if ((local_48 != (long *)0x0) &&
     (uVar9 = FUN_02a43a5c(local_48[0xb]), plVar2 = local_40, (uVar9 & 1) != 0)) {
    (**(code **)(*local_48 + 0x20))(local_48);
    plVar2 = local_40;
  }
  if ((plVar2 != (long *)0x0) && (uVar9 = FUN_02a43a5c(plVar2[0xb]), (uVar9 & 1) != 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  return;
}


