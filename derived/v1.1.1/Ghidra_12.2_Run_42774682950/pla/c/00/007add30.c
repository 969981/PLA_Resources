/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007add30; name: FUN_007add30
 */


void FUN_007add30(long *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_04377020;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar3 = FUN_0033aecc(param_1 + 1);
    uVar1 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    lVar5 = uVar6 + 9;
    if ((*(byte *)(uVar6 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar6 + 0x10);
      lVar5 = *(long *)(uVar6 + 0x18);
    }
    FUN_002e4094(uVar3,lVar5,uVar1);
  }
  if ((param_2 == PTR_DAT_04377018) || (lVar5 = *(long *)(param_2 + 0x10), lVar5 == 0)) {
    param_1[2] = 0;
    return;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar4 != 0) {
    FUN_0030bdf4(lVar4,lVar5);
  }
  param_1[2] = lVar4;
  return;
}


