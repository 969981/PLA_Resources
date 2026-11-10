/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021c0f8; name: FUN_0021c0f8
 */


long FUN_0021c0f8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  FUN_00876ba8(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar5 = FUN_00877190(param_1,&local_50);
  bVar3 = *(byte *)(param_2 + 0x15);
  iVar4 = *(int *)(param_2 + 0x10);
  lVar1 = 0x40;
  if (*(char *)(param_2 + 0x16) != '\0') {
    lVar1 = 0x60;
  }
  lVar6 = FUN_00877190(param_1,&local_50);
  uVar7 = (lVar6 + lVar1 * iVar4) - 1U & -lVar6;
  uVar2 = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar2 = uVar7;
  }
  return uVar7 + ((lVar5 + 0x7fU & -lVar5) << ((ulong)bVar3 & 0x3f)) + uVar2;
}


