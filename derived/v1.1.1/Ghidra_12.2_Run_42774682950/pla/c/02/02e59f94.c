/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e59f94; name: FUN_02e59f94
 */


undefined8 * FUN_02e59f94(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    uVar5 = FUN_02e5a02c(param_1);
    if ((uVar5 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar2 <= uVar1) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar3 = PTR_DAT_04388738;
  puVar4 = (undefined8 *)(*param_1 + (ulong)uVar1 * 0x30);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar6 = *param_1 + (ulong)uVar1 * 0x30;
  *puVar4 = 0xffffffffffffffff;
  puVar4[1] = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined2 *)(lVar6 + 0x1c) = 1;
  *(undefined **)(lVar6 + 0x10) = puVar3 + 0x10;
  return puVar4;
}


