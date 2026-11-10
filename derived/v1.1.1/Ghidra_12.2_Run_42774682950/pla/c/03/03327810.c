/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03327810; name: FUN_03327810
 */


void FUN_03327810(long param_1,ulong *param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  size_t sVar10;
  char *pcVar11;
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  
  if (param_3 < 1) {
LAB_03327884:
    if (*(char **)(param_1 + 0x38) != (char *)0x0) {
      sVar10 = strlen(*(char **)(param_1 + 0x38));
      pvVar6 = (void *)*param_2;
      if (param_2[1] < sVar10 + (long)pvVar6) {
        pvVar6 = (void *)FUN_03322310(param_2,sVar10);
      }
      else {
        *param_2 = sVar10 + (long)pvVar6;
      }
      if (pvVar6 != (void *)0x0) {
        memcpy(pvVar6,*(void **)(param_1 + 0x38),sVar10);
      }
      iVar5 = FUN_032c4770(local_54,0x10," (%d)",*(undefined4 *)(param_1 + 0x40));
      sVar10 = (size_t)iVar5;
      pvVar6 = (void *)*param_2;
      if (param_2[1] < (long)pvVar6 + sVar10) {
        pvVar6 = (void *)FUN_03322310(param_2,sVar10);
      }
      else {
        *param_2 = (long)pvVar6 + sVar10;
      }
      if (pvVar6 == (void *)0x0) {
        local_44[0] = 0;
        puVar8 = local_44;
        goto LAB_03327b58;
      }
      memcpy(pvVar6,local_54,sVar10);
      local_54[0] = 0x3a;
      FUN_032afb80(param_2,local_54,1);
      local_54[0] = 0x20;
      FUN_032afb80(param_2,local_54,1);
    }
    pcVar11 = *(char **)(PTR_PTR_0435bc60 + (ulong)*(byte *)(param_1 + 0x18) * 8);
    sVar10 = strlen(pcVar11);
    pvVar6 = (void *)*param_2;
    uVar1 = sVar10 + 2 + (long)pvVar6;
    if (param_2[1] < uVar1) {
      pvVar6 = (void *)FUN_03322310(param_2);
    }
    else {
      *param_2 = uVar1;
    }
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,pcVar11,sVar10);
      *(undefined2 *)((long)pvVar6 + sVar10) = 0x203a;
      pcVar11 = (char *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
      if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
        pcVar11 = "<empty text>";
        sVar10 = 0xc;
      }
      else {
        sVar10 = strlen(pcVar11);
      }
      FUN_032afb80(param_2,pcVar11,sVar10);
      if (*(int *)(param_1 + 0x1c) != 0) {
        puVar7 = (undefined2 *)*param_2;
        if (param_2[1] < (long)puVar7 + 0xbU) {
          puVar7 = (undefined2 *)FUN_03322310(param_2,0xb);
        }
        else {
          *param_2 = (long)puVar7 + 0xbU;
        }
        if (puVar7 == (undefined2 *)0x0) goto LAB_03327b50;
        uVar2 = *(uint *)(param_1 + 0x1c);
        *puVar7 = 0x5b20;
        cVar3 = "0123456789ABCDEF"[(ulong)(uVar2 >> 0x18) & 0xf];
        *(char *)(puVar7 + 1) = "0123456789ABCDEF"[uVar2 >> 0x1c];
        *(char *)((long)puVar7 + 3) = cVar3;
        *(char *)(puVar7 + 2) = "0123456789ABCDEF"[(ulong)(uVar2 >> 0x14) & 0xf];
        cVar3 = "0123456789ABCDEF"[(ulong)(uVar2 >> 0xc) & 0xf];
        *(char *)((long)puVar7 + 5) = "0123456789ABCDEF"[(ulong)(uVar2 >> 0x10) & 0xf];
        cVar4 = "0123456789ABCDEF"[(ulong)(uVar2 >> 8) & 0xf];
        *(char *)(puVar7 + 3) = cVar3;
        *(char *)((long)puVar7 + 7) = cVar4;
        *(char *)(puVar7 + 4) = "0123456789ABCDEF"[(ulong)(uVar2 >> 4) & 0xf];
        *(char *)((long)puVar7 + 9) = "0123456789ABCDEF"[(ulong)uVar2 & 0xf];
        *(undefined1 *)(puVar7 + 5) = 0x5d;
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(lVar9 + 0x52) & 1) == 0) {
        lVar9 = *(long *)(lVar9 + 0x58);
      }
      pcVar11 = *(char **)(lVar9 + 0x58);
      if (pcVar11 != (char *)0x0) {
        local_54[0] = 0x20;
        FUN_032afb80(param_2,local_54,1);
        local_54[0] = 0x5b;
        FUN_032afb80(param_2,local_54,1);
        sVar10 = strlen(pcVar11);
        FUN_032afb80(param_2,pcVar11,sVar10);
        local_54[0] = 0x5d;
        FUN_032afb80(param_2,local_54,1);
      }
      local_54[0] = 10;
      FUN_032afb80(param_2,local_54,1);
      if (((param_4 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        FUN_033263e8(*(long *)(param_1 + 0x48),param_2);
      }
    }
  }
  else {
    pvVar6 = (void *)*param_2;
    if (0x4c < param_3) {
      param_3 = 0x4d;
    }
    sVar10 = (size_t)param_3;
    if (param_2[1] < (long)pvVar6 + sVar10) {
      pvVar6 = (void *)FUN_03322310(param_2,sVar10);
    }
    else {
      *param_2 = (long)pvVar6 + sVar10;
    }
    if (pvVar6 != (void *)0x0) {
      memset(pvVar6,0x20,sVar10);
      goto LAB_03327884;
    }
  }
LAB_03327b50:
  puVar8 = local_54;
  local_54[0] = 0;
LAB_03327b58:
  FUN_032afb80(param_2,puVar8,1);
  return;
}


