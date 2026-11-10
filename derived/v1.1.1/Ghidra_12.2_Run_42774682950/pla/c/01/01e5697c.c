/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5697c; name: FUN_01e5697c
 */


void FUN_01e5697c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x68);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x70);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x78);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x80);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x88);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x90);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0x98);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xa0);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xa8);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xb0);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xb8);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xc0);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 200);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + 0xd0);
  (**(code **)(*plVar2 + 0x40))(plVar2,0);
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379578), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar3 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar3;
  (**(code **)(**(long **)(lVar3 + 0x70) + 0x40))(*(long **)(lVar3 + 0x70),0);
                    /* WARNING: Could not recover jumptable at 0x01e56b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar3 + 0x68) + 0x40))(*(long **)(lVar3 + 0x68),0);
  return;
}


