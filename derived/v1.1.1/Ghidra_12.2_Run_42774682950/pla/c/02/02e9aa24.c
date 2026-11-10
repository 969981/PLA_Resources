/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9aa24; name: FUN_02e9aa24
 */


undefined8
FUN_02e9aa24(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,void *param_8,int param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_02e9afbc(param_1,param_5,param_6);
  puVar1 = (undefined4 *)FUN_02e9b0d0(param_1 + 0xe0);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 2;
  }
  else {
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    uVar2 = 1;
    puVar1[4] = param_6;
    if ((param_8 != (void *)0x0) && (param_9 != 0)) {
      plVar4 = (long *)(puVar1 + 6);
      if (*plVar4 != 0) {
        (*DAT_0442d150)(0);
        *plVar4 = 0;
      }
      puVar1[10] = 1;
      puVar1[8] = param_9 + 2;
      puVar1[9] = 0;
      lVar3 = (*DAT_0442d138)(0,(param_9 + 2) * 0x14);
      *(long *)(puVar1 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar2 = 0x34;
        puVar1[8] = 0;
      }
      else {
        puVar1[9] = param_7;
        memcpy((void *)(lVar3 + 0xc),param_8,(ulong)(uint)(param_9 * 0xc));
        *(undefined4 *)(*(long *)(puVar1 + 6) + 8) = 9;
        **(undefined4 **)(puVar1 + 6) = 0xff7fffff;
        *(undefined4 *)(*(long *)(puVar1 + 6) + 4) = *(undefined4 *)(*(long *)(puVar1 + 6) + 0x10);
        *(undefined4 *)(*(long *)(puVar1 + 6) + (ulong)(puVar1[8] - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*(long *)(puVar1 + 6) + (ulong)(puVar1[8] - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*(long *)(puVar1 + 6) + (ulong)(puVar1[8] - 1) * 0xc + 4) =
             *(undefined4 *)(*(long *)(puVar1 + 6) + (ulong)(puVar1[8] - 2) * 0xc + 4);
        FUN_02e9b180(plVar4);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


