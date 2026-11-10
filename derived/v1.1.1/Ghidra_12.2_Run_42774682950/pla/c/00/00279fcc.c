/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00279fcc; name: FUN_00279fcc
 */


long FUN_00279fcc(long param_1,char *param_2)

{
  int *piVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_2);
  }
  uVar6 = (ulong)*(ushort *)(lVar8 + 0xc);
  puVar9 = (uint *)((int *)(lVar8 + 8) + uVar6 * 4);
  uVar3 = *puVar9;
  if (*(int *)(lVar8 + 8) < (int)uVar3) {
    do {
      uVar7 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      if (uVar7 < sVar5) {
        uVar7 = (ulong)((byte)param_2[sVar5 + ~uVar7] >> ((ulong)uVar3 & 7)) & 1;
      }
      else {
        uVar7 = 0;
      }
      piVar1 = (int *)(lVar8 + 8 + uVar6 * 0x10);
      uVar6 = (ulong)*(ushort *)((long)piVar1 + uVar7 * 2 + 4);
      puVar9 = (uint *)(lVar8 + 8 + uVar6 * 0x10);
      uVar3 = *puVar9;
    } while (*piVar1 < (int)uVar3);
  }
  uVar6 = (ulong)**(ushort **)(puVar9 + 2);
  __n = sVar5;
  if (uVar6 <= sVar5) {
    __n = uVar6;
  }
  if (__n == 0) {
    if (sVar5 < uVar6) {
      return 0;
    }
  }
  else {
    iVar4 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_2,__n);
    iVar2 = iVar4;
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    if (sVar5 < uVar6 || iVar4 != 0) {
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_0027a0c8;
    }
  }
  if (uVar6 < sVar5) {
    return 0;
  }
LAB_0027a0c8:
  uVar6 = (long)puVar9 + (-0x18 - lVar8);
  if ((~uVar6 & 0xffffffff0) == 0) {
    return 0;
  }
  return *(long *)(param_1 + 8) + ((long)(uVar6 * 0x10000000) >> 0x1c);
}


