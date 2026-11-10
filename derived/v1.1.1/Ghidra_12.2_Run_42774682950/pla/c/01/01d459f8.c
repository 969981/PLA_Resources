/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d459f8; name: FUN_01d459f8
 */


void FUN_01d459f8(undefined8 *param_1,long param_2,int *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  
  lVar5 = *(long *)(param_2 + 0x820);
  if (*(char *)(lVar5 + 0x170) == '\0') {
    if ((*(ushort *)((long)param_3 - (long)*param_3) < 0xb) ||
       (uVar6 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5], uVar6 == 0)) {
      lVar5 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + uVar6);
      lVar5 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar8 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)(lVar5 + 4));
    bVar3 = *(byte *)(lVar5 + 4);
    if (bVar3 != 0) {
      pbVar7 = (byte *)(lVar5 + 5);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *param_1 = puVar8;
    param_1[1] = (char *)(lVar5 + 4);
    param_1[2] = sVar4;
    param_1[3] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar5 + 0x130);
    param_1[1] = *(undefined8 *)(lVar5 + 0x138);
    plVar2 = *(long **)(lVar5 + 0x148);
    param_1[2] = *(undefined8 *)(lVar5 + 0x140);
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d45ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


