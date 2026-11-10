/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe9c88; name: FUN_02fe9c88
 */


void FUN_02fe9c88(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  
  *param_1 = &PTR_LAB_042bb140;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0x10;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_02ff9a38(param_1 + 6);
  param_1[10] = param_2;
  *param_1 = &PTR_LAB_042bada0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x15d8);
  if (iVar1 != 0) {
    cVar2 = '\x01';
    do {
      iVar1 = iVar1 >> 1;
      cVar2 = cVar2 + '\x01';
    } while (iVar1 != 0);
    *(char *)((long)param_1 + 0x1c) = cVar2;
  }
  return;
}


