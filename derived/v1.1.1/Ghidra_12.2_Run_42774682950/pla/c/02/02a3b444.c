/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b444; name: FUN_02a3b444
 */


undefined4 FUN_02a3b444(long param_1,byte param_2,byte param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = 0;
  lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x48);
  if ((param_2 < 2) && ((int)param_4 < 0x13)) {
    lVar6 = *(long *)(lVar7 + (ulong)param_2 * 0x260 + (ulong)param_4 * 0x20 + 8);
  }
  if (((((1 < param_3) || (0x12 < (int)param_4)) || (lVar6 == 0)) ||
      (lVar7 = *(long *)(lVar7 + (ulong)param_3 * 0x260 + (ulong)param_4 * 0x20 + 8), lVar7 == 0))
     || ((*(int *)(lVar6 + 0x1c) == 0 && (*(int *)(lVar7 + 0x1c) == 0)))) {
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar7 + 8);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  uVar8 = *(undefined8 *)(lVar7 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x10);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
  *(undefined8 *)(lVar7 + 0x10) = uVar2;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  *(undefined8 *)(lVar6 + 8) = uVar1;
  *(undefined8 *)(lVar6 + 0x10) = uVar3;
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x88) + 0x14c8);
  do {
    while( true ) {
      if (lVar5 == 0) {
        FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x4a,param_2,param_3);
        return 1;
      }
      if ((*(char *)(lVar5 + 0x30) == '\x02') && (*(ushort *)(lVar5 + 0x38) == param_4)) break;
LAB_02a3b524:
      lVar5 = *(long *)(lVar5 + 0x18);
    }
    if (*(byte *)(lVar5 + 0x3a) == param_2) {
      *(byte *)(lVar5 + 0x3a) = param_3;
      goto LAB_02a3b524;
    }
    if (*(byte *)(lVar5 + 0x3a) != param_3) goto LAB_02a3b524;
    *(byte *)(lVar5 + 0x3a) = param_2;
    lVar5 = *(long *)(lVar5 + 0x18);
  } while( true );
}


