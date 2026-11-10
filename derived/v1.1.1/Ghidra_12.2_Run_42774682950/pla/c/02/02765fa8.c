/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765fa8; name: FUN_02765fa8
 */


void FUN_02765fa8(uint *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint local_28 [2];
  
  FUN_0276602c(local_28);
  if (local_28[0] == 0) {
    lVar4 = param_3[2];
    cVar2 = *(char *)(*param_3 + lVar4);
    param_3[2] = lVar4 + 1;
    bVar3 = cVar2 != -0x78;
    if (!bVar3) {
      uVar1 = *(undefined4 *)(*param_3 + lVar4 + 1);
      param_3[2] = lVar4 + 5;
      *(undefined4 *)(param_2 + 0x10) = uVar1;
    }
    *param_1 = (uint)bVar3;
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


