/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebfe78; name: FUN_02ebfe78
 */


undefined8 * FUN_02ebfe78(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    lVar4 = (*DAT_0442d148)(0,*param_1,(ulong)uVar3 << 4);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar3;
  }
  if (uVar2 < uVar3) {
    puVar5 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}


