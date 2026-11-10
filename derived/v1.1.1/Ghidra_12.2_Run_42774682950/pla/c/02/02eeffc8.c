/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeffc8; name: FUN_02eeffc8
 */


void FUN_02eeffc8(long param_1,undefined8 *param_2,uint param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *__s;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar5 = (uint)*(ushort *)(param_1 + 0x38);
  if (uVar5 == param_3) {
joined_r0x02ef0124:
    if (uVar5 == 0) goto LAB_02ef0090;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      (*DAT_0442d150)(5);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (param_3 != 0) {
      __s = (void *)(*DAT_0442d138)(5,(ulong)param_3 * 0x28);
      if (__s == (void *)0x0) goto LAB_02ef0090;
      memset(__s,0,(ulong)param_3 * 0x28);
      *(void **)(param_1 + 0x20) = __s;
      *(short *)(param_1 + 0x38) = (short)param_3;
      uVar5 = param_3 & 0xffff;
      goto joined_r0x02ef0124;
    }
    if (*(short *)(param_1 + 0x38) == 0) goto LAB_02ef0090;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  *puVar6 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar9 = param_2[3];
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar9;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  if (1 < *(ushort *)(param_1 + 0x38)) {
    lVar7 = 0;
    uVar8 = 1;
    do {
      lVar1 = *(long *)(param_1 + 0x20) + lVar7;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((long)param_2 + lVar7 + 0x28);
      uVar9 = *(undefined8 *)((long)param_2 + lVar7 + 0x40);
      uVar2 = *(undefined8 *)((long)param_2 + lVar7 + 0x30);
      uVar3 = *(undefined8 *)((long)param_2 + lVar7 + 0x38);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)((long)param_2 + lVar7 + 0x48);
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
      *(undefined8 *)(lVar1 + 0x40) = uVar9;
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      lVar4 = lVar7 + 0x4c;
      lVar1 = *(long *)(param_1 + 0x20) + lVar7;
      lVar7 = lVar7 + 0x28;
      *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)((long)param_2 + lVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(param_1 + 0x38));
  }
LAB_02ef0090:
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8 | param_4 & 7;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
  return;
}


