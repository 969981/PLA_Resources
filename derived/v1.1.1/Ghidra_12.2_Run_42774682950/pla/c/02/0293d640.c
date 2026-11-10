/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293d640; name: FUN_0293d640
 */


void FUN_0293d640(undefined8 param_1,byte param_2,long *param_3)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  void *__s;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  long local_78 [3];
  
  DAT_043ecde0 = param_1;
  plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x20,8);
  puVar13 = (undefined4 *)PTR_DAT_04379528;
  if (plVar7 == (long *)0x0) {
    plVar14 = (long *)0x0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar1 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar8 = nn::os::GetTlsValue(*puVar13);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0293dd38;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_3;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar1 = PTR_DAT_04379c50 + 0x10;
    plVar7[2] = -0x7d5d4e8add6295a5;
    plVar7[3] = 0;
    *plVar7 = (long)puVar1;
    plVar7[1] = (long)&DAT_f4b17a579f18960;
    uVar12 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    uVar11 = 0x20;
    plVar14 = param_3;
  }
  plVar3 = DAT_043ecda0;
  lVar8 = tpidr_el0;
  bVar2 = DAT_043ecda0 != (long *)0x0;
  DAT_043ecda0 = plVar7;
  if (bVar2) {
    FUN_02bcbe58(local_78,0);
    (**(code **)*plVar3)(plVar3);
    uVar5 = DAT_043ecdb8;
    uVar4 = DAT_043ecdb0;
    plVar7 = DAT_043ecda8;
    uVar9 = (**(code **)(*DAT_043ecda8 + 0xc0))(DAT_043ecda8);
    if ((uVar9 & 1) == 0) {
LAB_0293d7c4:
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar3,uVar4,uVar5);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0293d7c4;
      FUN_02bcc824(plVar7,plVar3,uVar4,uVar5);
    }
    puVar13 = (undefined4 *)PTR_DAT_04379528;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  plVar7 = DAT_043ecda0;
  DAT_043ecda8 = plVar14;
  DAT_043ecdb0 = uVar11;
  DAT_043ecdb8 = uVar12;
  nn::crypto::GenerateCryptographicallyRandomBytes(local_78,8);
  plVar7[2] = -0x7d5d4e8add6295a5;
  plVar7[3] = local_78[0];
  plVar7[1] = local_78[0];
  __s = (void *)(**(code **)(*param_3 + 0x10))(param_3,0xd4c,4);
  if (__s == (void *)0x0) {
    param_3 = (long *)0x0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar1 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*puVar13);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0293dd38:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
    uVar11 = 0xd4c;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    memset(__s,0,0xd4c);
    uVar12 = 4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  lVar10 = (long)DAT_043ecdc0;
  if (DAT_043ecdc0 == (void *)0x0) {
    DAT_043ecdc0 = __s;
    DAT_043ecdc8 = param_3;
    DAT_043ecdd0 = uVar11;
    DAT_043ecdd8 = uVar12;
    DAT_043ecde8 = param_2 & 1;
    return;
  }
  DAT_043ecdc0 = __s;
  FUN_02bcbe58(local_78,0);
  uVar5 = DAT_043ecdd8;
  uVar4 = DAT_043ecdd0;
  plVar7 = DAT_043ecdc8;
  uVar9 = (**(code **)(*DAT_043ecdc8 + 0xc0))(DAT_043ecdc8);
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar10,uVar4,uVar5);
      goto LAB_0293d9d0;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,uVar4,uVar5);
LAB_0293d9d0:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  DAT_043ecdc8 = param_3;
  DAT_043ecdd0 = uVar11;
  DAT_043ecdd8 = uVar12;
  DAT_043ecde8 = param_2 & 1;
  return;
}


