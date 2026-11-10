/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a143c4; name: FUN_02a143c4
 */


undefined4 FUN_02a143c4(long param_1,byte param_2,byte param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  if ((param_2 < 2) && ((int)param_4 < 0x13)) {
    lVar5 = *(long *)(lVar6 + (ulong)param_2 * 0x260 + (ulong)param_4 * 0x20 + 8);
  }
  if (((((1 < param_3) || (0x12 < (int)param_4)) || (lVar5 == 0)) ||
      (lVar6 = *(long *)(lVar6 + (ulong)param_3 * 0x260 + (ulong)param_4 * 0x20 + 8), lVar6 == 0))
     || ((*(int *)(lVar5 + 0x1c) == 0 && (*(int *)(lVar6 + 0x1c) == 0)))) {
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar6 + 8);
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  *(undefined8 *)(lVar6 + 0x18) = uVar4;
  *(undefined8 *)(lVar5 + 8) = uVar1;
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x88) + 0x14c8);
  do {
    while( true ) {
      if (lVar5 == 0) {
        return 1;
      }
      if ((*(char *)(lVar5 + 0x30) == '\x02') && (*(ushort *)(lVar5 + 0x38) == param_4)) break;
LAB_02a14494:
      lVar5 = *(long *)(lVar5 + 0x18);
    }
    if (*(byte *)(lVar5 + 0x3a) == param_2) {
      *(byte *)(lVar5 + 0x3a) = param_3;
      goto LAB_02a14494;
    }
    if (*(byte *)(lVar5 + 0x3a) != param_3) goto LAB_02a14494;
    *(byte *)(lVar5 + 0x3a) = param_2;
    lVar5 = *(long *)(lVar5 + 0x18);
  } while( true );
}


