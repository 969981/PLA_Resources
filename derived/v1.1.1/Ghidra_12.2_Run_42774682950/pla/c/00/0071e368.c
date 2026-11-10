/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071e368; name: FUN_0071e368
 */


undefined1 * FUN_0071e368(undefined *param_1,undefined1 *param_2,long *param_3)

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
  byte *pbVar10;
  size_t sVar11;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071e394:
      if ((bVar2 & 1) == 0) {
        pbVar8 = pbVar8 + 1;
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar8 = *(byte **)(pbVar8 + 0x10);
      }
      FUN_0033b628(pbVar8,uVar9,1,"nn.npln.matchmaking.v1.UserDefinition.user");
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        sVar11 = (size_t)(*pbVar8 >> 1);
LAB_0071e3e4:
        if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (char)sVar11;
          pbVar10 = *(byte **)(pbVar8 + 0x10);
          if ((*pbVar8 & 1) == 0) {
            pbVar10 = pbVar8 + 1;
          }
          memcpy(param_2 + 2,pbVar10,sVar11);
          param_2 = param_2 + 2 + sVar11;
          goto joined_r0x0071e434;
        }
      }
      else {
        sVar11 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar11 < 0x80) goto LAB_0071e3e4;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar8,param_2);
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) goto LAB_0071e394;
joined_r0x0071e434:
  if (param_1 != PTR_DAT_04376490) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar5 = *(long *)(param_1 + 0x20);
      }
      *param_2 = 0x12;
      uVar1 = *(uint *)(lVar5 + 0x28);
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
      param_2 = (undefined1 *)FUN_002e12d8(lVar5,param_2,param_3);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar5 = *(long *)(param_1 + 0x28);
      }
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar5 + 0x28);
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
      param_2 = (undefined1 *)FUN_0071edd0(lVar5,param_2,param_3);
    }
  }
  pbVar8 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071e55c:
      if ((bVar2 & 1) == 0) {
        pbVar8 = pbVar8 + 1;
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar8 = *(byte **)(pbVar8 + 0x10);
      }
      FUN_0033b628(pbVar8,uVar9,1,"nn.npln.matchmaking.v1.UserDefinition.team");
      pbVar8 = *(byte **)(param_1 + 0x18);
      if ((*pbVar8 & 1) == 0) {
        sVar11 = (size_t)(*pbVar8 >> 1);
LAB_0071e5ac:
        if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x22;
          param_2[1] = (char)sVar11;
          pbVar10 = *(byte **)(pbVar8 + 0x10);
          if ((*pbVar8 & 1) == 0) {
            pbVar10 = pbVar8 + 1;
          }
          memcpy(param_2 + 2,pbVar10,sVar11);
          param_2 = param_2 + 2 + sVar11;
          goto LAB_0071e5f0;
        }
      }
      else {
        sVar11 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar11 < 0x80) goto LAB_0071e5ac;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,4,pbVar8,param_2);
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x0071e64c;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) goto LAB_0071e55c;
LAB_0071e5f0:
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x0071e64c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
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


