/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f6330; name: FUN_029f6330
 */


void FUN_029f6330(long param_1,undefined1 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  *param_2 = 0;
  if ((int)param_3[1] != 0) {
    FUN_02971d78(*(undefined8 *)(param_1 + 0x38),*param_3);
    FUN_02a3b7b0(*(undefined8 *)(param_1 + 0x20),*param_3,-(int)param_3[1],
                 *(undefined1 *)((long)param_3 + 0xc),*(undefined1 *)((long)param_3 + 0xd),
                 *(undefined1 *)((long)param_3 + 0x19),1);
    *(byte *)(*param_3 + 900) = *(byte *)(*param_3 + 900) | 4;
    if ((param_3[2] != 0) && ((*(byte *)(param_3[2] + 2) & 0x7f) != 0)) {
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20));
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 800);
    lVar1 = *param_3;
    lVar2 = *(long *)(*(long *)(*(long *)(lVar3 + 0x10) + 8) + (ulong)*(byte *)(lVar1 + 0x7d) * 8 +
                     0x120);
    if (*(short *)(lVar2 + 0x76) != 0) {
      FUN_029825a0(*(undefined8 *)(lVar3 + 0x38),lVar2,1);
      lVar1 = *param_3;
    }
    FUN_02972090(*(undefined8 *)(param_1 + 0x38),lVar1,(int)param_3[1]);
    if ((char)param_3[3] != '\0') {
      local_48 = *param_3;
      local_40 = 1;
      local_38 = 0;
      FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_28,&local_48);
    }
    *param_2 = 1;
  }
  return;
}


