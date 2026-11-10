/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334ab08; name: FUN_0334ab08
 */


void FUN_0334ab08(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar3 = PTR_PTR_0434a080;
  iVar2 = *(int *)((long)param_1 + 0xc);
  lVar5 = *param_1;
  uVar1 = iVar2 + 1;
  lVar4 = FUN_032cf2d8(PTR_PTR_0434a080,0x18,param_2);
  *param_1 = lVar4;
  FUN_032c4b00(lVar4,0xff,param_2 * 0x18);
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2 + -1;
  if (-1 < iVar2) {
    uVar6 = (ulong)uVar1;
    puVar7 = (undefined8 *)(lVar5 + 0x10);
    do {
      if (puVar7[-2] != -1) {
        FUN_0334a9e8(param_1,puVar7[-1],*puVar7);
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 3;
    } while (uVar6 != 0);
  }
  FUN_032cf368(puVar3,lVar5,0x18,uVar1);
  return;
}


