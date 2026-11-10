/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dac138; name: FUN_02dac138
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02dac138(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 auStack_58 [24];
  
  if (((DAT_04408ee0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04408ee0), iVar7 != 0)) {
    FUN_00100250(&LAB_02dbddd4,&DAT_04408ed0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_04408ee0);
  }
  DAT_04408ec8 = DAT_04408ed0;
  if (DAT_04408ed0 != (undefined8 *)0x0) {
    return;
  }
  if (((DAT_04408ee0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04408ee0), iVar7 != 0)) {
    FUN_00100250(&LAB_02dbddd4,&DAT_04408ed0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_04408ee0);
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x400,8);
  if (puVar9 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    FUN_02dbe03c(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_02dbe03c();
  *puVar9 = &PTR_LAB_04299f18;
  puVar9[9] = &PTR_LAB_04299f48;
  puVar13 = puVar9 + 10;
  *puVar13 = 0;
  FUN_028ca298(puVar9 + 0xb,0);
  piVar11 = (int *)*puVar13;
  if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 7)) ||
     (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar12 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar11 + uVar12);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_028ca298(puVar9 + 0x20,lVar10);
  piVar11 = (int *)puVar9[10];
  if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 9)) ||
     (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4], uVar12 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar11 + uVar12);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_028caf3c(puVar9 + 0x35,lVar10);
  FUN_028cc90c(puVar9 + 0x43,0);
  FUN_028caf3c(puVar9 + 0x72,0);
  DAT_043ec2d8 = puVar13;
  DAT_043ec2e0 = puVar9 + 0x43;
  puVar9[1] = param_1;
  puVar9[2] = puVar9;
  puVar9[3] = 0x400;
  puVar9[4] = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  puVar13 = DAT_04408ed0;
  if (DAT_04408ed0 == (undefined8 *)0x0) goto LAB_02dac3fc;
  plVar2 = (long *)DAT_04408ed0[1];
  uVar4 = DAT_04408ed0[2];
  uVar3 = DAT_04408ed0[3];
  uVar5 = DAT_04408ed0[4];
  DAT_04408ed0 = puVar9;
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar13)(puVar13);
  uVar12 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar8 = tpidr_el0;
  if ((uVar12 & 1) == 0) {
LAB_02dac35c:
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar4,uVar3,uVar5);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dac35c;
    FUN_02bcc824(plVar2,uVar4,uVar3,uVar5);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  puVar9 = DAT_04408ed0;
LAB_02dac3fc:
  DAT_04408ed0 = puVar9;
  lVar8 = (long)(int)DAT_043eeed0;
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  DAT_043eeed0 = DAT_043eeed0 + 1;
  puVar9 = (undefined8 *)0x0;
  if (DAT_04408ed0 != (undefined8 *)0x0) {
    puVar9 = DAT_04408ed0 + 9;
  }
  *(undefined8 **)(&DAT_043eced0 + lVar8 * 8) = puVar9;
  return;
}


