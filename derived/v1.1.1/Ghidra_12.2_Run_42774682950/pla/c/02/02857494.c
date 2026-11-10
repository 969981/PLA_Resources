/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02857494; name: FUN_02857494
 */


void FUN_02857494(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_50 = *(undefined8 *)(param_1 + 0x318);
  local_48 = *(undefined8 *)(param_1 + 800);
  local_40 = *(undefined8 *)(param_1 + 0x328);
  plVar6 = *(long **)(param_1 + 0x330);
  local_38 = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_70 = *(undefined8 *)(param_1 + 0x338);
  local_68 = *(undefined8 *)(param_1 + 0x340);
  local_60 = *(undefined8 *)(param_1 + 0x348);
  plVar5 = *(long **)(param_1 + 0x350);
  local_58 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  iVar1 = FUN_02c667f4(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x30) == '\0')) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    if (*(long *)(lVar4 + 8) == 0) {
      uVar2 = FUN_02c5e31c();
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar2 = FUN_02c66b3c(lVar4);
    }
    if (uVar2 != 0) {
      plVar7 = plVar5;
      plVar8 = plVar6;
      goto LAB_02857530;
    }
  }
  uVar3 = FUN_00d63240(*(undefined8 *)(param_1 + 8),param_1 + 0x278);
  FUN_0284c170(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),uVar3,1,
               *(undefined1 *)(param_1 + 0x30),0,0);
  local_50 = *(undefined8 *)(param_1 + 0x338);
  local_48 = *(undefined8 *)(param_1 + 0x340);
  local_40 = *(undefined8 *)(param_1 + 0x348);
  plVar8 = *(long **)(param_1 + 0x350);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_38 = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  local_70 = *(undefined8 *)(param_1 + 0x318);
  local_68 = *(undefined8 *)(param_1 + 800);
  local_60 = *(undefined8 *)(param_1 + 0x328);
  plVar7 = *(long **)(param_1 + 0x330);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_58 = plVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
LAB_02857530:
  FUN_0283b430(*(undefined8 *)(param_1 + 8),&local_70);
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_50);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}


