/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2c478; name: FUN_02f2c478
 */


void FUN_02f2c478(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(int *)(param_1 + 0x158) == 0) && (*(int *)(param_1 + 0x15c) == 2)) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x284) = 0;
      *(uint *)(lVar2 + 0x28b) = *(uint *)(lVar2 + 0x28b) & 0xfe3fffff;
    }
  }
  else if ((*(long *)(param_1 + 0x128) != 0) &&
          ((*(byte *)(*(long *)(param_1 + 0x128) + 0x20) & 1) != 0)) {
    plVar3 = (long *)(param_1 + 0x68);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    *(undefined8 *)(param_1 + 0x58) = 0;
    iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
    if (iVar1 != 1) {
      if (*(long *)(param_1 + 0x128) != 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
        *(byte *)(lVar2 + 0x2a2) = *(byte *)(lVar2 + 0x2a2) & 0x87;
      }
      *(undefined4 *)(param_1 + 0x140) = 2;
    }
  }
  return;
}


