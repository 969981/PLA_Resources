/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3060; name: FUN_032c3060
 */


void FUN_032c3060(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    lVar2 = 0;
    lVar3 = (ulong)*(uint *)((long)param_1 + 0xc) + 1;
    do {
      if (*(long *)(*param_1 + lVar2) != -1) {
        *(undefined8 *)(*param_1 + lVar2) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (*param_1 != 0)) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(long)(*(int *)((long)param_1 + 0xc) * 0x10 + 0x10));
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}


