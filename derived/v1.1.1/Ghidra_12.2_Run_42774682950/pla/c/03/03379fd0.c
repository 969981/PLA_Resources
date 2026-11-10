/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03379fd0; name: FUN_03379fd0
 */


void FUN_03379fd0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  
  uVar6 = FUN_0337a3dc();
  if (*(uint *)(param_1 + 1) == uVar6) {
    lVar7 = *param_1;
    iVar1 = uVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar6) {
      lVar7 = FUN_0337a23c(PTR_PTR_0434a080,iVar1);
      uVar6 = *(uint *)(param_1 + 1);
      *param_1 = lVar7;
    }
    uVar4 = param_2[1];
    puVar3 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 0x20);
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    uVar5 = *param_3;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined4 *)(puVar3 + 2) = uVar5;
    if (*(char *)(param_3 + 2) != '\0') {
      *(undefined4 *)((long)puVar3 + 0x14) = param_3[1];
      *(undefined1 *)(puVar3 + 3) = 1;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    lVar8 = *param_1;
    lVar7 = lVar8 + ((long)((ulong)uVar6 << 0x20) >> 0x1b);
    *(undefined4 *)(lVar7 + 0x10) = *param_3;
    if (*(char *)(param_3 + 2) == '\0') {
      pcVar9 = (char *)(lVar8 + (long)(int)uVar6 * 0x20 + 0x18);
      if (*pcVar9 != '\0') {
        *pcVar9 = '\0';
      }
    }
    else {
      pcVar9 = (char *)(lVar8 + (long)(int)uVar6 * 0x20 + 0x18);
      puVar2 = (undefined4 *)(lVar7 + 0x14);
      if (*pcVar9 == '\0') {
        *puVar2 = param_3[1];
        *pcVar9 = '\x01';
      }
      else {
        *puVar2 = param_3[1];
      }
    }
  }
  return;
}


