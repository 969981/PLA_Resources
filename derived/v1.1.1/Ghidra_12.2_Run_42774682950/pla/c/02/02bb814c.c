/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb814c; name: FUN_02bb814c
 */


void FUN_02bb814c(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined8 local_38;
  undefined8 local_30;
  long lStack_28;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 400);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    if (pauVar1[3][0xc] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      lStack_28 = param_2 + 0x10;
      local_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_02b828f0(*(undefined8 *)(param_2 + 0x61c0),&local_38,*(undefined8 *)pauVar1[1],1)
      ;
      *pauVar1 = auVar2;
      pauVar1[3][0xc] = 0;
    }
    if (pauVar1[9][4] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      lStack_28 = param_2 + 0x10;
      local_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_02b8416c(*(undefined8 *)(param_2 + 0x6200),&local_38,*(undefined8 *)pauVar1[5],1)
      ;
      pauVar1[4] = auVar2;
      pauVar1[9][4] = 0;
    }
    if (pauVar1[0xc][0xc] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      lStack_28 = param_2 + 0x10;
      local_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_02b84e60(*(undefined8 *)(param_2 + 0x6220),&local_38,
                            *(undefined8 *)(pauVar1[10] + 8),1);
      *(undefined1 (*) [16])(pauVar1[9] + 8) = auVar2;
      pauVar1[0xc][0xc] = 0;
    }
    if (pauVar1[0x10][0] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      lStack_28 = param_2 + 0x10;
      local_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_02b85b90(*(undefined8 *)(param_2 + 0x6240),&local_38,*(undefined8 *)pauVar1[0xe],
                            1);
      pauVar1[0xd] = auVar2;
      pauVar1[0x10][0] = 0;
    }
    if (pauVar1[0x20][0] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      lStack_28 = param_2 + 0x10;
      local_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_02b834b8(*(undefined8 *)(param_2 + 0x61e0),&local_38,*(undefined8 *)pauVar1[0x1e]
                            ,1);
      pauVar1[0x1d] = auVar2;
      pauVar1[0x20][0] = 0;
    }
  }
  return;
}


