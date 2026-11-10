/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00243ed8; name: FUN_00243ed8
 */


void FUN_00243ed8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  
  if (((*(byte *)(param_1 + 0xb) ^ 0xff) & 0x81) != 0) {
    return;
  }
  if (((*(byte *)((long)param_1 + 0x5c) >> 4 & 1) != 0) && (*(char *)((long)param_1 + 0x5a) != '\0')
     ) {
    if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
      lVar1 = param_1[0x15] + 0xc;
      uVar2 = *(uint *)(param_1[0x15] + 0x10);
      FUN_00246720(*(undefined8 *)
                    (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                                      (long)*(char *)(lVar1 + (ulong)(*(int *)(lVar1
                                                                                              + (
                                                  ulong)uVar2 + 4) + uVar2) + 0xc) * 4) + uVar2) + 8
                    ),param_2,param_3);
      bVar3 = *(byte *)(param_1 + 0xb);
      goto joined_r0x00243f8c;
    }
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  }
  bVar3 = *(byte *)(param_1 + 0xb);
joined_r0x00243f8c:
  if (((bVar3 >> 1 & 1) == 0) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    for (plVar4 = (long *)param_1[5]; plVar4 != param_1 + 4; plVar4 = (long *)plVar4[1]) {
      (**(code **)(plVar4[-1] + 0xb8))(plVar4 + -1,param_2,param_3);
    }
  }
  return;
}


