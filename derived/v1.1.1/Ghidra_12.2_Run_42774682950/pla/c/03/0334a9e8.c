/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334a9e8; name: FUN_0334a9e8
 */


bool FUN_0334a9e8(long *param_1,char *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = FUN_032bb190(param_2);
  iVar7 = (int)param_1[1];
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar4 < iVar7 * 2) {
    FUN_0334ab08(param_1,uVar4 * 2 + 2);
    iVar7 = (int)param_1[1];
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  uVar8 = (ulong)(uVar4 & uVar1);
  lVar3 = *param_1;
  uVar6 = *(ulong *)(lVar3 + uVar8 * 0x18);
  if (uVar6 == 0xffffffffffffffff) {
    iVar2 = iVar7;
  }
  else {
    do {
      if (uVar6 == uVar1) {
        iVar2 = strcmp(param_2,*(char **)(lVar3 + uVar8 * 0x18 + 8));
        if (iVar2 == 0) {
          lVar3 = *param_1;
          goto LAB_0334aab8;
        }
        uVar4 = *(uint *)((long)param_1 + 0xc);
        lVar3 = *param_1;
      }
      uVar8 = uVar8 + 1 & (long)(int)uVar4;
      uVar6 = *(ulong *)(lVar3 + uVar8 * 0x18);
    } while (uVar6 != 0xffffffffffffffff);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
LAB_0334aab8:
  lVar5 = uVar8 * 0x18;
  *(ulong *)(lVar3 + lVar5) = (ulong)uVar1;
  *(char **)(*param_1 + lVar5 + 8) = param_2;
  *(undefined8 *)(*param_1 + lVar5 + 0x10) = param_3;
  return iVar7 != (int)param_1[1];
}


