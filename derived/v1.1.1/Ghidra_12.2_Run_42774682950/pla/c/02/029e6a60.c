/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e6a60; name: FUN_029e6a60
 */


void FUN_029e6a60(long param_1,undefined1 *param_2,byte *param_3)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  *param_2 = 0;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
  lVar4 = *(long *)(lVar3 + 0x60);
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(lVar4 + 0x98));
  if (((((uVar2 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
      (*(short *)(lVar3 + 0x74) != 0)) || (param_3[4] != 0)) {
    lVar4 = lVar3 + (ulong)param_3[1] * 0x1c;
    piVar1 = (int *)(lVar4 + 0x2f4);
    if (param_3[3] != 0) {
      piVar1 = (int *)(lVar4 + 0x300);
    }
    if ((*piVar1 == 0) || ((char)piVar1[1] != *(char *)((long)piVar1 + 5))) {
      FUN_02a3b978(*(undefined8 *)(param_1 + 0x20),lVar3,(ulong)param_3[1],param_3[2],
                   param_3[3] == 0);
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 8);
      *param_2 = 1;
    }
  }
  return;
}


