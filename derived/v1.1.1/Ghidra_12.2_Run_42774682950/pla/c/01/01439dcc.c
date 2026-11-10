/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01439dcc; name: FUN_01439dcc
 */


long FUN_01439dcc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  local_48 = param_2[1];
  local_40 = param_2[2];
  plVar3 = (long *)param_2[3];
  plStack_38 = plVar3;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)FUN_01439ea0(uVar1,uVar2,&local_50);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar4 = (long *)FUN_01439ea0(uVar1,uVar2,&local_50);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((*(long **)(param_1 + 0x78) == plVar4) || (lVar6 = *plVar4, lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    (*(code *)**(undefined8 **)(lVar6 + 0x50))();
    uVar5 = FUN_01439f2c();
    if ((uVar5 & 1) == 0) {
      lVar6 = 0;
    }
  }
  return lVar6;
}


