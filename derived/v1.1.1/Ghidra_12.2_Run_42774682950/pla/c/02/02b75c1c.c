/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b75c1c; name: FUN_02b75c1c
 */


undefined8 FUN_02b75c1c(long param_1,char *param_2)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  lVar8 = *(long *)(param_1 + 0x80);
  lVar9 = *(long *)(lVar8 + 0x38);
  if (param_2 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_2);
  }
  uVar5 = (ulong)*(ushort *)(lVar9 + 0xc);
  puVar10 = (uint *)((int *)(lVar9 + 8) + uVar5 * 4);
  iVar7 = *(int *)(lVar9 + 8);
  while (uVar2 = *puVar10, iVar7 < (int)uVar2) {
    uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (uVar6 < sVar4) {
      uVar6 = (ulong)((byte)param_2[sVar4 + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
    }
    else {
      uVar6 = 0;
    }
    piVar1 = (int *)(lVar9 + 8 + uVar5 * 0x10);
    uVar5 = (ulong)*(ushort *)((long)piVar1 + uVar6 * 2 + 4);
    puVar10 = (uint *)(lVar9 + 8 + uVar5 * 0x10);
    iVar7 = *piVar1;
  }
  uVar5 = (ulong)**(ushort **)(puVar10 + 2);
  __n = sVar4;
  if (uVar5 <= sVar4) {
    __n = uVar5;
  }
  if (__n == 0) {
    if (uVar5 <= sVar4) goto LAB_02b75cec;
  }
  else {
    iVar3 = memcmp(*(ushort **)(puVar10 + 2) + 1,param_2,__n);
    iVar7 = iVar3;
    if (iVar3 == 0) {
      iVar7 = 1;
    }
    if (uVar5 <= sVar4 && iVar3 == 0) {
LAB_02b75cec:
      iVar7 = -(uint)(uVar5 < sVar4);
    }
    if (iVar7 == 0) {
      lVar9 = ((long)puVar10 + (-0x18 - lVar9)) * 0x10000000 >> 0x20;
      goto LAB_02b75d0c;
    }
  }
  lVar9 = -1;
LAB_02b75d0c:
  return *(undefined8 *)(*(long *)(lVar8 + 0x28) + lVar9 * 8);
}


