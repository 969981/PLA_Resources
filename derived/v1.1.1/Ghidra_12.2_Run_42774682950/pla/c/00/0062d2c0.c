/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062d2c0; name: FUN_0062d2c0
 */


void FUN_0062d2c0(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar7 = (ulong *)(param_1 + 1);
  *puVar7 = 0;
  puVar4 = PTR_DAT_043755c0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar5 = FUN_0033aecc(puVar7);
    uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    lVar3 = uVar8 + 9;
    if ((*(byte *)(uVar8 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar8 + 0x10);
      lVar3 = *(long *)(uVar8 + 0x18);
    }
    FUN_002e4094(uVar5,lVar3,uVar1);
  }
  param_1[2] = (long)PTR_DAT_043730c0;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) == 0) {
    return;
  }
  puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
  if ((*puVar7 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_0029175c(param_1 + 2,puVar6);
  return;
}


