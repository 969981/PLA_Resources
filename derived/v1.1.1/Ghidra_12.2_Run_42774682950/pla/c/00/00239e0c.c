/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239e0c; name: FUN_00239e0c
 */


long * FUN_00239e0c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = FUN_002346f8(param_1,param_3);
  if (lVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_00229dc4(auStack_60,lVar1);
    if (local_58 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)FUN_00232654(0x70);
      if (plVar2 != (long *)0x0) {
        FUN_0023a1b8(plVar2);
        plVar3 = plVar2 + 1;
        lVar1 = *plVar3;
        plVar4 = (long *)(param_1 + 8);
        *plVar3 = *plVar4;
        *(long **)(lVar1 + 8) = plVar4;
        *(long **)(*plVar4 + 8) = plVar3;
        *plVar4 = lVar1;
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*(undefined8 *)(param_1 + 0x40),local_58);
      }
    }
    FUN_0023a284(plVar2,auStack_60,param_1,*(undefined8 *)(param_1 + 0x20),param_4 & 1);
  }
  return plVar2;
}


