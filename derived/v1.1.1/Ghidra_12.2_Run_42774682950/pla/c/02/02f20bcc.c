/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20bcc; name: FUN_02f20bcc
 */


undefined8 FUN_02f20bcc(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int local_30 [2];
  undefined4 local_28;
  
  FUN_02f1fbfc();
  *(undefined2 *)(param_1 + 0x80) = 1;
  if ((*(byte *)(param_1 + 0x82) >> 6 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x58);
  }
  else if (((*(byte *)(param_1 + 0x82) >> 5 & 1) == 0) ||
          (plVar3 = *(long **)(param_1 + 0x58), plVar3 == (long *)0x0)) {
    *(undefined2 *)(param_1 + 0x54) = 2;
    plVar3 = *(long **)(param_1 + 0x58);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,iVar1,0,local_30);
    if (iVar2 != 1) {
      return 2;
    }
    *(int *)(param_1 + 0x70) = local_30[0];
    *(int *)(param_1 + 0x74) = iVar1 - local_30[0];
    *(byte *)(param_1 + 0x82) =
         *(byte *)(param_1 + 0x82) & 0xbe |
         *(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
    plVar3 = *(long **)(param_1 + 0x58);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,local_30);
    local_28 = 0;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_30);
  }
  return 1;
}


