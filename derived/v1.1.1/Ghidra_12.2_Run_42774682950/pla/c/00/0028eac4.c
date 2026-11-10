/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028eac4; name: FUN_0028eac4
 */


void FUN_0028eac4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  
  if (((*(byte *)(param_1 + 4) >> 3 & 1) == 0) &&
     (bVar4 = *(byte *)(param_1 + 0x5b), (ulong)bVar4 != 0)) {
    lVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar5;
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar3 = *(undefined4 **)(lVar1 + 0x18);
      FUN_008772a4(uVar2);
      puVar3[1] = 8;
      FUN_008772c0(uVar2,param_2,puVar3,param_3,(ulong)*(uint *)(lVar1 + 0x20) + param_4,*puVar3);
      FUN_0028ed80(uVar2,"g3d_index");
      lVar5 = lVar5 + 0x38;
    } while ((ulong)bVar4 * 0x38 != lVar5);
  }
  return;
}


