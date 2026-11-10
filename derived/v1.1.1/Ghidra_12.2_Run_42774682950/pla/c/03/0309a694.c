/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309a694; name: FUN_0309a694
 */


void FUN_0309a694(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  
  if ((undefined1 *)*param_1 == (undefined1 *)0x0) {
    if (param_2 != 0x7fffffff) {
      bVar2 = *(byte *)(param_4 + 0x20);
      *(byte *)(param_4 + 0x20) = bVar2 | 1;
      puVar5 = (undefined1 *)(param_1[3] + (ulong)param_2 * 0x38);
      *(undefined1 *)(param_4 + 0x2a) = *puVar5;
      if (param_3 == param_2) {
        *(uint *)(param_1 + 2) = param_2;
        *param_1 = puVar5;
      }
      else {
        *(byte *)(param_4 + 0x20) = bVar2 | 3;
      }
    }
  }
  else {
    *(undefined1 *)(param_4 + 0x2a) = *(undefined1 *)*param_1;
    if (param_2 != param_3) {
      *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 2;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 2) = 0x7fffffff;
    }
  }
  if (*(uint *)((long)param_1 + 0x14) != param_2) {
    *(uint *)((long)param_1 + 0x14) = param_2;
    if (param_2 == 0x7fffffff) {
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 0x2c) = 0;
      cVar1 = *(char *)((long)param_1 + 0x2c);
      goto joined_r0x0309a7fc;
    }
    lVar3 = param_1[3];
    uVar6 = (ulong)param_2;
    pbVar7 = (byte *)(lVar3 + uVar6 * 0x38);
    param_1[1] = 0;
    bVar2 = pbVar7[0x20];
    *(byte *)((long)param_1 + 0x2c) = bVar2;
    if ((bVar2 != 0) && (*(short *)(param_4 + 0x28) == -1)) {
      param_1[1] = pbVar7;
      plVar9 = (long *)(lVar3 + uVar6 * 0x38 + 0x28);
      lVar8 = *plVar9;
      if (lVar8 == 0) {
        lVar8 = FUN_032cf5b0(0x1c0);
        FUN_0309d968(lVar8,lVar3 + uVar6 * 0x38 + 4);
        *plVar9 = lVar8;
      }
      lVar3 = lVar3 + uVar6 * 0x38;
      *(byte **)(lVar8 + 0x118) = pbVar7;
      uVar4 = *(undefined8 *)(lVar3 + 0xc);
      *(undefined8 *)(lVar8 + 0x174) = *(undefined8 *)(lVar3 + 4);
      *(undefined8 *)(lVar8 + 0x17c) = uVar4;
      FUN_0309f294(lVar8);
      *(uint *)(lVar8 + 0x170) = (uint)*pbVar7;
      *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 4;
      *(long *)(param_4 + 0x28) = lVar8;
      cVar1 = *(char *)((long)param_1 + 0x2c);
      goto joined_r0x0309a7fc;
    }
  }
  cVar1 = *(char *)((long)param_1 + 0x2c);
joined_r0x0309a7fc:
  if ((cVar1 != '\0') && ((*(byte *)(param_4 + 0x20) >> 1 & 1) != 0)) {
    *(byte *)(param_4 + 0x20) = *(byte *)(param_4 + 0x20) | 4;
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_1[1] + 0x28);
  }
  return;
}


