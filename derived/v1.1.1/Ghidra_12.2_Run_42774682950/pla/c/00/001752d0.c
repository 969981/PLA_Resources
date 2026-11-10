/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001752d0; name: FUN_001752d0
 */


undefined8 FUN_001752d0(long *param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double local_30;
  int local_28;
  
  if (*(uint *)(param_1 + 1) == 0x13) {
    dVar4 = (double)*param_1;
LAB_00175378:
    *param_2 = dVar4;
    return 1;
  }
  if ((*(uint *)(param_1 + 1) & 0xf) == 4) {
    lVar1 = FUN_00162710(*param_1 + 0x18,&local_30);
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 8) == '\x04') {
      uVar3 = (ulong)*(byte *)(lVar2 + 0xb);
    }
    else {
      uVar3 = *(ulong *)(lVar2 + 0x10);
    }
    if (lVar1 == uVar3 + 1) {
      dVar4 = (double)(long)local_30;
      if (local_28 != 0x13) {
        dVar4 = local_30;
      }
      goto LAB_00175378;
    }
  }
  return 0;
}


