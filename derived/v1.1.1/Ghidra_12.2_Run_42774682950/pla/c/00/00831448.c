/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00831448; name: FUN_00831448
 */


void FUN_00831448(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    if ((((param_3 == 0) || ((param_3 & 7) != 0)) || ((int)param_5 < 2)) ||
       ((ulong)param_4 < (ulong)((long)(int)param_5 << 6))) {
      local_30[0] = 0x10407;
    }
    else {
      uVar4 = (ulong)param_5;
      puVar5 = (undefined8 *)(param_3 + 0x20);
      *(uint *)(param_2 + 5) = param_5;
      uVar6 = uVar4;
      do {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5 = puVar5 + 8;
      } while (uVar6 != 0);
      uVar2 = param_5 - 1;
      *param_2 = param_3;
      if (0 < (int)param_5) {
        lVar1 = param_3 + (ulong)uVar2 * 0x40;
        lVar7 = param_3 + 0x40;
LAB_00831528:
        *(ulong *)(param_3 + 0x20) = param_3 + 0x40;
        *(undefined8 *)(param_3 + 0x28) = 0;
        uVar6 = 1;
        bVar3 = uVar4 == 1;
        while (lVar8 = lVar7, !bVar3) {
          while( true ) {
            lVar7 = lVar8 + 0x40;
            if (uVar6 == 0) goto LAB_00831528;
            if (uVar2 != uVar6) break;
            *(undefined8 *)(lVar1 + 0x20) = 0;
            *(long *)(lVar1 + 0x28) = lVar1 + -0x40;
            uVar6 = uVar6 + 1;
            lVar8 = lVar7;
            if (uVar4 == uVar6) goto LAB_0083157c;
          }
          *(long *)(lVar8 + 0x20) = lVar7;
          *(long *)(lVar8 + 0x28) = lVar8 + -0x40;
          uVar6 = uVar6 + 1;
          bVar3 = uVar4 == uVar6;
        }
      }
LAB_0083157c:
      *(undefined1 *)((long)param_2 + 0x2c) = 1;
      param_2[3] = param_3;
      param_2[4] = param_3 + (long)(int)uVar2 * 0x40;
      local_30[0] = 0;
    }
  }
  else {
    local_30[0] = 0x10402;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


