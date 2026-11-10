/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52b20; name: FUN_02e52b20
 */


undefined8 FUN_02e52b20(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_14 [4];
  
  uVar4 = *(ulong *)(param_2 + 0x40);
  uVar5 = *(ulong *)(param_3 + 0x40);
  uVar1 = uVar5;
  if (uVar5 <= uVar4) {
    uVar1 = uVar4;
    uVar4 = uVar5;
  }
  lVar2 = FUN_02e53940(param_1 + 0x50,uVar4,uVar1,local_14);
  if ((lVar2 == 0 || local_14[0] == '\0') || (*(float *)(lVar2 + 0x14) == 3.4028235e+38)) {
    return 0;
  }
  uVar3 = FUN_02e58f1c(lVar2 + 0x18);
  return uVar3;
}


