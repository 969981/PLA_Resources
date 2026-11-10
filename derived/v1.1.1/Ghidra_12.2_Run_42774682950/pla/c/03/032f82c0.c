/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f82c0; name: FUN_032f82c0
 */


void FUN_032f82c0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = FUN_032fbea0();
  if (*(uint *)(param_1 + 1) == uVar3) {
    lVar4 = *param_1;
    iVar2 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar3) {
      lVar4 = FUN_032fbfa8(PTR_PTR_0434a080,iVar2);
      uVar3 = *(uint *)(param_1 + 1);
      *param_1 = lVar4;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(undefined8 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = *param_3;
  }
  return;
}


