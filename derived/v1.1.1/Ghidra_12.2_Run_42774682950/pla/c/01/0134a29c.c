/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134a29c; name: FUN_0134a29c
 */


undefined4 FUN_0134a29c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_043729f0;
  plVar8 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar2 == 0) || (*plVar8 == *(long *)(&DAT_04206a10 + (long)param_2 * 0x18))) {
    plVar5 = plVar8;
  }
  else {
    lVar6 = lVar2 * 0x30;
    plVar7 = plVar8;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) goto LAB_0134a360;
      plVar1 = plVar7 + 6;
      plVar5 = plVar7 + 6;
      plVar7 = plVar7 + 6;
    } while (*plVar1 != *(long *)(&DAT_04206a10 + (long)param_2 * 0x18));
  }
  if (plVar5 == plVar8 + lVar2 * 6) {
LAB_0134a360:
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)plVar5[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0))
  {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  for (plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8); plVar5 != (long *)puVar3;
      plVar5 = (long *)*plVar5) {
  }
  return (int)plVar8[6];
}


