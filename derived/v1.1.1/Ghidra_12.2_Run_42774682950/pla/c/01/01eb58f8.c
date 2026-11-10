/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb58f8; name: FUN_01eb58f8
 */


void FUN_01eb58f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  FUN_01eb5990();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar5 = *(long **)(param_1 + 0x50);
    uVar4 = *puVar1;
    uVar3 = FUN_02bcc75c(plVar5);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0x1000,0x10);
    }
    else {
      FUN_02bcc824(plVar5,uVar4,0x1000,0x10);
    }
  }
  FUN_01eb5abc(param_1);
  return;
}


