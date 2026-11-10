/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00842da0; name: FUN_00842da0
 */


void FUN_00842da0(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  Result *pRVar3;
  ulong uVar4;
  long lVar5;
  int local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if ((param_3 == (undefined1 *)0x0) || (param_4 < 2)) {
LAB_00842de0:
    local_58[0] = 0x10407;
  }
  else {
    *(undefined1 *)(param_2 + 8) = *param_3;
    bVar2 = param_3[1];
    *(byte *)(param_2 + 9) = bVar2;
    if (0x18 < bVar2) goto LAB_00842de0;
    if (bVar2 != 0) {
      param_3 = param_3 + 2;
      if (param_4 < 0x10) {
        uVar4 = 0;
        do {
          *(undefined1 *)(param_2 + uVar4 + 10) = *param_3;
          lVar5 = param_2 + uVar4 * 2;
          *(ushort *)(lVar5 + 0x22) = *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8;
          *(ushort *)(lVar5 + 0x52) = *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8;
          local_58[0] = 0x10407;
          local_48[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
          FUN_007ee578(local_68,local_58);
          if (local_68[0] != 0) goto LAB_00842f50;
          uVar4 = uVar4 + 1;
          param_3 = param_3 + 0x15;
        } while (uVar4 < *(byte *)(param_2 + 9));
      }
      else {
        uVar4 = 0;
        lVar5 = 0x84;
        do {
          *(undefined1 *)(param_2 + uVar4 + 10) = *param_3;
          lVar1 = param_2 + uVar4 * 2;
          *(ushort *)(lVar1 + 0x22) = *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8;
          *(ushort *)(lVar1 + 0x52) = *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8;
          memcpy((void *)(param_2 + lVar5),param_3 + 5,0x10);
          local_58[0] = 0;
          local_48[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
          FUN_007ee578(local_68,local_58);
          if (local_68[0] != 0) goto LAB_00842f50;
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x10;
          param_3 = param_3 + 0x15;
        } while (uVar4 < *(byte *)(param_2 + 9));
      }
    }
    local_58[0] = 0;
  }
  pRVar3 = (Result *)local_68;
  local_68[0] = 0;
LAB_00842dfc:
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),pRVar3);
  FUN_007ee578(param_1,local_58);
  return;
LAB_00842f50:
  local_58[0] = 0x10407;
  pRVar3 = (Result *)local_48;
  local_48[0] = 0;
  goto LAB_00842dfc;
}


