/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee399c; name: FUN_02ee399c
 */


void FUN_02ee399c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 local_60;
  undefined1 local_58;
  
  lVar1 = param_2 + (param_3 & 0xffffffff) * 0x10;
  puVar2 = (uint *)(lVar1 + 0x38);
  if (*puVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x30);
    puVar4 = (undefined4 *)*plVar3;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar5 = puVar4 + 1;
      FUN_02ee0d64(param_1,param_2,*puVar4,param_4,&local_60,1,1);
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)(*plVar3 + (ulong)*puVar2 * 4));
  }
  return;
}


