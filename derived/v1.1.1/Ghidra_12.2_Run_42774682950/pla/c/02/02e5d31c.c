/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5d31c; name: FUN_02e5d31c
 */


void FUN_02e5d31c(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar1 = param_1 + (ulong)param_2 * 0x30;
    FUN_02e5d1b4(lVar1,param_4,&local_58,&local_60,&local_68);
    FUN_02e528b8(local_68,*(undefined8 *)(local_58 + 0x40),*(undefined8 *)(local_60 + 0x40),
                 lVar1 + 0x10);
    if (*(long *)(lVar1 + 0x20) != 0) {
      lVar2 = param_1 + (ulong)param_2 * 0x30;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      FUN_02f59e70(9);
      *(long *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x2c) = 0;
    }
  }
  return;
}


