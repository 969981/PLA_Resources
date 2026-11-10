/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00692d74; name: FUN_00692d74
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00692d74(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  uint uVar10;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 10;
    uVar10 = *(uint *)(lVar7 + 0x10);
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
      uVar8 = *(ulong *)(lVar7 + 8);
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      if (uVar10 >> 0xe == 0) {
        param_2[2] = (char)(uVar10 >> 7);
        param_2 = param_2 + 3;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
      else {
        param_2 = param_2 + 3;
        uVar10 = uVar10 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar10 >> 7;
          puVar4[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
    }
    if ((uVar8 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      uVar8 = uVar8 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar8 + 8) & 1) == 0) {
        pvVar5 = (void *)(uVar8 + 9);
        uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
      }
      else {
        uVar6 = *(ulong *)(uVar8 + 0x10);
        pvVar5 = *(void **)(uVar8 + 0x18);
      }
      sVar9 = (size_t)(int)uVar6;
      if (*param_3 - (long)param_2 < (long)sVar9) {
        param_2 = (undefined1 *)FUN_00310fe4(param_3,pvVar5,uVar6,param_2);
        iVar1 = *(int *)(param_1 + 0x1c);
      }
      else {
        memcpy(param_2,pvVar5,sVar9);
        param_2 = param_2 + sVar9;
        iVar1 = *(int *)(param_1 + 0x1c);
      }
    }
  }
  if (iVar1 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 0x12;
    uVar10 = *(uint *)(lVar7 + 0x28);
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      if (uVar10 >> 0xe == 0) {
        param_2[2] = (char)(uVar10 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar10 = uVar10 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar10 >> 7;
          puVar4[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00692440(lVar7,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 == 3) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 0x1a;
    uVar10 = *(uint *)(lVar7 + 0x10);
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
      uVar8 = *(ulong *)(lVar7 + 8);
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      if (uVar10 >> 0xe == 0) {
        param_2[2] = (char)(uVar10 >> 7);
        param_2 = param_2 + 3;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
      else {
        param_2 = param_2 + 3;
        uVar10 = uVar10 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar10 >> 7;
          puVar4[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
    }
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar8 + 8) & 1) == 0) {
        pvVar5 = (void *)(uVar8 + 9);
        uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
      }
      else {
        uVar6 = *(ulong *)(uVar8 + 0x10);
        pvVar5 = *(void **)(uVar8 + 0x18);
      }
      sVar9 = (size_t)(int)uVar6;
      if (*param_3 - (long)param_2 < (long)sVar9) {
        param_2 = (undefined1 *)FUN_00310fe4(param_3,pvVar5,uVar6,param_2);
        uVar8 = *(ulong *)(param_1 + 8);
      }
      else {
        memcpy(param_2,pvVar5,sVar9);
        param_2 = param_2 + sVar9;
        uVar8 = *(ulong *)(param_1 + 8);
      }
      goto joined_r0x00693014;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
joined_r0x00693014:
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      pvVar5 = (void *)(uVar8 + 9);
      uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar8 + 0x10);
      pvVar5 = *(void **)(uVar8 + 0x18);
    }
    sVar9 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar4 = (undefined1 *)FUN_00310fe4(param_3,pvVar5,uVar6,param_2);
      return puVar4;
    }
    memcpy(param_2,pvVar5,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


