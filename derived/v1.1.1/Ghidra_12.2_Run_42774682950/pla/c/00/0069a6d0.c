/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069a6d0; name: FUN_0069a6d0
 */


undefined1 * FUN_0069a6d0(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *__src_00;
  ulong uVar10;
  size_t sVar11;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0069a6fc:
      if ((bVar2 & 1) == 0) {
        pbVar8 = pbVar8 + 1;
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar8 = *(byte **)(pbVar8 + 0x10);
      }
      FUN_0033b628(pbVar8,uVar9,1,"nn.npln.gamesync.v1.DocumentChange.target_id");
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        sVar11 = (size_t)(*pbVar8 >> 1);
LAB_0069a74c:
        if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (char)sVar11;
          __src_00 = *(byte **)(pbVar8 + 0x10);
          if ((*pbVar8 & 1) == 0) {
            __src_00 = pbVar8 + 1;
          }
          memcpy(param_2 + 2,__src_00,sVar11);
          param_2 = param_2 + 2 + sVar11;
          goto LAB_0069a790;
        }
      }
      else {
        sVar11 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar11 < 0x80) goto LAB_0069a74c;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar8,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      goto joined_r0x0069a794;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) goto LAB_0069a6fc;
LAB_0069a790:
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x0069a794:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      *param_2 = 0x10;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar9 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar6 = param_2;
          uVar7 = uVar9 >> 7;
          puVar6[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar6 + 1;
          uVar10 = uVar9 >> 0xe;
          uVar9 = uVar7;
        } while (uVar10 != 0);
        *puVar6 = (char)uVar7;
      }
    }
  }
  if ((param_1 != PTR_DAT_04375910) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar5 + 0x30);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar1 >> 7;
          puVar6[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_0068dc9c(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar11 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar6 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


