/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029654d0; name: FUN_029654d0
 */


void FUN_029654d0(long param_1,uint param_2,char param_3,uint param_4,long param_5,uint param_6)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint local_44;
  
  if (4 < param_2) {
    return;
  }
  for (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + 0x14c8); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0x18)) {
    if (((((*(uint *)(lVar2 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar2 + 0x30) == '\x01')) &&
        ((*(uint *)(lVar2 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar2 + 0x3a) == param_3)) {
      do {
        if (*(ushort *)(lVar2 + 0x38) == param_2) {
          return;
        }
        do {
          lVar2 = *(long *)(lVar2 + 0x18);
          if (lVar2 == 0) goto LAB_02965584;
        } while (((*(char *)(lVar2 + 0x30) != '\x01') || (*(char *)(lVar2 + 0x3a) != param_3)) ||
                ((*(byte *)(lVar2 + 0x3f) >> 2 & 1) != 0));
      } while( true );
    }
  }
LAB_02965584:
  lVar2 = (*(code *)(&PTR_LAB_04276da0)[(ulong)param_2 * 2])(&local_44);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar3 = *(long *)(lVar4 + 0x14d0);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x78);
  *(undefined8 *)(lVar4 + 0x14d0) = *(undefined8 *)(lVar3 + 0x18);
  lVar6 = *(long *)(lVar3 + 0x10);
  lVar8 = *(long *)(lVar3 + 0x18);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = lVar8;
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = lVar6;
  }
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x34) = 0x6000000;
  *(undefined1 *)(lVar3 + 0x30) = 1;
  *(long *)(lVar3 + 0x20) = lVar2;
  *(char *)(lVar3 + 0x3a) = param_3;
  *(short *)(lVar3 + 0x38) = (short)param_2;
  *(undefined1 *)(lVar3 + 0x3b) = 0x1f;
  *(uint *)(lVar3 + 0x3c) = (uint)uVar1 | (local_44 & 0xff) << 0x10 | 0x20000000;
  lVar2 = *(long *)(lVar4 + 0x14c8);
  if (lVar2 != 0) {
    if (2 < *(uint *)(lVar2 + 0x34) >> 0x19) {
      do {
        lVar4 = *(long *)(lVar2 + 0x18);
        if (lVar4 == 0) {
          *(long *)(lVar2 + 0x18) = lVar3;
          *(long *)(lVar3 + 0x10) = lVar2;
          goto joined_r0x02965694;
        }
        lVar2 = lVar4;
      } while (2 < *(uint *)(lVar4 + 0x34) >> 0x19);
      lVar2 = *(long *)(lVar4 + 0x10);
      *(long *)(lVar2 + 0x18) = lVar3;
      *(long *)(lVar3 + 0x10) = lVar2;
      *(long *)(lVar3 + 0x18) = lVar4;
      *(long *)(lVar4 + 0x10) = lVar3;
      goto joined_r0x02965694;
    }
    *(long *)(lVar3 + 0x18) = lVar2;
    *(long *)(lVar2 + 0x10) = lVar3;
  }
  *(long *)(lVar4 + 0x14c8) = lVar3;
joined_r0x02965694:
  if ((param_6 & 0xff) != 0) {
    if ((param_6 & 0xff) == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      puVar5 = (undefined4 *)(param_5 + 4);
      puVar7 = (undefined4 *)(lVar3 + 0x44);
      do {
        puVar7[-1] = puVar5[-1];
        lVar2 = lVar2 + 2;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      } while (((ulong)param_6 & 0xff) - ((ulong)param_6 & 1) != lVar2);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)(lVar3 + lVar2 * 4 + 0x40) = *(undefined4 *)(param_5 + lVar2 * 4);
    }
  }
  *(uint *)(lVar3 + 0x58) = param_4 & 0xff;
  return;
}


