/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00868234; name: FUN_00868234
 */


void FUN_00868234(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,byte param_5)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_00612290();
  param_1[3] = uVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_008682cc;
  }
  else {
    uVar1 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1,1);
    *param_1 = uVar1 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar3;
LAB_008682cc:
    memcpy(pvVar3,param_2,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_00612290();
  param_1[7] = uVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00868364;
  }
  else {
    uVar1 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],uVar1,1);
    param_1[4] = uVar1 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)pvVar3;
  }
  memcpy(pvVar3,param_3,sVar2);
LAB_00868364:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(byte *)((long)param_1 + 0x44) = param_5 & 1;
  return;
}


