/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fde934; name: FUN_02fde934
 */


void FUN_02fde934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_50 [32];
  
  iVar2 = *(int *)(param_1 + 0x40);
  lVar1 = 0;
  if (iVar2 != 0) {
    lVar1 = (long)iVar2 + param_1 + 0x40;
  }
  iVar2 = FUN_02ffcb50(*(undefined4 *)(param_1 + 0x20),param_2,lVar1,*(undefined4 *)(param_1 + 0x44)
                       ,param_3);
  if (iVar2 < 0) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,&DAT_03aae430,auStack_50);
    FUN_02ffbd5c(param_2,auStack_50,param_3);
  }
  return;
}


