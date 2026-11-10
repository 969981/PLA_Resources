/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830238; name: FUN_00830238
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00830238(undefined8 param_1,long param_2,byte *param_3,long *param_4,int *param_5,
                 long *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_78 [8];
  undefined4 local_58 [2];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  bVar3 = param_3[1];
  if (bVar3 == 0xff) {
    iVar1 = *(int *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x44);
    lVar6 = *(long *)(param_2 + 0x38);
    *param_6 = lVar6;
    *param_7 = iVar1;
    *param_4 = lVar6 + (long)iVar1 * 0x38;
    *param_5 = iVar2;
LAB_008302f4:
    local_78[0] = 0;
    goto LAB_008303fc;
  }
  if (*(byte *)(param_2 + 2) <= bVar3) {
    local_78[0] = 0x10407;
    goto LAB_008303fc;
  }
  if (bVar3 != *(byte *)(param_2 + 8)) {
    if (*param_3 < *(byte *)(*(long *)(param_2 + 0x10) + 3)) {
      lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10) + (ulong)*param_3 * 0x18;
      lVar6 = *(long *)(lVar5 + 8);
      if (*(long *)(lVar5 + 8) != lVar5) goto LAB_00830318;
    }
    else {
      lVar5 = 0;
      lVar6 = _DAT_00000008;
      if (_DAT_00000008 != 0) {
LAB_00830318:
        lVar4 = (long)*(int *)(lVar5 + 0x14);
        lVar6 = lVar6 - lVar4;
        while( true ) {
          lVar7 = *(long *)(lVar6 + 0x10);
          if (*(byte *)(lVar7 + 0x91) == bVar3) break;
          if ((bVar3 <= *(byte *)(lVar7 + 0x91)) ||
             (lVar6 = *(long *)(lVar6 + lVar4 + 8) - lVar4, lVar6 == lVar5 - lVar4))
          goto LAB_008303f0;
        }
        if (lVar6 != 0) {
          *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar7 + 0x90);
          *(byte *)(param_2 + 0x51) = bVar3;
          FUN_007f0fc8(local_78,lVar7 + 8);
          FUN_007f105c(param_2 + 0x58,local_78);
          FUN_007e34a4(local_78);
          *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(lVar7 + 0x90);
          *(undefined1 *)(param_2 + 0x79) = *(undefined1 *)(lVar7 + 0x91);
          *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar7 + 0x30);
          *(short *)(param_2 + 0x7a) = (short)*(undefined4 *)(lVar6 + 0x18);
          if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + (ulong)*(byte *)(param_2 + 6) * 8) +
                      (ulong)*(byte *)(lVar6 + 0x1c) * 4) == 1) {
            if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + (ulong)*(byte *)(lVar6 + 0x1c) * 8) +
                        (ulong)*(byte *)(param_2 + 6) * 4) != 1) goto LAB_008303d4;
          }
          else {
LAB_008303d4:
            param_5 = param_7;
            param_4 = param_6;
          }
          *param_4 = param_2 + 0x50;
          *param_5 = 1;
          goto LAB_008302f4;
        }
      }
    }
  }
LAB_008303f0:
  local_78[0] = 0x2c0a;
LAB_008303fc:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
  FUN_007ee578(param_1,local_78);
  return;
}


