/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6e778; name: FUN_02f6e778
 */


void FUN_02f6e778(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x30);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_2 + 0x30;
  }
  lVar1 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x48))();
  FUN_02f72bd8(lVar1,param_1,&LAB_02f72958,0,param_3);
  FUN_02f72d7c(lVar1 + 8,param_1,&LAB_02f72a50,0,param_3);
  return;
}


