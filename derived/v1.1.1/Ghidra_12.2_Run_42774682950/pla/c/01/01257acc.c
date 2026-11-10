/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01257acc; name: FUN_01257acc
 */


void FUN_01257acc(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(int *)(*(long *)(param_1 + 0x13e0) + (ulong)*(byte *)(param_1 + 0x1418) * 4) != 7) {
    FUN_0124f360(param_1);
    return;
  }
  lVar3 = FUN_01236ba0(param_1 + 0x5c0,7,*(undefined4 *)(param_1 + 0x14ec),param_1 + 0x758);
  plVar5 = *(long **)(lVar3 + 8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  bVar1 = *(byte *)(lVar3 + 0x10);
  plVar6 = *(long **)(lVar3 + 0x18);
  if (plVar6 == (long *)0x0) {
    plVar7 = *(long **)(lVar3 + 0x20);
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar7 = *(long **)(lVar3 + 0x20);
  }
  if (plVar7 == (long *)0x0) {
    plVar8 = *(long **)(lVar3 + 0x30);
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar8 = *(long **)(lVar3 + 0x30);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar2 = bVar1 - 1;
  if (uVar2 < 6) {
    uVar4 = *(undefined4 *)(&DAT_03a7a3a4 + (long)(char)uVar2 * 4);
  }
  else {
    uVar4 = 0;
  }
  FUN_0124f360(param_1,uVar4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01257bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}


