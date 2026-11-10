/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a35be0; name: FUN_02a35be0
 */


void FUN_02a35be0(long param_1,char param_2,uint param_3,undefined8 *param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint local_34;
  
  if (param_3 < 0x13) {
    for (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + 0x14c8); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x18)) {
      if (((((*(uint *)(lVar2 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar2 + 0x30) == '\x02')) &&
          ((*(uint *)(lVar2 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar2 + 0x3a) == param_2)) {
        do {
          if (*(ushort *)(lVar2 + 0x38) == param_3) {
            return;
          }
          do {
            lVar2 = *(long *)(lVar2 + 0x18);
            if (lVar2 == 0) goto LAB_02a35c88;
          } while (((*(char *)(lVar2 + 0x30) != '\x02') || (*(char *)(lVar2 + 0x3a) != param_2)) ||
                  ((*(byte *)(lVar2 + 0x3f) >> 2 & 1) != 0));
        } while( true );
      }
    }
LAB_02a35c88:
    lVar2 = (*(code *)(&PTR_LAB_0427ca70)[(ulong)param_3 * 2])(&local_34);
    if (lVar2 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x88);
      lVar3 = *(long *)(lVar4 + 0x14d0);
      if (lVar3 != 0) {
        uVar1 = *(ushort *)(param_1 + 0x78);
        *(undefined8 *)(lVar4 + 0x14d0) = *(undefined8 *)(lVar3 + 0x18);
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)(lVar3 + 0x18);
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x18) = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar6;
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
        *(undefined4 *)(lVar3 + 0x34) = 0x5000000;
        *(undefined1 *)(lVar3 + 0x30) = 2;
        *(long *)(lVar3 + 0x20) = lVar2;
        *(char *)(lVar3 + 0x3a) = param_2;
        *(short *)(lVar3 + 0x38) = (short)param_3;
        *(undefined1 *)(lVar3 + 0x3b) = 0x1f;
        *(uint *)(lVar3 + 0x3c) = (uint)uVar1 | (local_34 & 0xff) << 0x10 | 0x20000000;
        lVar2 = *(long *)(lVar4 + 0x14c8);
        if (lVar2 == 0) {
          *(long *)(lVar4 + 0x14c8) = lVar3;
        }
        else if (*(byte *)(lVar2 + 0x37) < 5) {
          *(long *)(lVar3 + 0x18) = lVar2;
          *(long *)(lVar2 + 0x10) = lVar3;
          *(long *)(lVar4 + 0x14c8) = lVar3;
        }
        else {
          do {
            lVar4 = *(long *)(lVar2 + 0x18);
            if (lVar4 == 0) {
              *(long *)(lVar2 + 0x18) = lVar3;
              *(long *)(lVar3 + 0x10) = lVar2;
              goto LAB_02a35d84;
            }
            lVar2 = lVar4;
          } while (4 < *(byte *)(lVar4 + 0x37));
          lVar2 = *(long *)(lVar4 + 0x10);
          *(long *)(lVar2 + 0x18) = lVar3;
          *(long *)(lVar3 + 0x10) = lVar2;
          *(long *)(lVar3 + 0x18) = lVar4;
          *(long *)(lVar4 + 0x10) = lVar3;
        }
LAB_02a35d84:
        uVar5 = *param_4;
        *(int *)(lVar3 + 0x54) = (int)uVar5;
        *(int *)(lVar3 + 0x58) = (int)((ulong)uVar5 >> 0x20);
      }
    }
  }
  return;
}


