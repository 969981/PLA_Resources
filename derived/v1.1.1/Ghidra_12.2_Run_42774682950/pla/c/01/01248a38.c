/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01248a38; name: FUN_01248a38
 */


void FUN_01248a38(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x5c0);
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  plVar4 = (long *)param_3[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar6 = *(long *)(lVar7 + 0x18);
  lVar7 = lVar6 + (param_2 & 0xffffffff) * 0x20;
  *(undefined1 *)(lVar6 + (param_2 & 0xffffffff) + 0x6f8) = 0;
  *(undefined8 *)(lVar7 + 0x538) = uVar1;
  *(undefined8 *)(lVar7 + 0x540) = uVar3;
  *(undefined8 *)(lVar7 + 0x548) = uVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar5 = *(long **)(lVar7 + 0x550);
  *(long **)(lVar7 + 0x550) = plVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01248ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}


