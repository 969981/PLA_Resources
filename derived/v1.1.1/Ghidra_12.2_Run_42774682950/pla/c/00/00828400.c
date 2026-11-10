/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00828400; name: FUN_00828400
 */


void FUN_00828400(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    if ((((param_3 == 0) || ((param_3 & 7) != 0)) || ((int)param_5 < 2)) ||
       ((ulong)param_4 < (ulong)((long)(int)param_5 * 0x58))) {
      local_50[0] = 0x10407;
    }
    else {
      uVar6 = (ulong)param_5;
      *(uint *)(param_2 + 5) = param_5;
      uVar5 = param_3;
      do {
        FUN_007e3400(uVar5);
        *(undefined8 *)(uVar5 + 0x28) = 0;
        *(undefined8 *)(uVar5 + 0x30) = 0;
        uVar6 = uVar6 - 1;
        *(undefined8 *)(uVar5 + 0x38) = 0;
        *(undefined8 *)(uVar5 + 0x40) = 0;
        *(undefined8 *)(uVar5 + 0x48) = 0;
        *(undefined8 *)(uVar5 + 0x50) = 0;
        uVar5 = uVar5 + 0x58;
      } while (uVar6 != 0);
      iVar2 = (int)param_2[5];
      *param_2 = param_3;
      if (0 < iVar2) {
        lVar4 = param_3 + 0x58;
        do {
          *(ulong *)(param_3 + 0x38) = param_3 + 0x58;
          *(undefined8 *)(param_3 + 0x40) = 0;
          uVar5 = 1;
          bVar1 = (long)iVar2 < 2;
          lVar3 = lVar4;
          while( true ) {
            if (bVar1) goto LAB_00828534;
            lVar4 = lVar3 + 0x58;
            if (uVar5 == 0) break;
            if (iVar2 - 1 == uVar5) {
              *(undefined8 *)(lVar3 + 0x38) = 0;
            }
            else {
              *(long *)(lVar3 + 0x38) = lVar4;
            }
            *(long *)(lVar3 + 0x40) = lVar3 + -0x58;
            uVar5 = uVar5 + 1;
            bVar1 = (long)iVar2 <= (long)uVar5;
            lVar3 = lVar4;
          }
        } while( true );
      }
LAB_00828534:
      *(undefined1 *)((long)param_2 + 0x2c) = 1;
      param_2[3] = param_3;
      param_2[4] = param_3 + (long)(iVar2 + -1) * 0x58;
      local_50[0] = 0;
    }
  }
  else {
    local_50[0] = 0x10402;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


