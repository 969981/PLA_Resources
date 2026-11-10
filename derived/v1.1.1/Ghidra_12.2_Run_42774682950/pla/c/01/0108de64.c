/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108de64; name: FUN_0108de64
 */


void FUN_0108de64(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  int *piVar4;
  ulong uVar5;
  byte *pbVar6;
  char *__s;
  undefined1 *puVar7;
  long lVar8;
  
  puVar7 = &DAT_cbf29ce484222645;
  if (*param_2 != '\0') {
    piVar4 = *(int **)(param_2 + 0x30);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar5 == 0)) {
      lVar8 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar4 + uVar5);
      lVar8 = (long)puVar1 + (ulong)*puVar1;
    }
    __s = (char *)(lVar8 + 4);
    sVar3 = strlen(__s);
    bVar2 = *(byte *)(lVar8 + 4);
    if (bVar2 != 0) {
      pbVar6 = (byte *)(lVar8 + 5);
      do {
        puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    goto LAB_0108def0;
  }
  piVar4 = *(int **)(param_2 + 0x28);
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x20);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar5 == 0))
    goto LAB_0108df98;
LAB_0108df30:
    lVar8 = (long)((long)piVar4 + uVar5) + (ulong)*(uint *)((long)piVar4 + uVar5);
  }
  else {
    if ((0x18 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar5 != 0))
    goto LAB_0108df30;
LAB_0108df98:
    lVar8 = 0;
  }
  __s = (char *)(lVar8 + 4);
  sVar3 = strlen(__s);
  bVar2 = *(byte *)(lVar8 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar8 + 5);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
LAB_0108def0:
  *param_1 = puVar7;
  param_1[1] = __s;
  param_1[2] = sVar3;
  param_1[3] = 0;
  return;
}


