/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300da20; name: FUN_0300da20
 */


undefined8 FUN_0300da20(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_0300db70();
  if (*(uint *)(param_1 + 1) == uVar3) {
    lVar5 = *param_1;
    iVar2 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar3) {
      lVar5 = FUN_0300dc78(PTR_PTR_0434a080,iVar2);
      uVar3 = *(uint *)(param_1 + 1);
      *param_1 = lVar5;
    }
    puVar1 = (undefined8 *)(lVar5 + (long)(int)uVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *(int *)(param_1 + 1) = iVar2;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(undefined8 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = *param_3;
  }
  return uVar4;
}


