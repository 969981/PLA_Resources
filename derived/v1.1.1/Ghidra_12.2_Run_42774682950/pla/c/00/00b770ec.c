/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b770ec; name: FUN_00b770ec
 */


void FUN_00b770ec(long *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *local_38;
  long *local_28;
  
  lVar8 = *param_1;
  lVar9 = *(long *)(lVar8 + 0x198);
  lVar6 = *(long *)(lVar9 + 8);
  if (lVar6 == 0) {
    plVar5 = (long *)FUN_00b779ac();
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x68);
  }
  if (lVar6 == 0) {
    puVar7 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + 0x60);
  }
  pcVar3 = strrchr((char *)*puVar7,0x2f);
  pcVar1 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3 + 1;
  }
  local_38 = (long *)0x0;
  if (*pcVar1 == '\0') {
    plVar5 = (long *)FUN_00938550();
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
    FUN_02a47cd8(&local_28,uVar4,pcVar1);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = local_28;
  }
  local_38 = plVar5;
  FUN_00b7eed4(lVar8,lVar9,&local_38,0,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  *(undefined4 *)(lVar8 + 0x1d0) = 10;
  return;
}


