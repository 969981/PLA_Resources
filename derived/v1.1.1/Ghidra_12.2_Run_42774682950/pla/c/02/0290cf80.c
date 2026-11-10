/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290cf80; name: FUN_0290cf80
 */


bool FUN_0290cf80(float param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  FUN_0290b54c();
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar4 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar4;
  lVar5 = *(long *)(param_2 + 0x430);
  lVar4 = *(long *)(lVar4 + 0x158);
  powf(10.0,param_1 / 20.0);
  if (lVar5 == -1) {
    bVar1 = false;
  }
  else {
    plVar3 = *(long **)(lVar4 + 0x60);
    iVar2 = (**(code **)(*plVar3 + 0x110))(plVar3,lVar5,0,0);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


