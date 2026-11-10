/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86dfc; name: FUN_02e86dfc
 */


undefined8 FUN_02e86dfc(float param_1,float param_2,float param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  size_t __n;
  float local_54;
  
  local_54 = *(float *)((long)&DAT_0440a800 + (ulong)param_5 * 4);
  pbVar6 = *(byte **)(param_4 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    pfVar9 = (float *)0x0;
  }
  else {
    uVar8 = 0;
    pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
    do {
      pfVar9 = pfVar7;
      if ((uint)pbVar6[uVar8 + 1] == (param_5 & 0xff)) break;
      uVar8 = uVar8 + 1;
      pfVar9 = (float *)0x0;
      pfVar7 = pfVar7 + 1;
    } while (uVar8 < *pbVar6);
  }
  pfVar7 = &local_54;
  if (pfVar9 != (float *)0x0) {
    pfVar7 = pfVar9;
  }
  if (*pfVar7 != param_1) {
    if (pbVar6 == (byte *)0x0) {
      __n = 0;
    }
    else {
      __n = (size_t)*pbVar6;
      uVar8 = 0;
      pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
      do {
        if ((uint)pbVar6[uVar8 + 1] == (param_5 & 0xff)) goto LAB_02e86eac;
        uVar8 = uVar8 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar8 < __n);
    }
    iVar10 = (int)__n;
    uVar2 = iVar10 + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar3 = (undefined1 *)(*DAT_0442d138)(1,uVar2 + (int)lVar1 * 4);
    if (puVar3 == (undefined1 *)0x0) {
      return 2;
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      memcpy(puVar3 + 1,(void *)(*(long *)(param_4 + 0x20) + 1),__n);
      memcpy(puVar3 + uVar2,(void *)(*(long *)(param_4 + 0x20) + (ulong)(iVar10 + 4U & 0x1fc)),
             (ulong)(uint)(iVar10 << 2));
      (*DAT_0442d150)(1,*(undefined8 *)(param_4 + 0x20));
    }
    pfVar7 = (float *)(puVar3 + __n * 4 + (ulong)uVar2);
    puVar3[lVar1] = (char)param_5;
    *puVar3 = (char)lVar1;
    *(undefined1 **)(param_4 + 0x20) = puVar3;
LAB_02e86eac:
    *pfVar7 = param_1;
  }
  if (param_2 == 0.0 && param_3 == 0.0) {
    pbVar6 = *(byte **)(param_4 + 0x28);
    if (pbVar6 != (byte *)0x0) {
      uVar8 = 0;
      do {
        if ((uint)pbVar6[uVar8 + 1] == (param_5 & 0xff)) goto LAB_02e86ec8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *pbVar6);
    }
    return 1;
  }
LAB_02e86ec8:
  pbVar6 = *(byte **)(param_4 + 0x28);
  if (pbVar6 != (byte *)0x0) {
    uVar8 = 0;
    pbVar4 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if ((uint)pbVar6[uVar8 + 1] == (param_5 & 0xff)) goto LAB_02e87048;
      uVar8 = uVar8 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar8 < *pbVar6);
  }
  pbVar4 = (byte *)FUN_02e87a70();
  if (pbVar4 == (byte *)0x0) {
    uVar5 = 2;
  }
  else {
LAB_02e87048:
    uVar5 = 1;
    *(ulong *)pbVar4 = CONCAT44(param_3,param_2);
  }
  return uVar5;
}


