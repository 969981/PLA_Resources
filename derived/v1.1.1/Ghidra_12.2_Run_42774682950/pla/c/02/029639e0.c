/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029639e0; name: FUN_029639e0
 */


void FUN_029639e0(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  local_88 = param_2;
  uStack_80 = param_3;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x238,8);
  if (lVar5 == 0) {
    param_2 = (long *)0x0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_0295a8cc(lVar5,&local_88);
    uVar10 = 8;
    uVar11 = 0x238;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  puVar8 = *(undefined8 **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar5;
  if (puVar8 == (undefined8 *)0x0) goto LAB_02963bc0;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar8)(puVar8);
  plVar1 = *(long **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar5 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_02963b24:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,uVar2,uVar9);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02963b24;
    FUN_02bcc824(plVar1,puVar8,uVar2,uVar9);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02963bc0:
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  return;
}


