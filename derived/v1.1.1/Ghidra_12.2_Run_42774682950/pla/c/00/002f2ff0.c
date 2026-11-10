/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2ff0; name: FUN_002f2ff0
 */


void FUN_002f2ff0(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined8 *__dest;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  undefined8 *local_30;
  undefined8 uStack_28;
  
  __n = strlen(param_2);
  if (__n < 0x18) {
    local_40 = (undefined8 *)0x0;
    auStack_38[0] = (char)__n;
    if (__n == 0) goto LAB_002f3080;
LAB_002f306c:
    __dest = (undefined8 *)(auStack_38 + 1);
  }
  else {
    local_40 = (undefined8 *)FUN_002ebd50(__n + 0x38);
    local_40[5] = 0;
    *local_40 = local_40 + 5;
    local_40[2] = local_40;
    local_40[3] = &LAB_002f3f58;
    *(undefined4 *)(local_40 + 1) = 3;
    local_40[4] = local_40;
    local_40[6] = 1;
    __dest = local_40 + 7;
    auStack_38 = (undefined1  [8])__n;
    local_30 = __dest;
    if (local_40 == (undefined8 *)0x0) goto LAB_002f306c;
  }
  memcpy(__dest,param_2,__n);
LAB_002f3080:
  param_1[1] = auStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  return;
}


