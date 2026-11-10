/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a38fa0; name: FUN_02a38fa0
 */


undefined8 FUN_02a38fa0(long param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_24;
  
  if (9 < param_2) {
    return 0;
  }
  lVar2 = (*(code *)(&PTR_FUN_0427cde8)[*(long *)(&DAT_03a80b10 + (long)(int)param_2 * 8) * 2])
                    (&local_24,param_3);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x88);
    lVar4 = *(long *)(lVar5 + 0x14d0);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x78);
      *(undefined8 *)(lVar5 + 0x14d0) = *(undefined8 *)(lVar4 + 0x18);
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)(lVar4 + 0x18);
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x18) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar6;
      }
      *(undefined8 *)(lVar4 + 0x50) = 0;
      *(undefined8 *)(lVar4 + 0x58) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(long *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x34) = 0x4000000;
      *(undefined1 *)(lVar4 + 0x30) = 3;
      *(long *)(lVar4 + 0x20) = lVar2;
      *(char *)(lVar4 + 0x3a) = (char)param_3;
      *(short *)(lVar4 + 0x38) = (short)param_2;
      *(undefined1 *)(lVar4 + 0x3b) = 0x1f;
      *(uint *)(lVar4 + 0x3c) = (uint)uVar1 | (local_24 & 0xff) << 0x10 | 0x20000000;
      lVar2 = *(long *)(lVar5 + 0x14c8);
      if (lVar2 == 0) {
        *(long *)(lVar5 + 0x14c8) = lVar4;
        uVar3 = 1;
      }
      else if (*(uint *)(lVar2 + 0x34) >> 0x1a == 0) {
        *(long *)(lVar4 + 0x18) = lVar2;
        uVar3 = 1;
        *(long *)(lVar2 + 0x10) = lVar4;
        *(long *)(lVar5 + 0x14c8) = lVar4;
      }
      else {
        do {
          lVar5 = *(long *)(lVar2 + 0x18);
          if (lVar5 == 0) {
            *(long *)(lVar2 + 0x18) = lVar4;
            *(long *)(lVar4 + 0x10) = lVar2;
            return 1;
          }
          lVar2 = lVar5;
        } while (*(uint *)(lVar5 + 0x34) >> 0x1a != 0);
        lVar2 = *(long *)(lVar5 + 0x10);
        *(long *)(lVar2 + 0x18) = lVar4;
        uVar3 = 1;
        *(long *)(lVar4 + 0x10) = lVar2;
        *(long *)(lVar4 + 0x18) = lVar5;
        *(long *)(lVar5 + 0x10) = lVar4;
      }
    }
  }
  return uVar3;
}


