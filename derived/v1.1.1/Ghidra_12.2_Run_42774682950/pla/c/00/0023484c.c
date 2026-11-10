/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023484c; name: FUN_0023484c
 */


long * FUN_0023484c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + 8);
  if (lVar6 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)PTR_DAT_04372ba8)(0x50,4,*(undefined8 *)PTR_DAT_04372bb8);
    if (plVar2 != (long *)0x0) {
      FUN_00239358(plVar2);
      puVar1 = PTR_DAT_04372bf0;
      plVar2[9] = 0;
      *plVar2 = (long)(puVar1 + 0x10);
      plVar3 = plVar2 + 1;
      lVar4 = *plVar3;
      plVar5 = (long *)(param_1 + 8);
      *plVar3 = *plVar5;
      *(long **)(lVar4 + 8) = plVar5;
      *(long **)(*plVar5 + 8) = plVar3;
      *plVar5 = lVar4;
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*(undefined8 *)(param_1 + 0x40),lVar6);
    }
  }
  FUN_00239724(plVar2,param_4,*(undefined8 *)(param_1 + 0x20),0,param_5 & 1);
  return plVar2;
}


