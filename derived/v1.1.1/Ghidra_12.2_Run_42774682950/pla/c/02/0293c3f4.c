/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293c3f4; name: FUN_0293c3f4
 */


undefined4 FUN_0293c3f4(long param_1,undefined1 param_2,undefined1 param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined1 local_3f;
  uint local_3c;
  undefined2 local_38;
  
  lVar4 = (&DAT_0428af30)[(ulong)param_4 * 6];
  if (lVar4 == 0) {
    plVar2 = &DAT_0428af30;
  }
  else {
    plVar2 = &DAT_0428af30;
    if (*(char *)(lVar4 + 0x1e1) != '\0') {
      plVar2 = &DAT_0428af30 + (ulong)param_4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar2 + 0x250) + (ulong)**(uint **)(*plVar2 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
      (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 == 0)) ||
     (*(char *)((long)piVar1 + uVar3) == '\0')) {
    local_48[0] = 0xe;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x90);
    FUN_0295e190(puVar5[1],*puVar5);
    **(undefined8 **)(puVar5[5] + 0x10) = 0;
    local_38 = 0;
    local_40 = param_2;
    local_3f = param_3;
    local_3c = param_4;
    FUN_029f6a40(*(undefined8 *)(*(long *)(puVar5[5] + 0x130) + 0x1cc0),local_48,&local_40);
  }
  return local_48[0];
}


