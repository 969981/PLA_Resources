/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008300f4; name: FUN_008300f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008300f4(undefined8 param_1,long param_2,long param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_60 [8];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_60[0] = 0x10408;
    goto LAB_00830204;
  }
  bVar1 = *(byte *)(param_3 + 0x90);
  if (bVar1 < *(byte *)(*(long *)(param_2 + 0x10) + 3)) {
    lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10) + (ulong)bVar1 * 0x18;
    bVar3 = *(byte *)(param_3 + 0x91);
    lVar6 = *(long *)(lVar5 + 8);
    if (*(long *)(lVar5 + 8) != lVar5) {
LAB_00830174:
      lVar4 = (long)*(int *)(lVar5 + 0x14);
      lVar6 = lVar6 - lVar4;
      do {
        bVar2 = *(byte *)(*(long *)(lVar6 + 0x10) + 0x91);
        if (bVar2 == bVar3) goto LAB_008301b0;
      } while ((bVar2 < bVar3) &&
              (lVar6 = *(long *)(lVar6 + lVar4 + 8) - lVar4, lVar6 != lVar5 - lVar4));
    }
  }
  else {
    lVar5 = 0;
    bVar3 = *(byte *)(param_3 + 0x91);
    lVar6 = _DAT_00000008;
    if (_DAT_00000008 != 0) goto LAB_00830174;
  }
  lVar6 = 0;
LAB_008301b0:
  *param_4 = bVar1;
  param_4[1] = bVar3;
  FUN_007f0fc8(local_60,param_3 + 8);
  FUN_007f105c(param_4 + 8,local_60);
  FUN_007e34a4(local_60);
  param_4[0x28] = *(byte *)(param_3 + 0x90);
  param_4[0x29] = *(byte *)(param_3 + 0x91);
  *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(short *)(param_4 + 0x2a) = (short)*(undefined4 *)(lVar6 + 0x18);
  local_60[0] = 0;
LAB_00830204:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_60);
  return;
}


