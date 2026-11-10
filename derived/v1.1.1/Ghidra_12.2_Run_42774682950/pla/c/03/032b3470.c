/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3470; name: FUN_032b3470
 */


void FUN_032b3470(undefined8 param_1,uint param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint local_54;
  
  FUN_03321630();
  puVar2 = PTR_PTR_0434a090;
  local_54 = param_2;
  if ((int)param_2 < 1) {
    lVar3 = 0;
    uVar1 = 0x80000000;
  }
  else {
    lVar3 = FUN_032cf190(PTR_PTR_0434a090,4,&local_54);
    uVar1 = local_54;
  }
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      FUN_032b36a0(lVar3,param_2,param_1);
      FUN_032b3b60(lVar3,param_2,param_4);
      param_4 = param_4 + (-(ulong)(param_2 * 3 >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(param_2 * 3) << 2);
    } while (0 < param_3);
  }
  if ((lVar3 != 0) && (-1 < (int)uVar1)) {
    FUN_032cf244(puVar2,lVar3,4,uVar1 & 0x3fffffff);
  }
  return;
}


