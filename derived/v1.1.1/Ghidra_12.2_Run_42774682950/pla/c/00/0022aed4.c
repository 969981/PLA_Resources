/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022aed4; name: FUN_0022aed4
 */


undefined8 FUN_0022aed4(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  char local_170 [256];
  undefined4 local_70;
  undefined1 local_6c;
  
  FUN_0022ac88(param_1,param_3);
  lVar9 = *(long *)(param_1 + 0xb0);
  if (lVar9 == 0) goto LAB_0022b038;
  lVar10 = *(long *)(lVar9 + 0x38);
  if (param_4 == (char *)0x0) {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_4);
  }
  uVar7 = (ulong)*(ushort *)(lVar10 + 0xc);
  puVar11 = (uint *)((int *)(lVar10 + 8) + uVar7 * 4);
  uVar2 = *puVar11;
  if (*(int *)(lVar10 + 8) < (int)uVar2) {
    do {
      uVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar8 < sVar5) {
        uVar8 = (ulong)((byte)param_4[sVar5 + ~uVar8] >> ((ulong)uVar2 & 7)) & 1;
      }
      else {
        uVar8 = 0;
      }
      piVar1 = (int *)(lVar10 + 8 + uVar7 * 0x10);
      uVar7 = (ulong)*(ushort *)((long)piVar1 + uVar8 * 2 + 4);
      puVar11 = (uint *)(lVar10 + 8 + uVar7 * 0x10);
      uVar2 = *puVar11;
    } while (*piVar1 < (int)uVar2);
  }
  uVar7 = (ulong)**(ushort **)(puVar11 + 2);
  __n = sVar5;
  if (sVar5 >= uVar7) {
    __n = uVar7;
  }
  if (__n == 0) {
    if (sVar5 < uVar7) goto LAB_0022b038;
LAB_0022afe0:
    if (uVar7 < sVar5) goto LAB_0022b038;
  }
  else {
    iVar3 = memcmp(*(ushort **)(puVar11 + 2) + 1,param_4,__n);
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = 1;
    }
    if (uVar7 <= sVar5 && iVar3 == 0) goto LAB_0022afe0;
    if (iVar4 != 0) goto LAB_0022b038;
  }
  uVar7 = (long)puVar11 + (-0x18 - lVar10);
  if (((~uVar7 & 0xffffffff0) != 0) &&
     (*(long *)(*(long *)(lVar9 + 0x28) + ((long)(uVar7 * 0x10000000) >> 0x1d)) != 0)) {
    uVar6 = FUN_002505c0(param_2,param_3);
    return uVar6;
  }
LAB_0022b038:
  local_70 = 0x676d6974;
  local_6c = 0;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf(local_170,0xff,"%s/%s",&local_70,param_4);
  }
  else {
    nn::util::SNPrintf(local_170,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_70,param_4);
  }
  iVar4 = FUN_0022c96c(param_1 + 8,local_170);
  if (iVar4 != -1) {
    local_170[0] = '\0';
    local_170[1] = '\0';
    local_170[2] = '\0';
    local_170[3] = '\0';
    local_170[4] = '\0';
    local_170[5] = '\0';
    local_170[6] = '\0';
    local_170[7] = '\0';
    FUN_0022c904(param_1 + 8,local_170,iVar4);
  }
  return 0;
}


