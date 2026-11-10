/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01661b20; name: FUN_01661b20
 */


void FUN_01661b20(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = param_3;
  if (param_4 < 10) {
    lVar5 = FUN_01662458(param_2 + 0xf0,&local_30);
    if (lVar5 != 0) {
      plVar7 = *(long **)(lVar5 + (ulong)param_4 * 8 + 0x18);
      goto LAB_01661b5c;
    }
  }
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar4 != 0))
  {
    local_28 = FUN_00938550();
    puVar3 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
    FUN_00100250(PTR_LAB_0437a8d8,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar7 = *(long **)PTR_DAT_0437a7d0;
LAB_01661b5c:
  plVar1 = (long *)PTR_DAT_04379c88;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 0xb;
  }
  plVar2 = (long *)PTR_PTR_04379d00;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 0xc;
  }
  lVar5 = *plVar2;
  if (plVar7 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar7[0xd];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  param_1[3] = (long)plVar7;
  return;
}


