/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f3894; name: FUN_029f3894
 */


void FUN_029f3894(long param_1,long param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte local_70 [8];
  byte local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),param_3);
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      if ((((uVar8 & 0xff) < (uint)*(byte *)(lVar7 + (ulong)param_3 * 0x38 + 0x38)) &&
          (lVar3 = *(long *)(lVar7 + (ulong)param_3 * 0x38 + (ulong)(uVar8 & 0xff) * 8 + 8),
          lVar3 != 0)) && (*(short *)(lVar3 + 0x74) != 0)) {
        local_67 = (undefined1)uVar8;
        local_68 = param_3;
        local_66 = local_67;
        FUN_029eb6b4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1420),local_70,&local_68);
        if (local_70[0] < 0x1e) {
          bVar1 = *(byte *)(param_2 + 8);
          uVar4 = (ulong)bVar1;
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            pbVar5 = (byte *)(param_2 + 9);
            uVar6 = uVar4;
            do {
              if (*pbVar5 == local_70[0]) goto LAB_029f3914;
              uVar6 = uVar6 - 1;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
          }
          *(byte *)(param_2 + uVar4 + 9) = local_70[0];
          *(byte *)(param_2 + 8) = bVar1 + 1;
        }
      }
LAB_029f3914:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  return;
}


