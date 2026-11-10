/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00234754; name: FUN_00234754
 */


long * FUN_00234754(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + 8);
  if (lVar6 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = FUN_00229ee8(param_4);
    plVar3 = (long *)(**(code **)PTR_DAT_04372ba8)
                               ((uVar2 & 0xffff) * 8 + 0x58,4,*(undefined8 *)PTR_DAT_04372bb8);
    if (plVar3 != (long *)0x0) {
      FUN_00239358(plVar3);
      puVar1 = PTR_DAT_04372be8;
      plVar3[9] = 0;
      *(undefined4 *)(plVar3 + 10) = 0;
      *plVar3 = (long)(puVar1 + 0x10);
      (**(code **)(puVar1 + 0x50))(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),lVar6);
      plVar4 = plVar3 + 1;
      lVar6 = *plVar4;
      plVar5 = (long *)(param_1 + 8);
      *plVar4 = *plVar5;
      *(long **)(lVar6 + 8) = plVar5;
      *(long **)(*plVar5 + 8) = plVar4;
      *plVar5 = lVar6;
      FUN_002397d4(plVar3,param_4,*(undefined8 *)(param_1 + 0x20),plVar3 + 0xb,param_5 & 1);
    }
  }
  return plVar3;
}


