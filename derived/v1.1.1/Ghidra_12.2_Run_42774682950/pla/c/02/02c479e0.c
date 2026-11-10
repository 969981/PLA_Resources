/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c479e0; name: FUN_02c479e0
 */


void FUN_02c479e0(long param_1,long param_2,byte param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 10) == '\0') {
    uVar1 = FUN_00229ee8(param_1 + 0x18);
    if (uVar1 == 0) {
      (**(code **)(**(long **)(param_2 + 0x18) + 0x98))
                (*(long **)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x10),1,param_3 & 1);
    }
    else {
      lVar2 = FUN_00229f00(param_1 + 0x18);
      uVar4 = (ulong)uVar1;
      do {
        lVar3 = FUN_00230558(*(undefined8 *)(param_2 + 0x20),lVar2);
        if (lVar3 != 0) {
          FUN_00250750(*(undefined8 *)(param_1 + 0x10),lVar3,param_3 & 1);
        }
        uVar4 = uVar4 - 1;
        lVar2 = lVar2 + 0x24;
      } while (uVar4 != 0);
    }
    *(undefined1 *)(param_1 + 10) = 1;
    *(byte *)(param_1 + 0xb) = param_3 & 1;
    *(long *)(param_1 + 0x40) = param_2;
  }
  return;
}


