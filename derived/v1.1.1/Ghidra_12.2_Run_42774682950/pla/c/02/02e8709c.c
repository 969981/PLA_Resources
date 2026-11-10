/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8709c; name: FUN_02e8709c
 */


undefined8 FUN_02e8709c(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  size_t __n;
  undefined4 local_54;
  
  local_54 = *(undefined4 *)((long)&DAT_0440a800 + (ulong)param_2 * 4);
  pbVar6 = *(byte **)(param_1 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    pbVar8 = (byte *)0x0;
  }
  else {
    uVar7 = 0;
    pbVar3 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      pbVar8 = pbVar3;
      if ((uint)pbVar6[uVar7 + 1] == (param_2 & 0xff)) break;
      uVar7 = uVar7 + 1;
      pbVar8 = (byte *)0x0;
      pbVar3 = pbVar3 + 4;
    } while (uVar7 < *pbVar6);
  }
  pbVar3 = (byte *)&local_54;
  if (pbVar8 != (byte *)0x0) {
    pbVar3 = pbVar8;
  }
  if (*(int *)pbVar3 != param_3) {
    if (pbVar6 == (byte *)0x0) {
      __n = 0;
    }
    else {
      __n = (size_t)*pbVar6;
      uVar7 = 0;
      pbVar3 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
      do {
        if ((uint)pbVar6[uVar7 + 1] == (param_2 & 0xff)) goto LAB_02e87148;
        uVar7 = uVar7 + 1;
        pbVar3 = pbVar3 + 4;
      } while (uVar7 < __n);
    }
    iVar9 = (int)__n;
    uVar2 = iVar9 + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar5 = (undefined1 *)(*DAT_0442d138)(1,uVar2 + (int)lVar1 * 4);
    if (puVar5 == (undefined1 *)0x0) {
      return 2;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      memcpy(puVar5 + 1,(void *)(*(long *)(param_1 + 0x20) + 1),__n);
      memcpy(puVar5 + uVar2,(void *)(*(long *)(param_1 + 0x20) + (ulong)(iVar9 + 4U & 0x1fc)),
             (ulong)(uint)(iVar9 << 2));
      (*DAT_0442d150)(1,*(undefined8 *)(param_1 + 0x20));
    }
    pbVar3 = puVar5 + __n * 4 + (ulong)uVar2;
    puVar5[lVar1] = (char)param_2;
    *puVar5 = (char)lVar1;
    *(undefined1 **)(param_1 + 0x20) = puVar5;
LAB_02e87148:
    *(int *)pbVar3 = param_3;
  }
  if (param_5 == 0 && param_4 == 0) {
    pbVar6 = *(byte **)(param_1 + 0x28);
    if (pbVar6 != (byte *)0x0) {
      uVar7 = 0;
      do {
        if ((uint)pbVar6[uVar7 + 1] == (param_2 & 0xff)) goto LAB_02e87278;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *pbVar6);
    }
    return 1;
  }
LAB_02e87278:
  pbVar6 = *(byte **)(param_1 + 0x28);
  if (pbVar6 != (byte *)0x0) {
    uVar7 = 0;
    pbVar3 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if ((uint)pbVar6[uVar7 + 1] == (param_2 & 0xff)) goto LAB_02e87048;
      uVar7 = uVar7 + 1;
      pbVar3 = pbVar3 + 8;
    } while (uVar7 < *pbVar6);
  }
  pbVar3 = (byte *)FUN_02e87a70();
  if (pbVar3 == (byte *)0x0) {
    uVar4 = 2;
  }
  else {
LAB_02e87048:
    uVar4 = 1;
    *(ulong *)pbVar3 = CONCAT44(param_5,param_4);
  }
  return uVar4;
}


