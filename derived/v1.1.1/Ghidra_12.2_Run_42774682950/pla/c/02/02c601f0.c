/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c601f0; name: FUN_02c601f0
 */


void FUN_02c601f0(long param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98));
  lVar5 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)((long)piVar1 + uVar2);
  }
  if ((param_3 & 0xff) <= uVar3) {
    uVar3 = param_3;
  }
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  return;
}


