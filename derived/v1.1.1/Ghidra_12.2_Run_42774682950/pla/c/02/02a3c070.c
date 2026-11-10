/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c070; name: FUN_02a3c070
 */


void FUN_02a3c070(long param_1,long param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  
  bVar2 = *(byte *)(param_2 + 0x7d);
  lVar8 = (&DAT_0428af30)[(ulong)param_3 * 6];
  if (lVar8 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar8 + 0x1e1) != '\0') {
      plVar5 = &DAT_0428af30 + (ulong)param_3 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined1 *)((long)piVar1 + uVar7);
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (bVar2 < 6) {
    uVar7 = 0;
  }
  else if (bVar2 < 0xc) {
    uVar7 = 2;
  }
  else if (bVar2 < 0x12) {
    uVar7 = 1;
  }
  else {
    uVar6 = 3;
    if (0x17 < bVar2) {
      uVar6 = (uint)(bVar2 < 0x1e) << 2;
    }
    uVar7 = (ulong)uVar6;
  }
  uVar6 = (uint)*(byte *)(lVar8 + uVar7 * 0x38 + 0x38);
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar8 + uVar7 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d) == bVar2
         ) {
        cVar3 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if (cVar3 != '\x06') goto LAB_02a3c1a8;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  cVar3 = '\x06';
LAB_02a3c1a8:
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x6e,cVar3,param_4,param_3 & 0xffff,uVar9,0,7,0,0,
               param_5);
  return;
}


