/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660ff0; name: FUN_01660ff0
 */


void FUN_01660ff0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_48;
  
  puVar3 = PTR_LAB_0437a8d8;
  puVar2 = PTR_DAT_0437a7d0;
  puVar1 = PTR_DAT_0437a7c0;
  lVar7 = 0;
  if ((*PTR_DAT_0437a7c0 & 1) != 0) goto LAB_01661050;
  do {
    iVar4 = __cxa_guard_acquire(puVar1);
    if (iVar4 == 0) goto LAB_01661050;
    local_48 = FUN_00938550();
    FUN_00b0fde8(puVar2,&local_48);
    FUN_00100250(puVar3,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(puVar1);
    plVar6 = *(long **)puVar2;
    while( true ) {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      plVar5 = *(long **)(param_1 + 0x68 + lVar7);
      *(long **)(param_1 + 0x68 + lVar7) = plVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      lVar7 = lVar7 + 8;
      if (lVar7 == 0x50) {
        return;
      }
      if ((*puVar1 & 1) == 0) break;
LAB_01661050:
      plVar6 = *(long **)puVar2;
    }
  } while( true );
}


