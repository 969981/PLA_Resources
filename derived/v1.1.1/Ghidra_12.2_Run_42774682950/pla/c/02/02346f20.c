/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02346f20; name: FUN_02346f20
 */


void FUN_02346f20(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  lVar1 = FUN_001511d0(param_1,1);
  puVar3 = *(undefined8 **)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7));
  plVar4 = (long *)puVar3[0x42];
  *puVar3 = &PTR_LAB_0425e588;
  puVar3[9] = &PTR_LAB_0425e688;
  puVar3[10] = &PTR_LAB_0425e768;
  if ((plVar4 == (long *)0x0) || (uVar2 = FUN_02a43a5c(plVar4[0xb]), (uVar2 & 1) == 0)) {
    lVar1 = puVar3[0x40];
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    lVar1 = puVar3[0x40];
  }
  if (lVar1 != 0) {
    FUN_02a43934();
  }
  if (puVar3[0x3e] != 0) {
    FUN_02a43934();
  }
  FUN_02a4c4ec(puVar3);
  return;
}


