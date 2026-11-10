/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12180; name: FUN_00d12180
 */


undefined8 FUN_00d12180(long *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ProfanityFilter *pPVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  DAT_043ab4e0 = param_1;
  DAT_043ab4e8 = (**(code **)(*param_1 + 0x10))(param_1,0x20000,0x1000);
  if (DAT_043ab4f0 == (ProfanityFilter *)0x0) {
    pPVar4 = (ProfanityFilter *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    nn::ngc::ProfanityFilter::ProfanityFilter(pPVar4);
    DAT_043ab4f0 = pPVar4;
  }
  iVar3 = nn::ngc::ProfanityFilter::Initialize(DAT_043ab4f0,DAT_043ab4e8);
  if (iVar3 == 0) {
    (**(code **)(*(long *)DAT_043ab4f0 + 0x10))();
    return 0;
  }
  nn::result::detail::OnUnhandledResult(iVar3);
  uVar6 = 0;
  if (DAT_043ab4f0 == (ProfanityFilter *)0x0) goto LAB_00d122e8;
  nn::ngc::ProfanityFilter::Finalize();
  (*(code *)**(undefined8 **)DAT_043ab4f0)();
  pPVar4 = DAT_043ab4f0;
  plVar2 = DAT_043ab4e0;
  uVar5 = (**(code **)(*DAT_043ab4e0 + 0xc0))(DAT_043ab4e0);
  if ((uVar5 & 1) == 0) {
LAB_00d122c8:
    uVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,pPVar4,0x30,8);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00d122c8;
    uVar6 = FUN_02bcc824(plVar2,pPVar4,0x30,8);
  }
  DAT_043ab4f0 = (ProfanityFilter *)0x0;
LAB_00d122e8:
  uVar5 = DAT_043ab4e8;
  plVar2 = DAT_043ab4e0;
  if (DAT_043ab4e8 == 0) {
    DAT_043ab4e0 = (long *)0x0;
    return uVar6;
  }
  uVar7 = (**(code **)(*DAT_043ab4e0 + 0xc0))(DAT_043ab4e0);
  if ((uVar7 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      uVar6 = FUN_02bcc824(plVar2,uVar5,0x20000,0x1000);
      DAT_043ab4e0 = (long *)0x0;
      DAT_043ab4e8 = 0;
      return uVar6;
    }
  }
  uVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar5,0x20000,0x1000);
  DAT_043ab4e8 = 0;
  DAT_043ab4e0 = (long *)0x0;
  return uVar6;
}


