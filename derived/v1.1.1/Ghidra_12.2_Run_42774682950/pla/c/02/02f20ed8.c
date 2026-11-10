/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20ed8; name: FUN_02f20ed8
 */


void FUN_02f20ed8(long param_1,uint param_2)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
    if ((*(byte *)(param_1 + 0x82) >> 1 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    FUN_02dec630(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68),auStack_28);
    FUN_02ede6bc(DAT_0440a178,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x210),param_1,auStack_28)
    ;
  }
  return;
}


