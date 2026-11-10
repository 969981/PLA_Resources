/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c95e8; name: FUN_014c95e8
 */


long FUN_014c95e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
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
  plVar4 = (long *)param_2[3];
  plStack_38 = plVar4;
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)FUN_014c96d0(uVar1,uVar2,&local_50);
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar3 = (long *)FUN_014c96d0(uVar1,uVar2,&local_50);
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((*(long **)(param_1 + 0x78) != plVar3) && (lVar6 = *plVar3, lVar6 != 0)) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
    lVar5 = FUN_014c975c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        return lVar6;
      }
    }
  }
  return 0;
}


