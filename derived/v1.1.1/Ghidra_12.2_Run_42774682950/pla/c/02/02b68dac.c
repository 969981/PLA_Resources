/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b68dac; name: FUN_02b68dac
 */


undefined * FUN_02b68dac(long param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar6 != plVar4) {
    do {
      sVar1 = *(short *)((long)plVar6 + 10);
      sVar2 = (**(code **)(*(long *)(*(long *)(*plVar6 + 0x58) + 0x58) + 0x10))();
      if ((int)(short)param_2 < (int)sVar1 + (int)sVar2) {
        plVar4 = (long *)(*(long *)(*plVar6 + 0x58) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x02b68e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (undefined *)
                 (**(code **)(*plVar4 + 0x20))
                           (plVar4,param_2 - (uint)*(ushort *)((long)plVar6 + 10));
        return puVar5;
      }
      plVar6 = plVar6 + 2;
    } while (plVar4 != plVar6);
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  return PTR_DAT_0437a0d8;
}


