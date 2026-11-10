/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3a3f0; name: FUN_02a3a3f0
 */


bool FUN_02a3a3f0(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_34;
  
  iVar1 = *(int *)(param_2 + 0x290);
  if ((iVar1 < 4) && (iVar1 - 1U < 3)) {
    lVar6 = (*(code *)(&PTR_LAB_0427d088)[(ulong)(iVar1 - 1U) * 2])(&local_34);
    bVar4 = false;
    if (lVar6 != 0) {
      uVar5 = FUN_0295084c(param_2,0xc);
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x88);
      lVar7 = *(long *)(lVar8 + 0x14d0);
      if (lVar7 != 0) {
        uVar2 = *(undefined1 *)(param_2 + 0x7d);
        uVar3 = *(ushort *)(param_1 + 0x78);
        *(undefined8 *)(lVar8 + 0x14d0) = *(undefined8 *)(lVar7 + 0x18);
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x18);
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x18) = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar9;
        }
        uVar5 = uVar5 | 0x8000000;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(long *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined1 *)(lVar7 + 0x3a) = uVar2;
        *(uint *)(lVar7 + 0x34) = uVar5;
        *(undefined1 *)(lVar7 + 0x30) = 6;
        *(long *)(lVar7 + 0x20) = lVar6;
        *(short *)(lVar7 + 0x38) = (short)iVar1;
        *(undefined1 *)(lVar7 + 0x3b) = 0x1f;
        *(uint *)(lVar7 + 0x3c) = (uint)uVar3 | (local_34 & 0xff) << 0x10 | 0x20000000;
        lVar6 = *(long *)(lVar8 + 0x14c8);
        if (lVar6 == 0) {
          *(long *)(lVar8 + 0x14c8) = lVar7;
        }
        else if (*(uint *)(lVar6 + 0x34) < uVar5) {
          *(long *)(lVar7 + 0x18) = lVar6;
          *(long *)(lVar6 + 0x10) = lVar7;
          *(long *)(lVar8 + 0x14c8) = lVar7;
        }
        else {
          do {
            lVar8 = *(long *)(lVar6 + 0x18);
            if (lVar8 == 0) {
              *(long *)(lVar6 + 0x18) = lVar7;
              *(long *)(lVar7 + 0x10) = lVar6;
              goto LAB_02a3a54c;
            }
            lVar6 = lVar8;
          } while (uVar5 <= *(uint *)(lVar8 + 0x34));
          lVar6 = *(long *)(lVar8 + 0x10);
          *(long *)(lVar6 + 0x18) = lVar7;
          *(long *)(lVar7 + 0x10) = lVar6;
          *(long *)(lVar7 + 0x18) = lVar8;
          *(long *)(lVar8 + 0x10) = lVar7;
        }
      }
LAB_02a3a54c:
      bVar4 = lVar7 != 0;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


