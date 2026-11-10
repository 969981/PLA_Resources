/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a139e0; name: FUN_02a139e0
 */


void FUN_02a139e0(int *param_1,uint *param_2,long param_3,long param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  *param_1 = 0;
  *param_2 = 0;
  if (param_5 < 2) {
    uVar3 = FUN_02949cec(*(undefined4 *)(param_3 + 0x110),
                         *(undefined1 *)(*(long *)(param_3 + 0x58) + 0x55),0);
    uVar7 = 0;
    if ((uVar3 & 1) != 0) {
      if (((byte)((2 < *(uint *)(param_3 + 0x110)) * '\x02') == param_5) &&
         (uVar3 = (ulong)*(byte *)(param_4 + 0x38), uVar3 != 0)) {
        lVar8 = 0;
        uVar7 = 0;
        lVar5 = uVar3 - 1;
        while( true ) {
          if (((uint)lVar8 & 0xff) < (uint)uVar3) {
            uVar6 = *(undefined8 *)(param_4 + 8 + lVar8 * 8);
          }
          else {
            uVar6 = 0;
          }
          iVar2 = FUN_029506a8(uVar6,0xe);
          uVar7 = iVar2 + uVar7;
          iVar2 = FUN_029506a8(uVar6,0xd);
          *param_1 = *param_1 + iVar2;
          if (lVar5 == lVar8) break;
          uVar3 = (ulong)*(byte *)(param_4 + 0x38);
          lVar8 = lVar8 + 1;
        }
      }
      else {
        uVar7 = 0;
      }
    }
    uVar3 = FUN_02949cec(*(undefined4 *)(param_3 + 0x110),
                         *(undefined1 *)(*(long *)(param_3 + 0x58) + 0x55),1);
    if ((uVar3 & 1) != 0) {
      bVar4 = 1;
      if (2 < *(uint *)(param_3 + 0x110)) {
        bVar4 = 2;
      }
      if ((bVar4 == param_5) && (uVar3 = (ulong)*(byte *)(param_4 + 0x70), uVar3 != 0)) {
        lVar8 = 0;
        lVar5 = uVar3 - 1;
        while( true ) {
          if (((uint)lVar8 & 0xff) < (uint)uVar3) {
            uVar6 = *(undefined8 *)(param_4 + 0x40 + lVar8 * 8);
          }
          else {
            uVar6 = 0;
          }
          iVar2 = FUN_029506a8(uVar6,0xe);
          uVar7 = iVar2 + uVar7;
          iVar2 = FUN_029506a8(uVar6,0xd);
          *param_1 = *param_1 + iVar2;
          if (lVar5 == lVar8) break;
          uVar3 = (ulong)*(byte *)(param_4 + 0x70);
          lVar8 = lVar8 + 1;
        }
      }
    }
    uVar3 = FUN_02949cec(*(undefined4 *)(param_3 + 0x110),
                         *(undefined1 *)(*(long *)(param_3 + 0x58) + 0x55),2);
    if ((((uVar3 & 1) != 0) && ((byte)((*(int *)(param_3 + 0x110) != 1) * '\x02') == param_5)) &&
       (uVar3 = (ulong)*(byte *)(param_4 + 0xa8), uVar3 != 0)) {
      lVar8 = 0;
      lVar5 = uVar3 - 1;
      while( true ) {
        if (((uint)lVar8 & 0xff) < (uint)uVar3) {
          uVar6 = *(undefined8 *)(param_4 + 0x78 + lVar8 * 8);
        }
        else {
          uVar6 = 0;
        }
        iVar2 = FUN_029506a8(uVar6,0xe);
        uVar7 = iVar2 + uVar7;
        iVar2 = FUN_029506a8(uVar6,0xd);
        *param_1 = *param_1 + iVar2;
        if (lVar5 == lVar8) break;
        uVar3 = (ulong)*(byte *)(param_4 + 0xa8);
        lVar8 = lVar8 + 1;
      }
    }
    uVar3 = FUN_02949cec(*(undefined4 *)(param_3 + 0x110),
                         *(undefined1 *)(*(long *)(param_3 + 0x58) + 0x55),3);
    if ((uVar3 & 1) != 0) {
      bVar4 = 1;
      if (*(int *)(param_3 + 0x110) != 1) {
        bVar4 = 2;
      }
      if ((bVar4 == param_5) && (uVar3 = (ulong)*(byte *)(param_4 + 0xe0), uVar3 != 0)) {
        lVar8 = 0;
        lVar5 = uVar3 - 1;
        while( true ) {
          if (((uint)lVar8 & 0xff) < (uint)uVar3) {
            uVar6 = *(undefined8 *)(param_4 + 0xb0 + lVar8 * 8);
          }
          else {
            uVar6 = 0;
          }
          iVar2 = FUN_029506a8(uVar6,0xe);
          uVar7 = iVar2 + uVar7;
          iVar2 = FUN_029506a8(uVar6,0xd);
          *param_1 = *param_1 + iVar2;
          if (lVar5 == lVar8) break;
          uVar3 = (ulong)*(byte *)(param_4 + 0xe0);
          lVar8 = lVar8 + 1;
        }
      }
    }
    uVar3 = FUN_02949cec(*(undefined4 *)(param_3 + 0x110),
                         *(undefined1 *)(*(long *)(param_3 + 0x58) + 0x55),4);
    if (((param_5 == 2) && ((uVar3 & 1) != 0)) &&
       (uVar3 = (ulong)*(byte *)(param_4 + 0x118), uVar3 != 0)) {
      lVar8 = 0;
      lVar5 = uVar3 - 1;
      while( true ) {
        if (((uint)lVar8 & 0xff) < (uint)uVar3) {
          uVar6 = *(undefined8 *)(param_4 + 0xe8 + lVar8 * 8);
        }
        else {
          uVar6 = 0;
        }
        iVar2 = FUN_029506a8(uVar6,0xe);
        uVar7 = iVar2 + uVar7;
        iVar2 = FUN_029506a8(uVar6,0xd);
        *param_1 = *param_1 + iVar2;
        if (lVar5 == lVar8) break;
        uVar3 = (ulong)*(byte *)(param_4 + 0x118);
        lVar8 = lVar8 + 1;
      }
    }
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = (uint)(*param_1 * 100) / uVar7;
    }
    *param_2 = uVar1;
  }
  return;
}


