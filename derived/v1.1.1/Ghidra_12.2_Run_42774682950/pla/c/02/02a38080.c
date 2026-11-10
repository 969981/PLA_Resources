/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a38080; name: FUN_02a38080
 */


void FUN_02a38080(long param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_34;
  
  if (param_3 == 0x7a) {
    lVar5 = 0;
  }
  else {
    if (param_3 != 0x70) {
      return;
    }
    lVar5 = 1;
  }
  lVar5 = (*(code *)(&PTR_FUN_0427cdc8)[lVar5 * 2])(&local_34);
  if (lVar5 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x7d);
    uVar4 = FUN_0295084c(param_2,0xc);
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x88);
    lVar6 = *(long *)(lVar7 + 0x14d0);
    if (lVar6 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x78);
      *(undefined8 *)(lVar7 + 0x14d0) = *(undefined8 *)(lVar6 + 0x18);
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)(lVar6 + 0x18);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x18) = lVar9;
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x10) = lVar8;
      }
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      uVar3 = 0x2000000;
      if (local_34 >> 0x10 != 0) {
        uVar3 = ~(local_34 >> 0x10) * 0x1000000 + 0x9000000;
      }
      uVar3 = uVar3 | uVar4 & 0xffff;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(long *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(uint *)(lVar6 + 0x34) = uVar3;
      *(undefined1 *)(lVar6 + 0x30) = 4;
      *(long *)(lVar6 + 0x20) = lVar5;
      *(undefined1 *)(lVar6 + 0x3a) = uVar1;
      *(short *)(lVar6 + 0x38) = (short)param_3;
      *(undefined1 *)(lVar6 + 0x3b) = uVar1;
      *(uint *)(lVar6 + 0x3c) = (uint)uVar2 | (local_34 & 0xff) << 0x10 | 0x20000000;
      lVar5 = *(long *)(lVar7 + 0x14c8);
      if (lVar5 == 0) {
        *(long *)(lVar7 + 0x14c8) = lVar6;
      }
      else if (*(uint *)(lVar5 + 0x34) < uVar3) {
        *(long *)(lVar6 + 0x18) = lVar5;
        *(long *)(lVar5 + 0x10) = lVar6;
        *(long *)(lVar7 + 0x14c8) = lVar6;
      }
      else {
        do {
          lVar7 = *(long *)(lVar5 + 0x18);
          if (lVar7 == 0) {
            *(long *)(lVar5 + 0x18) = lVar6;
            *(long *)(lVar6 + 0x10) = lVar5;
            return;
          }
          lVar5 = lVar7;
        } while (uVar3 <= *(uint *)(lVar7 + 0x34));
        lVar5 = *(long *)(lVar7 + 0x10);
        *(long *)(lVar5 + 0x18) = lVar6;
        *(long *)(lVar6 + 0x10) = lVar5;
        *(long *)(lVar6 + 0x18) = lVar7;
        *(long *)(lVar7 + 0x10) = lVar6;
      }
    }
  }
  return;
}


