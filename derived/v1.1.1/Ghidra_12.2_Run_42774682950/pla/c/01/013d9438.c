/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d9438; name: FUN_013d9438
 */


void FUN_013d9438(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
                 uint param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x490) = 0xd;
  lVar2 = *(long *)(lVar1 + 0x498);
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x4c8);
  *(undefined4 *)(lVar1 + 0x4c0) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x4f8);
  *(undefined4 *)(lVar1 + 0x4f0) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x528);
  *(undefined4 *)(lVar1 + 0x520) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar1 + 0x550) = 0xd;
  lVar1 = *(long *)(lVar1 + 0x558);
  if (*(char *)(lVar1 + 0x7c) != '\0') {
    **(undefined2 **)(lVar1 + 0x58) = 0;
    *(undefined2 *)(lVar1 + 0x7a) = 0;
  }
  if (((int)param_2 == 0) || (*(int *)(param_1 + 0x50) != 1)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_013d9b18();
    }
    else {
      FUN_013d9de4(param_1);
    }
  }
  else {
    FUN_013d952c(param_1,param_2,param_3 & 1,param_4 & 1,param_5,param_6 & 1);
  }
  FUN_02814a44(*(undefined8 *)(param_1 + 8),1);
  return;
}


