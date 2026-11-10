/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2f40; name: FUN_002f2f40
 */


void FUN_002f2f40(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 *__dest;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  undefined8 *local_30;
  undefined8 uStack_28;
  
  if (param_3 < 0x18) {
    local_40 = (undefined8 *)0x0;
    auStack_38[0] = (char)param_3;
    if (param_3 == 0) goto LAB_002f2fcc;
LAB_002f2fb8:
    __dest = (undefined8 *)(auStack_38 + 1);
  }
  else {
    local_40 = (undefined8 *)FUN_002ebd50(param_3 + 0x38);
    local_40[5] = 0;
    *local_40 = local_40 + 5;
    local_40[2] = local_40;
    local_40[3] = &LAB_002f3f58;
    *(undefined4 *)(local_40 + 1) = 3;
    local_40[4] = local_40;
    local_40[6] = 1;
    __dest = local_40 + 7;
    auStack_38 = (undefined1  [8])param_3;
    local_30 = __dest;
    if (local_40 == (undefined8 *)0x0) goto LAB_002f2fb8;
  }
  memcpy(__dest,param_2,param_3);
LAB_002f2fcc:
  param_1[1] = auStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  return;
}


