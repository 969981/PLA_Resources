/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bdf4; name: FUN_0030bdf4
 */


void FUN_0030bdf4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_04373a00;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_0030c8c0(param_1 + 1);
    FUN_0030cefc(uVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = lVar4;
  return;
}


