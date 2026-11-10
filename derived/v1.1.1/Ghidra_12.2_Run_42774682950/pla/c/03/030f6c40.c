/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6c40; name: FUN_030f6c40
 */


void FUN_030f6c40(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[4] = param_2;
  lVar2 = FUN_030f6cf0(PTR_PTR_0434a080,(long)param_1 + 0xc);
  *param_1 = lVar2;
  if ((int)param_1[1] != 0x80) {
    *(undefined4 *)(param_1 + 1) = 0x80;
  }
  *(undefined8 *)((long)param_1 + 0x14) = 0x7f;
  *(undefined8 *)(lVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(*param_1 + 0x38) = 0xffffffff;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 + 0x70) = 0xffffffffffffffff;
      lVar1 = *param_1 + lVar2;
      lVar2 = lVar2 + 0x40;
      *(undefined4 *)(lVar1 + 0x78) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)((long)param_1 + 0x14));
  }
  return;
}


