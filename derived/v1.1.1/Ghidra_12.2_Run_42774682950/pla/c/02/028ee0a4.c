/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ee0a4; name: FUN_028ee0a4
 */


undefined * FUN_028ee0a4(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  
  if (((long *)*param_1 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x38))(), plVar2 != (long *)0x0)) {
    do {
      plVar3 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
      if (plVar3 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar3 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x028ee138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined *)(**(code **)(*plVar2 + 0x10))();
        return puVar4;
      }
      plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2);
    } while (plVar2 != (long *)0x0);
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar1 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  return PTR_DAT_0437a0d8;
}


