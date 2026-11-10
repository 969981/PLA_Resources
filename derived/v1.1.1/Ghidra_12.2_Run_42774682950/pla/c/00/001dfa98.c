/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dfa98; name: FUN_001dfa98
 */


undefined4 FUN_001dfa98(long *param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = *param_1;
  lVar8 = param_1[0xa6];
  *param_2 = 0;
  if (lVar8 == 0) {
    return 6;
  }
  nnosLockMutex(*(undefined8 *)(lVar8 + 0x18));
  iVar2 = *(int *)(lVar8 + 0x20);
  nnosUnlockMutex(*(undefined8 *)(lVar8 + 0x18));
  if (iVar2 != 0) {
    lVar8 = param_1[0xa6];
    FUN_001e0f40(param_1,*(undefined4 *)(lVar8 + 0x34),*(undefined8 *)(lVar8 + 0x38));
    *(undefined8 *)(lVar8 + 0x38) = 0;
    if (param_1[0xa4] != 0) {
      FUN_001df8e8(param_1 + 0xa2);
      *param_2 = param_1[0xa4];
      return 0;
    }
    bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    pcVar1 = "host";
    if (bVar4) {
      pcVar1 = "proxy";
    }
    uVar7 = 5;
    if (!bVar4) {
      uVar7 = 6;
    }
    FUN_001f3ae0(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0xa2]);
    FUN_001df8e8(param_1 + 0xa2);
    return uVar7;
  }
  auVar10 = FUN_001f8fb4();
  uVar5 = FUN_001f8fe0(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar9 + 0x1008),
                       *(undefined8 *)(lVar9 + 0x1010));
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(lVar8 + 8) == 0) {
    uVar6 = 1;
  }
  else {
    uVar3 = *(int *)(lVar8 + 8) << (*(long *)(lVar8 + 0x10) <= (long)(ulong)uVar5);
    uVar6 = 0xfa;
    if (uVar3 < 0xfb) {
      uVar6 = uVar3;
    }
    if (uVar3 < 0xfb && (long)(ulong)uVar5 < *(long *)(lVar8 + 0x10)) goto LAB_001dfbb4;
  }
  *(uint *)(lVar8 + 8) = uVar6;
LAB_001dfbb4:
  *(ulong *)(lVar8 + 0x10) = (ulong)(uVar6 + uVar5);
  FUN_001e6b54(*param_1,uVar6,1);
  return 0;
}


